#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 453
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 2
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 14

enum {
  sym_identifier = 1,
  anon_sym_AT = 2,
  anon_sym_EQ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_module = 7,
  anon_sym_import = 8,
  anon_sym_prefix = 9,
  anon_sym_as = 10,
  anon_sym_infix = 11,
  anon_sym_infixl = 12,
  anon_sym_infixr = 13,
  anon_sym_postfix = 14,
  anon_sym_foreign = 15,
  anon_sym_type = 16,
  anon_sym_COLON_COLON = 17,
  anon_sym_PIPE = 18,
  anon_sym_class = 19,
  anon_sym_DASH_GT = 20,
  anon_sym_member = 21,
  anon_sym_of = 22,
  anon_sym_where = 23,
  anon_sym_BQUOTE = 24,
  anon_sym_do = 25,
  anon_sym_fn = 26,
  anon_sym_if = 27,
  anon_sym_then = 28,
  anon_sym_else = 29,
  anon_sym_case = 30,
  anon_sym_let = 31,
  aux_sym_int_literal_token1 = 32,
  aux_sym_int_literal_token2 = 33,
  aux_sym_int_literal_token3 = 34,
  anon_sym_DQUOTE = 35,
  aux_sym_string_literal_token1 = 36,
  anon_sym_DQUOTE2 = 37,
  sym_operator = 38,
  anon_sym_RPAREN2 = 39,
  anon_sym_SLASH = 40,
  sym_comment = 41,
  sym_recur = 42,
  aux_sym__token1 = 43,
  sym__layout_semicolon = 44,
  sym__layout_start = 45,
  sym__layout_end = 46,
  sym__slash = 47,
  sym_empty_file = 48,
  sym_source_file = 49,
  sym_attribute = 50,
  sym__attr_body = 51,
  sym__attr_value = 52,
  sym_module = 53,
  sym_item = 54,
  sym_import = 55,
  sym_fixity = 56,
  sym__prefix = 57,
  sym__infix = 58,
  sym__postfix = 59,
  sym_type = 60,
  sym__type_kind = 61,
  sym__type_alias = 62,
  sym__type_ctor = 63,
  sym_ctor = 64,
  sym_typevar = 65,
  sym_func = 66,
  sym__func_type = 67,
  sym__func_body = 68,
  sym_class = 69,
  sym_fundep = 70,
  sym_member = 71,
  sym_where_clause = 72,
  sym_where_member = 73,
  sym_where_kind = 74,
  sym__ty = 75,
  sym_ty_where = 76,
  sym_ty_app = 77,
  sym_ty_infix = 78,
  sym__ty_atom = 79,
  sym_ty_unit = 80,
  sym_ty_parens = 81,
  sym__pattern = 82,
  sym_pat_app = 83,
  sym_pat_infix = 84,
  sym__pat_atom = 85,
  sym_pat_unit = 86,
  sym_pat_parens = 87,
  sym__expression = 88,
  sym__expression2 = 89,
  sym_expr_typed = 90,
  sym_expr_app = 91,
  sym_expr_infix = 92,
  sym__expr_atom = 93,
  sym_expr_unit = 94,
  sym_expr_parens = 95,
  sym_expr_do = 96,
  sym_expr_lambda = 97,
  sym_expr_if = 98,
  sym__expr_block = 99,
  sym__stmt = 100,
  sym_stmt_let = 101,
  sym__literal = 102,
  sym_int_literal = 103,
  sym_string_literal = 104,
  sym__ty_path = 105,
  sym__pat_ident = 106,
  sym_symbol = 107,
  sym_path = 108,
  aux_sym__attr_value_repeat1 = 109,
  aux_sym_module_repeat1 = 110,
  aux_sym_module_repeat2 = 111,
  aux_sym__type_alias_repeat1 = 112,
  aux_sym__type_ctor_repeat1 = 113,
  aux_sym_ctor_repeat1 = 114,
  aux_sym__func_body_repeat1 = 115,
  aux_sym_class_repeat1 = 116,
  aux_sym_class_repeat2 = 117,
  aux_sym_fundep_repeat1 = 118,
  aux_sym_where_clause_repeat1 = 119,
  aux_sym_ty_infix_repeat1 = 120,
  aux_sym_pat_infix_repeat1 = 121,
  aux_sym_expr_app_repeat1 = 122,
  aux_sym_expr_infix_repeat1 = 123,
  aux_sym__expr_block_repeat1 = 124,
  aux_sym_string_literal_repeat1 = 125,
  aux_sym_path_repeat1 = 126,
  alias_sym_pat_identifier = 127,
  alias_sym_ty_path = 128,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_module] = "module",
  [anon_sym_import] = "import",
  [anon_sym_prefix] = "prefix",
  [anon_sym_as] = "as",
  [anon_sym_infix] = "infix",
  [anon_sym_infixl] = "infixl",
  [anon_sym_infixr] = "infixr",
  [anon_sym_postfix] = "postfix",
  [anon_sym_foreign] = "foreign",
  [anon_sym_type] = "type",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_PIPE] = "|",
  [anon_sym_class] = "class",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_member] = "member",
  [anon_sym_of] = "of",
  [anon_sym_where] = "where",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_do] = "do",
  [anon_sym_fn] = "fn",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_case] = "case",
  [anon_sym_let] = "let",
  [aux_sym_int_literal_token1] = "int_literal_token1",
  [aux_sym_int_literal_token2] = "int_literal_token2",
  [aux_sym_int_literal_token3] = "int_literal_token3",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_DQUOTE2] = "\"",
  [sym_operator] = "operator",
  [anon_sym_RPAREN2] = ")",
  [anon_sym_SLASH] = "/",
  [sym_comment] = "comment",
  [sym_recur] = "recur",
  [aux_sym__token1] = "_token1",
  [sym__layout_semicolon] = "_layout_semicolon",
  [sym__layout_start] = "_layout_start",
  [sym__layout_end] = "_layout_end",
  [sym__slash] = "_slash",
  [sym_empty_file] = "empty_file",
  [sym_source_file] = "source_file",
  [sym_attribute] = "attribute",
  [sym__attr_body] = "_attr_body",
  [sym__attr_value] = "_attr_value",
  [sym_module] = "module",
  [sym_item] = "item",
  [sym_import] = "import",
  [sym_fixity] = "fixity",
  [sym__prefix] = "_prefix",
  [sym__infix] = "_infix",
  [sym__postfix] = "_postfix",
  [sym_type] = "type",
  [sym__type_kind] = "_type_kind",
  [sym__type_alias] = "_type_alias",
  [sym__type_ctor] = "_type_ctor",
  [sym_ctor] = "ctor",
  [sym_typevar] = "typevar",
  [sym_func] = "func",
  [sym__func_type] = "_func_type",
  [sym__func_body] = "_func_body",
  [sym_class] = "class",
  [sym_fundep] = "fundep",
  [sym_member] = "member",
  [sym_where_clause] = "where_clause",
  [sym_where_member] = "where_member",
  [sym_where_kind] = "where_kind",
  [sym__ty] = "_ty",
  [sym_ty_where] = "ty_where",
  [sym_ty_app] = "ty_app",
  [sym_ty_infix] = "ty_infix",
  [sym__ty_atom] = "_ty_atom",
  [sym_ty_unit] = "ty_unit",
  [sym_ty_parens] = "ty_parens",
  [sym__pattern] = "_pattern",
  [sym_pat_app] = "pat_app",
  [sym_pat_infix] = "pat_infix",
  [sym__pat_atom] = "_pat_atom",
  [sym_pat_unit] = "pat_unit",
  [sym_pat_parens] = "pat_parens",
  [sym__expression] = "_expression",
  [sym__expression2] = "_expression2",
  [sym_expr_typed] = "expr_typed",
  [sym_expr_app] = "expr_app",
  [sym_expr_infix] = "expr_infix",
  [sym__expr_atom] = "_expr_atom",
  [sym_expr_unit] = "expr_unit",
  [sym_expr_parens] = "expr_parens",
  [sym_expr_do] = "expr_do",
  [sym_expr_lambda] = "expr_lambda",
  [sym_expr_if] = "expr_if",
  [sym__expr_block] = "_expr_block",
  [sym__stmt] = "_stmt",
  [sym_stmt_let] = "stmt_let",
  [sym__literal] = "_literal",
  [sym_int_literal] = "int_literal",
  [sym_string_literal] = "string_literal",
  [sym__ty_path] = "_ty_path",
  [sym__pat_ident] = "_pat_ident",
  [sym_symbol] = "symbol",
  [sym_path] = "path",
  [aux_sym__attr_value_repeat1] = "_attr_value_repeat1",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_module_repeat2] = "module_repeat2",
  [aux_sym__type_alias_repeat1] = "_type_alias_repeat1",
  [aux_sym__type_ctor_repeat1] = "_type_ctor_repeat1",
  [aux_sym_ctor_repeat1] = "ctor_repeat1",
  [aux_sym__func_body_repeat1] = "_func_body_repeat1",
  [aux_sym_class_repeat1] = "class_repeat1",
  [aux_sym_class_repeat2] = "class_repeat2",
  [aux_sym_fundep_repeat1] = "fundep_repeat1",
  [aux_sym_where_clause_repeat1] = "where_clause_repeat1",
  [aux_sym_ty_infix_repeat1] = "ty_infix_repeat1",
  [aux_sym_pat_infix_repeat1] = "pat_infix_repeat1",
  [aux_sym_expr_app_repeat1] = "expr_app_repeat1",
  [aux_sym_expr_infix_repeat1] = "expr_infix_repeat1",
  [aux_sym__expr_block_repeat1] = "_expr_block_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [alias_sym_pat_identifier] = "pat_identifier",
  [alias_sym_ty_path] = "ty_path",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_prefix] = anon_sym_prefix,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_infix] = anon_sym_infix,
  [anon_sym_infixl] = anon_sym_infixl,
  [anon_sym_infixr] = anon_sym_infixr,
  [anon_sym_postfix] = anon_sym_postfix,
  [anon_sym_foreign] = anon_sym_foreign,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_member] = anon_sym_member,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_let] = anon_sym_let,
  [aux_sym_int_literal_token1] = aux_sym_int_literal_token1,
  [aux_sym_int_literal_token2] = aux_sym_int_literal_token2,
  [aux_sym_int_literal_token3] = aux_sym_int_literal_token3,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_operator] = sym_operator,
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_comment] = sym_comment,
  [sym_recur] = sym_recur,
  [aux_sym__token1] = aux_sym__token1,
  [sym__layout_semicolon] = sym__layout_semicolon,
  [sym__layout_start] = sym__layout_start,
  [sym__layout_end] = sym__layout_end,
  [sym__slash] = sym__slash,
  [sym_empty_file] = sym_empty_file,
  [sym_source_file] = sym_source_file,
  [sym_attribute] = sym_attribute,
  [sym__attr_body] = sym__attr_body,
  [sym__attr_value] = sym__attr_value,
  [sym_module] = sym_module,
  [sym_item] = sym_item,
  [sym_import] = sym_import,
  [sym_fixity] = sym_fixity,
  [sym__prefix] = sym__prefix,
  [sym__infix] = sym__infix,
  [sym__postfix] = sym__postfix,
  [sym_type] = sym_type,
  [sym__type_kind] = sym__type_kind,
  [sym__type_alias] = sym__type_alias,
  [sym__type_ctor] = sym__type_ctor,
  [sym_ctor] = sym_ctor,
  [sym_typevar] = sym_typevar,
  [sym_func] = sym_func,
  [sym__func_type] = sym__func_type,
  [sym__func_body] = sym__func_body,
  [sym_class] = sym_class,
  [sym_fundep] = sym_fundep,
  [sym_member] = sym_member,
  [sym_where_clause] = sym_where_clause,
  [sym_where_member] = sym_where_member,
  [sym_where_kind] = sym_where_kind,
  [sym__ty] = sym__ty,
  [sym_ty_where] = sym_ty_where,
  [sym_ty_app] = sym_ty_app,
  [sym_ty_infix] = sym_ty_infix,
  [sym__ty_atom] = sym__ty_atom,
  [sym_ty_unit] = sym_ty_unit,
  [sym_ty_parens] = sym_ty_parens,
  [sym__pattern] = sym__pattern,
  [sym_pat_app] = sym_pat_app,
  [sym_pat_infix] = sym_pat_infix,
  [sym__pat_atom] = sym__pat_atom,
  [sym_pat_unit] = sym_pat_unit,
  [sym_pat_parens] = sym_pat_parens,
  [sym__expression] = sym__expression,
  [sym__expression2] = sym__expression2,
  [sym_expr_typed] = sym_expr_typed,
  [sym_expr_app] = sym_expr_app,
  [sym_expr_infix] = sym_expr_infix,
  [sym__expr_atom] = sym__expr_atom,
  [sym_expr_unit] = sym_expr_unit,
  [sym_expr_parens] = sym_expr_parens,
  [sym_expr_do] = sym_expr_do,
  [sym_expr_lambda] = sym_expr_lambda,
  [sym_expr_if] = sym_expr_if,
  [sym__expr_block] = sym__expr_block,
  [sym__stmt] = sym__stmt,
  [sym_stmt_let] = sym_stmt_let,
  [sym__literal] = sym__literal,
  [sym_int_literal] = sym_int_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__ty_path] = sym__ty_path,
  [sym__pat_ident] = sym__pat_ident,
  [sym_symbol] = sym_symbol,
  [sym_path] = sym_path,
  [aux_sym__attr_value_repeat1] = aux_sym__attr_value_repeat1,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_module_repeat2] = aux_sym_module_repeat2,
  [aux_sym__type_alias_repeat1] = aux_sym__type_alias_repeat1,
  [aux_sym__type_ctor_repeat1] = aux_sym__type_ctor_repeat1,
  [aux_sym_ctor_repeat1] = aux_sym_ctor_repeat1,
  [aux_sym__func_body_repeat1] = aux_sym__func_body_repeat1,
  [aux_sym_class_repeat1] = aux_sym_class_repeat1,
  [aux_sym_class_repeat2] = aux_sym_class_repeat2,
  [aux_sym_fundep_repeat1] = aux_sym_fundep_repeat1,
  [aux_sym_where_clause_repeat1] = aux_sym_where_clause_repeat1,
  [aux_sym_ty_infix_repeat1] = aux_sym_ty_infix_repeat1,
  [aux_sym_pat_infix_repeat1] = aux_sym_pat_infix_repeat1,
  [aux_sym_expr_app_repeat1] = aux_sym_expr_app_repeat1,
  [aux_sym_expr_infix_repeat1] = aux_sym_expr_infix_repeat1,
  [aux_sym__expr_block_repeat1] = aux_sym__expr_block_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [alias_sym_pat_identifier] = alias_sym_pat_identifier,
  [alias_sym_ty_path] = alias_sym_ty_path,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postfix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_member] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_recur] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__token1] = {
    .visible = false,
    .named = false,
  },
  [sym__layout_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_start] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_end] = {
    .visible = false,
    .named = true,
  },
  [sym__slash] = {
    .visible = false,
    .named = true,
  },
  [sym_empty_file] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_body] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_value] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_fixity] = {
    .visible = true,
    .named = true,
  },
  [sym__prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__infix] = {
    .visible = false,
    .named = true,
  },
  [sym__postfix] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type_kind] = {
    .visible = false,
    .named = true,
  },
  [sym__type_alias] = {
    .visible = false,
    .named = true,
  },
  [sym__type_ctor] = {
    .visible = false,
    .named = true,
  },
  [sym_ctor] = {
    .visible = true,
    .named = true,
  },
  [sym_typevar] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym__func_type] = {
    .visible = false,
    .named = true,
  },
  [sym__func_body] = {
    .visible = false,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_fundep] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_where_member] = {
    .visible = true,
    .named = true,
  },
  [sym_where_kind] = {
    .visible = true,
    .named = true,
  },
  [sym__ty] = {
    .visible = false,
    .named = true,
  },
  [sym_ty_where] = {
    .visible = true,
    .named = true,
  },
  [sym_ty_app] = {
    .visible = true,
    .named = true,
  },
  [sym_ty_infix] = {
    .visible = true,
    .named = true,
  },
  [sym__ty_atom] = {
    .visible = false,
    .named = true,
  },
  [sym_ty_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_ty_parens] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_pat_app] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_infix] = {
    .visible = true,
    .named = true,
  },
  [sym__pat_atom] = {
    .visible = false,
    .named = true,
  },
  [sym_pat_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_parens] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression2] = {
    .visible = false,
    .named = true,
  },
  [sym_expr_typed] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_app] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_infix] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_atom] = {
    .visible = false,
    .named = true,
  },
  [sym_expr_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_parens] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_do] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_if] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_block] = {
    .visible = false,
    .named = true,
  },
  [sym__stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_stmt_let] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__ty_path] = {
    .visible = false,
    .named = true,
  },
  [sym__pat_ident] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attr_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type_ctor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ctor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__func_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fundep_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_where_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ty_infix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pat_infix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_app_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_infix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expr_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_pat_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_ty_path] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_class = 1,
  field_first = 2,
  field_last = 3,
  field_name = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_class] = "class",
  [field_first] = "first",
  [field_last] = "last",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [7] = {.index = 4, .length = 1},
  [8] = {.index = 5, .length = 1},
  [9] = {.index = 5, .length = 1},
  [10] = {.index = 6, .length = 1},
  [11] = {.index = 7, .length = 1},
  [12] = {.index = 8, .length = 1},
  [13] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_last, 0},
  [1] =
    {field_last, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0, .inherited = true},
  [4] =
    {field_name, 2},
  [5] =
    {field_name, 0},
  [6] =
    {field_class, 0},
  [7] =
    {field_first, 0},
  [8] =
    {field_class, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = alias_sym_ty_path,
  },
  [6] = {
    [0] = alias_sym_pat_identifier,
  },
  [8] = {
    [2] = sym_expr_do,
  },
  [13] = {
    [3] = sym_expr_do,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__expr_block, 2,
    sym__expr_block,
    sym_expr_do,
  sym_path, 2,
    sym_path,
    alias_sym_ty_path,
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43520
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8144
        ? (c < 6272
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5870
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))))))))
          : (c <= 6312 || (c < 7357
            ? (c < 6917
              ? (c < 6528
                ? (c < 6400
                  ? (c < 6320
                    ? c == 6314
                    : c <= 6389)
                  : (c <= 6430 || (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)))
                : (c <= 6571 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))))
              : (c <= 6963 || (c < 7168
                ? (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8016
              ? (c < 7424
                ? (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))))))
        : (c <= 8147 || (c < 12344
          ? (c < 11264
            ? (c < 8469
              ? (c < 8319
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))
                : (c <= 8319 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))
              : (c <= 8469 || (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))
            : (c <= 11492 || (c < 11688
              ? (c < 11565
                ? (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))
              : (c <= 11694 || (c < 11728
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))))))
          : (c <= 12348 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4186
      ? (c < 2703
        ? (c < 1969
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1646
              ? (c < 1369
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3634 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8134
        ? (c < 6176
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5792
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(15)
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == '|') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(2)
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '`') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(37);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(2)
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '`') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(37);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(4)
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '`') ADVANCE(27);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(4)
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '`') ADVANCE(27);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(7)
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(37);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(7)
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(37);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(7)
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(37);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(9)
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(37);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(9)
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(37);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(34);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(15)
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == '|') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(37);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(37);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (lookahead == 'b') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_int_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_int_literal_token3);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(34);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(37);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(41);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__token1);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(0)
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_recur);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_infixl);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_infixr);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_member);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 79:
      if (lookahead == 'x') ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_prefix);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_postfix);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 2, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 4},
  [7] = {.lex_state = 2, .external_lex_state = 4},
  [8] = {.lex_state = 0, .external_lex_state = 4},
  [9] = {.lex_state = 2, .external_lex_state = 4},
  [10] = {.lex_state = 2, .external_lex_state = 4},
  [11] = {.lex_state = 2, .external_lex_state = 4},
  [12] = {.lex_state = 2, .external_lex_state = 4},
  [13] = {.lex_state = 2, .external_lex_state = 4},
  [14] = {.lex_state = 2, .external_lex_state = 4},
  [15] = {.lex_state = 2, .external_lex_state = 4},
  [16] = {.lex_state = 2, .external_lex_state = 4},
  [17] = {.lex_state = 2, .external_lex_state = 4},
  [18] = {.lex_state = 2, .external_lex_state = 4},
  [19] = {.lex_state = 2, .external_lex_state = 4},
  [20] = {.lex_state = 2, .external_lex_state = 4},
  [21] = {.lex_state = 2, .external_lex_state = 4},
  [22] = {.lex_state = 2, .external_lex_state = 4},
  [23] = {.lex_state = 2, .external_lex_state = 5},
  [24] = {.lex_state = 2, .external_lex_state = 4},
  [25] = {.lex_state = 2, .external_lex_state = 4},
  [26] = {.lex_state = 2, .external_lex_state = 5},
  [27] = {.lex_state = 2, .external_lex_state = 5},
  [28] = {.lex_state = 2, .external_lex_state = 5},
  [29] = {.lex_state = 2, .external_lex_state = 5},
  [30] = {.lex_state = 3, .external_lex_state = 4},
  [31] = {.lex_state = 2, .external_lex_state = 4},
  [32] = {.lex_state = 2, .external_lex_state = 4},
  [33] = {.lex_state = 2, .external_lex_state = 4},
  [34] = {.lex_state = 2, .external_lex_state = 4},
  [35] = {.lex_state = 2, .external_lex_state = 4},
  [36] = {.lex_state = 3, .external_lex_state = 4},
  [37] = {.lex_state = 5, .external_lex_state = 5},
  [38] = {.lex_state = 9, .external_lex_state = 4},
  [39] = {.lex_state = 0, .external_lex_state = 4},
  [40] = {.lex_state = 3, .external_lex_state = 4},
  [41] = {.lex_state = 3, .external_lex_state = 4},
  [42] = {.lex_state = 3, .external_lex_state = 4},
  [43] = {.lex_state = 2, .external_lex_state = 5},
  [44] = {.lex_state = 3, .external_lex_state = 4},
  [45] = {.lex_state = 1, .external_lex_state = 4},
  [46] = {.lex_state = 1, .external_lex_state = 4},
  [47] = {.lex_state = 2, .external_lex_state = 4},
  [48] = {.lex_state = 9, .external_lex_state = 4},
  [49] = {.lex_state = 2, .external_lex_state = 4},
  [50] = {.lex_state = 9, .external_lex_state = 4},
  [51] = {.lex_state = 5, .external_lex_state = 5},
  [52] = {.lex_state = 0, .external_lex_state = 4},
  [53] = {.lex_state = 1, .external_lex_state = 5},
  [54] = {.lex_state = 0, .external_lex_state = 4},
  [55] = {.lex_state = 1, .external_lex_state = 5},
  [56] = {.lex_state = 9, .external_lex_state = 4},
  [57] = {.lex_state = 2, .external_lex_state = 4},
  [58] = {.lex_state = 9, .external_lex_state = 5},
  [59] = {.lex_state = 5, .external_lex_state = 5},
  [60] = {.lex_state = 0, .external_lex_state = 5},
  [61] = {.lex_state = 5, .external_lex_state = 5},
  [62] = {.lex_state = 2, .external_lex_state = 4},
  [63] = {.lex_state = 2, .external_lex_state = 5},
  [64] = {.lex_state = 2, .external_lex_state = 4},
  [65] = {.lex_state = 9, .external_lex_state = 5},
  [66] = {.lex_state = 9, .external_lex_state = 5},
  [67] = {.lex_state = 9, .external_lex_state = 5},
  [68] = {.lex_state = 0, .external_lex_state = 4},
  [69] = {.lex_state = 2, .external_lex_state = 5},
  [70] = {.lex_state = 2, .external_lex_state = 4},
  [71] = {.lex_state = 3, .external_lex_state = 4},
  [72] = {.lex_state = 2, .external_lex_state = 4},
  [73] = {.lex_state = 2, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 5},
  [75] = {.lex_state = 2, .external_lex_state = 4},
  [76] = {.lex_state = 0, .external_lex_state = 5},
  [77] = {.lex_state = 3, .external_lex_state = 4},
  [78] = {.lex_state = 2, .external_lex_state = 4},
  [79] = {.lex_state = 2, .external_lex_state = 4},
  [80] = {.lex_state = 3, .external_lex_state = 4},
  [81] = {.lex_state = 2, .external_lex_state = 4},
  [82] = {.lex_state = 2, .external_lex_state = 4},
  [83] = {.lex_state = 2, .external_lex_state = 5},
  [84] = {.lex_state = 2, .external_lex_state = 4},
  [85] = {.lex_state = 2, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 4},
  [87] = {.lex_state = 2, .external_lex_state = 5},
  [88] = {.lex_state = 0, .external_lex_state = 4},
  [89] = {.lex_state = 2, .external_lex_state = 5},
  [90] = {.lex_state = 0, .external_lex_state = 4},
  [91] = {.lex_state = 2, .external_lex_state = 5},
  [92] = {.lex_state = 2, .external_lex_state = 5},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 0, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 0, .external_lex_state = 4},
  [97] = {.lex_state = 0, .external_lex_state = 5},
  [98] = {.lex_state = 2, .external_lex_state = 5},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 3, .external_lex_state = 4},
  [102] = {.lex_state = 3, .external_lex_state = 4},
  [103] = {.lex_state = 0, .external_lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 5},
  [106] = {.lex_state = 0, .external_lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 2, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 5},
  [110] = {.lex_state = 2, .external_lex_state = 4},
  [111] = {.lex_state = 2, .external_lex_state = 4},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 2, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 5},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 0, .external_lex_state = 4},
  [119] = {.lex_state = 2, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 4},
  [121] = {.lex_state = 0, .external_lex_state = 5},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 0, .external_lex_state = 4},
  [124] = {.lex_state = 0, .external_lex_state = 5},
  [125] = {.lex_state = 2, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 6, .external_lex_state = 5},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 2, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 4},
  [132] = {.lex_state = 3, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 5},
  [134] = {.lex_state = 0, .external_lex_state = 5},
  [135] = {.lex_state = 6, .external_lex_state = 5},
  [136] = {.lex_state = 8, .external_lex_state = 4},
  [137] = {.lex_state = 8, .external_lex_state = 4},
  [138] = {.lex_state = 2, .external_lex_state = 4},
  [139] = {.lex_state = 2, .external_lex_state = 4},
  [140] = {.lex_state = 9, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 5},
  [142] = {.lex_state = 8, .external_lex_state = 5},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 2, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 5},
  [146] = {.lex_state = 2, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 5},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 5},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 2, .external_lex_state = 4},
  [152] = {.lex_state = 2, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 5},
  [154] = {.lex_state = 0, .external_lex_state = 5},
  [155] = {.lex_state = 9, .external_lex_state = 4},
  [156] = {.lex_state = 2, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 0, .external_lex_state = 5},
  [159] = {.lex_state = 0, .external_lex_state = 5},
  [160] = {.lex_state = 0, .external_lex_state = 5},
  [161] = {.lex_state = 9, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 5},
  [163] = {.lex_state = 0, .external_lex_state = 5},
  [164] = {.lex_state = 8, .external_lex_state = 5},
  [165] = {.lex_state = 5, .external_lex_state = 5},
  [166] = {.lex_state = 5, .external_lex_state = 5},
  [167] = {.lex_state = 5, .external_lex_state = 5},
  [168] = {.lex_state = 3, .external_lex_state = 4},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 3, .external_lex_state = 4},
  [171] = {.lex_state = 0, .external_lex_state = 4},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 5, .external_lex_state = 5},
  [174] = {.lex_state = 5, .external_lex_state = 5},
  [175] = {.lex_state = 0, .external_lex_state = 3},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 2, .external_lex_state = 4},
  [178] = {.lex_state = 2, .external_lex_state = 5},
  [179] = {.lex_state = 2, .external_lex_state = 5},
  [180] = {.lex_state = 9, .external_lex_state = 4},
  [181] = {.lex_state = 2, .external_lex_state = 5},
  [182] = {.lex_state = 0, .external_lex_state = 4},
  [183] = {.lex_state = 2, .external_lex_state = 5},
  [184] = {.lex_state = 9, .external_lex_state = 4},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 2, .external_lex_state = 5},
  [187] = {.lex_state = 0, .external_lex_state = 4},
  [188] = {.lex_state = 2, .external_lex_state = 4},
  [189] = {.lex_state = 2, .external_lex_state = 4},
  [190] = {.lex_state = 2, .external_lex_state = 5},
  [191] = {.lex_state = 0, .external_lex_state = 4},
  [192] = {.lex_state = 0, .external_lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 3},
  [194] = {.lex_state = 3, .external_lex_state = 4},
  [195] = {.lex_state = 0, .external_lex_state = 4},
  [196] = {.lex_state = 0, .external_lex_state = 3},
  [197] = {.lex_state = 9, .external_lex_state = 5},
  [198] = {.lex_state = 9, .external_lex_state = 5},
  [199] = {.lex_state = 2, .external_lex_state = 5},
  [200] = {.lex_state = 9, .external_lex_state = 5},
  [201] = {.lex_state = 0, .external_lex_state = 4},
  [202] = {.lex_state = 0, .external_lex_state = 4},
  [203] = {.lex_state = 9, .external_lex_state = 4},
  [204] = {.lex_state = 0, .external_lex_state = 3},
  [205] = {.lex_state = 0, .external_lex_state = 5},
  [206] = {.lex_state = 2, .external_lex_state = 4},
  [207] = {.lex_state = 5, .external_lex_state = 5},
  [208] = {.lex_state = 0, .external_lex_state = 5},
  [209] = {.lex_state = 2, .external_lex_state = 4},
  [210] = {.lex_state = 9, .external_lex_state = 5},
  [211] = {.lex_state = 9, .external_lex_state = 5},
  [212] = {.lex_state = 0, .external_lex_state = 4},
  [213] = {.lex_state = 3, .external_lex_state = 4},
  [214] = {.lex_state = 2, .external_lex_state = 5},
  [215] = {.lex_state = 9, .external_lex_state = 4},
  [216] = {.lex_state = 0, .external_lex_state = 5},
  [217] = {.lex_state = 0, .external_lex_state = 4},
  [218] = {.lex_state = 2, .external_lex_state = 5},
  [219] = {.lex_state = 9, .external_lex_state = 5},
  [220] = {.lex_state = 0, .external_lex_state = 4},
  [221] = {.lex_state = 5, .external_lex_state = 5},
  [222] = {.lex_state = 0, .external_lex_state = 5},
  [223] = {.lex_state = 3, .external_lex_state = 4},
  [224] = {.lex_state = 2, .external_lex_state = 5},
  [225] = {.lex_state = 0, .external_lex_state = 5},
  [226] = {.lex_state = 2, .external_lex_state = 4},
  [227] = {.lex_state = 3, .external_lex_state = 4},
  [228] = {.lex_state = 0, .external_lex_state = 5},
  [229] = {.lex_state = 2, .external_lex_state = 5},
  [230] = {.lex_state = 2, .external_lex_state = 4},
  [231] = {.lex_state = 0, .external_lex_state = 4},
  [232] = {.lex_state = 2, .external_lex_state = 4},
  [233] = {.lex_state = 2, .external_lex_state = 4},
  [234] = {.lex_state = 0, .external_lex_state = 4},
  [235] = {.lex_state = 0, .external_lex_state = 5},
  [236] = {.lex_state = 0, .external_lex_state = 5},
  [237] = {.lex_state = 0, .external_lex_state = 5},
  [238] = {.lex_state = 3, .external_lex_state = 4},
  [239] = {.lex_state = 0, .external_lex_state = 4},
  [240] = {.lex_state = 2, .external_lex_state = 4},
  [241] = {.lex_state = 0, .external_lex_state = 4},
  [242] = {.lex_state = 9, .external_lex_state = 5},
  [243] = {.lex_state = 0, .external_lex_state = 5},
  [244] = {.lex_state = 0, .external_lex_state = 4},
  [245] = {.lex_state = 0, .external_lex_state = 4},
  [246] = {.lex_state = 0, .external_lex_state = 4},
  [247] = {.lex_state = 0, .external_lex_state = 5},
  [248] = {.lex_state = 2, .external_lex_state = 5},
  [249] = {.lex_state = 0, .external_lex_state = 5},
  [250] = {.lex_state = 0, .external_lex_state = 5},
  [251] = {.lex_state = 0, .external_lex_state = 4},
  [252] = {.lex_state = 3, .external_lex_state = 4},
  [253] = {.lex_state = 0, .external_lex_state = 5},
  [254] = {.lex_state = 0, .external_lex_state = 4},
  [255] = {.lex_state = 0, .external_lex_state = 5},
  [256] = {.lex_state = 0, .external_lex_state = 4},
  [257] = {.lex_state = 3, .external_lex_state = 4},
  [258] = {.lex_state = 10, .external_lex_state = 4},
  [259] = {.lex_state = 0, .external_lex_state = 5},
  [260] = {.lex_state = 10, .external_lex_state = 4},
  [261] = {.lex_state = 3, .external_lex_state = 4},
  [262] = {.lex_state = 0, .external_lex_state = 5},
  [263] = {.lex_state = 0, .external_lex_state = 5},
  [264] = {.lex_state = 0, .external_lex_state = 5},
  [265] = {.lex_state = 0, .external_lex_state = 5},
  [266] = {.lex_state = 0, .external_lex_state = 5},
  [267] = {.lex_state = 0, .external_lex_state = 4},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 10, .external_lex_state = 4},
  [270] = {.lex_state = 0, .external_lex_state = 5},
  [271] = {.lex_state = 0, .external_lex_state = 5},
  [272] = {.lex_state = 0, .external_lex_state = 5},
  [273] = {.lex_state = 0, .external_lex_state = 5},
  [274] = {.lex_state = 0, .external_lex_state = 5},
  [275] = {.lex_state = 0, .external_lex_state = 5},
  [276] = {.lex_state = 0, .external_lex_state = 5},
  [277] = {.lex_state = 0, .external_lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 5},
  [279] = {.lex_state = 0, .external_lex_state = 5},
  [280] = {.lex_state = 0, .external_lex_state = 4},
  [281] = {.lex_state = 0, .external_lex_state = 5},
  [282] = {.lex_state = 0, .external_lex_state = 5},
  [283] = {.lex_state = 0, .external_lex_state = 5},
  [284] = {.lex_state = 0, .external_lex_state = 5},
  [285] = {.lex_state = 0, .external_lex_state = 4},
  [286] = {.lex_state = 0, .external_lex_state = 5},
  [287] = {.lex_state = 0, .external_lex_state = 5},
  [288] = {.lex_state = 0, .external_lex_state = 4},
  [289] = {.lex_state = 0, .external_lex_state = 5},
  [290] = {.lex_state = 0, .external_lex_state = 4},
  [291] = {.lex_state = 0, .external_lex_state = 5},
  [292] = {.lex_state = 2, .external_lex_state = 4},
  [293] = {.lex_state = 2, .external_lex_state = 4},
  [294] = {.lex_state = 0, .external_lex_state = 5},
  [295] = {.lex_state = 10, .external_lex_state = 4},
  [296] = {.lex_state = 0, .external_lex_state = 5},
  [297] = {.lex_state = 0, .external_lex_state = 5},
  [298] = {.lex_state = 0, .external_lex_state = 5},
  [299] = {.lex_state = 2, .external_lex_state = 4},
  [300] = {.lex_state = 0, .external_lex_state = 5},
  [301] = {.lex_state = 10, .external_lex_state = 4},
  [302] = {.lex_state = 2, .external_lex_state = 4},
  [303] = {.lex_state = 0, .external_lex_state = 5},
  [304] = {.lex_state = 2, .external_lex_state = 4},
  [305] = {.lex_state = 10, .external_lex_state = 4},
  [306] = {.lex_state = 2, .external_lex_state = 4},
  [307] = {.lex_state = 2, .external_lex_state = 4},
  [308] = {.lex_state = 0, .external_lex_state = 5},
  [309] = {.lex_state = 3, .external_lex_state = 4},
  [310] = {.lex_state = 10, .external_lex_state = 4},
  [311] = {.lex_state = 0, .external_lex_state = 4},
  [312] = {.lex_state = 0, .external_lex_state = 5},
  [313] = {.lex_state = 0, .external_lex_state = 5},
  [314] = {.lex_state = 0, .external_lex_state = 4},
  [315] = {.lex_state = 0, .external_lex_state = 4},
  [316] = {.lex_state = 2, .external_lex_state = 4},
  [317] = {.lex_state = 2, .external_lex_state = 4},
  [318] = {.lex_state = 0, .external_lex_state = 5},
  [319] = {.lex_state = 0, .external_lex_state = 5},
  [320] = {.lex_state = 2, .external_lex_state = 4},
  [321] = {.lex_state = 0, .external_lex_state = 4},
  [322] = {.lex_state = 0, .external_lex_state = 5},
  [323] = {.lex_state = 0, .external_lex_state = 4},
  [324] = {.lex_state = 2, .external_lex_state = 4},
  [325] = {.lex_state = 0, .external_lex_state = 5},
  [326] = {.lex_state = 0, .external_lex_state = 5},
  [327] = {.lex_state = 0, .external_lex_state = 4},
  [328] = {.lex_state = 0, .external_lex_state = 5},
  [329] = {.lex_state = 0, .external_lex_state = 4},
  [330] = {.lex_state = 0, .external_lex_state = 5},
  [331] = {.lex_state = 0, .external_lex_state = 5},
  [332] = {.lex_state = 0, .external_lex_state = 5},
  [333] = {.lex_state = 0, .external_lex_state = 4},
  [334] = {.lex_state = 0, .external_lex_state = 5},
  [335] = {.lex_state = 2, .external_lex_state = 4},
  [336] = {.lex_state = 0, .external_lex_state = 5},
  [337] = {.lex_state = 0, .external_lex_state = 4},
  [338] = {.lex_state = 0, .external_lex_state = 4},
  [339] = {.lex_state = 0, .external_lex_state = 5},
  [340] = {.lex_state = 0, .external_lex_state = 5},
  [341] = {.lex_state = 0, .external_lex_state = 5},
  [342] = {.lex_state = 0, .external_lex_state = 5},
  [343] = {.lex_state = 0, .external_lex_state = 6},
  [344] = {.lex_state = 0, .external_lex_state = 6},
  [345] = {.lex_state = 0, .external_lex_state = 5},
  [346] = {.lex_state = 0, .external_lex_state = 4},
  [347] = {.lex_state = 0, .external_lex_state = 4},
  [348] = {.lex_state = 0, .external_lex_state = 5},
  [349] = {.lex_state = 0, .external_lex_state = 5},
  [350] = {.lex_state = 0, .external_lex_state = 4},
  [351] = {.lex_state = 0, .external_lex_state = 4},
  [352] = {.lex_state = 0, .external_lex_state = 4},
  [353] = {.lex_state = 0, .external_lex_state = 5},
  [354] = {.lex_state = 0, .external_lex_state = 5},
  [355] = {.lex_state = 0, .external_lex_state = 5},
  [356] = {.lex_state = 0, .external_lex_state = 5},
  [357] = {.lex_state = 0, .external_lex_state = 5},
  [358] = {.lex_state = 0, .external_lex_state = 5},
  [359] = {.lex_state = 0, .external_lex_state = 5},
  [360] = {.lex_state = 0, .external_lex_state = 4},
  [361] = {.lex_state = 0, .external_lex_state = 4},
  [362] = {.lex_state = 0, .external_lex_state = 4},
  [363] = {.lex_state = 0, .external_lex_state = 4},
  [364] = {.lex_state = 0, .external_lex_state = 4},
  [365] = {.lex_state = 0, .external_lex_state = 5},
  [366] = {.lex_state = 0, .external_lex_state = 5},
  [367] = {.lex_state = 0, .external_lex_state = 5},
  [368] = {.lex_state = 0, .external_lex_state = 5},
  [369] = {.lex_state = 0, .external_lex_state = 5},
  [370] = {.lex_state = 0, .external_lex_state = 6},
  [371] = {.lex_state = 0, .external_lex_state = 5},
  [372] = {.lex_state = 0, .external_lex_state = 6},
  [373] = {.lex_state = 0, .external_lex_state = 5},
  [374] = {.lex_state = 0, .external_lex_state = 5},
  [375] = {.lex_state = 0, .external_lex_state = 5},
  [376] = {.lex_state = 0, .external_lex_state = 5},
  [377] = {.lex_state = 0, .external_lex_state = 5},
  [378] = {.lex_state = 0, .external_lex_state = 4},
  [379] = {.lex_state = 0, .external_lex_state = 5},
  [380] = {.lex_state = 0, .external_lex_state = 5},
  [381] = {.lex_state = 0, .external_lex_state = 5},
  [382] = {.lex_state = 0, .external_lex_state = 5},
  [383] = {.lex_state = 3, .external_lex_state = 4},
  [384] = {.lex_state = 0, .external_lex_state = 4},
  [385] = {.lex_state = 0, .external_lex_state = 5},
  [386] = {.lex_state = 0, .external_lex_state = 5},
  [387] = {.lex_state = 0, .external_lex_state = 5},
  [388] = {.lex_state = 0, .external_lex_state = 5},
  [389] = {.lex_state = 0, .external_lex_state = 5},
  [390] = {.lex_state = 0, .external_lex_state = 5},
  [391] = {.lex_state = 0, .external_lex_state = 5},
  [392] = {.lex_state = 0, .external_lex_state = 5},
  [393] = {.lex_state = 2, .external_lex_state = 4},
  [394] = {.lex_state = 0, .external_lex_state = 4},
  [395] = {.lex_state = 0, .external_lex_state = 6},
  [396] = {.lex_state = 0, .external_lex_state = 4},
  [397] = {.lex_state = 2, .external_lex_state = 4},
  [398] = {.lex_state = 0, .external_lex_state = 4},
  [399] = {.lex_state = 0, .external_lex_state = 4},
  [400] = {.lex_state = 0, .external_lex_state = 6},
  [401] = {.lex_state = 2, .external_lex_state = 4},
  [402] = {.lex_state = 0, .external_lex_state = 4},
  [403] = {.lex_state = 0, .external_lex_state = 4},
  [404] = {.lex_state = 2, .external_lex_state = 4},
  [405] = {.lex_state = 0, .external_lex_state = 4},
  [406] = {.lex_state = 0, .external_lex_state = 4},
  [407] = {.lex_state = 0, .external_lex_state = 4},
  [408] = {.lex_state = 0, .external_lex_state = 4},
  [409] = {.lex_state = 0, .external_lex_state = 4},
  [410] = {.lex_state = 2, .external_lex_state = 4},
  [411] = {.lex_state = 0, .external_lex_state = 4},
  [412] = {.lex_state = 0, .external_lex_state = 6},
  [413] = {.lex_state = 0, .external_lex_state = 4},
  [414] = {.lex_state = 2, .external_lex_state = 4},
  [415] = {.lex_state = 2, .external_lex_state = 4},
  [416] = {.lex_state = 0, .external_lex_state = 4},
  [417] = {.lex_state = 0, .external_lex_state = 4},
  [418] = {.lex_state = 0, .external_lex_state = 6},
  [419] = {.lex_state = 0, .external_lex_state = 6},
  [420] = {.lex_state = 0, .external_lex_state = 4},
  [421] = {.lex_state = 0, .external_lex_state = 6},
  [422] = {.lex_state = 0, .external_lex_state = 4},
  [423] = {.lex_state = 5, .external_lex_state = 4},
  [424] = {.lex_state = 2, .external_lex_state = 4},
  [425] = {.lex_state = 0, .external_lex_state = 6},
  [426] = {.lex_state = 2, .external_lex_state = 4},
  [427] = {.lex_state = 0, .external_lex_state = 4},
  [428] = {.lex_state = 0, .external_lex_state = 4},
  [429] = {.lex_state = 0, .external_lex_state = 4},
  [430] = {.lex_state = 2, .external_lex_state = 4},
  [431] = {.lex_state = 0, .external_lex_state = 6},
  [432] = {.lex_state = 2, .external_lex_state = 4},
  [433] = {.lex_state = 0, .external_lex_state = 4},
  [434] = {.lex_state = 2, .external_lex_state = 4},
  [435] = {.lex_state = 0, .external_lex_state = 4},
  [436] = {.lex_state = 0, .external_lex_state = 4},
  [437] = {.lex_state = 2, .external_lex_state = 4},
  [438] = {.lex_state = 0, .external_lex_state = 4},
  [439] = {.lex_state = 0, .external_lex_state = 4},
  [440] = {.lex_state = 0, .external_lex_state = 4},
  [441] = {.lex_state = 0, .external_lex_state = 4},
  [442] = {.lex_state = 0, .external_lex_state = 6},
  [443] = {.lex_state = 0, .external_lex_state = 4},
  [444] = {.lex_state = 2, .external_lex_state = 4},
  [445] = {.lex_state = 0, .external_lex_state = 6},
  [446] = {.lex_state = 0, .external_lex_state = 4},
  [447] = {.lex_state = 2, .external_lex_state = 4},
  [448] = {.lex_state = 0, .external_lex_state = 4},
  [449] = {.lex_state = 0, .external_lex_state = 4},
  [450] = {.lex_state = 0, .external_lex_state = 4},
  [451] = {.lex_state = 0, .external_lex_state = 4},
  [452] = {.lex_state = 0, .external_lex_state = 4},
};

enum {
  ts_external_token__layout_semicolon = 0,
  ts_external_token__layout_start = 1,
  ts_external_token__layout_end = 2,
  ts_external_token__slash = 3,
  ts_external_token_comment = 4,
  ts_external_token__token1 = 5,
  ts_external_token_empty_file = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__layout_semicolon] = sym__layout_semicolon,
  [ts_external_token__layout_start] = sym__layout_start,
  [ts_external_token__layout_end] = sym__layout_end,
  [ts_external_token__slash] = sym__slash,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token__token1] = aux_sym__token1,
  [ts_external_token_empty_file] = sym_empty_file,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__layout_semicolon] = true,
    [ts_external_token__layout_start] = true,
    [ts_external_token__layout_end] = true,
    [ts_external_token__slash] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__token1] = true,
    [ts_external_token_empty_file] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
    [ts_external_token__token1] = true,
    [ts_external_token_empty_file] = true,
  },
  [3] = {
    [ts_external_token__layout_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__token1] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
    [ts_external_token__token1] = true,
  },
  [5] = {
    [ts_external_token__layout_semicolon] = true,
    [ts_external_token__layout_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__token1] = true,
  },
  [6] = {
    [ts_external_token__layout_start] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__token1] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_prefix] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_infix] = ACTIONS(1),
    [anon_sym_infixl] = ACTIONS(1),
    [anon_sym_infixr] = ACTIONS(1),
    [anon_sym_postfix] = ACTIONS(1),
    [anon_sym_foreign] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_member] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [aux_sym_int_literal_token1] = ACTIONS(1),
    [aux_sym_int_literal_token2] = ACTIONS(1),
    [aux_sym_int_literal_token3] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_recur] = ACTIONS(1),
    [aux_sym__token1] = ACTIONS(3),
    [sym__layout_semicolon] = ACTIONS(1),
    [sym__layout_start] = ACTIONS(1),
    [sym__layout_end] = ACTIONS(1),
    [sym__slash] = ACTIONS(1),
    [sym_empty_file] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(446),
    [sym_attribute] = STATE(246),
    [sym_module] = STATE(449),
    [aux_sym_module_repeat1] = STATE(246),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [aux_sym__token1] = ACTIONS(3),
    [sym_empty_file] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_recur,
    ACTIONS(31), 1,
      sym__layout_end,
    STATE(186), 1,
      sym_expr_app,
    STATE(298), 1,
      sym_expr_infix,
    STATE(384), 1,
      aux_sym_path_repeat1,
    STATE(435), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(23), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(294), 7,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym__stmt,
      sym_stmt_let,
  [69] = 21,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(37), 1,
      anon_sym_prefix,
    ACTIONS(41), 1,
      anon_sym_postfix,
    ACTIONS(43), 1,
      anon_sym_foreign,
    ACTIONS(45), 1,
      anon_sym_type,
    ACTIONS(47), 1,
      anon_sym_class,
    ACTIONS(49), 1,
      anon_sym_member,
    ACTIONS(51), 1,
      sym__layout_end,
    STATE(259), 1,
      sym_item,
    STATE(326), 1,
      sym__type_alias,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    STATE(387), 1,
      sym__type_ctor,
    STATE(389), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(8), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(39), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(390), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(391), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [144] = 18,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_recur,
    ACTIONS(53), 1,
      sym__layout_end,
    STATE(186), 1,
      sym_expr_app,
    STATE(298), 1,
      sym_expr_infix,
    STATE(384), 1,
      aux_sym_path_repeat1,
    STATE(435), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(23), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(296), 7,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym__stmt,
      sym_stmt_let,
  [213] = 21,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(37), 1,
      anon_sym_prefix,
    ACTIONS(41), 1,
      anon_sym_postfix,
    ACTIONS(43), 1,
      anon_sym_foreign,
    ACTIONS(45), 1,
      anon_sym_type,
    ACTIONS(47), 1,
      anon_sym_class,
    ACTIONS(49), 1,
      anon_sym_member,
    ACTIONS(55), 1,
      sym__layout_end,
    STATE(276), 1,
      sym_item,
    STATE(326), 1,
      sym__type_alias,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    STATE(387), 1,
      sym__type_ctor,
    STATE(389), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(8), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(39), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(390), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(391), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [288] = 20,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(37), 1,
      anon_sym_prefix,
    ACTIONS(41), 1,
      anon_sym_postfix,
    ACTIONS(43), 1,
      anon_sym_foreign,
    ACTIONS(45), 1,
      anon_sym_type,
    ACTIONS(47), 1,
      anon_sym_class,
    ACTIONS(49), 1,
      anon_sym_member,
    STATE(326), 1,
      sym__type_alias,
    STATE(342), 1,
      sym_item,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    STATE(387), 1,
      sym__type_ctor,
    STATE(389), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(8), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(39), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(390), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(391), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [360] = 17,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_recur,
    STATE(186), 1,
      sym_expr_app,
    STATE(298), 1,
      sym_expr_infix,
    STATE(384), 1,
      aux_sym_path_repeat1,
    STATE(435), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(23), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(366), 7,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym__stmt,
      sym_stmt_let,
  [426] = 19,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(37), 1,
      anon_sym_prefix,
    ACTIONS(41), 1,
      anon_sym_postfix,
    ACTIONS(43), 1,
      anon_sym_foreign,
    ACTIONS(45), 1,
      anon_sym_type,
    ACTIONS(47), 1,
      anon_sym_class,
    ACTIONS(49), 1,
      anon_sym_member,
    STATE(326), 1,
      sym__type_alias,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    STATE(387), 1,
      sym__type_ctor,
    STATE(389), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(39), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(39), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(390), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(367), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [495] = 17,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      anon_sym_do,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(144), 1,
      sym_expr_app,
    STATE(230), 1,
      sym_expr_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    STATE(440), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(410), 5,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [559] = 17,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_do,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_expr_app,
    STATE(230), 1,
      sym_expr_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    STATE(440), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(393), 5,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [623] = 16,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_do,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(144), 1,
      sym_expr_app,
    STATE(230), 1,
      sym_expr_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    STATE(440), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(438), 5,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [684] = 16,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_recur,
    STATE(186), 1,
      sym_expr_app,
    STATE(298), 1,
      sym_expr_infix,
    STATE(384), 1,
      aux_sym_path_repeat1,
    STATE(435), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(381), 5,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(23), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [745] = 16,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_recur,
    STATE(186), 1,
      sym_expr_app,
    STATE(298), 1,
      sym_expr_infix,
    STATE(384), 1,
      aux_sym_path_repeat1,
    STATE(435), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(392), 5,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(23), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [806] = 16,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_do,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(144), 1,
      sym_expr_app,
    STATE(230), 1,
      sym_expr_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    STATE(440), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(416), 5,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [867] = 16,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_do,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(144), 1,
      sym_expr_app,
    STATE(230), 1,
      sym_expr_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    STATE(440), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(302), 5,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [928] = 16,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_recur,
    STATE(186), 1,
      sym_expr_app,
    STATE(298), 1,
      sym_expr_infix,
    STATE(384), 1,
      aux_sym_path_repeat1,
    STATE(435), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(368), 5,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(23), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [989] = 16,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_do,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(144), 1,
      sym_expr_app,
    STATE(230), 1,
      sym_expr_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    STATE(440), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(396), 5,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1050] = 16,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_do,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(144), 1,
      sym_expr_app,
    STATE(230), 1,
      sym_expr_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    STATE(440), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(450), 5,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1111] = 16,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_do,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(144), 1,
      sym_expr_app,
    STATE(230), 1,
      sym_expr_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    STATE(440), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(299), 5,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1172] = 15,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      anon_sym_COLON_COLON,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym_operator,
    ACTIONS(89), 1,
      sym_recur,
    STATE(151), 1,
      aux_sym_expr_infix_repeat1,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(85), 2,
      anon_sym_then,
      anon_sym_else,
    STATE(24), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1228] = 11,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_recur,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(93), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(91), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(24), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1275] = 11,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_recur,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(97), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(95), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(24), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1322] = 14,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym_operator,
    ACTIONS(103), 1,
      sym_recur,
    STATE(199), 1,
      aux_sym_expr_infix_repeat1,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(79), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(27), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1375] = 11,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_recur,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(107), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(105), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(25), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1422] = 11,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      aux_sym_int_literal_token1,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      sym_recur,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(119), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(124), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(117), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(25), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1469] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_recur,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(91), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(27), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1513] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_recur,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(105), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(29), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1557] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_recur,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(95), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(27), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1601] = 10,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      aux_sym_int_literal_token1,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_recur,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(144), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(117), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(29), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1645] = 5,
    ACTIONS(157), 1,
      anon_sym_EQ,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(155), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(153), 12,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_class,
      anon_sym_member,
      sym_identifier,
  [1675] = 12,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(165), 1,
      anon_sym_where,
    ACTIONS(169), 1,
      sym_operator,
    STATE(138), 1,
      sym_path,
    STATE(188), 1,
      aux_sym_ty_infix_repeat1,
    STATE(306), 1,
      sym_where_clause,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(167), 2,
      anon_sym_then,
      anon_sym_else,
    STATE(57), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [1718] = 10,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      sym_recur,
    STATE(177), 1,
      sym_expr_app,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(22), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1757] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      sym_recur,
    STATE(224), 1,
      sym_expr_app,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(26), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1796] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_int_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_recur,
    STATE(214), 1,
      sym_expr_app,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(25), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(28), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1835] = 10,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_recur,
    STATE(206), 1,
      sym_expr_app,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(21), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1874] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(181), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(179), 12,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_class,
      anon_sym_member,
      sym_identifier,
  [1898] = 10,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_operator,
    STATE(165), 1,
      sym_path,
    STATE(173), 1,
      aux_sym_ty_infix_repeat1,
    STATE(351), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(185), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
    ACTIONS(191), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(51), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [1936] = 10,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_operator,
    STATE(161), 1,
      sym_path,
    STATE(180), 1,
      aux_sym_ty_infix_repeat1,
    STATE(347), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(185), 3,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
    STATE(56), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [1974] = 4,
    ACTIONS(201), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(39), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(199), 12,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_class,
      anon_sym_member,
      sym_identifier,
  [2000] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(206), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(204), 12,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_class,
      anon_sym_member,
      sym_identifier,
  [2024] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(210), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(208), 12,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_class,
      anon_sym_member,
      sym_identifier,
  [2048] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(214), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(212), 12,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_class,
      anon_sym_member,
      sym_identifier,
  [2072] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_where,
    ACTIONS(220), 1,
      sym_operator,
    STATE(178), 1,
      sym_path,
    STATE(229), 1,
      aux_sym_ty_infix_repeat1,
    STATE(339), 1,
      sym_where_clause,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(163), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(63), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2112] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(224), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(222), 12,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_class,
      anon_sym_member,
      sym_identifier,
  [2136] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(226), 7,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(228), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [2162] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(232), 7,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(234), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [2188] = 8,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_path,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(242), 2,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(244), 3,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
    STATE(47), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2221] = 8,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_path,
    STATE(347), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(244), 4,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(48), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2254] = 8,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_path,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 2,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(254), 3,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
    STATE(57), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2287] = 8,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_path,
    STATE(347), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(254), 4,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(56), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2320] = 8,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_path,
    STATE(351), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(258), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(256), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(59), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2353] = 11,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(262), 1,
      anon_sym_PIPE,
    STATE(178), 1,
      sym_path,
    STATE(183), 1,
      sym_ty_app,
    STATE(235), 1,
      sym_ty_infix,
    STATE(249), 1,
      aux_sym__type_ctor_repeat1,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(356), 2,
      sym__ty,
      sym_ty_where,
    STATE(43), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2392] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(232), 5,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(234), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [2417] = 11,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(262), 1,
      anon_sym_PIPE,
    STATE(178), 1,
      sym_path,
    STATE(183), 1,
      sym_ty_app,
    STATE(235), 1,
      sym_ty_infix,
    STATE(255), 1,
      aux_sym__type_ctor_repeat1,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(336), 2,
      sym__ty,
      sym_ty_where,
    STATE(43), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2456] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(226), 5,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(228), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [2481] = 8,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_path,
    STATE(347), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(256), 4,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(48), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2514] = 8,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_path,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(258), 2,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(256), 3,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
    STATE(47), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2547] = 10,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      sym_operator,
    STATE(197), 1,
      sym_path,
    STATE(211), 1,
      aux_sym_ty_infix_repeat1,
    STATE(346), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(191), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(67), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2584] = 8,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_path,
    STATE(351), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(242), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(244), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(59), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2617] = 7,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(242), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_PIPE,
    STATE(60), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2648] = 8,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_path,
    STATE(351), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(254), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(51), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2681] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(179), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(181), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [2703] = 8,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_where,
    STATE(178), 1,
      sym_path,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(258), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(83), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2735] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(282), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(284), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [2757] = 8,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_path,
    STATE(346), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(242), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(65), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2789] = 8,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_path,
    STATE(346), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(67), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2821] = 8,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_path,
    STATE(346), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(258), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(65), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2853] = 3,
    ACTIONS(294), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(292), 12,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_class,
      anon_sym_member,
      sym_identifier,
  [2875] = 8,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_where,
    STATE(178), 1,
      sym_path,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(63), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2907] = 10,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_path,
    STATE(146), 1,
      sym_ty_app,
    STATE(209), 1,
      sym_ty_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(401), 2,
      sym__ty,
      sym_ty_where,
    STATE(31), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2943] = 8,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym_path,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(304), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(306), 2,
      anon_sym_then,
      anon_sym_else,
    STATE(77), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2975] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(212), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(214), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [2997] = 10,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_path,
    STATE(146), 1,
      sym_ty_app,
    STATE(209), 1,
      sym_ty_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(437), 2,
      sym__ty,
      sym_ty_where,
    STATE(31), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3033] = 7,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(312), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(76), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3063] = 10,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_path,
    STATE(146), 1,
      sym_ty_app,
    STATE(209), 1,
      sym_ty_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(424), 2,
      sym__ty,
      sym_ty_where,
    STATE(31), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3099] = 7,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(304), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(60), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3129] = 8,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym_path,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(242), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(244), 2,
      anon_sym_then,
      anon_sym_else,
    STATE(77), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3161] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(208), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(210), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3183] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(324), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(326), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3205] = 8,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym_path,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(312), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(328), 2,
      anon_sym_then,
      anon_sym_else,
    STATE(71), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3237] = 10,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_path,
    STATE(146), 1,
      sym_ty_app,
    STATE(209), 1,
      sym_ty_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(434), 2,
      sym__ty,
      sym_ty_where,
    STATE(31), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3273] = 10,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_path,
    STATE(146), 1,
      sym_ty_app,
    STATE(209), 1,
      sym_ty_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(430), 2,
      sym__ty,
      sym_ty_where,
    STATE(31), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3309] = 8,
    ACTIONS(244), 1,
      anon_sym_where,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_path,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(242), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(83), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3341] = 10,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_path,
    STATE(146), 1,
      sym_ty_app,
    STATE(209), 1,
      sym_ty_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(397), 2,
      sym__ty,
      sym_ty_where,
    STATE(31), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3377] = 10,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      sym_path,
    STATE(146), 1,
      sym_ty_app,
    STATE(209), 1,
      sym_ty_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(426), 2,
      sym__ty,
      sym_ty_where,
    STATE(31), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3413] = 9,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(178), 1,
      sym_path,
    STATE(183), 1,
      sym_ty_app,
    STATE(235), 1,
      sym_ty_infix,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(345), 2,
      sym__ty,
      sym_ty_where,
    STATE(43), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3446] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(324), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(326), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3467] = 9,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(178), 1,
      sym_path,
    STATE(183), 1,
      sym_ty_app,
    STATE(235), 1,
      sym_ty_infix,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(325), 2,
      sym__ty,
      sym_ty_where,
    STATE(43), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3500] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(212), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(214), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3521] = 9,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(178), 1,
      sym_path,
    STATE(183), 1,
      sym_ty_app,
    STATE(235), 1,
      sym_ty_infix,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(388), 2,
      sym__ty,
      sym_ty_where,
    STATE(43), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3554] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(179), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(181), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3575] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(208), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(210), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3596] = 7,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(344), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(60), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3625] = 9,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(138), 1,
      sym_path,
    STATE(146), 1,
      sym_ty_app,
    STATE(209), 1,
      sym_ty_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(414), 2,
      sym__ty,
      sym_ty_where,
    STATE(31), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3658] = 9,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(178), 1,
      sym_path,
    STATE(183), 1,
      sym_ty_app,
    STATE(235), 1,
      sym_ty_infix,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(355), 2,
      sym__ty,
      sym_ty_where,
    STATE(43), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3691] = 9,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(138), 1,
      sym_path,
    STATE(146), 1,
      sym_ty_app,
    STATE(209), 1,
      sym_ty_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(317), 2,
      sym__ty,
      sym_ty_where,
    STATE(31), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3724] = 7,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(346), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(93), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3753] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(282), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(284), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3774] = 9,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(138), 1,
      sym_path,
    STATE(146), 1,
      sym_ty_app,
    STATE(209), 1,
      sym_ty_infix,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(447), 2,
      sym__ty,
      sym_ty_where,
    STATE(31), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3807] = 9,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(178), 1,
      sym_path,
    STATE(183), 1,
      sym_ty_app,
    STATE(235), 1,
      sym_ty_infix,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(354), 2,
      sym__ty,
      sym_ty_where,
    STATE(43), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3840] = 4,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(226), 5,
      anon_sym_as,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(228), 5,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [3862] = 4,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(232), 5,
      anon_sym_as,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(234), 5,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [3884] = 7,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_of,
    ACTIONS(318), 1,
      sym_identifier,
    STATE(138), 1,
      sym_path,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(103), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3911] = 7,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(350), 1,
      anon_sym_of,
    STATE(138), 1,
      sym_path,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(103), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3938] = 9,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_EQ,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_where,
    STATE(287), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(362), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(109), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [3969] = 8,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_path,
    STATE(207), 1,
      sym_ty_app,
    STATE(237), 1,
      sym_ty_infix,
    STATE(351), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(37), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3998] = 8,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      sym_identifier,
    STATE(161), 1,
      sym_path,
    STATE(203), 1,
      sym_ty_app,
    STATE(252), 1,
      sym_ty_infix,
    STATE(347), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(38), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4027] = 7,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      sym_operator,
    STATE(293), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(119), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4054] = 9,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_where,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(376), 1,
      anon_sym_PIPE,
    STATE(308), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(378), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(121), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [4085] = 7,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(404), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(108), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [4112] = 7,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(432), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(108), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [4139] = 8,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_path,
    STATE(219), 1,
      sym_ty_app,
    STATE(237), 1,
      sym_ty_infix,
    STATE(346), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(58), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4168] = 7,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      sym_identifier,
    STATE(161), 1,
      sym_path,
    STATE(215), 1,
      sym_ty_app,
    STATE(347), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(50), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4194] = 5,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(390), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(114), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4216] = 7,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(178), 1,
      sym_path,
    STATE(248), 1,
      sym_ty_app,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(69), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4242] = 4,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(226), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(228), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4262] = 7,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(346), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(66), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4288] = 5,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(390), 2,
      anon_sym_EQ,
      anon_sym_DASH_GT,
    STATE(118), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4310] = 5,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(398), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(114), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4332] = 6,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(131), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4356] = 6,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_where,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(121), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
    ACTIONS(411), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_PIPE,
  [4380] = 6,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(138), 1,
      sym_path,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(104), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4404] = 7,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_path,
    STATE(221), 1,
      sym_ty_app,
    STATE(351), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(61), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4430] = 4,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(232), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(234), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4450] = 5,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(420), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(119), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4472] = 7,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(138), 1,
      sym_path,
    STATE(226), 1,
      sym_ty_app,
    STATE(360), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(49), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4498] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(226), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(228), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [4517] = 5,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(118), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4538] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(426), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(424), 5,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
  [4555] = 5,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(118), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4576] = 5,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(118), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4597] = 5,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(432), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(226), 3,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(228), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4618] = 4,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(228), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [4637] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(436), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(438), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4654] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(232), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(234), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [4673] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(228), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(226), 5,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [4692] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(234), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(232), 5,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [4711] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(438), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(436), 5,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
  [4728] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(442), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(440), 5,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
  [4745] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(442), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(440), 5,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [4761] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(426), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_identifier,
  [4775] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(228), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [4793] = 4,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(128), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4811] = 6,
    ACTIONS(81), 1,
      anon_sym_COLON_COLON,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym_operator,
    STATE(151), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4833] = 5,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(449), 1,
      anon_sym_where,
    STATE(145), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(447), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [4853] = 6,
    ACTIONS(169), 1,
      sym_operator,
    ACTIONS(451), 1,
      anon_sym_where,
    STATE(188), 1,
      aux_sym_ty_infix_repeat1,
    STATE(306), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(163), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4875] = 7,
    ACTIONS(453), 1,
      anon_sym_EQ,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_where,
    STATE(205), 1,
      aux_sym_class_repeat1,
    STATE(270), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(459), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4899] = 4,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(130), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4917] = 7,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_where,
    ACTIONS(461), 1,
      anon_sym_EQ,
    STATE(158), 1,
      aux_sym_class_repeat1,
    STATE(281), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(463), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4941] = 7,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_where,
    ACTIONS(465), 1,
      anon_sym_EQ,
    STATE(147), 1,
      aux_sym_class_repeat1,
    STATE(319), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(467), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4965] = 5,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym_operator,
    STATE(156), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(469), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_then,
      anon_sym_else,
  [4985] = 5,
    ACTIONS(471), 1,
      aux_sym_int_literal_token1,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(473), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(44), 3,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
  [5005] = 4,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(477), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(228), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [5023] = 5,
    ACTIONS(479), 1,
      sym_identifier,
    ACTIONS(483), 1,
      anon_sym_where,
    STATE(145), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(481), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [5043] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(426), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(424), 5,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [5059] = 5,
    ACTIONS(485), 1,
      anon_sym_BQUOTE,
    ACTIONS(488), 1,
      sym_operator,
    STATE(156), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(91), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_then,
      anon_sym_else,
  [5079] = 5,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(125), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5099] = 7,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_where,
    ACTIONS(465), 1,
      anon_sym_EQ,
    STATE(205), 1,
      aux_sym_class_repeat1,
    STATE(319), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(467), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5123] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(491), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(493), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [5139] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(495), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(497), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [5155] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(438), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(436), 5,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [5171] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(442), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_identifier,
  [5185] = 5,
    ACTIONS(479), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_where,
    STATE(145), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(499), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [5205] = 4,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(234), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [5223] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(436), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(438), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [5239] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(424), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(426), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [5255] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(440), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(442), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [5271] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(424), 3,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(426), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5286] = 7,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_foreign,
    ACTIONS(505), 1,
      sym__layout_end,
    STATE(279), 1,
      sym_func,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5309] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(436), 3,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(438), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5324] = 6,
    ACTIONS(507), 1,
      sym_identifier,
    STATE(74), 1,
      sym__ty_path,
    STATE(134), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(225), 2,
      sym_where_member,
      sym_where_kind,
  [5345] = 7,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_foreign,
    ACTIONS(509), 1,
      sym__layout_end,
    STATE(272), 1,
      sym_func,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5368] = 5,
    ACTIONS(189), 1,
      sym_operator,
    STATE(174), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(511), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
    ACTIONS(513), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5387] = 5,
    ACTIONS(515), 1,
      sym_operator,
    STATE(174), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(254), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [5406] = 7,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_foreign,
    ACTIONS(518), 1,
      sym__layout_end,
    STATE(266), 1,
      sym_func,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5429] = 7,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_foreign,
    ACTIONS(520), 1,
      sym__layout_end,
    STATE(263), 1,
      sym_func,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5452] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 6,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [5465] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(436), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(438), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
  [5480] = 5,
    ACTIONS(522), 1,
      anon_sym_BQUOTE,
    ACTIONS(525), 1,
      sym_operator,
    STATE(179), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(91), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
  [5499] = 5,
    ACTIONS(197), 1,
      sym_operator,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(513), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [5518] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(424), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(426), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
  [5533] = 6,
    ACTIONS(507), 1,
      sym_identifier,
    STATE(74), 1,
      sym__ty_path,
    STATE(134), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(236), 2,
      sym_where_member,
      sym_where_kind,
  [5554] = 6,
    ACTIONS(220), 1,
      sym_operator,
    ACTIONS(528), 1,
      anon_sym_where,
    STATE(229), 1,
      aux_sym_ty_infix_repeat1,
    STATE(339), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(163), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5575] = 5,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      sym_operator,
    STATE(184), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [5594] = 7,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_foreign,
    ACTIONS(533), 1,
      sym__layout_end,
    STATE(313), 1,
      sym_func,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5617] = 6,
    ACTIONS(81), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym_operator,
    STATE(199), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5638] = 4,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(443), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5655] = 4,
    ACTIONS(169), 1,
      sym_operator,
    STATE(189), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(513), 4,
      anon_sym_RPAREN,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
  [5672] = 4,
    ACTIONS(535), 1,
      sym_operator,
    STATE(189), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 4,
      anon_sym_RPAREN,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
  [5689] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(440), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(442), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
  [5704] = 6,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(540), 1,
      anon_sym_EQ,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(220), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [5725] = 6,
    ACTIONS(546), 1,
      sym_identifier,
    STATE(74), 1,
      sym__ty_path,
    STATE(134), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(253), 2,
      sym_where_member,
      sym_where_kind,
  [5746] = 7,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_foreign,
    ACTIONS(548), 1,
      sym__layout_end,
    STATE(291), 1,
      sym_func,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5769] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(440), 3,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(442), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5784] = 6,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(80), 1,
      sym__ty_path,
    STATE(170), 1,
      sym_path,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(238), 2,
      sym_where_member,
      sym_where_kind,
  [5805] = 7,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_foreign,
    ACTIONS(552), 1,
      sym__layout_end,
    STATE(264), 1,
      sym_func,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5828] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(438), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [5843] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(426), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [5858] = 5,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym_operator,
    STATE(179), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(469), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
  [5877] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(442), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [5892] = 6,
    ACTIONS(546), 1,
      sym_identifier,
    STATE(74), 1,
      sym__ty_path,
    STATE(134), 1,
      sym_path,
    STATE(352), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(236), 2,
      sym_where_member,
      sym_where_kind,
  [5913] = 6,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(80), 1,
      sym__ty_path,
    STATE(170), 1,
      sym_path,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(227), 2,
      sym_where_member,
      sym_where_kind,
  [5934] = 5,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      sym_operator,
    STATE(180), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(191), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [5953] = 7,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_foreign,
    ACTIONS(554), 1,
      sym__layout_end,
    STATE(283), 1,
      sym_func,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5976] = 4,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(556), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_where,
  [5993] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(91), 6,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [6006] = 5,
    ACTIONS(189), 1,
      sym_operator,
    STATE(173), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(185), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
    ACTIONS(191), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6025] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(561), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [6041] = 4,
    ACTIONS(451), 1,
      anon_sym_where,
    STATE(306), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(163), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [6057] = 5,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      sym_operator,
    STATE(210), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6075] = 5,
    ACTIONS(268), 1,
      sym_operator,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(513), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6093] = 6,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_foreign,
    STATE(374), 1,
      sym_func,
    STATE(385), 1,
      sym__func_body,
    STATE(386), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6113] = 4,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(561), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [6129] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
  [6141] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(252), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [6155] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(556), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_where,
  [6167] = 5,
    ACTIONS(411), 1,
      anon_sym_EQ,
    ACTIONS(572), 1,
      sym_identifier,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(217), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [6185] = 4,
    ACTIONS(578), 1,
      sym_operator,
    STATE(218), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
  [6201] = 5,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      sym_operator,
    STATE(211), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(191), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6219] = 5,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(217), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [6237] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(254), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
  [6251] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(583), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [6267] = 4,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(583), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [6283] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(91), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
  [6295] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(589), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [6311] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 5,
      anon_sym_RPAREN,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [6323] = 4,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(589), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [6339] = 5,
    ACTIONS(457), 1,
      anon_sym_where,
    ACTIONS(591), 1,
      anon_sym_EQ,
    STATE(303), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(593), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6357] = 4,
    ACTIONS(220), 1,
      sym_operator,
    STATE(218), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(513), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
  [6373] = 3,
    ACTIONS(81), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [6386] = 5,
    ACTIONS(595), 1,
      sym_identifier,
    ACTIONS(597), 1,
      anon_sym_DASH_GT,
    STATE(150), 1,
      sym_fundep,
    STATE(315), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6403] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(599), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [6414] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(601), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [6425] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(601), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [6436] = 4,
    ACTIONS(528), 1,
      anon_sym_where,
    STATE(339), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(163), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6451] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(561), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [6462] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(191), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [6473] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(561), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
  [6484] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(599), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [6495] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(603), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [6506] = 5,
    ACTIONS(310), 1,
      sym_identifier,
    STATE(134), 1,
      sym_path,
    STATE(228), 1,
      sym__ty_path,
    STATE(352), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6523] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      sym_operator,
  [6536] = 4,
    ACTIONS(605), 1,
      anon_sym_PIPE,
    STATE(243), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(608), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6551] = 5,
    ACTIONS(595), 1,
      sym_identifier,
    ACTIONS(597), 1,
      anon_sym_DASH_GT,
    STATE(149), 1,
      sym_fundep,
    STATE(315), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6568] = 4,
    ACTIONS(471), 1,
      aux_sym_int_literal_token1,
    STATE(267), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(473), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
  [6583] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(610), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(39), 2,
      sym_attribute,
      aux_sym_module_repeat1,
  [6598] = 4,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(583), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6613] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(252), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
      sym_operator,
  [6624] = 4,
    ACTIONS(262), 1,
      anon_sym_PIPE,
    STATE(243), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(614), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6639] = 4,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(561), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6654] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(603), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [6665] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(191), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
  [6676] = 4,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(589), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6691] = 5,
    ACTIONS(595), 1,
      sym_identifier,
    ACTIONS(597), 1,
      anon_sym_DASH_GT,
    STATE(216), 1,
      sym_fundep,
    STATE(315), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6708] = 4,
    ACTIONS(262), 1,
      anon_sym_PIPE,
    STATE(243), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(619), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6723] = 4,
    ACTIONS(447), 1,
      anon_sym_DASH_GT,
    ACTIONS(621), 1,
      sym_identifier,
    STATE(256), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6737] = 4,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6751] = 4,
    ACTIONS(628), 1,
      aux_sym_string_literal_token1,
    ACTIONS(630), 1,
      anon_sym_DQUOTE2,
    STATE(269), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(632), 2,
      sym_comment,
      aux_sym__token1,
  [6765] = 4,
    ACTIONS(634), 1,
      sym__layout_semicolon,
    ACTIONS(636), 1,
      sym__layout_end,
    STATE(274), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6779] = 4,
    ACTIONS(638), 1,
      aux_sym_string_literal_token1,
    ACTIONS(641), 1,
      anon_sym_DQUOTE2,
    STATE(260), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(632), 2,
      sym_comment,
      aux_sym__token1,
  [6793] = 4,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6807] = 4,
    ACTIONS(509), 1,
      sym__layout_end,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    STATE(284), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6821] = 4,
    ACTIONS(509), 1,
      sym__layout_end,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    STATE(271), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6835] = 4,
    ACTIONS(533), 1,
      sym__layout_end,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    STATE(322), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6849] = 4,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    ACTIONS(650), 1,
      sym__layout_end,
    STATE(284), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6863] = 4,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    ACTIONS(650), 1,
      sym__layout_end,
    STATE(275), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6877] = 4,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    STATE(409), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6891] = 4,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    STATE(413), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6905] = 4,
    ACTIONS(652), 1,
      aux_sym_string_literal_token1,
    ACTIONS(654), 1,
      anon_sym_DQUOTE2,
    STATE(260), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(632), 2,
      sym_comment,
      aux_sym__token1,
  [6919] = 3,
    ACTIONS(656), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(658), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6931] = 4,
    ACTIONS(505), 1,
      sym__layout_end,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    STATE(284), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6945] = 4,
    ACTIONS(505), 1,
      sym__layout_end,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    STATE(278), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6959] = 4,
    ACTIONS(520), 1,
      sym__layout_end,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    STATE(284), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6973] = 4,
    ACTIONS(634), 1,
      sym__layout_semicolon,
    ACTIONS(660), 1,
      sym__layout_end,
    STATE(300), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6987] = 4,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    ACTIONS(662), 1,
      sym__layout_end,
    STATE(284), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7001] = 4,
    ACTIONS(634), 1,
      sym__layout_semicolon,
    ACTIONS(664), 1,
      sym__layout_end,
    STATE(312), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7015] = 4,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    STATE(402), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7029] = 4,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    ACTIONS(666), 1,
      sym__layout_end,
    STATE(284), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7043] = 4,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    ACTIONS(666), 1,
      sym__layout_end,
    STATE(282), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7057] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(497), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [7067] = 3,
    ACTIONS(465), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(467), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7079] = 4,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    ACTIONS(668), 1,
      sym__layout_end,
    STATE(284), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7093] = 4,
    ACTIONS(520), 1,
      sym__layout_end,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    STATE(262), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7107] = 4,
    ACTIONS(670), 1,
      sym__layout_semicolon,
    ACTIONS(673), 1,
      sym__layout_end,
    STATE(284), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7121] = 4,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    STATE(399), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7135] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(608), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
  [7145] = 3,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(378), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7157] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(493), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [7167] = 4,
    ACTIONS(675), 1,
      sym__layout_semicolon,
    ACTIONS(678), 1,
      sym__layout_end,
    STATE(289), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7181] = 4,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(379), 1,
      sym_path,
    STATE(384), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7195] = 4,
    ACTIONS(518), 1,
      sym__layout_end,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    STATE(265), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7209] = 4,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      sym_operator,
    STATE(293), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7223] = 4,
    ACTIONS(372), 1,
      sym_operator,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7237] = 4,
    ACTIONS(682), 1,
      sym__layout_semicolon,
    ACTIONS(684), 1,
      sym__layout_end,
    STATE(297), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7251] = 4,
    ACTIONS(652), 1,
      aux_sym_string_literal_token1,
    ACTIONS(686), 1,
      anon_sym_DQUOTE2,
    STATE(260), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(632), 2,
      sym_comment,
      aux_sym__token1,
  [7265] = 4,
    ACTIONS(682), 1,
      sym__layout_semicolon,
    ACTIONS(688), 1,
      sym__layout_end,
    STATE(318), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7279] = 4,
    ACTIONS(682), 1,
      sym__layout_semicolon,
    ACTIONS(690), 1,
      sym__layout_end,
    STATE(289), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7293] = 3,
    ACTIONS(81), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7305] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(692), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7315] = 4,
    ACTIONS(694), 1,
      sym__layout_semicolon,
    ACTIONS(697), 1,
      sym__layout_end,
    STATE(300), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7329] = 4,
    ACTIONS(699), 1,
      aux_sym_string_literal_token1,
    ACTIONS(701), 1,
      anon_sym_DQUOTE2,
    STATE(305), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(632), 2,
      sym_comment,
      aux_sym__token1,
  [7343] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(703), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7353] = 3,
    ACTIONS(705), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(707), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7365] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(709), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7375] = 4,
    ACTIONS(652), 1,
      aux_sym_string_literal_token1,
    ACTIONS(711), 1,
      anon_sym_DQUOTE2,
    STATE(260), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(632), 2,
      sym_comment,
      aux_sym__token1,
  [7389] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(713), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7399] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(715), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7409] = 3,
    ACTIONS(461), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(463), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7421] = 4,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7435] = 4,
    ACTIONS(719), 1,
      aux_sym_string_literal_token1,
    ACTIONS(721), 1,
      anon_sym_DQUOTE2,
    STATE(295), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(632), 2,
      sym_comment,
      aux_sym__token1,
  [7449] = 4,
    ACTIONS(723), 1,
      sym_identifier,
    STATE(309), 1,
      sym__attr_body,
    STATE(415), 1,
      sym__attr_value,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7463] = 4,
    ACTIONS(634), 1,
      sym__layout_semicolon,
    ACTIONS(725), 1,
      sym__layout_end,
    STATE(300), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7477] = 4,
    ACTIONS(554), 1,
      sym__layout_end,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    STATE(273), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7491] = 4,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    STATE(427), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7505] = 4,
    ACTIONS(727), 1,
      sym_identifier,
    ACTIONS(729), 1,
      anon_sym_DASH_GT,
    STATE(256), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7519] = 4,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(731), 1,
      sym_operator,
    STATE(316), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7533] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(734), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7543] = 4,
    ACTIONS(682), 1,
      sym__layout_semicolon,
    ACTIONS(736), 1,
      sym__layout_end,
    STATE(289), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7557] = 3,
    ACTIONS(453), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(459), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7569] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(738), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7579] = 4,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    STATE(394), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7593] = 4,
    ACTIONS(554), 1,
      sym__layout_end,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    STATE(284), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7607] = 4,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    STATE(441), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7621] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(740), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7631] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(742), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7640] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(744), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7649] = 3,
    ACTIONS(723), 1,
      sym_identifier,
    STATE(68), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7660] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(459), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7669] = 3,
    ACTIONS(746), 1,
      sym_identifier,
    STATE(286), 1,
      sym_ctor,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7680] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(748), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7689] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(750), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7698] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(740), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7707] = 3,
    ACTIONS(752), 1,
      anon_sym_LPAREN,
    STATE(353), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7718] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(754), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7727] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(420), 2,
      anon_sym_RPAREN,
      sym_operator,
  [7736] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(756), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7745] = 3,
    ACTIONS(758), 1,
      sym_identifier,
    STATE(154), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7756] = 3,
    ACTIONS(760), 1,
      sym_identifier,
    STATE(350), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7767] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(713), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7776] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(715), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7785] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(738), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7794] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(697), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7803] = 3,
    ACTIONS(762), 1,
      sym__layout_start,
    STATE(348), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7814] = 3,
    ACTIONS(762), 1,
      sym__layout_start,
    STATE(341), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7825] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(764), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7834] = 3,
    ACTIONS(766), 1,
      sym_identifier,
    STATE(350), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7845] = 3,
    ACTIONS(768), 1,
      sym_identifier,
    STATE(350), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7856] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(770), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7865] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(772), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7874] = 3,
    ACTIONS(774), 1,
      sym_identifier,
    STATE(350), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7885] = 3,
    ACTIONS(777), 1,
      sym_identifier,
    STATE(350), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7896] = 3,
    ACTIONS(779), 1,
      sym_identifier,
    STATE(350), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7907] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(781), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7916] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(783), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7925] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(734), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7934] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(785), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7943] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(787), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7952] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(789), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7961] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(791), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7970] = 3,
    ACTIONS(793), 1,
      sym_identifier,
    STATE(350), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7981] = 3,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(163), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7992] = 3,
    ACTIONS(752), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8003] = 3,
    ACTIONS(723), 1,
      sym_identifier,
    STATE(383), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8014] = 3,
    ACTIONS(752), 1,
      anon_sym_LPAREN,
    STATE(334), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8025] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(797), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8034] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(678), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8043] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(799), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8052] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(692), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8061] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(801), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8070] = 3,
    ACTIONS(803), 1,
      sym__layout_start,
    STATE(320), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8081] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(805), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8090] = 3,
    ACTIONS(762), 1,
      sym__layout_start,
    STATE(349), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8101] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(709), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8110] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(673), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8119] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(658), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8128] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(467), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8137] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(807), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8146] = 3,
    ACTIONS(809), 1,
      sym_identifier,
    ACTIONS(811), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8157] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(813), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8166] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(815), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8175] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(703), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8184] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(817), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8193] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(643), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8202] = 3,
    ACTIONS(819), 1,
      sym_identifier,
    STATE(350), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8213] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(821), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8222] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(821), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8231] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(744), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8240] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(823), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8249] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(744), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8258] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(825), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8267] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(827), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8276] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(829), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8285] = 2,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8293] = 2,
    ACTIONS(833), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8301] = 2,
    ACTIONS(835), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8309] = 2,
    ACTIONS(837), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8317] = 2,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8325] = 2,
    ACTIONS(841), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8333] = 2,
    ACTIONS(843), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8341] = 2,
    ACTIONS(845), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8349] = 2,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8357] = 2,
    ACTIONS(849), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8365] = 2,
    ACTIONS(851), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8373] = 2,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8381] = 2,
    ACTIONS(855), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8389] = 2,
    ACTIONS(857), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8397] = 2,
    ACTIONS(859), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8405] = 2,
    ACTIONS(861), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8413] = 2,
    ACTIONS(863), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8421] = 2,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8429] = 2,
    ACTIONS(867), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8437] = 2,
    ACTIONS(869), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8445] = 2,
    ACTIONS(871), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8453] = 2,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8461] = 2,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8469] = 2,
    ACTIONS(877), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8477] = 2,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8485] = 2,
    ACTIONS(881), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8493] = 2,
    ACTIONS(883), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8501] = 2,
    ACTIONS(348), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8509] = 2,
    ACTIONS(885), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8517] = 2,
    ACTIONS(887), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8525] = 2,
    ACTIONS(889), 1,
      anon_sym_RPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8533] = 2,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8541] = 2,
    ACTIONS(893), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8549] = 2,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8557] = 2,
    ACTIONS(897), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8565] = 2,
    ACTIONS(899), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8573] = 2,
    ACTIONS(901), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8581] = 2,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8589] = 2,
    ACTIONS(905), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8597] = 2,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8605] = 2,
    ACTIONS(909), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8613] = 2,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8621] = 2,
    ACTIONS(913), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8629] = 2,
    ACTIONS(915), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8637] = 2,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8645] = 2,
    ACTIONS(919), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8653] = 2,
    ACTIONS(921), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8661] = 2,
    ACTIONS(923), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8669] = 2,
    ACTIONS(925), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8677] = 2,
    ACTIONS(927), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8685] = 2,
    ACTIONS(929), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8693] = 2,
    ACTIONS(931), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8701] = 2,
    ACTIONS(933), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8709] = 2,
    ACTIONS(935), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8717] = 2,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8725] = 2,
    ACTIONS(939), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8733] = 2,
    ACTIONS(941), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8741] = 2,
    ACTIONS(943), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8749] = 2,
    ACTIONS(945), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8757] = 2,
    ACTIONS(947), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 288,
  [SMALL_STATE(7)] = 360,
  [SMALL_STATE(8)] = 426,
  [SMALL_STATE(9)] = 495,
  [SMALL_STATE(10)] = 559,
  [SMALL_STATE(11)] = 623,
  [SMALL_STATE(12)] = 684,
  [SMALL_STATE(13)] = 745,
  [SMALL_STATE(14)] = 806,
  [SMALL_STATE(15)] = 867,
  [SMALL_STATE(16)] = 928,
  [SMALL_STATE(17)] = 989,
  [SMALL_STATE(18)] = 1050,
  [SMALL_STATE(19)] = 1111,
  [SMALL_STATE(20)] = 1172,
  [SMALL_STATE(21)] = 1228,
  [SMALL_STATE(22)] = 1275,
  [SMALL_STATE(23)] = 1322,
  [SMALL_STATE(24)] = 1375,
  [SMALL_STATE(25)] = 1422,
  [SMALL_STATE(26)] = 1469,
  [SMALL_STATE(27)] = 1513,
  [SMALL_STATE(28)] = 1557,
  [SMALL_STATE(29)] = 1601,
  [SMALL_STATE(30)] = 1645,
  [SMALL_STATE(31)] = 1675,
  [SMALL_STATE(32)] = 1718,
  [SMALL_STATE(33)] = 1757,
  [SMALL_STATE(34)] = 1796,
  [SMALL_STATE(35)] = 1835,
  [SMALL_STATE(36)] = 1874,
  [SMALL_STATE(37)] = 1898,
  [SMALL_STATE(38)] = 1936,
  [SMALL_STATE(39)] = 1974,
  [SMALL_STATE(40)] = 2000,
  [SMALL_STATE(41)] = 2024,
  [SMALL_STATE(42)] = 2048,
  [SMALL_STATE(43)] = 2072,
  [SMALL_STATE(44)] = 2112,
  [SMALL_STATE(45)] = 2136,
  [SMALL_STATE(46)] = 2162,
  [SMALL_STATE(47)] = 2188,
  [SMALL_STATE(48)] = 2221,
  [SMALL_STATE(49)] = 2254,
  [SMALL_STATE(50)] = 2287,
  [SMALL_STATE(51)] = 2320,
  [SMALL_STATE(52)] = 2353,
  [SMALL_STATE(53)] = 2392,
  [SMALL_STATE(54)] = 2417,
  [SMALL_STATE(55)] = 2456,
  [SMALL_STATE(56)] = 2481,
  [SMALL_STATE(57)] = 2514,
  [SMALL_STATE(58)] = 2547,
  [SMALL_STATE(59)] = 2584,
  [SMALL_STATE(60)] = 2617,
  [SMALL_STATE(61)] = 2648,
  [SMALL_STATE(62)] = 2681,
  [SMALL_STATE(63)] = 2703,
  [SMALL_STATE(64)] = 2735,
  [SMALL_STATE(65)] = 2757,
  [SMALL_STATE(66)] = 2789,
  [SMALL_STATE(67)] = 2821,
  [SMALL_STATE(68)] = 2853,
  [SMALL_STATE(69)] = 2875,
  [SMALL_STATE(70)] = 2907,
  [SMALL_STATE(71)] = 2943,
  [SMALL_STATE(72)] = 2975,
  [SMALL_STATE(73)] = 2997,
  [SMALL_STATE(74)] = 3033,
  [SMALL_STATE(75)] = 3063,
  [SMALL_STATE(76)] = 3099,
  [SMALL_STATE(77)] = 3129,
  [SMALL_STATE(78)] = 3161,
  [SMALL_STATE(79)] = 3183,
  [SMALL_STATE(80)] = 3205,
  [SMALL_STATE(81)] = 3237,
  [SMALL_STATE(82)] = 3273,
  [SMALL_STATE(83)] = 3309,
  [SMALL_STATE(84)] = 3341,
  [SMALL_STATE(85)] = 3377,
  [SMALL_STATE(86)] = 3413,
  [SMALL_STATE(87)] = 3446,
  [SMALL_STATE(88)] = 3467,
  [SMALL_STATE(89)] = 3500,
  [SMALL_STATE(90)] = 3521,
  [SMALL_STATE(91)] = 3554,
  [SMALL_STATE(92)] = 3575,
  [SMALL_STATE(93)] = 3596,
  [SMALL_STATE(94)] = 3625,
  [SMALL_STATE(95)] = 3658,
  [SMALL_STATE(96)] = 3691,
  [SMALL_STATE(97)] = 3724,
  [SMALL_STATE(98)] = 3753,
  [SMALL_STATE(99)] = 3774,
  [SMALL_STATE(100)] = 3807,
  [SMALL_STATE(101)] = 3840,
  [SMALL_STATE(102)] = 3862,
  [SMALL_STATE(103)] = 3884,
  [SMALL_STATE(104)] = 3911,
  [SMALL_STATE(105)] = 3938,
  [SMALL_STATE(106)] = 3969,
  [SMALL_STATE(107)] = 3998,
  [SMALL_STATE(108)] = 4027,
  [SMALL_STATE(109)] = 4054,
  [SMALL_STATE(110)] = 4085,
  [SMALL_STATE(111)] = 4112,
  [SMALL_STATE(112)] = 4139,
  [SMALL_STATE(113)] = 4168,
  [SMALL_STATE(114)] = 4194,
  [SMALL_STATE(115)] = 4216,
  [SMALL_STATE(116)] = 4242,
  [SMALL_STATE(117)] = 4262,
  [SMALL_STATE(118)] = 4288,
  [SMALL_STATE(119)] = 4310,
  [SMALL_STATE(120)] = 4332,
  [SMALL_STATE(121)] = 4356,
  [SMALL_STATE(122)] = 4380,
  [SMALL_STATE(123)] = 4404,
  [SMALL_STATE(124)] = 4430,
  [SMALL_STATE(125)] = 4450,
  [SMALL_STATE(126)] = 4472,
  [SMALL_STATE(127)] = 4498,
  [SMALL_STATE(128)] = 4517,
  [SMALL_STATE(129)] = 4538,
  [SMALL_STATE(130)] = 4555,
  [SMALL_STATE(131)] = 4576,
  [SMALL_STATE(132)] = 4597,
  [SMALL_STATE(133)] = 4618,
  [SMALL_STATE(134)] = 4637,
  [SMALL_STATE(135)] = 4654,
  [SMALL_STATE(136)] = 4673,
  [SMALL_STATE(137)] = 4692,
  [SMALL_STATE(138)] = 4711,
  [SMALL_STATE(139)] = 4728,
  [SMALL_STATE(140)] = 4745,
  [SMALL_STATE(141)] = 4761,
  [SMALL_STATE(142)] = 4775,
  [SMALL_STATE(143)] = 4793,
  [SMALL_STATE(144)] = 4811,
  [SMALL_STATE(145)] = 4833,
  [SMALL_STATE(146)] = 4853,
  [SMALL_STATE(147)] = 4875,
  [SMALL_STATE(148)] = 4899,
  [SMALL_STATE(149)] = 4917,
  [SMALL_STATE(150)] = 4941,
  [SMALL_STATE(151)] = 4965,
  [SMALL_STATE(152)] = 4985,
  [SMALL_STATE(153)] = 5005,
  [SMALL_STATE(154)] = 5023,
  [SMALL_STATE(155)] = 5043,
  [SMALL_STATE(156)] = 5059,
  [SMALL_STATE(157)] = 5079,
  [SMALL_STATE(158)] = 5099,
  [SMALL_STATE(159)] = 5123,
  [SMALL_STATE(160)] = 5139,
  [SMALL_STATE(161)] = 5155,
  [SMALL_STATE(162)] = 5171,
  [SMALL_STATE(163)] = 5185,
  [SMALL_STATE(164)] = 5205,
  [SMALL_STATE(165)] = 5223,
  [SMALL_STATE(166)] = 5239,
  [SMALL_STATE(167)] = 5255,
  [SMALL_STATE(168)] = 5271,
  [SMALL_STATE(169)] = 5286,
  [SMALL_STATE(170)] = 5309,
  [SMALL_STATE(171)] = 5324,
  [SMALL_STATE(172)] = 5345,
  [SMALL_STATE(173)] = 5368,
  [SMALL_STATE(174)] = 5387,
  [SMALL_STATE(175)] = 5406,
  [SMALL_STATE(176)] = 5429,
  [SMALL_STATE(177)] = 5452,
  [SMALL_STATE(178)] = 5465,
  [SMALL_STATE(179)] = 5480,
  [SMALL_STATE(180)] = 5499,
  [SMALL_STATE(181)] = 5518,
  [SMALL_STATE(182)] = 5533,
  [SMALL_STATE(183)] = 5554,
  [SMALL_STATE(184)] = 5575,
  [SMALL_STATE(185)] = 5594,
  [SMALL_STATE(186)] = 5617,
  [SMALL_STATE(187)] = 5638,
  [SMALL_STATE(188)] = 5655,
  [SMALL_STATE(189)] = 5672,
  [SMALL_STATE(190)] = 5689,
  [SMALL_STATE(191)] = 5704,
  [SMALL_STATE(192)] = 5725,
  [SMALL_STATE(193)] = 5746,
  [SMALL_STATE(194)] = 5769,
  [SMALL_STATE(195)] = 5784,
  [SMALL_STATE(196)] = 5805,
  [SMALL_STATE(197)] = 5828,
  [SMALL_STATE(198)] = 5843,
  [SMALL_STATE(199)] = 5858,
  [SMALL_STATE(200)] = 5877,
  [SMALL_STATE(201)] = 5892,
  [SMALL_STATE(202)] = 5913,
  [SMALL_STATE(203)] = 5934,
  [SMALL_STATE(204)] = 5953,
  [SMALL_STATE(205)] = 5976,
  [SMALL_STATE(206)] = 5993,
  [SMALL_STATE(207)] = 6006,
  [SMALL_STATE(208)] = 6025,
  [SMALL_STATE(209)] = 6041,
  [SMALL_STATE(210)] = 6057,
  [SMALL_STATE(211)] = 6075,
  [SMALL_STATE(212)] = 6093,
  [SMALL_STATE(213)] = 6113,
  [SMALL_STATE(214)] = 6129,
  [SMALL_STATE(215)] = 6141,
  [SMALL_STATE(216)] = 6155,
  [SMALL_STATE(217)] = 6167,
  [SMALL_STATE(218)] = 6185,
  [SMALL_STATE(219)] = 6201,
  [SMALL_STATE(220)] = 6219,
  [SMALL_STATE(221)] = 6237,
  [SMALL_STATE(222)] = 6251,
  [SMALL_STATE(223)] = 6267,
  [SMALL_STATE(224)] = 6283,
  [SMALL_STATE(225)] = 6295,
  [SMALL_STATE(226)] = 6311,
  [SMALL_STATE(227)] = 6323,
  [SMALL_STATE(228)] = 6339,
  [SMALL_STATE(229)] = 6357,
  [SMALL_STATE(230)] = 6373,
  [SMALL_STATE(231)] = 6386,
  [SMALL_STATE(232)] = 6403,
  [SMALL_STATE(233)] = 6414,
  [SMALL_STATE(234)] = 6425,
  [SMALL_STATE(235)] = 6436,
  [SMALL_STATE(236)] = 6451,
  [SMALL_STATE(237)] = 6462,
  [SMALL_STATE(238)] = 6473,
  [SMALL_STATE(239)] = 6484,
  [SMALL_STATE(240)] = 6495,
  [SMALL_STATE(241)] = 6506,
  [SMALL_STATE(242)] = 6523,
  [SMALL_STATE(243)] = 6536,
  [SMALL_STATE(244)] = 6551,
  [SMALL_STATE(245)] = 6568,
  [SMALL_STATE(246)] = 6583,
  [SMALL_STATE(247)] = 6598,
  [SMALL_STATE(248)] = 6613,
  [SMALL_STATE(249)] = 6624,
  [SMALL_STATE(250)] = 6639,
  [SMALL_STATE(251)] = 6654,
  [SMALL_STATE(252)] = 6665,
  [SMALL_STATE(253)] = 6676,
  [SMALL_STATE(254)] = 6691,
  [SMALL_STATE(255)] = 6708,
  [SMALL_STATE(256)] = 6723,
  [SMALL_STATE(257)] = 6737,
  [SMALL_STATE(258)] = 6751,
  [SMALL_STATE(259)] = 6765,
  [SMALL_STATE(260)] = 6779,
  [SMALL_STATE(261)] = 6793,
  [SMALL_STATE(262)] = 6807,
  [SMALL_STATE(263)] = 6821,
  [SMALL_STATE(264)] = 6835,
  [SMALL_STATE(265)] = 6849,
  [SMALL_STATE(266)] = 6863,
  [SMALL_STATE(267)] = 6877,
  [SMALL_STATE(268)] = 6891,
  [SMALL_STATE(269)] = 6905,
  [SMALL_STATE(270)] = 6919,
  [SMALL_STATE(271)] = 6931,
  [SMALL_STATE(272)] = 6945,
  [SMALL_STATE(273)] = 6959,
  [SMALL_STATE(274)] = 6973,
  [SMALL_STATE(275)] = 6987,
  [SMALL_STATE(276)] = 7001,
  [SMALL_STATE(277)] = 7015,
  [SMALL_STATE(278)] = 7029,
  [SMALL_STATE(279)] = 7043,
  [SMALL_STATE(280)] = 7057,
  [SMALL_STATE(281)] = 7067,
  [SMALL_STATE(282)] = 7079,
  [SMALL_STATE(283)] = 7093,
  [SMALL_STATE(284)] = 7107,
  [SMALL_STATE(285)] = 7121,
  [SMALL_STATE(286)] = 7135,
  [SMALL_STATE(287)] = 7145,
  [SMALL_STATE(288)] = 7157,
  [SMALL_STATE(289)] = 7167,
  [SMALL_STATE(290)] = 7181,
  [SMALL_STATE(291)] = 7195,
  [SMALL_STATE(292)] = 7209,
  [SMALL_STATE(293)] = 7223,
  [SMALL_STATE(294)] = 7237,
  [SMALL_STATE(295)] = 7251,
  [SMALL_STATE(296)] = 7265,
  [SMALL_STATE(297)] = 7279,
  [SMALL_STATE(298)] = 7293,
  [SMALL_STATE(299)] = 7305,
  [SMALL_STATE(300)] = 7315,
  [SMALL_STATE(301)] = 7329,
  [SMALL_STATE(302)] = 7343,
  [SMALL_STATE(303)] = 7353,
  [SMALL_STATE(304)] = 7365,
  [SMALL_STATE(305)] = 7375,
  [SMALL_STATE(306)] = 7389,
  [SMALL_STATE(307)] = 7399,
  [SMALL_STATE(308)] = 7409,
  [SMALL_STATE(309)] = 7421,
  [SMALL_STATE(310)] = 7435,
  [SMALL_STATE(311)] = 7449,
  [SMALL_STATE(312)] = 7463,
  [SMALL_STATE(313)] = 7477,
  [SMALL_STATE(314)] = 7491,
  [SMALL_STATE(315)] = 7505,
  [SMALL_STATE(316)] = 7519,
  [SMALL_STATE(317)] = 7533,
  [SMALL_STATE(318)] = 7543,
  [SMALL_STATE(319)] = 7557,
  [SMALL_STATE(320)] = 7569,
  [SMALL_STATE(321)] = 7579,
  [SMALL_STATE(322)] = 7593,
  [SMALL_STATE(323)] = 7607,
  [SMALL_STATE(324)] = 7621,
  [SMALL_STATE(325)] = 7631,
  [SMALL_STATE(326)] = 7640,
  [SMALL_STATE(327)] = 7649,
  [SMALL_STATE(328)] = 7660,
  [SMALL_STATE(329)] = 7669,
  [SMALL_STATE(330)] = 7680,
  [SMALL_STATE(331)] = 7689,
  [SMALL_STATE(332)] = 7698,
  [SMALL_STATE(333)] = 7707,
  [SMALL_STATE(334)] = 7718,
  [SMALL_STATE(335)] = 7727,
  [SMALL_STATE(336)] = 7736,
  [SMALL_STATE(337)] = 7745,
  [SMALL_STATE(338)] = 7756,
  [SMALL_STATE(339)] = 7767,
  [SMALL_STATE(340)] = 7776,
  [SMALL_STATE(341)] = 7785,
  [SMALL_STATE(342)] = 7794,
  [SMALL_STATE(343)] = 7803,
  [SMALL_STATE(344)] = 7814,
  [SMALL_STATE(345)] = 7825,
  [SMALL_STATE(346)] = 7834,
  [SMALL_STATE(347)] = 7845,
  [SMALL_STATE(348)] = 7856,
  [SMALL_STATE(349)] = 7865,
  [SMALL_STATE(350)] = 7874,
  [SMALL_STATE(351)] = 7885,
  [SMALL_STATE(352)] = 7896,
  [SMALL_STATE(353)] = 7907,
  [SMALL_STATE(354)] = 7916,
  [SMALL_STATE(355)] = 7925,
  [SMALL_STATE(356)] = 7934,
  [SMALL_STATE(357)] = 7943,
  [SMALL_STATE(358)] = 7952,
  [SMALL_STATE(359)] = 7961,
  [SMALL_STATE(360)] = 7970,
  [SMALL_STATE(361)] = 7981,
  [SMALL_STATE(362)] = 7992,
  [SMALL_STATE(363)] = 8003,
  [SMALL_STATE(364)] = 8014,
  [SMALL_STATE(365)] = 8025,
  [SMALL_STATE(366)] = 8034,
  [SMALL_STATE(367)] = 8043,
  [SMALL_STATE(368)] = 8052,
  [SMALL_STATE(369)] = 8061,
  [SMALL_STATE(370)] = 8070,
  [SMALL_STATE(371)] = 8081,
  [SMALL_STATE(372)] = 8090,
  [SMALL_STATE(373)] = 8101,
  [SMALL_STATE(374)] = 8110,
  [SMALL_STATE(375)] = 8119,
  [SMALL_STATE(376)] = 8128,
  [SMALL_STATE(377)] = 8137,
  [SMALL_STATE(378)] = 8146,
  [SMALL_STATE(379)] = 8157,
  [SMALL_STATE(380)] = 8166,
  [SMALL_STATE(381)] = 8175,
  [SMALL_STATE(382)] = 8184,
  [SMALL_STATE(383)] = 8193,
  [SMALL_STATE(384)] = 8202,
  [SMALL_STATE(385)] = 8213,
  [SMALL_STATE(386)] = 8222,
  [SMALL_STATE(387)] = 8231,
  [SMALL_STATE(388)] = 8240,
  [SMALL_STATE(389)] = 8249,
  [SMALL_STATE(390)] = 8258,
  [SMALL_STATE(391)] = 8267,
  [SMALL_STATE(392)] = 8276,
  [SMALL_STATE(393)] = 8285,
  [SMALL_STATE(394)] = 8293,
  [SMALL_STATE(395)] = 8301,
  [SMALL_STATE(396)] = 8309,
  [SMALL_STATE(397)] = 8317,
  [SMALL_STATE(398)] = 8325,
  [SMALL_STATE(399)] = 8333,
  [SMALL_STATE(400)] = 8341,
  [SMALL_STATE(401)] = 8349,
  [SMALL_STATE(402)] = 8357,
  [SMALL_STATE(403)] = 8365,
  [SMALL_STATE(404)] = 8373,
  [SMALL_STATE(405)] = 8381,
  [SMALL_STATE(406)] = 8389,
  [SMALL_STATE(407)] = 8397,
  [SMALL_STATE(408)] = 8405,
  [SMALL_STATE(409)] = 8413,
  [SMALL_STATE(410)] = 8421,
  [SMALL_STATE(411)] = 8429,
  [SMALL_STATE(412)] = 8437,
  [SMALL_STATE(413)] = 8445,
  [SMALL_STATE(414)] = 8453,
  [SMALL_STATE(415)] = 8461,
  [SMALL_STATE(416)] = 8469,
  [SMALL_STATE(417)] = 8477,
  [SMALL_STATE(418)] = 8485,
  [SMALL_STATE(419)] = 8493,
  [SMALL_STATE(420)] = 8501,
  [SMALL_STATE(421)] = 8509,
  [SMALL_STATE(422)] = 8517,
  [SMALL_STATE(423)] = 8525,
  [SMALL_STATE(424)] = 8533,
  [SMALL_STATE(425)] = 8541,
  [SMALL_STATE(426)] = 8549,
  [SMALL_STATE(427)] = 8557,
  [SMALL_STATE(428)] = 8565,
  [SMALL_STATE(429)] = 8573,
  [SMALL_STATE(430)] = 8581,
  [SMALL_STATE(431)] = 8589,
  [SMALL_STATE(432)] = 8597,
  [SMALL_STATE(433)] = 8605,
  [SMALL_STATE(434)] = 8613,
  [SMALL_STATE(435)] = 8621,
  [SMALL_STATE(436)] = 8629,
  [SMALL_STATE(437)] = 8637,
  [SMALL_STATE(438)] = 8645,
  [SMALL_STATE(439)] = 8653,
  [SMALL_STATE(440)] = 8661,
  [SMALL_STATE(441)] = 8669,
  [SMALL_STATE(442)] = 8677,
  [SMALL_STATE(443)] = 8685,
  [SMALL_STATE(444)] = 8693,
  [SMALL_STATE(445)] = 8701,
  [SMALL_STATE(446)] = 8709,
  [SMALL_STATE(447)] = 8717,
  [SMALL_STATE(448)] = 8725,
  [SMALL_STATE(449)] = 8733,
  [SMALL_STATE(450)] = 8741,
  [SMALL_STATE(451)] = 8749,
  [SMALL_STATE(452)] = 8757,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_app, 2, .production_id = 11),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_app, 2, .production_id = 11),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(45),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(9),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(72),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(72),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(301),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(25),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(55),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(10),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(89),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(89),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(258),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(29),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_kind, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_kind, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(327),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(45),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(75),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(136),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(81),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_app, 2, .production_id = 11),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_app, 2, .production_id = 11),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(127),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(85),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(116),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(84),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_parens, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_parens, 3),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(142),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(73),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_member, 2, .production_id = 10),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_member, 2, .production_id = 10),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_member, 1, .production_id = 10),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(101),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(82),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_unit, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_unit, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_member, 1, .production_id = 10),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(55),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(70),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 2, .production_id = 9),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1, .production_id = 9),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(240),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(110),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(251),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(111),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_app, 2, .production_id = 11),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(160),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(451),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pat_infix_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_unit, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_unit, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty_path, 1, .production_id = 5),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty_path, 1, .production_id = 5),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_parens, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_parens, 3),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(145),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, .production_id = 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_infix, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 2),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(321),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(35),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typevar, 5),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 5),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typevar, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_infix, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_infix, 2),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(123),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(268),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(33),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(113),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(126),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(254),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(182),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(117),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(195),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(280),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(417),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(115),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 12),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_unit, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_parens, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pat_ident, 1, .production_id = 6),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2), SHIFT_REPEAT(329),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 5, .production_id = 3),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(201),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 4, .production_id = 3),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(256),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(260),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2), SHIFT_REPEAT(363),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 7, .production_id = 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2), SHIFT_REPEAT(212),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2), SHIFT_REPEAT(7),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_infix, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 6),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(6),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lambda, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 12),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_where, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pat_infix_repeat1, 2), SHIFT_REPEAT(157),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_typed, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_do, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 4, .production_id = 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 4),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__postfix, 4),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix, 4),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 4, .production_id = 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 3, .production_id = 9),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 4, .production_id = 13),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 3, .production_id = 8),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(420),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__infix, 5),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 5, .production_id = 7),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 5, .production_id = 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 12, .production_id = 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 11, .production_id = 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 10, .production_id = 12),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 10, .production_id = 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 9, .production_id = 12),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 9, .production_id = 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 7, .production_id = 12),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 8, .production_id = 12),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 8, .production_id = 3),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 1, .production_id = 4),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 4, .production_id = 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixity, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_let, 4),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 7),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 8, .production_id = 7),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 3),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 7),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [935] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_shade_external_scanner_create(void);
void tree_sitter_shade_external_scanner_destroy(void *);
bool tree_sitter_shade_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_shade_external_scanner_serialize(void *, char *);
void tree_sitter_shade_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_shade(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_shade_external_scanner_create,
      tree_sitter_shade_external_scanner_destroy,
      tree_sitter_shade_external_scanner_scan,
      tree_sitter_shade_external_scanner_serialize,
      tree_sitter_shade_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
