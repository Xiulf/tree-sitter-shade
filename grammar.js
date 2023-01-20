module.exports = grammar({
  name: "fi",

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
  
  conflicts: $ => [
    [$._pat_atom, $._expr_atom],
    [$._pat_ident, $.path],
    [$._pat_ident, $._typevar],
    [$.pat_unit, $.expr_unit],
    [$.pat_record, $.expr_record],
    [$._pat_record_field, $._expr_record_field],
    [$._expr_app_base, $._expr_infix2],
  ],

  rules: {
    source_file: $ => choice(
      $.empty_file,
      $.stmt_let,
      seq($.item),
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
        $.module,
        $.import,
        $.fixity,
        $.type,
        $.func,
        $.const,
        $.static,
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
      repeat($._typevar),
      '=',
      $._ty,
    ),
    
    _type_ctor: $ => seq(
      'type',
      field('name', $.identifier),
      repeat($._typevar),
      '=',
      repeat1(seq('|', $.ctor)),
    ),
    
    ctor: $ => seq(
      field('name', $.identifier),
      repeat($._ty_atom),
    ),
    
    _typevar: $ => alias($.identifier, $.typevar),
    
    func: $ => choice(
      $._func_type,
      $._func_body,
    ),
    
    _func_type: $ => seq(
      optional('foreign'),
      field('name', $.identifier),
      repeat($._typevar),
      '::',
      $._ty,
    ),
    
    _func_body: $ => seq(
      field('name', $.identifier),
      repeat($._pat_atom),
      $._func_value,
    ),
    
    _func_value: $ => choice(
      seq('=', alias($._expr_block, $.expr_do)),
      seq(
        repeat1(choice(
          seq('if', $._expression, '=', $._expression3),
        )),
        optional(seq('else', '=', $._expression)),
      ),
    ),
    
    const: $ => choice(
      $._const_type,
      $._const_body,
    ),
    
    _const_type: $ => seq(
      'const',
      field('name', $.identifier),
      repeat($._typevar),
      '::',
      $._ty,
    ),
    
    _const_body: $ => seq(
      'const',
      field('name', $.identifier),
      '=',
      $._expression,
    ),
    
    static: $ => choice(
      $._static_type,
      $._static_body,
    ),
    
    _static_type: $ => seq(
      optional('foreign'),
      'static',
      field('name', $.identifier),
      repeat($._typevar),
      '::',
      $._ty,
    ),
    
    _static_body: $ => seq(
      'static',
      field('name', $.identifier),
      '=',
      $._expression,
    ),
    
    class: $ => seq(
      'class',
      field('name', $.identifier),
      repeat($._typevar),
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
      $.ty_forall,
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
    
    ty_forall: $ => seq(
      'forall',
      repeat($._typevar),
      '.',
      $._ty,
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
      sepBy(',', alias($._ty_record_field, $.record_field)),
      optional(seq('|', $._ty)),
      '}',
    ),
    
    _ty_record_field: $ => seq($.identifier, '::', $._ty),
    
    _pattern: $ => choice(
      prec(2, $.pat_infix),
      prec(1, $._lpat),
    ),
    
    _lpat: $ => choice(
      $._pat_atom,
      $.pat_app,
    ),
    
    _nested_pat: $ => choice(
      $._pattern,
      $.pat_typed,
    ),
    
    // _pattern: $ => choice(
    //   $.pat_infix,
    //   $.pat_app,
    //   $._pat_atom,
    // ),

    pat_app: $ => seq(field('first', $._pat_ident), repeat1($._pat_atom)),
    
    // pat_app: $ => seq(field('first', $._pat_atom), repeat1($._pat_atom)),

    pat_infix: $ => seq($._lpat, $.operator, $._pattern),
    
    // pat_infix: $ => sepBy2(
    //   $.operator,
    //   choice($.pat_app, $._pat_atom),
    // ),
    
    _pat_atom: $ => choice(
      $._pat_ident,
      $._literal,
      $.pat_unit,
      $.pat_parens,
      $.pat_record,
    ),
    
    // _pat_atom: $ => prec(1, choice(
    //   $._pat_ident,
    //   $._literal,
    //   $.pat_unit,
    //   $.pat_parens,
    //   $.pat_record,
    // )),
    
    pat_typed: $ => seq($._pattern, '::', $._ty),
    
    pat_unit: _ => seq('(', ')'),
    
    pat_parens: $ => seq('(', $._nested_pat, ')'),
    
    pat_record: $ => seq(
      '{',
      sepBy(',', alias($._pat_record_field, $.record_field)),
      optional('..'),
      '}',
    ),
    
    _pat_record_field: $ => choice(
      seq($.identifier, ':', $._nested_pat),
      $.identifier,
    ),
    
    _expression: $ => prec(4, choice(
      $.expr_typed,
      $.expr_infix,
      $.expr_method,
      $.expr_app,
      $._expr_atom2,
    )),
    
    _expression2: $ => prec(3, choice(
      $.expr_infix,
      alias($._expr_app2, $.expr_app),
      $._expr_atom,
    )),
    
    _expression3: $ => prec(3, choice(
      alias($._expr_infix2, $.expr_infix),
      alias($._expr_app2, $.expr_app),
      $._expr_atom,
    )),
    
    expr_typed: $ => seq($._expression2, '::', $._ty),
    
    expr_app: $ => prec.left(seq(field('first', $._expr_app_base), repeat($._expr_atom), $._expr_atom2)),
    _expr_app2: $ => prec.left(seq(field('first', $._expr_app_base), repeat1($._expr_atom))),

    _expr_app_base: $ => choice(
      $._expr_atom,
      $.expr_method,
    ),
    
    expr_field: $ => prec(1, seq(
      choice($.path, $.expr_field, $.expr_parens),
      token.immediate('.'),
      $.identifier,
    )),
    
    expr_infix: $ => prec(2, sepBy2(
      field('operator', choice(
        seq('`', $.path, '`'),
        $.operator,
      )),
      choice($.expr_app, $._expr_atom),
    )),
    
    _expr_infix2: $ => prec(2, sepBy2(
      field('operator', choice(
        seq('`', $.path, '`'),
        $.operator,
      )),
      choice(alias($._expr_app2, $.expr_app), $._expr_atom),
    )),
    
    expr_method: $ => prec(2, seq(
      choice($.expr_app, $._expr_atom, $.expr_field, $.expr_method),
      '.',
      $.path
    )),
    
    _expr_atom: $ => choice(
      $._literal,
      $.path,
      $.recur,
      $.expr_unit,
      $.expr_parens,
      $.expr_array,
      $.expr_record,
      $.expr_field,
    ),
    
    _expr_atom2: $ => prec(1, choice(
      $._expr_atom,
      $.expr_do,
      $.expr_try,
      $.expr_lambda,
      $.expr_if,
      $.expr_case,
    )),
    
    expr_unit: _ => seq('(', ')'),
    
    expr_parens: $ => seq('(', $._expression, ')'),
    
    expr_array: $ => seq(
      '[',
      sepBy(',', $._expression),
      ']',
    ),
    
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

    expr_try: $ => seq('try', $._try_block),
    
    expr_lambda: $ => seq(
      'fn',
      repeat1($._pat_atom),
      '->',
      $._expression,
    ),
    
    expr_if: $ => prec.left(seq(
      'if',
      $._expression,
      'then',
      $._expression,
      optional(seq(
        'else',
        $._expression,
      )),
    )),
    
    expr_case: $ => seq(
      'case',
      $._expression,
      'of',
      layout($, $.case_arm),
    ),
    
    case_arm: $ => seq(
      $._pattern,
      $.case_value,
    ),
    
    case_value: $ => choice(
      seq('->', $._expression),
      seq(
        repeat1(choice(
          seq('if', $._expression, '->', $._expression3),
        )),
        optional(seq('else', '->', $._expression)),
      ),
    ),
    
    _expr_block: $ => layout($, $._stmt),
    _try_block: $ => layout($, $._try_stmt),
    
    _stmt: $ => choice(
      $.stmt_let,
      $._expression
    ),
    
    _try_stmt: $ => choice(
      $.stmt_bind,
      $.stmt_let,
      $._expression
    ),
    
    stmt_bind: $ => seq(
      $._pattern,
      '<-',
      $._expression,
    ),
    
    stmt_let: $ => seq(
      'let',
      $._nested_pat,
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
        token.immediate(':')
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
