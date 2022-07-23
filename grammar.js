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

  word: $ => $.identifier,

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
      $.path,
      '=',
      layout($, $.item),
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
      'fn',
      field('name', $.identifier),
      '::',
      $._ty,
    ),
    
    _func_body: $ => seq(
      'fn',
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
      field('class', $.path),
      optional(seq(
        '=',
        layout($, $.func),
      )),
    ),
    
    _ty: $ => choice(
      $.ty_infix,
      $.ty_app,
      $._ty_atom,
    ),
    
    ty_app: $ => seq($._ty_atom, repeat1($._ty_atom)),
    
    ty_infix: $ => sepBy2(
      $.operator,
      choice($.ty_app, $._ty_atom),
    ),
    
    _ty_atom: $ => choice(
      seq('(', $._ty, ')'),
      $.path,
    ),
    
    _pat_atom: $ => choice(
      $.identifier,
    ),
    
    _expression: $ => choice(
      $.expr_do,
      $.expr_lambda,
      $.expr_if,
      $.expr_infix,
      $.expr_app,
      $._expr_atom,
    ),
    
    _expression2: $ => choice(
      $.expr_infix,
      $.expr_app,
      $._expr_atom,
    ),
    
    expr_app: $ => seq($._expr_atom, repeat1($._expr_atom)),
    
    expr_infix: $ => sepBy2(
      choice(
        seq('`', $.path, '`'),
        $.operator,
      ),
      choice($.expr_app, $._expr_atom),
    ),
    
    _expr_atom: $ => choice(
      $.path,
      $._literal,
      $.expr_parens,
      $.recur,
    ),
    
    expr_parens: $ => seq('(', $._expression, ')'),
    
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
    
    int_literal: $ => choice(
      /[0-9][0-9_]*/,
      /0x[0-9a-fA-F_]+/,
      /0b[01_]+/,
    ),
    
    string_literal: $ => seq(
      '"',
      repeat(/[^"]/),
      token.immediate('"'),
    ),
    
    operator: $ => /[+=*&^%$#@!~/?><.,\\|-]+/,
    symbol: $ => seq('(', $.operator, token.immediate(')')),
    
    path: $ => sepBy1('/', $.identifier),
    identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*'*/,
    comment: $ => token(seq(';', /.*/)),
    
    recur: $ => 'recur',
  }
});

function sepBy2(sep, rule) {
  return seq(rule, repeat1(seq(sep, rule)));
}

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}

function layout($, rule) {
  return seq($._layout_start, sepBy($._layout_semicolon, rule), $._layout_end);
}
