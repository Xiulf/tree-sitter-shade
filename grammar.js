const OPERATOR_REGEX = /[+*&^%$#@!?<>:,./|~-]+|[=+*&^%$#@!?<>:,./|~-]{2,}/;
const TYPE_NAME_REGEX = /\p{Lu}[_\p{XID_Continue}]*'*/;
const CONSTANT_REGEX = /[\p{Lu}]{2}[_\p{Lu}0-9]*/;
const IDENTIFIER_REGEX = /[_\p{Ll}][_\p{XID_Continue}]*'*/;

module.exports = grammar({
    name: "fi",

    word: $ => $.identifier,

    extras: $ => [
        $.comment,
        /[\s\f\uFEFF\u2060\u200B]/,
    ],

    externals: $ => [
        $._newline,
        $._indent,
        $._dedent,
        $._string_start,
        $._string_content,
        $._string_end,
        $.comment,
        ']',
        ')',
        '}',
    ],

    conflicts: $ => [
        [$.ctor],
        [$.trait_item],
        [$.impl_item],
        [$.constraint],
        [$.expr_match],
        [$.pat_unit, $.expr_unit],
        [$.pat_identifier, $.path],
        [$.type_path, $.path],
        // [$._pat_atom, $._expr_atom],
        [$.type_infix, $.type_fn],
    ],

    rules: {
        source_file: $ => repeat($._item),
        
        _item: $ => seq(
            repeat($.attribute),
            choice(
                $.module_item,
                $.import_item,
                $.fixity_item,
                $.value_item,
                $.type_item,
                $.trait_item,
                $.impl_item,
            ),
        ),

        _assoc_item: $ => seq(
            repeat($.attribute),
            $.value_item,
        ),

        module_item: $ => prec.right(seq(
            'module',
            $.module_name,
            optional(seq(
                '(',
                sep($.export, ','),
                ')',
            )),
            '=',
            choice(
                block($, $._item),
                repeat(seq($._item, $._newline)),
            ),
        )),

        export: $ => choice(
            $.identifier,
            $.constant,
            $.type_name,
            $.symbol,
            seq('module', $.type_name),
        ),

        import_item: $ => seq(
            'import',
            $.module_name,
            optional(seq(
                '(',
                sep($.imported_item, ','),
                ')',
            )),
            optional(seq(
                'hiding',
                '(',
                sep(choice($.identifier, $.constant, $.type_name, $.symbol), ','),
                ')',
            )),
            optional(seq(
                'as',
                $.type_name,
            )),
        ),

        imported_item: $ => seq(
            choice($.identifier, $.constant, $.type_name, $.symbol),
            optional(seq(
                'as',
                choice($.identifier, $.constant, $.type_name, $.symbol),
            )),
        ),

        fixity_item: $ => choice(
            seq(
                choice('prefix', 'postfix'),
                $.symbol,
                '=',
                $.path,
            ),
            seq(
                choice('infixl', 'infixr', 'infix'),
                optional('type'),
                $.lit_int,
                $.symbol,
                '=',
                $.path,
            ),
        ),

        value_item: $ => choice(
            seq(
                optional('foreign'),
                $.identifier,
                $._type_annotation,
                optional($.where_clause),
            ),
            seq(
                choice($.identifier, $.constant),
                repeat($._pat_atom),
                optional($._type_annotation),
                optional($.where_clause),
                '=',
                $._expression,
            ),
        ),

        type_item: $ => choice(
            seq(
                'foreign',
                'type',
                $.type_name,
                $._type_annotation,
            ),
            seq(
                'type',
                $.type_name,
                repeat($.identifier),
                '=',
                $._type
            ),
            seq(
                'type',
                $.type_name,
                repeat($.identifier),
                '=',
                choice(
                    block($, $.ctor),
                    repeat1($.ctor),
                ),
            ),
        ),

        ctor: $ => seq(
            '|',
            choice($.type_name, $.constant),
            repeat($._type_atom),
        ),

        trait_item: $ => seq(
            'trait',
            $.type_name,
            repeat($.identifier),
            optional($.where_clause),
            optional(seq(
                '=',
                block($, $._assoc_item),
            )),
        ),

        impl_item: $ => seq(
            'impl',
            field('trait', $.type_path),
            repeat1($._type_atom),
            optional($.where_clause),
            optional(seq(
                '=',
                block($, $._assoc_item),
            )),
        ),

        attribute: $ => seq(
            '@',
            $.identifier,
            optional(choice(
                seq('=', $._literal),
                $._attr_args,
            )),
        ),

        _attr_args: $ => seq(
            '(',
            sep1($._attr_arg, ','),
            ')',
        ),

        _attr_arg: $ => choice(
            $._literal,
            $.identifier,
            seq($.identifier, '=', $._literal),
            seq($.identifier, $._attr_args),
        ),

        where_clause: $ => seq(
            'where',
            choice(
                $.constraint,
            ),
        ),

        constraint: $ => seq(
            field('trait', $.type_path),
            repeat($._type_atom),
        ),

        _type_annotation: $ => seq(
            '::',
            $._type,
        ),

        _type: $ => choice(
            $._type_infix,
            $.type_fn,
        ),

        _type_app: $ => prec.left(choice(
            $._type_atom,
            $.type_app,
        )),

        _type_infix: $ => prec.left(choice(
            $._type_app,
            $.type_infix,
        )),

        type_app: $ => prec.left(seq(
            field('first', $._type_atom),
            repeat1($._type_atom),
        )),

        type_infix: $ => prec.left(seq(
            $._type_app,
            repeat1(seq(choice(',', $.operator), $._type_app)),
        )),

        type_fn: $ => seq(
            sep1($._type_app, ','),
            '->',
            field('return_type', $._type),
        ),

        _type_atom: $ => choice(
            $._type_parens,
            $.type_unit,
            $.type_path,
            $.type_var,
            $.type_ref,
        ),

        _type_parens: $ => seq(
            '(',
            $._type,
            ')',
        ),

        type_unit: $ => token(seq('(', ')')),
        type_var: $ => $.identifier,

        type_ref: $ => seq(
            'ref',
            $._type_app,
        ),

        _pattern: $ => choice(
            $._pat_app,
            $.pat_infix,
            $._pat_typed,
        ),

        _pat_typed: $ => prec(1, seq(
            $._pattern,
            $._type_annotation,
        )),

        _pat_app: $ => choice(
            $.pat_app,
            $._pat_atom,
        ),

        pat_app: $ => prec(1, seq(
            field('first', $._pat_path),
            repeat1($._pat_atom),
        )),

        pat_infix: $ => prec.right(1, seq(
            $._pat_app,
            repeat1(seq($.operator, $._pat_app)),
        )),

        _pat_atom: $ => prec(1, choice(
            $._literal,
            $.pat_wildcard,
            $.pat_identifier,
            $.pat_unit,
            $._pat_path,
        )),

        pat_wildcard: $ => '_',
        pat_identifier: $ => $.identifier,
        pat_unit: $ => token(seq('(', ')')),
        _pat_path: $ => alias($.type_path, $.pat_path),

        _expression: $ => choice(
            $._expr_infix,
            $.expr_pipe,
            $._expr_typed,
        ),

        _expr_typed: $ => prec.right(1, seq(
            $._expression,
            $._type_annotation,
        )),

        _expr_app: $ => choice(
            $.expr_app,
            $._expr_atom,
        ),

        _expr_infix: $ => choice(
            $.expr_infix,
            $._expr_app,
        ),

        expr_app: $ => prec(1, seq(
            field('first', $._expr_atom),
            repeat1($._expr_atom),
        )),

        expr_infix: $ => prec.right(1, seq(
            $._expr_app,
            repeat1(seq($.operator, $._expr_app)),
        )),

        expr_pipe: $ => choice(
            prec.right(1, seq(
                $._expr_infix,
                '<|',
                choice(
                    $.expr_pipe,
                    $._expr_infix,
                ),
            )),
            prec.left(1, seq(
                choice(
                    $.expr_pipe,
                    $._expr_infix,
                ),
                choice('|>', '.'),
                field('method', $.path),
                repeat($._expr_atom),
            )),
        ),

        _expr_atom: $ => choice(
            $._literal,
            $._expr_parens,
            $.expr_unit,
            $.expr_recur,
            $.expr_path,
            $.expr_block,
            $.expr_do,
            $.expr_array,
            $.expr_lambda,
            $.expr_if,
            $.expr_match,
            $.expr_return,
        ),

        _expr_parens: $ => seq(
            '(',
            $._expression,
            ')',
        ),

        expr_unit: $ => token(seq('(', ')')),
        expr_recur: $ => token('recur'),
        expr_path: $ => $.path,
        expr_block: $ => block($, $._statement),
        expr_do: $ => seq('do', block($, $._statement)),
        expr_return: $ => seq('return', $._expression),

        expr_array: $ => seq(
            '[',
            sep($._expression, ','),
            ']',
        ),

        expr_lambda: $ => seq(
            'fn',
            repeat1($._pat_atom),
            '->',
            $._expression,
        ),

        expr_if: $ => prec.right(seq(
            'if',
            $._expression,
            optional($._newline),
            'then',
            $._expression,
            optional(seq(
                optional($._newline),
                'else',
                $._expression,
            )),
        )),

        expr_match: $ => seq(
            'match',
            $._expression,
            'with',
            choice(
                block($, $.match_arm),
                repeat1(seq(
                    $._newline,
                    $.match_arm,
                )),
            ),
        ),

        match_arm: $ => seq(
            '|',
            $._pattern,
            '->',
            $._expression,
        ),

        _statement: $ => choice(
            $.stmt_let,
            $.stmt_bind,
            $.stmt_discard,
            $._expression,
        ),

        stmt_let: $ => seq(
            optional('let'),
            $._pattern,
            '=',
            $._expression,
        ),

        stmt_bind: $ => seq(
            $._pattern,
            '<-',
            $._expression,
        ),

        stmt_discard: $ => seq(
            '<-',
            $._expression,
        ),

        _literal: $ => choice(
            $.lit_int,
            $.lit_string,
        ),

        lit_int: $ => token(choice(
            seq(
                '0x',
                repeat1(/_?[0-9a-fA-F]+/),
            ),
            seq(
                '0o',
                repeat1(/_?[0-7]+/),
            ),
            seq(
                '0b',
                repeat1(/_?[01]+/),
            ),
            seq(
                /[0-9]+/,
                repeat(/_?[0-9]+/)
            ),
        )),

        lit_string: $ => seq(
            $._string_start,
            repeat($.string_content),
            $._string_end,
        ),

        string_content: $ => prec.right(0, repeat1(choice(
            $.escape_sequence,
            $._not_escape_sequence,
            $._string_content,
        ))),

        escape_sequence: $ => token.immediate(prec(1, seq(
            '\\',
            choice(
                /['"rnt\\0]/,
            ),
        ))),

        _not_escape_sequence: $ => token.immediate('\\'),

        module_name: $ => seq($.type_name, repeat(seq(token.immediate('.'), token.immediate(TYPE_NAME_REGEX)))),

        type_path: $ => choice(
            seq(
                repeat1(seq($.type_name, token.immediate('.'))),
                field('last', token.immediate(TYPE_NAME_REGEX)),
            ),
            field('last', $.type_name),
        ),

        path: $ => choice(
            seq(
                repeat1(seq($.type_name, token.immediate('.'))),
                field('last', choice(
                    alias(token.immediate(TYPE_NAME_REGEX), $.type_name),
                    alias(token.immediate(IDENTIFIER_REGEX), $.identifier),
                    alias(token.immediate(CONSTANT_REGEX), $.constant),
                    alias(token.immediate(seq('(', token.immediate(OPERATOR_REGEX), token.immediate(')'))), $.symbol),
                )),
            ),
            field('last', choice($.type_name, $.identifier, $.constant, $.symbol)),
        ),

        operator: $ => choice(
            OPERATOR_REGEX,
            seq('`', $.path, '`'),
        ),

        symbol: $ => token(seq('(', token.immediate(OPERATOR_REGEX), token.immediate(')'))),
        constant: _ => CONSTANT_REGEX,
        identifier: _ => IDENTIFIER_REGEX,
        type_name: _ => TYPE_NAME_REGEX,

        comment: _ => token(seq('//', /.*/)),
    },
});

function block($, item) {
    return seq($._indent, repeat(seq(item, $._newline)), $._dedent);
}

function sep(rule, separator) {
    return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)));
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}
