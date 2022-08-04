module.exports = grammar({
  name: "shade",

  extras: $ => [
    /\p{Zs}/,
    /\n/,
    /\r/,
    $.comment,
  ],
  
  externals: $ => [
    $._layout_semicolon,
    $._layout_start,
    $._layout_end,
    $._slash,
    $.comment,
    /\n/,
    $.empty_file,
  ],

  word: $ => $._lowercase_identifier,

  rules: {
    source_file: $ => choice(
      $.module,
      $.empty_file,
    ),
    
    attribute: $ => seq(
      '@',
      $._attr_body,
    ),
    
    _attr_body: $ => seq(
      $.identifier,
      optional(choice(
        seq('=', $._literal),
        seq('(', $._attr_value, ')'),
      )),
    ),
    
    _attr_value: $ => sepBy1(
      ',',
      $._attr_body,
    ),

    module: $ => seq(
      repeat($.attribute),
      'module',
      field('name', $.path),
      optional($.exports),
      '=',
      optional(layout($, $.item)),
    ),
    
    exports: $ => seq(
      '(',
      sepBy(',', $.export),
      ')',
    ),
    
    export: $ => choice(
      seq('module', $.path),
      $.symbol,
      seq($.identifier, optional($.export_group)),
    ),
    
    export_group: $ => seq(
      '(',
      choice(
        '..',
        sepBy(',', $.identifier),
      ),
      ')',
    ),
    
    item: $ => seq(
      repeat($.attribute),
      choice(
        $.import,
        $.fixity,
        $.type,
        $.func,
        $.class,
        $.member,
      ),
    ),
    
    import: $ => seq(
      'import',
      $.path,
      optional(seq(
        '(',
        sepBy(',', $.import_item),
        ')',
      )),
      optional(seq(
        'as',
        $.identifier,
      )),
    ),
    
    import_item: $ => choice(
      $.identifier,
      $.symbol,
    ),
    
    fixity: $ => choice(
      $._prefix,
      $._infix,
      $._postfix,
    ),
    
    _prefix: $ => seq(
      'prefix',
      $.path,
      'as',
      $.symbol,
    ),
    
    _infix: $ => seq(
      choice('infix', 'infixl', 'infixr'),
      $.int_literal,
      $.path,
      'as',
      $.symbol,
    ),
    
    _postfix: $ => seq(
      'postfix',
      $.path,
      'as',
      $.symbol,
    ),
    
    type: $ => choice(
      $._type_kind,
      $._type_alias,
      $._type_ctor,
    ),
    
    _type_kind: $ => seq(
      optional('foreign'),
      'type',
      field('name', $.identifier),
      '::',
      $._ty,
    ),
    
    _type_alias: $ => seq(
      'type',
      field('name', $.identifier),
      repeat($.typevar),
      '=',
      $._ty,
    ),
    
    _type_ctor: $ => seq(
      'type',
      field('name', $.identifier),
      repeat($.typevar),
      '=',
      repeat1(seq('|', $.ctor)),
    ),
    
    ctor: $ => seq(
      field('name', $.identifier),
      repeat($._ty_atom),
    ),
    
    typevar: $ => choice(
      seq('(', $.identifier, '::', $._ty, ')'),
      $.identifier,
    ),
    
    func: $ => choice(
      $._func_type,
      $._func_body,
    ),
    
    _func_type: $ => seq(
      optional('foreign'),
      field('name', $.identifier),
      '::',
      $._ty,
    ),
    
    _func_body: $ => seq(
      field('name', $.identifier),
      repeat($._pat_atom),
      '=',
      alias($._expr_block, $.expr_do),
    ),
    
    class: $ => seq(
      'class',
      field('name', $.identifier),
      repeat($.typevar),
      optional(seq(
        '|',
        sepBy1(',', $.fundep),
      )),
      optional($.where_clause),
      optional(seq(
        '=',
        layout($, $.func),
      )),
    ),
    
    fundep: $ => seq(
      repeat($.identifier),
      '->',
      repeat1($.identifier),
    ),
    
    member: $ => seq(
      'member',
      repeat1($._ty_atom),
      'of',
      field('class', $._ty_path),
      optional($.where_clause),
      optional(seq(
        '=',
        layout($, $.func),
      )),
    ),
    
    where_clause: $ => prec.left(seq(
      'where',
      sepBy1(',', choice(
        $.where_member,
        $.where_kind,
      )),
    )),
    
    where_member: $ => seq(
      field('class', $._ty_path),
      repeat($._ty_atom),
    ),
    
    where_kind: $ => prec(1, seq(
      $.identifier,
      '::',
      choice($.ty_infix, $.ty_app, $._ty_atom),
    )),
    
    _ty: $ => prec(1, choice(
      $.ty_where,
      $.ty_infix,
      $.ty_app,
      $._ty_atom,
    )),
    
    _ty2: $ => choice(
      $.ty_infix,
      $.ty_app,
      $._ty_atom,
    ),
    
    ty_where: $ => seq(
      choice($.ty_infix, $.ty_app, $._ty_atom),
      $.where_clause,
    ),
    
    ty_app: $ => seq(field('first', $._ty_atom), repeat1($._ty_atom)),
    
    ty_infix: $ => prec.left(sepBy2(
      $.operator,
      choice($.ty_app, $._ty_atom),
    )),
    
    _ty_atom: $ => choice(
      $._ty_path,
      $._literal,
      $.ty_unit,
      $.ty_parens,
      $.ty_row,
      $.ty_record,
    ),
    
    ty_unit: _ => seq('(', ')'),
    
    ty_parens: $ => seq('(', $._ty, ')'),
    
    ty_row: $ => seq(
      '(',
      sepBy1(',', alias($._ty_record_field, $.record_field)),
      optional(seq('|', $._ty2)),
      ')',
    ),
    
    ty_record: $ => seq(
      '{',
      sepBy1(',', alias($._ty_record_field, $.record_field)),
      optional(seq('|', $._ty2)),
      '}',
    ),
    
    _ty_record_field: $ => seq($.identifier, '::', $._ty2),
    
    _pattern: $ => choice(
      $.pat_infix,
      $.pat_app,
      $._pat_atom,
    ),
    
    pat_app: $ => seq(field('first', $._pat_atom), repeat1($._pat_atom)),
    
    pat_infix: $ => sepBy2(
      $.operator,
      choice($.pat_app, $._pat_atom),
    ),
    
    _pat_atom: $ => choice(
      $._pat_ident,
      $._literal,
      $.pat_unit,
      $.pat_parens,
      $.pat_record,
    ),
    
    pat_unit: _ => seq('(', ')'),
    
    pat_parens: $ => seq('(', $._pattern, ')'),
    
    pat_record: $ => seq(
      '{',
      sepBy(',', alias($._pat_record_field, $.record_field)),
      optional('..'),
      '}',
    ),
    
    _pat_record_field: $ => choice(
      seq($.identifier, ':', $._pattern),
      $.identifier,
    ),
    
    _expression: $ => prec(4, choice(
      $.expr_typed,
      $.expr_infix,
      $.expr_app,
      $._expr_atom2,
    )),
    
    _expression2: $ => prec(3, choice(
      $.expr_infix,
      alias($._expr_app2, $.expr_app),
      $._expr_atom,
    )),
    
    expr_typed: $ => seq($._expression2, '::', $._ty),
    
    expr_app: $ => seq(field('first', $._expr_atom), repeat($._expr_atom), $._expr_atom2),
    _expr_app2: $ => seq(field('first', $._expr_atom), repeat1($._expr_atom)),
    
    expr_field: $ => seq(
      choice($.path, $.expr_field, $.expr_parens),
      '.',
      $.identifier,
    ),
    
    expr_infix: $ => prec(2, sepBy2(
      choice(
        seq('`', $.path, '`'),
        $.operator,
      ),
      choice($.expr_app, $._expr_atom),
    )),
    
    _expr_atom: $ => choice(
      $._literal,
      $.path,
      $.recur,
      $.expr_unit,
      $.expr_parens,
      $.expr_record,
      $.expr_field,
    ),
    
    _expr_atom2: $ => prec(1, choice(
      $._expr_atom,
      $.expr_do,
      $.expr_lambda,
      $.expr_if,
      $.expr_case,
    )),
    
    expr_unit: _ => seq('(', ')'),
    
    expr_parens: $ => seq('(', $._expression, ')'),
    
    expr_record: $ => seq(
      '{',
      sepBy(',', alias($._expr_record_field, $.record_field)),
      '}',
    ),
    
    _expr_record_field: $ => choice(
      seq($.identifier, '=', $._expression2),
      $.identifier,
    ),
    
    expr_do: $ => seq('do', $._expr_block),
    
    expr_lambda: $ => seq(
      'fn',
      repeat1($._pat_atom),
      '->',
      $._expression,
    ),
    
    expr_if: $ => seq(
      'if',
      $._expression,
      'then',
      $._expression,
      'else',
      $._expression,
    ),
    
    expr_case: $ => seq(
      'case',
      $._expression,
      'of',
      layout($, $.case_arm),
    ),
    
    case_arm: $ => seq(
      $._pattern,
      optional(seq(
        'if',
        $._expression
      )),
      '->',
      $._expression
    ),
    
    _expr_block: $ => layout($, $._stmt),
    
    _stmt: $ => choice(
      $.stmt_let,
      $._expression
    ),
    
    stmt_let: $ => seq(
      'let',
      $._pat_atom,
      '=',
      $._expression,
    ),
    
    _literal: $ => choice(
      $.int_literal,
      $.string_literal,
    ),
    
    int_literal: _ => choice(
      /-?[0-9][0-9_]*/,
      /0x[0-9a-fA-F_]+/,
      /0b[01_]+/,
    ),
    
    string_literal: _ => seq(
      '"',
      repeat(/[^"]/),
      token.immediate('"'),
    ),

    _ty_path: $ => alias($.path, $.ty_path),
    _pat_ident: $ => alias($.identifier, $.pat_identifier),

    path: $ => seq(
      repeat(seq(
        alias($._uppercase_identifier, $.module_name),
        token.immediate('.')
      )),
      field('last', $.identifier)
    ),
    
    operator: _ => /[+=*&^%$#@!~/?><.,:\\|-]+/,
    symbol: $ => seq('(', $.operator, token.immediate(')')),
    _lowercase_identifier: _ => /[_\p{Ll}][_\p{XID_Continue}]*'*/,
    _uppercase_identifier: _ => /\p{Lu}[_\p{XID_Continue}]*'*/,
    identifier: $ => choice($._lowercase_identifier, $._uppercase_identifier),
    comment: _ => token(seq(';', /.*/)),
    
    recur: _ => 'recur',
  }
});

function sepBy2(sep, rule) {
  return seq(rule, repeat1(seq(sep, rule)), optional(sep));
}

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)), optional(sep));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}

function layout($, rule) {
  return seq($._layout_start, sepBy($._layout_semicolon, rule), $._layout_end);
}
