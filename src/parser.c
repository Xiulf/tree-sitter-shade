#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 447
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 2
#define TOKEN_COUNT 48
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
  anon_sym_fn = 19,
  anon_sym_class = 20,
  anon_sym_DASH_GT = 21,
  anon_sym_member = 22,
  anon_sym_of = 23,
  anon_sym_where = 24,
  anon_sym_BQUOTE = 25,
  anon_sym_do = 26,
  anon_sym_if = 27,
  anon_sym_then = 28,
  anon_sym_else = 29,
  anon_sym_let = 30,
  aux_sym_int_literal_token1 = 31,
  aux_sym_int_literal_token2 = 32,
  aux_sym_int_literal_token3 = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_string_literal_token1 = 35,
  anon_sym_DQUOTE2 = 36,
  sym_operator = 37,
  anon_sym_RPAREN2 = 38,
  anon_sym_SLASH = 39,
  sym_comment = 40,
  sym_recur = 41,
  aux_sym__token1 = 42,
  sym__layout_semicolon = 43,
  sym__layout_start = 44,
  sym__layout_end = 45,
  sym__slash = 46,
  sym_empty_file = 47,
  sym_source_file = 48,
  sym_attribute = 49,
  sym__attr_body = 50,
  sym__attr_value = 51,
  sym_module = 52,
  sym_item = 53,
  sym_import = 54,
  sym_fixity = 55,
  sym__prefix = 56,
  sym__infix = 57,
  sym__postfix = 58,
  sym_type = 59,
  sym__type_kind = 60,
  sym__type_alias = 61,
  sym__type_ctor = 62,
  sym_ctor = 63,
  sym_typevar = 64,
  sym_func = 65,
  sym__func_type = 66,
  sym__func_body = 67,
  sym_class = 68,
  sym_fundep = 69,
  sym_member = 70,
  sym_where_clause = 71,
  sym_where_member = 72,
  sym_where_kind = 73,
  sym__ty = 74,
  sym_ty_where = 75,
  sym_ty_app = 76,
  sym_ty_infix = 77,
  sym__ty_atom = 78,
  sym_ty_unit = 79,
  sym_ty_parens = 80,
  sym__pattern = 81,
  sym_pat_app = 82,
  sym_pat_infix = 83,
  sym__pat_atom = 84,
  sym_pat_unit = 85,
  sym_pat_parens = 86,
  sym__expression = 87,
  sym_expr_app = 88,
  sym_expr_infix = 89,
  sym__expr_atom = 90,
  sym_expr_unit = 91,
  sym_expr_parens = 92,
  sym_expr_do = 93,
  sym_expr_lambda = 94,
  sym_expr_if = 95,
  sym__expr_block = 96,
  sym__stmt = 97,
  sym_stmt_let = 98,
  sym__literal = 99,
  sym_int_literal = 100,
  sym_string_literal = 101,
  sym__ty_path = 102,
  sym__pat_ident = 103,
  sym_symbol = 104,
  sym_path = 105,
  aux_sym__attr_value_repeat1 = 106,
  aux_sym_module_repeat1 = 107,
  aux_sym_module_repeat2 = 108,
  aux_sym__type_alias_repeat1 = 109,
  aux_sym__type_ctor_repeat1 = 110,
  aux_sym_ctor_repeat1 = 111,
  aux_sym__func_body_repeat1 = 112,
  aux_sym_class_repeat1 = 113,
  aux_sym_class_repeat2 = 114,
  aux_sym_fundep_repeat1 = 115,
  aux_sym_where_clause_repeat1 = 116,
  aux_sym_ty_infix_repeat1 = 117,
  aux_sym_pat_infix_repeat1 = 118,
  aux_sym_expr_app_repeat1 = 119,
  aux_sym_expr_infix_repeat1 = 120,
  aux_sym__expr_block_repeat1 = 121,
  aux_sym_string_literal_repeat1 = 122,
  aux_sym_path_repeat1 = 123,
  alias_sym_pat_identifier = 124,
  alias_sym_ty_path = 125,
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
  [anon_sym_fn] = "fn",
  [anon_sym_class] = "class",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_member] = "member",
  [anon_sym_of] = "of",
  [anon_sym_where] = "where",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_do] = "do",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
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
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_member] = anon_sym_member,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
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
  [anon_sym_fn] = {
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
  [6] = {.index = 4, .length = 1},
  [8] = {.index = 2, .length = 1},
  [9] = {.index = 5, .length = 1},
  [10] = {.index = 6, .length = 1},
  [11] = {.index = 7, .length = 1},
  [12] = {.index = 8, .length = 1},
  [13] = {.index = 2, .length = 1},
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
    {field_class, 0},
  [6] =
    {field_first, 0},
  [7] =
    {field_class, 3},
  [8] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = alias_sym_ty_path,
  },
  [7] = {
    [0] = alias_sym_pat_identifier,
  },
  [8] = {
    [3] = sym_expr_do,
  },
  [13] = {
    [4] = sym_expr_do,
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
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '`') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('<' <= lookahead && lookahead <= '@') ||
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
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '`') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
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
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_recur);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_infixl);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_infixr);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_member);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 76:
      if (lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_prefix);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_postfix);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 4},
  [5] = {.lex_state = 2, .external_lex_state = 3},
  [6] = {.lex_state = 2, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 4},
  [8] = {.lex_state = 2, .external_lex_state = 4},
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
  [23] = {.lex_state = 2, .external_lex_state = 4},
  [24] = {.lex_state = 2, .external_lex_state = 5},
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
  [35] = {.lex_state = 3, .external_lex_state = 4},
  [36] = {.lex_state = 2, .external_lex_state = 5},
  [37] = {.lex_state = 3, .external_lex_state = 4},
  [38] = {.lex_state = 3, .external_lex_state = 4},
  [39] = {.lex_state = 5, .external_lex_state = 5},
  [40] = {.lex_state = 3, .external_lex_state = 4},
  [41] = {.lex_state = 3, .external_lex_state = 4},
  [42] = {.lex_state = 0, .external_lex_state = 4},
  [43] = {.lex_state = 0, .external_lex_state = 5},
  [44] = {.lex_state = 5, .external_lex_state = 5},
  [45] = {.lex_state = 2, .external_lex_state = 4},
  [46] = {.lex_state = 0, .external_lex_state = 4},
  [47] = {.lex_state = 0, .external_lex_state = 4},
  [48] = {.lex_state = 1, .external_lex_state = 4},
  [49] = {.lex_state = 5, .external_lex_state = 5},
  [50] = {.lex_state = 5, .external_lex_state = 5},
  [51] = {.lex_state = 9, .external_lex_state = 5},
  [52] = {.lex_state = 1, .external_lex_state = 4},
  [53] = {.lex_state = 2, .external_lex_state = 4},
  [54] = {.lex_state = 9, .external_lex_state = 5},
  [55] = {.lex_state = 9, .external_lex_state = 5},
  [56] = {.lex_state = 2, .external_lex_state = 4},
  [57] = {.lex_state = 2, .external_lex_state = 4},
  [58] = {.lex_state = 1, .external_lex_state = 5},
  [59] = {.lex_state = 2, .external_lex_state = 5},
  [60] = {.lex_state = 1, .external_lex_state = 5},
  [61] = {.lex_state = 2, .external_lex_state = 5},
  [62] = {.lex_state = 9, .external_lex_state = 4},
  [63] = {.lex_state = 2, .external_lex_state = 4},
  [64] = {.lex_state = 0, .external_lex_state = 5},
  [65] = {.lex_state = 2, .external_lex_state = 4},
  [66] = {.lex_state = 0, .external_lex_state = 5},
  [67] = {.lex_state = 2, .external_lex_state = 4},
  [68] = {.lex_state = 2, .external_lex_state = 5},
  [69] = {.lex_state = 9, .external_lex_state = 5},
  [70] = {.lex_state = 2, .external_lex_state = 4},
  [71] = {.lex_state = 0, .external_lex_state = 4},
  [72] = {.lex_state = 9, .external_lex_state = 4},
  [73] = {.lex_state = 2, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 5},
  [75] = {.lex_state = 2, .external_lex_state = 4},
  [76] = {.lex_state = 2, .external_lex_state = 4},
  [77] = {.lex_state = 2, .external_lex_state = 4},
  [78] = {.lex_state = 0, .external_lex_state = 5},
  [79] = {.lex_state = 2, .external_lex_state = 4},
  [80] = {.lex_state = 0, .external_lex_state = 4},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 2, .external_lex_state = 4},
  [83] = {.lex_state = 9, .external_lex_state = 4},
  [84] = {.lex_state = 9, .external_lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 4},
  [87] = {.lex_state = 2, .external_lex_state = 4},
  [88] = {.lex_state = 2, .external_lex_state = 4},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 4},
  [91] = {.lex_state = 3, .external_lex_state = 4},
  [92] = {.lex_state = 2, .external_lex_state = 5},
  [93] = {.lex_state = 3, .external_lex_state = 4},
  [94] = {.lex_state = 2, .external_lex_state = 5},
  [95] = {.lex_state = 2, .external_lex_state = 5},
  [96] = {.lex_state = 2, .external_lex_state = 5},
  [97] = {.lex_state = 2, .external_lex_state = 5},
  [98] = {.lex_state = 3, .external_lex_state = 4},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 2, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 5},
  [103] = {.lex_state = 2, .external_lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 5},
  [106] = {.lex_state = 0, .external_lex_state = 4},
  [107] = {.lex_state = 2, .external_lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 0, .external_lex_state = 4},
  [111] = {.lex_state = 3, .external_lex_state = 4},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 2, .external_lex_state = 4},
  [114] = {.lex_state = 3, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 0, .external_lex_state = 4},
  [119] = {.lex_state = 2, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 5},
  [121] = {.lex_state = 0, .external_lex_state = 4},
  [122] = {.lex_state = 0, .external_lex_state = 5},
  [123] = {.lex_state = 0, .external_lex_state = 5},
  [124] = {.lex_state = 2, .external_lex_state = 4},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 5},
  [128] = {.lex_state = 6, .external_lex_state = 5},
  [129] = {.lex_state = 6, .external_lex_state = 5},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 5},
  [132] = {.lex_state = 0, .external_lex_state = 5},
  [133] = {.lex_state = 8, .external_lex_state = 5},
  [134] = {.lex_state = 0, .external_lex_state = 5},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 5},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 0, .external_lex_state = 5},
  [139] = {.lex_state = 0, .external_lex_state = 5},
  [140] = {.lex_state = 0, .external_lex_state = 5},
  [141] = {.lex_state = 8, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 5},
  [143] = {.lex_state = 0, .external_lex_state = 5},
  [144] = {.lex_state = 0, .external_lex_state = 5},
  [145] = {.lex_state = 0, .external_lex_state = 5},
  [146] = {.lex_state = 2, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 5, .external_lex_state = 5},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 5, .external_lex_state = 5},
  [152] = {.lex_state = 5, .external_lex_state = 5},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 9, .external_lex_state = 5},
  [155] = {.lex_state = 2, .external_lex_state = 4},
  [156] = {.lex_state = 2, .external_lex_state = 5},
  [157] = {.lex_state = 3, .external_lex_state = 4},
  [158] = {.lex_state = 2, .external_lex_state = 5},
  [159] = {.lex_state = 5, .external_lex_state = 5},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 0, .external_lex_state = 4},
  [164] = {.lex_state = 2, .external_lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 2, .external_lex_state = 4},
  [167] = {.lex_state = 2, .external_lex_state = 5},
  [168] = {.lex_state = 9, .external_lex_state = 5},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 0, .external_lex_state = 4},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 2, .external_lex_state = 5},
  [173] = {.lex_state = 9, .external_lex_state = 5},
  [174] = {.lex_state = 5, .external_lex_state = 5},
  [175] = {.lex_state = 0, .external_lex_state = 3},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 3},
  [178] = {.lex_state = 2, .external_lex_state = 4},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 8, .external_lex_state = 4},
  [181] = {.lex_state = 8, .external_lex_state = 4},
  [182] = {.lex_state = 0, .external_lex_state = 5},
  [183] = {.lex_state = 5, .external_lex_state = 5},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 2, .external_lex_state = 4},
  [187] = {.lex_state = 2, .external_lex_state = 4},
  [188] = {.lex_state = 0, .external_lex_state = 4},
  [189] = {.lex_state = 9, .external_lex_state = 5},
  [190] = {.lex_state = 2, .external_lex_state = 5},
  [191] = {.lex_state = 5, .external_lex_state = 5},
  [192] = {.lex_state = 9, .external_lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 5},
  [194] = {.lex_state = 9, .external_lex_state = 4},
  [195] = {.lex_state = 2, .external_lex_state = 5},
  [196] = {.lex_state = 2, .external_lex_state = 4},
  [197] = {.lex_state = 9, .external_lex_state = 4},
  [198] = {.lex_state = 2, .external_lex_state = 4},
  [199] = {.lex_state = 0, .external_lex_state = 4},
  [200] = {.lex_state = 2, .external_lex_state = 5},
  [201] = {.lex_state = 0, .external_lex_state = 5},
  [202] = {.lex_state = 2, .external_lex_state = 4},
  [203] = {.lex_state = 9, .external_lex_state = 5},
  [204] = {.lex_state = 0, .external_lex_state = 5},
  [205] = {.lex_state = 9, .external_lex_state = 5},
  [206] = {.lex_state = 2, .external_lex_state = 5},
  [207] = {.lex_state = 0, .external_lex_state = 5},
  [208] = {.lex_state = 0, .external_lex_state = 4},
  [209] = {.lex_state = 0, .external_lex_state = 4},
  [210] = {.lex_state = 2, .external_lex_state = 5},
  [211] = {.lex_state = 0, .external_lex_state = 5},
  [212] = {.lex_state = 0, .external_lex_state = 5},
  [213] = {.lex_state = 0, .external_lex_state = 4},
  [214] = {.lex_state = 0, .external_lex_state = 5},
  [215] = {.lex_state = 2, .external_lex_state = 5},
  [216] = {.lex_state = 0, .external_lex_state = 4},
  [217] = {.lex_state = 0, .external_lex_state = 5},
  [218] = {.lex_state = 0, .external_lex_state = 5},
  [219] = {.lex_state = 2, .external_lex_state = 4},
  [220] = {.lex_state = 0, .external_lex_state = 5},
  [221] = {.lex_state = 0, .external_lex_state = 4},
  [222] = {.lex_state = 0, .external_lex_state = 4},
  [223] = {.lex_state = 0, .external_lex_state = 5},
  [224] = {.lex_state = 9, .external_lex_state = 4},
  [225] = {.lex_state = 2, .external_lex_state = 4},
  [226] = {.lex_state = 2, .external_lex_state = 4},
  [227] = {.lex_state = 0, .external_lex_state = 5},
  [228] = {.lex_state = 0, .external_lex_state = 5},
  [229] = {.lex_state = 0, .external_lex_state = 4},
  [230] = {.lex_state = 0, .external_lex_state = 5},
  [231] = {.lex_state = 2, .external_lex_state = 4},
  [232] = {.lex_state = 0, .external_lex_state = 4},
  [233] = {.lex_state = 0, .external_lex_state = 4},
  [234] = {.lex_state = 0, .external_lex_state = 4},
  [235] = {.lex_state = 2, .external_lex_state = 5},
  [236] = {.lex_state = 9, .external_lex_state = 4},
  [237] = {.lex_state = 2, .external_lex_state = 4},
  [238] = {.lex_state = 9, .external_lex_state = 4},
  [239] = {.lex_state = 2, .external_lex_state = 5},
  [240] = {.lex_state = 3, .external_lex_state = 4},
  [241] = {.lex_state = 0, .external_lex_state = 4},
  [242] = {.lex_state = 3, .external_lex_state = 4},
  [243] = {.lex_state = 9, .external_lex_state = 5},
  [244] = {.lex_state = 3, .external_lex_state = 4},
  [245] = {.lex_state = 0, .external_lex_state = 5},
  [246] = {.lex_state = 0, .external_lex_state = 5},
  [247] = {.lex_state = 0, .external_lex_state = 5},
  [248] = {.lex_state = 0, .external_lex_state = 4},
  [249] = {.lex_state = 0, .external_lex_state = 4},
  [250] = {.lex_state = 0, .external_lex_state = 5},
  [251] = {.lex_state = 0, .external_lex_state = 5},
  [252] = {.lex_state = 0, .external_lex_state = 4},
  [253] = {.lex_state = 0, .external_lex_state = 5},
  [254] = {.lex_state = 0, .external_lex_state = 5},
  [255] = {.lex_state = 0, .external_lex_state = 4},
  [256] = {.lex_state = 0, .external_lex_state = 5},
  [257] = {.lex_state = 10, .external_lex_state = 4},
  [258] = {.lex_state = 10, .external_lex_state = 4},
  [259] = {.lex_state = 0, .external_lex_state = 5},
  [260] = {.lex_state = 0, .external_lex_state = 5},
  [261] = {.lex_state = 0, .external_lex_state = 5},
  [262] = {.lex_state = 0, .external_lex_state = 5},
  [263] = {.lex_state = 0, .external_lex_state = 5},
  [264] = {.lex_state = 0, .external_lex_state = 5},
  [265] = {.lex_state = 10, .external_lex_state = 4},
  [266] = {.lex_state = 0, .external_lex_state = 4},
  [267] = {.lex_state = 0, .external_lex_state = 5},
  [268] = {.lex_state = 3, .external_lex_state = 4},
  [269] = {.lex_state = 0, .external_lex_state = 5},
  [270] = {.lex_state = 0, .external_lex_state = 5},
  [271] = {.lex_state = 0, .external_lex_state = 4},
  [272] = {.lex_state = 2, .external_lex_state = 4},
  [273] = {.lex_state = 0, .external_lex_state = 5},
  [274] = {.lex_state = 9, .external_lex_state = 4},
  [275] = {.lex_state = 2, .external_lex_state = 4},
  [276] = {.lex_state = 0, .external_lex_state = 5},
  [277] = {.lex_state = 0, .external_lex_state = 5},
  [278] = {.lex_state = 0, .external_lex_state = 5},
  [279] = {.lex_state = 0, .external_lex_state = 5},
  [280] = {.lex_state = 3, .external_lex_state = 4},
  [281] = {.lex_state = 0, .external_lex_state = 4},
  [282] = {.lex_state = 10, .external_lex_state = 4},
  [283] = {.lex_state = 0, .external_lex_state = 5},
  [284] = {.lex_state = 2, .external_lex_state = 4},
  [285] = {.lex_state = 10, .external_lex_state = 4},
  [286] = {.lex_state = 0, .external_lex_state = 5},
  [287] = {.lex_state = 0, .external_lex_state = 5},
  [288] = {.lex_state = 2, .external_lex_state = 4},
  [289] = {.lex_state = 10, .external_lex_state = 4},
  [290] = {.lex_state = 3, .external_lex_state = 4},
  [291] = {.lex_state = 2, .external_lex_state = 4},
  [292] = {.lex_state = 0, .external_lex_state = 4},
  [293] = {.lex_state = 10, .external_lex_state = 4},
  [294] = {.lex_state = 0, .external_lex_state = 5},
  [295] = {.lex_state = 2, .external_lex_state = 4},
  [296] = {.lex_state = 0, .external_lex_state = 4},
  [297] = {.lex_state = 0, .external_lex_state = 5},
  [298] = {.lex_state = 0, .external_lex_state = 5},
  [299] = {.lex_state = 3, .external_lex_state = 4},
  [300] = {.lex_state = 2, .external_lex_state = 4},
  [301] = {.lex_state = 2, .external_lex_state = 4},
  [302] = {.lex_state = 0, .external_lex_state = 5},
  [303] = {.lex_state = 0, .external_lex_state = 4},
  [304] = {.lex_state = 0, .external_lex_state = 5},
  [305] = {.lex_state = 2, .external_lex_state = 4},
  [306] = {.lex_state = 0, .external_lex_state = 5},
  [307] = {.lex_state = 0, .external_lex_state = 5},
  [308] = {.lex_state = 0, .external_lex_state = 5},
  [309] = {.lex_state = 0, .external_lex_state = 4},
  [310] = {.lex_state = 0, .external_lex_state = 4},
  [311] = {.lex_state = 3, .external_lex_state = 4},
  [312] = {.lex_state = 0, .external_lex_state = 5},
  [313] = {.lex_state = 0, .external_lex_state = 4},
  [314] = {.lex_state = 3, .external_lex_state = 4},
  [315] = {.lex_state = 2, .external_lex_state = 4},
  [316] = {.lex_state = 2, .external_lex_state = 4},
  [317] = {.lex_state = 0, .external_lex_state = 5},
  [318] = {.lex_state = 0, .external_lex_state = 5},
  [319] = {.lex_state = 0, .external_lex_state = 4},
  [320] = {.lex_state = 0, .external_lex_state = 6},
  [321] = {.lex_state = 0, .external_lex_state = 5},
  [322] = {.lex_state = 0, .external_lex_state = 5},
  [323] = {.lex_state = 0, .external_lex_state = 5},
  [324] = {.lex_state = 0, .external_lex_state = 5},
  [325] = {.lex_state = 3, .external_lex_state = 4},
  [326] = {.lex_state = 0, .external_lex_state = 5},
  [327] = {.lex_state = 3, .external_lex_state = 4},
  [328] = {.lex_state = 2, .external_lex_state = 4},
  [329] = {.lex_state = 0, .external_lex_state = 4},
  [330] = {.lex_state = 0, .external_lex_state = 4},
  [331] = {.lex_state = 0, .external_lex_state = 5},
  [332] = {.lex_state = 0, .external_lex_state = 4},
  [333] = {.lex_state = 0, .external_lex_state = 5},
  [334] = {.lex_state = 0, .external_lex_state = 5},
  [335] = {.lex_state = 0, .external_lex_state = 5},
  [336] = {.lex_state = 0, .external_lex_state = 4},
  [337] = {.lex_state = 0, .external_lex_state = 4},
  [338] = {.lex_state = 0, .external_lex_state = 4},
  [339] = {.lex_state = 0, .external_lex_state = 5},
  [340] = {.lex_state = 0, .external_lex_state = 5},
  [341] = {.lex_state = 0, .external_lex_state = 4},
  [342] = {.lex_state = 0, .external_lex_state = 5},
  [343] = {.lex_state = 0, .external_lex_state = 5},
  [344] = {.lex_state = 0, .external_lex_state = 5},
  [345] = {.lex_state = 0, .external_lex_state = 4},
  [346] = {.lex_state = 0, .external_lex_state = 5},
  [347] = {.lex_state = 0, .external_lex_state = 6},
  [348] = {.lex_state = 0, .external_lex_state = 5},
  [349] = {.lex_state = 0, .external_lex_state = 5},
  [350] = {.lex_state = 0, .external_lex_state = 6},
  [351] = {.lex_state = 0, .external_lex_state = 5},
  [352] = {.lex_state = 0, .external_lex_state = 4},
  [353] = {.lex_state = 0, .external_lex_state = 4},
  [354] = {.lex_state = 0, .external_lex_state = 5},
  [355] = {.lex_state = 0, .external_lex_state = 4},
  [356] = {.lex_state = 0, .external_lex_state = 5},
  [357] = {.lex_state = 0, .external_lex_state = 4},
  [358] = {.lex_state = 0, .external_lex_state = 5},
  [359] = {.lex_state = 0, .external_lex_state = 6},
  [360] = {.lex_state = 0, .external_lex_state = 5},
  [361] = {.lex_state = 0, .external_lex_state = 5},
  [362] = {.lex_state = 0, .external_lex_state = 4},
  [363] = {.lex_state = 0, .external_lex_state = 5},
  [364] = {.lex_state = 0, .external_lex_state = 5},
  [365] = {.lex_state = 0, .external_lex_state = 5},
  [366] = {.lex_state = 0, .external_lex_state = 5},
  [367] = {.lex_state = 0, .external_lex_state = 5},
  [368] = {.lex_state = 0, .external_lex_state = 5},
  [369] = {.lex_state = 0, .external_lex_state = 5},
  [370] = {.lex_state = 0, .external_lex_state = 4},
  [371] = {.lex_state = 0, .external_lex_state = 5},
  [372] = {.lex_state = 0, .external_lex_state = 5},
  [373] = {.lex_state = 3, .external_lex_state = 4},
  [374] = {.lex_state = 0, .external_lex_state = 5},
  [375] = {.lex_state = 0, .external_lex_state = 5},
  [376] = {.lex_state = 0, .external_lex_state = 4},
  [377] = {.lex_state = 0, .external_lex_state = 5},
  [378] = {.lex_state = 0, .external_lex_state = 5},
  [379] = {.lex_state = 0, .external_lex_state = 5},
  [380] = {.lex_state = 0, .external_lex_state = 5},
  [381] = {.lex_state = 0, .external_lex_state = 5},
  [382] = {.lex_state = 0, .external_lex_state = 4},
  [383] = {.lex_state = 0, .external_lex_state = 5},
  [384] = {.lex_state = 0, .external_lex_state = 5},
  [385] = {.lex_state = 0, .external_lex_state = 5},
  [386] = {.lex_state = 2, .external_lex_state = 4},
  [387] = {.lex_state = 0, .external_lex_state = 4},
  [388] = {.lex_state = 0, .external_lex_state = 4},
  [389] = {.lex_state = 0, .external_lex_state = 4},
  [390] = {.lex_state = 0, .external_lex_state = 6},
  [391] = {.lex_state = 0, .external_lex_state = 6},
  [392] = {.lex_state = 0, .external_lex_state = 4},
  [393] = {.lex_state = 0, .external_lex_state = 4},
  [394] = {.lex_state = 0, .external_lex_state = 4},
  [395] = {.lex_state = 0, .external_lex_state = 4},
  [396] = {.lex_state = 0, .external_lex_state = 6},
  [397] = {.lex_state = 2, .external_lex_state = 4},
  [398] = {.lex_state = 0, .external_lex_state = 4},
  [399] = {.lex_state = 0, .external_lex_state = 4},
  [400] = {.lex_state = 2, .external_lex_state = 4},
  [401] = {.lex_state = 0, .external_lex_state = 4},
  [402] = {.lex_state = 0, .external_lex_state = 4},
  [403] = {.lex_state = 2, .external_lex_state = 4},
  [404] = {.lex_state = 0, .external_lex_state = 4},
  [405] = {.lex_state = 0, .external_lex_state = 4},
  [406] = {.lex_state = 2, .external_lex_state = 4},
  [407] = {.lex_state = 2, .external_lex_state = 4},
  [408] = {.lex_state = 0, .external_lex_state = 6},
  [409] = {.lex_state = 0, .external_lex_state = 6},
  [410] = {.lex_state = 0, .external_lex_state = 4},
  [411] = {.lex_state = 0, .external_lex_state = 4},
  [412] = {.lex_state = 0, .external_lex_state = 4},
  [413] = {.lex_state = 0, .external_lex_state = 4},
  [414] = {.lex_state = 0, .external_lex_state = 4},
  [415] = {.lex_state = 0, .external_lex_state = 4},
  [416] = {.lex_state = 0, .external_lex_state = 4},
  [417] = {.lex_state = 0, .external_lex_state = 4},
  [418] = {.lex_state = 2, .external_lex_state = 4},
  [419] = {.lex_state = 2, .external_lex_state = 4},
  [420] = {.lex_state = 0, .external_lex_state = 4},
  [421] = {.lex_state = 2, .external_lex_state = 4},
  [422] = {.lex_state = 0, .external_lex_state = 4},
  [423] = {.lex_state = 0, .external_lex_state = 4},
  [424] = {.lex_state = 0, .external_lex_state = 4},
  [425] = {.lex_state = 2, .external_lex_state = 4},
  [426] = {.lex_state = 0, .external_lex_state = 6},
  [427] = {.lex_state = 5, .external_lex_state = 4},
  [428] = {.lex_state = 0, .external_lex_state = 4},
  [429] = {.lex_state = 2, .external_lex_state = 4},
  [430] = {.lex_state = 2, .external_lex_state = 4},
  [431] = {.lex_state = 0, .external_lex_state = 6},
  [432] = {.lex_state = 2, .external_lex_state = 4},
  [433] = {.lex_state = 0, .external_lex_state = 4},
  [434] = {.lex_state = 0, .external_lex_state = 4},
  [435] = {.lex_state = 0, .external_lex_state = 4},
  [436] = {.lex_state = 0, .external_lex_state = 4},
  [437] = {.lex_state = 0, .external_lex_state = 4},
  [438] = {.lex_state = 2, .external_lex_state = 4},
  [439] = {.lex_state = 2, .external_lex_state = 4},
  [440] = {.lex_state = 0, .external_lex_state = 4},
  [441] = {.lex_state = 0, .external_lex_state = 6},
  [442] = {.lex_state = 0, .external_lex_state = 4},
  [443] = {.lex_state = 0, .external_lex_state = 6},
  [444] = {.lex_state = 2, .external_lex_state = 4},
  [445] = {.lex_state = 0, .external_lex_state = 4},
  [446] = {.lex_state = 0, .external_lex_state = 6},
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
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_member] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
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
    [sym_source_file] = STATE(440),
    [sym_attribute] = STATE(222),
    [sym_module] = STATE(437),
    [aux_sym_module_repeat1] = STATE(222),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [aux_sym__token1] = ACTIONS(3),
    [sym_empty_file] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_prefix,
    ACTIONS(15), 1,
      anon_sym_infix,
    ACTIONS(19), 1,
      anon_sym_postfix,
    ACTIONS(21), 1,
      anon_sym_foreign,
    ACTIONS(23), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_class,
    ACTIONS(29), 1,
      anon_sym_member,
    ACTIONS(31), 1,
      sym__layout_end,
    STATE(279), 1,
      sym_item,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    STATE(378), 1,
      sym__type_ctor,
    STATE(379), 1,
      sym__type_alias,
    STATE(380), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(17), 2,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(7), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    STATE(318), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(385), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [77] = 22,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_prefix,
    ACTIONS(15), 1,
      anon_sym_infix,
    ACTIONS(19), 1,
      anon_sym_postfix,
    ACTIONS(21), 1,
      anon_sym_foreign,
    ACTIONS(23), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_class,
    ACTIONS(29), 1,
      anon_sym_member,
    ACTIONS(33), 1,
      sym__layout_end,
    STATE(259), 1,
      sym_item,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    STATE(378), 1,
      sym__type_ctor,
    STATE(379), 1,
      sym__type_alias,
    STATE(380), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(17), 2,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(7), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    STATE(318), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(385), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [154] = 21,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_prefix,
    ACTIONS(15), 1,
      anon_sym_infix,
    ACTIONS(19), 1,
      anon_sym_postfix,
    ACTIONS(21), 1,
      anon_sym_foreign,
    ACTIONS(23), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_class,
    ACTIONS(29), 1,
      anon_sym_member,
    STATE(342), 1,
      sym_item,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    STATE(378), 1,
      sym__type_ctor,
    STATE(379), 1,
      sym__type_alias,
    STATE(380), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(17), 2,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(7), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    STATE(318), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(385), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [228] = 16,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_fn,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_recur,
    ACTIONS(55), 1,
      sym__layout_end,
    STATE(200), 1,
      sym_expr_app,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(24), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(245), 7,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym__stmt,
      sym_stmt_let,
  [291] = 16,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_fn,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_recur,
    ACTIONS(57), 1,
      sym__layout_end,
    STATE(200), 1,
      sym_expr_app,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(24), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(286), 7,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym__stmt,
      sym_stmt_let,
  [354] = 20,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_prefix,
    ACTIONS(15), 1,
      anon_sym_infix,
    ACTIONS(19), 1,
      anon_sym_postfix,
    ACTIONS(21), 1,
      anon_sym_foreign,
    ACTIONS(23), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(27), 1,
      anon_sym_class,
    ACTIONS(29), 1,
      anon_sym_member,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    STATE(378), 1,
      sym__type_ctor,
    STATE(379), 1,
      sym__type_alias,
    STATE(380), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(17), 2,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(42), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    STATE(318), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(360), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [425] = 15,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_fn,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_recur,
    STATE(200), 1,
      sym_expr_app,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(24), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(354), 7,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym__stmt,
      sym_stmt_let,
  [485] = 15,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_recur,
    STATE(186), 1,
      sym_expr_app,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(407), 5,
      sym__expression,
      sym_expr_infix,
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
  [543] = 15,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_recur,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_expr_app,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(438), 5,
      sym__expression,
      sym_expr_infix,
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
  [601] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_recur,
    STATE(186), 1,
      sym_expr_app,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(411), 5,
      sym__expression,
      sym_expr_infix,
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
  [656] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_recur,
    STATE(186), 1,
      sym_expr_app,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(295), 5,
      sym__expression,
      sym_expr_infix,
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
  [711] = 14,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_fn,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_recur,
    STATE(200), 1,
      sym_expr_app,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(383), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(24), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [766] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_recur,
    STATE(186), 1,
      sym_expr_app,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(392), 5,
      sym__expression,
      sym_expr_infix,
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
  [821] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_recur,
    STATE(186), 1,
      sym_expr_app,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(416), 5,
      sym__expression,
      sym_expr_infix,
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
  [876] = 14,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_fn,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_recur,
    STATE(200), 1,
      sym_expr_app,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(367), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(24), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [931] = 14,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_fn,
    ACTIONS(41), 1,
      anon_sym_do,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_recur,
    STATE(200), 1,
      sym_expr_app,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(372), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(24), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [986] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_recur,
    STATE(186), 1,
      sym_expr_app,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(420), 5,
      sym__expression,
      sym_expr_infix,
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
  [1041] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_do,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      sym_recur,
    STATE(186), 1,
      sym_expr_app,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(300), 5,
      sym__expression,
      sym_expr_infix,
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
  [1096] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym_operator,
    ACTIONS(89), 1,
      sym_recur,
    STATE(166), 1,
      aux_sym_expr_infix_repeat1,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(85), 2,
      anon_sym_then,
      anon_sym_else,
    STATE(23), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1149] = 11,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_recur,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(93), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(91), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(23), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1195] = 11,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      aux_sym_int_literal_token1,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      sym_recur,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(103), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(108), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(101), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(22), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1241] = 11,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_recur,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(119), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(117), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(22), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1287] = 13,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_BQUOTE,
    ACTIONS(125), 1,
      sym_operator,
    ACTIONS(127), 1,
      sym_recur,
    STATE(195), 1,
      aux_sym_expr_infix_repeat1,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(81), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(29), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1337] = 11,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_recur,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(131), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(129), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(23), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1383] = 10,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      sym_recur,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(129), 4,
      sym__layout_semicolon,
      sym__layout_end,
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
  [1426] = 10,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      aux_sym_int_literal_token1,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      sym_recur,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(142), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(101), 4,
      sym__layout_semicolon,
      sym__layout_end,
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
  [1469] = 10,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      sym_recur,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(91), 4,
      sym__layout_semicolon,
      sym__layout_end,
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
  [1512] = 10,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      sym_recur,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(117), 4,
      sym__layout_semicolon,
      sym__layout_end,
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
  [1555] = 5,
    ACTIONS(155), 1,
      anon_sym_EQ,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(153), 14,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_member,
  [1585] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_recur,
    STATE(196), 1,
      sym_expr_app,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(25), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1624] = 10,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_recur,
    STATE(235), 1,
      sym_expr_app,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
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
  [1663] = 10,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_recur,
    STATE(239), 1,
      sym_expr_app,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
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
  [1702] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      aux_sym_int_literal_token1,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      sym_recur,
    STATE(202), 1,
      sym_expr_app,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(73), 2,
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
  [1741] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(171), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(169), 13,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_member,
      sym_identifier,
  [1766] = 11,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_where,
    ACTIONS(177), 1,
      sym_operator,
    STATE(158), 1,
      sym_path,
    STATE(206), 1,
      aux_sym_ty_infix_repeat1,
    STATE(334), 1,
      sym_where_clause,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(179), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(68), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [1806] = 3,
    ACTIONS(183), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(181), 14,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_member,
  [1830] = 3,
    ACTIONS(187), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(185), 14,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_member,
  [1854] = 10,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      sym_operator,
    STATE(152), 1,
      sym_path,
    STATE(174), 1,
      aux_sym_ty_infix_repeat1,
    STATE(341), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(191), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
    ACTIONS(197), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(49), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [1892] = 3,
    ACTIONS(201), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(199), 14,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_member,
  [1916] = 3,
    ACTIONS(205), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 14,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_member,
  [1940] = 5,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(212), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(42), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(210), 11,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_member,
  [1968] = 7,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_path,
    STATE(345), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_PIPE,
    STATE(43), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [1999] = 8,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_path,
    STATE(341), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(224), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(222), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(49), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2032] = 11,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_where,
    ACTIONS(230), 1,
      sym_operator,
    STATE(155), 1,
      sym_path,
    STATE(225), 1,
      aux_sym_ty_infix_repeat1,
    STATE(353), 1,
      aux_sym_path_repeat1,
    STATE(444), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(77), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2071] = 11,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    STATE(158), 1,
      sym_path,
    STATE(167), 1,
      sym_ty_app,
    STATE(228), 1,
      sym_ty_infix,
    STATE(230), 1,
      aux_sym__type_ctor_repeat1,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(344), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2110] = 11,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    STATE(158), 1,
      sym_path,
    STATE(167), 1,
      sym_ty_app,
    STATE(217), 1,
      aux_sym__type_ctor_repeat1,
    STATE(228), 1,
      sym_ty_infix,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(317), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2149] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(238), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(236), 7,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [2174] = 8,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_path,
    STATE(341), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(244), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(242), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(50), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2207] = 8,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_path,
    STATE(341), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(249), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(50), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2240] = 10,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_operator,
    STATE(168), 1,
      sym_path,
    STATE(205), 1,
      aux_sym_ty_infix_repeat1,
    STATE(336), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(197), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(55), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2277] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(262), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(260), 7,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [2302] = 10,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_path,
    STATE(198), 1,
      sym_ty_app,
    STATE(288), 1,
      sym_ty_infix,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(397), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2338] = 8,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_path,
    STATE(336), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(224), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(55), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2370] = 8,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_path,
    STATE(336), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(244), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(69), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2402] = 10,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_path,
    STATE(198), 1,
      sym_ty_app,
    STATE(288), 1,
      sym_ty_infix,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(432), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2438] = 10,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_path,
    STATE(198), 1,
      sym_ty_app,
    STATE(288), 1,
      sym_ty_infix,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(386), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2474] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(260), 5,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(262), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [2498] = 8,
    ACTIONS(249), 1,
      anon_sym_where,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_path,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(59), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2530] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(236), 5,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(238), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [2554] = 8,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_where,
    STATE(158), 1,
      sym_path,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(224), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(68), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2586] = 10,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      sym_operator,
    STATE(192), 1,
      sym_path,
    STATE(236), 1,
      aux_sym_ty_infix_repeat1,
    STATE(337), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(83), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2622] = 10,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_path,
    STATE(198), 1,
      sym_ty_app,
    STATE(288), 1,
      sym_ty_infix,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(429), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2658] = 7,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_path,
    STATE(345), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(43), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2688] = 10,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_path,
    STATE(198), 1,
      sym_ty_app,
    STATE(288), 1,
      sym_ty_infix,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(421), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2724] = 7,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_path,
    STATE(345), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(294), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(64), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2754] = 10,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_path,
    STATE(198), 1,
      sym_ty_app,
    STATE(288), 1,
      sym_ty_infix,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(425), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2790] = 8,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_where,
    STATE(158), 1,
      sym_path,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(244), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(59), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2822] = 8,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_path,
    STATE(336), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(69), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2854] = 10,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_path,
    STATE(198), 1,
      sym_ty_app,
    STATE(288), 1,
      sym_ty_infix,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(419), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [2890] = 3,
    ACTIONS(308), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(306), 12,
      anon_sym_AT,
      anon_sym_module,
      anon_sym_import,
      anon_sym_prefix,
      anon_sym_infixl,
      anon_sym_infixr,
      anon_sym_postfix,
      anon_sym_foreign,
      anon_sym_type,
      anon_sym_fn,
      anon_sym_class,
      anon_sym_member,
  [2912] = 8,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym_path,
    STATE(337), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(72), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2943] = 8,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_where,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_path,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(224), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(77), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2974] = 7,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_path,
    STATE(345), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(316), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(78), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3003] = 8,
    ACTIONS(249), 1,
      anon_sym_where,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_path,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(75), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3034] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(324), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(326), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3055] = 8,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_where,
    STATE(155), 1,
      sym_path,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(244), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(75), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3086] = 7,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_path,
    STATE(345), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(328), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(43), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3115] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(169), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(171), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3136] = 9,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(155), 1,
      sym_path,
    STATE(198), 1,
      sym_ty_app,
    STATE(288), 1,
      sym_ty_infix,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(418), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3169] = 9,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(155), 1,
      sym_path,
    STATE(198), 1,
      sym_ty_app,
    STATE(288), 1,
      sym_ty_infix,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(406), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3202] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(187), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(185), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3223] = 8,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym_path,
    STATE(337), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(72), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3254] = 8,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym_path,
    STATE(337), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(83), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3285] = 9,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(158), 1,
      sym_path,
    STATE(167), 1,
      sym_ty_app,
    STATE(228), 1,
      sym_ty_infix,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(326), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3318] = 9,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(158), 1,
      sym_path,
    STATE(167), 1,
      sym_ty_app,
    STATE(228), 1,
      sym_ty_infix,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(343), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3351] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(205), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(203), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3372] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(330), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(332), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3393] = 9,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(158), 1,
      sym_path,
    STATE(167), 1,
      sym_ty_app,
    STATE(228), 1,
      sym_ty_infix,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(340), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3426] = 9,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(158), 1,
      sym_path,
    STATE(167), 1,
      sym_ty_app,
    STATE(228), 1,
      sym_ty_infix,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(321), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3459] = 7,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(242), 1,
      sym_path,
    STATE(329), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(98), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3487] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(169), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(171), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3507] = 7,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(242), 1,
      sym_path,
    STATE(329), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(294), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(91), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3535] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(187), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(185), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3555] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(205), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(203), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3575] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(330), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(332), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3595] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(324), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(326), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3615] = 7,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    STATE(242), 1,
      sym_path,
    STATE(329), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(98), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3643] = 8,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_path,
    STATE(183), 1,
      sym_ty_app,
    STATE(212), 1,
      sym_ty_infix,
    STATE(341), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(39), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3672] = 8,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_path,
    STATE(189), 1,
      sym_ty_app,
    STATE(212), 1,
      sym_ty_infix,
    STATE(336), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(51), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3701] = 7,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(439), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(103), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [3728] = 9,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(352), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_where,
    STATE(306), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(360), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(123), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [3759] = 7,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      sym_operator,
    STATE(284), 1,
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
  [3786] = 7,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_of,
    STATE(155), 1,
      sym_path,
    STATE(329), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(106), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3813] = 9,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      anon_sym_where,
    ACTIONS(370), 1,
      anon_sym_EQ,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    STATE(287), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(374), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(102), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [3844] = 7,
    ACTIONS(249), 1,
      anon_sym_of,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(155), 1,
      sym_path,
    STATE(329), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(106), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3871] = 7,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(400), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(103), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [3898] = 8,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym_path,
    STATE(224), 1,
      sym_ty_app,
    STATE(325), 1,
      sym_ty_infix,
    STATE(337), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(62), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3927] = 7,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym_path,
    STATE(274), 1,
      sym_ty_app,
    STATE(337), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(84), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3953] = 7,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_path,
    STATE(243), 1,
      sym_ty_app,
    STATE(336), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(54), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3979] = 4,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(236), 3,
      anon_sym_as,
      anon_sym_of,
      sym_identifier,
    ACTIONS(238), 5,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [3999] = 7,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(158), 1,
      sym_path,
    STATE(215), 1,
      sym_ty_app,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(61), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4025] = 5,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(119), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4047] = 4,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(260), 3,
      anon_sym_as,
      anon_sym_of,
      sym_identifier,
    ACTIONS(262), 5,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [4067] = 7,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(155), 1,
      sym_path,
    STATE(275), 1,
      sym_ty_app,
    STATE(353), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(73), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4093] = 6,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(155), 1,
      sym_path,
    STATE(329), 1,
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
  [4117] = 5,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(388), 2,
      anon_sym_EQ,
      anon_sym_DASH_GT,
    STATE(117), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4139] = 6,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_EQ,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(125), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4163] = 5,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(401), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(124), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4185] = 4,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(236), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(238), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4205] = 7,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_path,
    STATE(191), 1,
      sym_ty_app,
    STATE(341), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(44), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4231] = 4,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(260), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(262), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4251] = 6,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_where,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(123), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
    ACTIONS(406), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_PIPE,
  [4275] = 5,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(388), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(124), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4297] = 5,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(117), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4318] = 5,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(117), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4339] = 4,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(423), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(262), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [4358] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(260), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(262), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [4377] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(236), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(238), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [4396] = 5,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(117), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4417] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(427), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(429), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4434] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_where,
    STATE(134), 1,
      aux_sym_class_repeat1,
    STATE(312), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(437), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4458] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(238), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [4476] = 7,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_where,
    ACTIONS(439), 1,
      anon_sym_EQ,
    STATE(182), 1,
      aux_sym_class_repeat1,
    STATE(254), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(441), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4500] = 4,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(126), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [4518] = 5,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(447), 1,
      anon_sym_where,
    STATE(139), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(445), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [4538] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(449), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_identifier,
  [4552] = 7,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_where,
    ACTIONS(451), 1,
      anon_sym_EQ,
    STATE(144), 1,
      aux_sym_class_repeat1,
    STATE(260), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(453), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4576] = 5,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(460), 1,
      anon_sym_where,
    STATE(139), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(458), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [4596] = 4,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(462), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(262), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [4614] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(260), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(262), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [4632] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(464), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_identifier,
  [4646] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(466), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(468), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [4662] = 7,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_where,
    STATE(182), 1,
      aux_sym_class_repeat1,
    STATE(312), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(437), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4686] = 5,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_where,
    STATE(139), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(470), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [4706] = 5,
    ACTIONS(474), 1,
      aux_sym_int_literal_token1,
    ACTIONS(478), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(476), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(37), 3,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
  [4726] = 5,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(328), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(113), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [4746] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(480), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(449), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [4762] = 4,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(397), 1,
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
  [4780] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(482), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(484), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [4796] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(486), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(464), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [4812] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(427), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(429), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [4828] = 6,
    ACTIONS(488), 1,
      sym_identifier,
    STATE(66), 1,
      sym__ty_path,
    STATE(131), 1,
      sym_path,
    STATE(345), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(223), 2,
      sym_where_member,
      sym_where_kind,
  [4849] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(486), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(464), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [4864] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(427), 3,
      anon_sym_of,
      anon_sym_where,
      sym_identifier,
    ACTIONS(429), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
  [4879] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(486), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(464), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
  [4894] = 4,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(490), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(262), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [4911] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(427), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(429), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
  [4926] = 5,
    ACTIONS(492), 1,
      sym_operator,
    STATE(159), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(222), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
    ACTIONS(224), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4945] = 6,
    ACTIONS(495), 1,
      sym_identifier,
    ACTIONS(497), 1,
      anon_sym_EQ,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(208), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [4966] = 6,
    ACTIONS(488), 1,
      sym_identifier,
    STATE(66), 1,
      sym__ty_path,
    STATE(131), 1,
      sym_path,
    STATE(345), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(193), 2,
      sym_where_member,
      sym_where_kind,
  [4987] = 4,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(434), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5004] = 6,
    ACTIONS(503), 1,
      sym_identifier,
    STATE(66), 1,
      sym__ty_path,
    STATE(131), 1,
      sym_path,
    STATE(345), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(223), 2,
      sym_where_member,
      sym_where_kind,
  [5025] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(464), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(486), 3,
      anon_sym_of,
      anon_sym_where,
      sym_identifier,
  [5040] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(505), 1,
      anon_sym_foreign,
    ACTIONS(507), 1,
      sym__layout_end,
    STATE(256), 1,
      sym_func,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5063] = 5,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym_operator,
    STATE(187), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(509), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [5082] = 6,
    ACTIONS(177), 1,
      sym_operator,
    ACTIONS(511), 1,
      anon_sym_where,
    STATE(206), 1,
      aux_sym_ty_infix_repeat1,
    STATE(334), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(179), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5103] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(429), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [5118] = 6,
    ACTIONS(513), 1,
      sym_identifier,
    STATE(93), 1,
      sym__ty_path,
    STATE(242), 1,
      sym_path,
    STATE(329), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(299), 2,
      sym_where_member,
      sym_where_kind,
  [5139] = 6,
    ACTIONS(503), 1,
      sym_identifier,
    STATE(66), 1,
      sym__ty_path,
    STATE(131), 1,
      sym_path,
    STATE(345), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(214), 2,
      sym_where_member,
      sym_where_kind,
  [5160] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(505), 1,
      anon_sym_foreign,
    ACTIONS(515), 1,
      sym__layout_end,
    STATE(277), 1,
      sym_func,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5183] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(480), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(449), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
  [5198] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(480), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(449), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [5213] = 5,
    ACTIONS(195), 1,
      sym_operator,
    STATE(159), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(517), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
    ACTIONS(519), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5232] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(505), 1,
      anon_sym_foreign,
    ACTIONS(521), 1,
      sym__layout_end,
    STATE(270), 1,
      sym_func,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5255] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(505), 1,
      anon_sym_foreign,
    ACTIONS(523), 1,
      sym__layout_end,
    STATE(267), 1,
      sym_func,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5278] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(505), 1,
      anon_sym_foreign,
    ACTIONS(525), 1,
      sym__layout_end,
    STATE(264), 1,
      sym_func,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5301] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(449), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(480), 3,
      anon_sym_of,
      anon_sym_where,
      sym_identifier,
  [5316] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(505), 1,
      anon_sym_foreign,
    ACTIONS(527), 1,
      sym__layout_end,
    STATE(262), 1,
      sym_func,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5339] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(238), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [5356] = 4,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(260), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(262), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [5373] = 4,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(529), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_where,
  [5390] = 5,
    ACTIONS(195), 1,
      sym_operator,
    STATE(174), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(191), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
    ACTIONS(197), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5409] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(505), 1,
      anon_sym_foreign,
    ACTIONS(534), 1,
      sym__layout_end,
    STATE(251), 1,
      sym_func,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5432] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(505), 1,
      anon_sym_foreign,
    ACTIONS(536), 1,
      sym__layout_end,
    STATE(304), 1,
      sym_func,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5455] = 5,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(87), 1,
      sym_operator,
    STATE(166), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(81), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [5474] = 5,
    ACTIONS(538), 1,
      anon_sym_BQUOTE,
    ACTIONS(541), 1,
      sym_operator,
    STATE(187), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(91), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [5493] = 6,
    ACTIONS(513), 1,
      sym_identifier,
    STATE(93), 1,
      sym__ty_path,
    STATE(242), 1,
      sym_path,
    STATE(329), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(327), 2,
      sym_where_member,
      sym_where_kind,
  [5514] = 5,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      sym_operator,
    STATE(205), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(197), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5532] = 5,
    ACTIONS(544), 1,
      anon_sym_BQUOTE,
    ACTIONS(547), 1,
      sym_operator,
    STATE(190), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(91), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5550] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(224), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(222), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
  [5564] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(429), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [5578] = 4,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(550), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [5594] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(486), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(464), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [5608] = 5,
    ACTIONS(123), 1,
      anon_sym_BQUOTE,
    ACTIONS(125), 1,
      sym_operator,
    STATE(190), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(509), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5626] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(129), 5,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [5638] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(480), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(449), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [5652] = 6,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 1,
      sym_operator,
    ACTIONS(554), 1,
      anon_sym_where,
    STATE(225), 1,
      aux_sym_ty_infix_repeat1,
    STATE(444), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5672] = 6,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(505), 1,
      anon_sym_foreign,
    STATE(364), 1,
      sym_func,
    STATE(375), 1,
      sym__func_body,
    STATE(377), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5692] = 5,
    ACTIONS(123), 1,
      anon_sym_BQUOTE,
    ACTIONS(125), 1,
      sym_operator,
    STATE(195), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(81), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5710] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(529), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_where,
  [5722] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(91), 5,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [5734] = 5,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      sym_operator,
    STATE(203), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(224), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5752] = 4,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(559), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [5768] = 5,
    ACTIONS(258), 1,
      sym_operator,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(519), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5786] = 4,
    ACTIONS(177), 1,
      sym_operator,
    STATE(210), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(519), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
  [5802] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(561), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [5818] = 5,
    ACTIONS(495), 1,
      sym_identifier,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(209), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [5836] = 5,
    ACTIONS(406), 1,
      anon_sym_EQ,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(571), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(209), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [5854] = 4,
    ACTIONS(574), 1,
      sym_operator,
    STATE(210), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(224), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
  [5870] = 5,
    ACTIONS(435), 1,
      anon_sym_where,
    ACTIONS(577), 1,
      anon_sym_EQ,
    STATE(308), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(579), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5888] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(197), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [5899] = 5,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_DASH_GT,
    STATE(201), 1,
      sym_fundep,
    STATE(310), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5916] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(550), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5931] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(224), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
      sym_operator,
  [5942] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(587), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [5953] = 4,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    STATE(227), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(589), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5968] = 4,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(561), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5983] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(594), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [5994] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(559), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6009] = 5,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_DASH_GT,
    STATE(132), 1,
      sym_fundep,
    STATE(310), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6026] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(596), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(42), 2,
      sym_attribute,
      aux_sym_module_repeat1,
  [6041] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(561), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [6052] = 5,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      sym_operator,
    STATE(236), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6069] = 4,
    ACTIONS(230), 1,
      sym_operator,
    STATE(237), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(519), 2,
      anon_sym_RPAREN,
      anon_sym_where,
  [6084] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(587), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [6095] = 4,
    ACTIONS(598), 1,
      anon_sym_PIPE,
    STATE(227), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(601), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6110] = 4,
    ACTIONS(511), 1,
      anon_sym_where,
    STATE(334), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(179), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6125] = 5,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(131), 1,
      sym_path,
    STATE(211), 1,
      sym__ty_path,
    STATE(345), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6142] = 4,
    ACTIONS(234), 1,
      anon_sym_PIPE,
    STATE(227), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(603), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6157] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(605), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [6168] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(594), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [6179] = 5,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_DASH_GT,
    STATE(138), 1,
      sym_fundep,
    STATE(310), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6196] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(605), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [6207] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(91), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
  [6218] = 5,
    ACTIONS(282), 1,
      sym_operator,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6235] = 4,
    ACTIONS(607), 1,
      sym_operator,
    STATE(237), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(224), 2,
      anon_sym_RPAREN,
      anon_sym_where,
  [6250] = 5,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      sym_operator,
    STATE(238), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6267] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(129), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
  [6278] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(464), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [6289] = 4,
    ACTIONS(474), 1,
      aux_sym_int_literal_token1,
    STATE(271), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(476), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
  [6304] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(429), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [6315] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(224), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6328] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(449), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [6339] = 4,
    ACTIONS(613), 1,
      sym__layout_semicolon,
    ACTIONS(615), 1,
      sym__layout_end,
    STATE(283), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6353] = 4,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    ACTIONS(619), 1,
      sym__layout_end,
    STATE(250), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6367] = 4,
    ACTIONS(621), 1,
      sym__layout_semicolon,
    ACTIONS(624), 1,
      sym__layout_end,
    STATE(247), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6381] = 4,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(371), 1,
      sym_path,
    STATE(376), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6395] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(329), 1,
      aux_sym_path_repeat1,
    STATE(394), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6409] = 4,
    ACTIONS(626), 1,
      sym__layout_semicolon,
    ACTIONS(629), 1,
      sym__layout_end,
    STATE(250), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6423] = 4,
    ACTIONS(527), 1,
      sym__layout_end,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    STATE(261), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6437] = 4,
    ACTIONS(458), 1,
      anon_sym_DASH_GT,
    ACTIONS(631), 1,
      sym_identifier,
    STATE(252), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6451] = 4,
    ACTIONS(527), 1,
      sym__layout_end,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    STATE(250), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6465] = 3,
    ACTIONS(634), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(636), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6477] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(329), 1,
      aux_sym_path_repeat1,
    STATE(395), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6491] = 4,
    ACTIONS(525), 1,
      sym__layout_end,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    STATE(263), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6505] = 4,
    ACTIONS(638), 1,
      aux_sym_string_literal_token1,
    ACTIONS(640), 1,
      anon_sym_DQUOTE2,
    STATE(265), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(642), 2,
      sym_comment,
      aux_sym__token1,
  [6519] = 4,
    ACTIONS(644), 1,
      aux_sym_string_literal_token1,
    ACTIONS(646), 1,
      anon_sym_DQUOTE2,
    STATE(257), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(642), 2,
      sym_comment,
      aux_sym__token1,
  [6533] = 4,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    ACTIONS(650), 1,
      sym__layout_end,
    STATE(278), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6547] = 3,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(437), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6559] = 4,
    ACTIONS(521), 1,
      sym__layout_end,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    STATE(250), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6573] = 4,
    ACTIONS(521), 1,
      sym__layout_end,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    STATE(269), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6587] = 4,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    ACTIONS(652), 1,
      sym__layout_end,
    STATE(250), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6601] = 4,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    ACTIONS(652), 1,
      sym__layout_end,
    STATE(273), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6615] = 4,
    ACTIONS(654), 1,
      aux_sym_string_literal_token1,
    ACTIONS(657), 1,
      anon_sym_DQUOTE2,
    STATE(265), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(642), 2,
      sym_comment,
      aux_sym__token1,
  [6629] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(329), 1,
      aux_sym_path_repeat1,
    STATE(413), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6643] = 4,
    ACTIONS(536), 1,
      sym__layout_end,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    STATE(302), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6657] = 4,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6671] = 4,
    ACTIONS(515), 1,
      sym__layout_end,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    STATE(250), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6685] = 4,
    ACTIONS(515), 1,
      sym__layout_end,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    STATE(276), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6699] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(329), 1,
      aux_sym_path_repeat1,
    STATE(404), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6713] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(664), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [6723] = 4,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    ACTIONS(666), 1,
      sym__layout_end,
    STATE(250), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6737] = 3,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      sym_operator,
  [6749] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(224), 3,
      anon_sym_RPAREN,
      anon_sym_where,
      sym_operator,
  [6759] = 4,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    ACTIONS(668), 1,
      sym__layout_end,
    STATE(250), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6773] = 4,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    ACTIONS(668), 1,
      sym__layout_end,
    STATE(246), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6787] = 4,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    ACTIONS(670), 1,
      sym__layout_end,
    STATE(297), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6801] = 4,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    ACTIONS(672), 1,
      sym__layout_end,
    STATE(298), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6815] = 4,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6829] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(484), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [6839] = 4,
    ACTIONS(638), 1,
      aux_sym_string_literal_token1,
    ACTIONS(678), 1,
      anon_sym_DQUOTE2,
    STATE(265), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(642), 2,
      sym_comment,
      aux_sym__token1,
  [6853] = 4,
    ACTIONS(613), 1,
      sym__layout_semicolon,
    ACTIONS(680), 1,
      sym__layout_end,
    STATE(247), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6867] = 4,
    ACTIONS(364), 1,
      sym_operator,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6881] = 4,
    ACTIONS(684), 1,
      aux_sym_string_literal_token1,
    ACTIONS(686), 1,
      anon_sym_DQUOTE2,
    STATE(289), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(642), 2,
      sym_comment,
      aux_sym__token1,
  [6895] = 4,
    ACTIONS(613), 1,
      sym__layout_semicolon,
    ACTIONS(688), 1,
      sym__layout_end,
    STATE(307), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6909] = 3,
    ACTIONS(352), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(360), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [6921] = 4,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(554), 1,
      anon_sym_where,
    STATE(444), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6935] = 4,
    ACTIONS(638), 1,
      aux_sym_string_literal_token1,
    ACTIONS(690), 1,
      anon_sym_DQUOTE2,
    STATE(265), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(642), 2,
      sym_comment,
      aux_sym__token1,
  [6949] = 4,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6963] = 4,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(694), 1,
      sym_operator,
    STATE(291), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [6977] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(468), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [6987] = 4,
    ACTIONS(697), 1,
      aux_sym_string_literal_token1,
    ACTIONS(699), 1,
      anon_sym_DQUOTE2,
    STATE(282), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(642), 2,
      sym_comment,
      aux_sym__token1,
  [7001] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(601), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
  [7011] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(701), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7021] = 4,
    ACTIONS(703), 1,
      sym_identifier,
    STATE(290), 1,
      sym__attr_body,
    STATE(403), 1,
      sym__attr_value,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7035] = 4,
    ACTIONS(705), 1,
      sym__layout_semicolon,
    ACTIONS(708), 1,
      sym__layout_end,
    STATE(297), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7049] = 4,
    ACTIONS(648), 1,
      sym__layout_semicolon,
    ACTIONS(710), 1,
      sym__layout_end,
    STATE(297), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7063] = 4,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7077] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(714), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7087] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(716), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7097] = 4,
    ACTIONS(534), 1,
      sym__layout_end,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    STATE(250), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7111] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(329), 1,
      aux_sym_path_repeat1,
    STATE(422), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7125] = 4,
    ACTIONS(534), 1,
      sym__layout_end,
    ACTIONS(617), 1,
      sym__layout_semicolon,
    STATE(253), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7139] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(718), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7149] = 3,
    ACTIONS(451), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(453), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7161] = 4,
    ACTIONS(613), 1,
      sym__layout_semicolon,
    ACTIONS(720), 1,
      sym__layout_end,
    STATE(247), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7175] = 3,
    ACTIONS(722), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(724), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7187] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(329), 1,
      aux_sym_path_repeat1,
    STATE(410), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7201] = 4,
    ACTIONS(726), 1,
      sym_identifier,
    ACTIONS(728), 1,
      anon_sym_DASH_GT,
    STATE(252), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7215] = 4,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7229] = 3,
    ACTIONS(439), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(441), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7241] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(329), 1,
      aux_sym_path_repeat1,
    STATE(435), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7255] = 4,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7269] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(733), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [7279] = 4,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      sym_operator,
    STATE(284), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7293] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(735), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7302] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(737), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7311] = 3,
    ACTIONS(703), 1,
      sym_identifier,
    STATE(71), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7322] = 3,
    ACTIONS(739), 1,
      sym__layout_start,
    STATE(349), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7333] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(741), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7342] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(743), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7351] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(733), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7360] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(745), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7369] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(197), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7378] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(747), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7387] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(561), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7396] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      sym_operator,
  [7405] = 3,
    ACTIONS(749), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7416] = 3,
    ACTIONS(751), 1,
      sym_identifier,
    STATE(294), 1,
      sym_ctor,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7427] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(753), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7436] = 3,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    STATE(339), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7447] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(757), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7456] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(759), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7465] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(664), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7474] = 3,
    ACTIONS(761), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7485] = 3,
    ACTIONS(763), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7496] = 3,
    ACTIONS(765), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7507] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(768), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7516] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(770), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7525] = 3,
    ACTIONS(772), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7536] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(708), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7545] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(774), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7554] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(776), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7563] = 3,
    ACTIONS(778), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7574] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(718), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7583] = 3,
    ACTIONS(739), 1,
      sym__layout_start,
    STATE(335), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7594] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(441), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7603] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(780), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7612] = 3,
    ACTIONS(739), 1,
      sym__layout_start,
    STATE(324), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7623] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(437), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7632] = 3,
    ACTIONS(782), 1,
      sym_identifier,
    STATE(145), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7643] = 3,
    ACTIONS(784), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7654] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(624), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7663] = 3,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7674] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(716), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7683] = 3,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    STATE(333), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7694] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(786), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7703] = 3,
    ACTIONS(788), 1,
      sym__layout_start,
    STATE(272), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7714] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(790), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7723] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(792), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7732] = 3,
    ACTIONS(703), 1,
      sym_identifier,
    STATE(373), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7743] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(794), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7752] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(629), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7761] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(796), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7770] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(636), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7779] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(701), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7788] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(798), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7797] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(800), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7806] = 3,
    ACTIONS(802), 1,
      sym_identifier,
    STATE(136), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7817] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(804), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7826] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(714), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7835] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(659), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7844] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(806), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7853] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(808), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7862] = 3,
    ACTIONS(810), 1,
      sym_identifier,
    STATE(338), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7873] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(808), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7882] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(812), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7891] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(812), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7900] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(812), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7909] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(814), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7918] = 3,
    ACTIONS(816), 1,
      anon_sym_type,
    ACTIONS(818), 1,
      anon_sym_fn,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7929] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(820), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7938] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(822), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7947] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(824), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7956] = 2,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7964] = 2,
    ACTIONS(828), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7972] = 2,
    ACTIONS(830), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7980] = 2,
    ACTIONS(832), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7988] = 2,
    ACTIONS(834), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7996] = 2,
    ACTIONS(836), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8004] = 2,
    ACTIONS(838), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8012] = 2,
    ACTIONS(818), 1,
      anon_sym_fn,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8020] = 2,
    ACTIONS(840), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8028] = 2,
    ACTIONS(842), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8036] = 2,
    ACTIONS(844), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8044] = 2,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8052] = 2,
    ACTIONS(848), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8060] = 2,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8068] = 2,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8076] = 2,
    ACTIONS(854), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8084] = 2,
    ACTIONS(856), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8092] = 2,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8100] = 2,
    ACTIONS(860), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8108] = 2,
    ACTIONS(862), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8116] = 2,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8124] = 2,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8132] = 2,
    ACTIONS(868), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8140] = 2,
    ACTIONS(870), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8148] = 2,
    ACTIONS(872), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8156] = 2,
    ACTIONS(874), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8164] = 2,
    ACTIONS(876), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8172] = 2,
    ACTIONS(878), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8180] = 2,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8188] = 2,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8196] = 2,
    ACTIONS(882), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8204] = 2,
    ACTIONS(884), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8212] = 2,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8220] = 2,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8228] = 2,
    ACTIONS(890), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8236] = 2,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8244] = 2,
    ACTIONS(894), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8252] = 2,
    ACTIONS(896), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8260] = 2,
    ACTIONS(898), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8268] = 2,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8276] = 2,
    ACTIONS(902), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8284] = 2,
    ACTIONS(904), 1,
      anon_sym_RPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8292] = 2,
    ACTIONS(906), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8300] = 2,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8308] = 2,
    ACTIONS(910), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8316] = 2,
    ACTIONS(912), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8324] = 2,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8332] = 2,
    ACTIONS(916), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8340] = 2,
    ACTIONS(918), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8348] = 2,
    ACTIONS(920), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8356] = 2,
    ACTIONS(922), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8364] = 2,
    ACTIONS(924), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8372] = 2,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8380] = 2,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8388] = 2,
    ACTIONS(930), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8396] = 2,
    ACTIONS(932), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8404] = 2,
    ACTIONS(934), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8412] = 2,
    ACTIONS(936), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8420] = 2,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8428] = 2,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8436] = 2,
    ACTIONS(940), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 228,
  [SMALL_STATE(6)] = 291,
  [SMALL_STATE(7)] = 354,
  [SMALL_STATE(8)] = 425,
  [SMALL_STATE(9)] = 485,
  [SMALL_STATE(10)] = 543,
  [SMALL_STATE(11)] = 601,
  [SMALL_STATE(12)] = 656,
  [SMALL_STATE(13)] = 711,
  [SMALL_STATE(14)] = 766,
  [SMALL_STATE(15)] = 821,
  [SMALL_STATE(16)] = 876,
  [SMALL_STATE(17)] = 931,
  [SMALL_STATE(18)] = 986,
  [SMALL_STATE(19)] = 1041,
  [SMALL_STATE(20)] = 1096,
  [SMALL_STATE(21)] = 1149,
  [SMALL_STATE(22)] = 1195,
  [SMALL_STATE(23)] = 1241,
  [SMALL_STATE(24)] = 1287,
  [SMALL_STATE(25)] = 1337,
  [SMALL_STATE(26)] = 1383,
  [SMALL_STATE(27)] = 1426,
  [SMALL_STATE(28)] = 1469,
  [SMALL_STATE(29)] = 1512,
  [SMALL_STATE(30)] = 1555,
  [SMALL_STATE(31)] = 1585,
  [SMALL_STATE(32)] = 1624,
  [SMALL_STATE(33)] = 1663,
  [SMALL_STATE(34)] = 1702,
  [SMALL_STATE(35)] = 1741,
  [SMALL_STATE(36)] = 1766,
  [SMALL_STATE(37)] = 1806,
  [SMALL_STATE(38)] = 1830,
  [SMALL_STATE(39)] = 1854,
  [SMALL_STATE(40)] = 1892,
  [SMALL_STATE(41)] = 1916,
  [SMALL_STATE(42)] = 1940,
  [SMALL_STATE(43)] = 1968,
  [SMALL_STATE(44)] = 1999,
  [SMALL_STATE(45)] = 2032,
  [SMALL_STATE(46)] = 2071,
  [SMALL_STATE(47)] = 2110,
  [SMALL_STATE(48)] = 2149,
  [SMALL_STATE(49)] = 2174,
  [SMALL_STATE(50)] = 2207,
  [SMALL_STATE(51)] = 2240,
  [SMALL_STATE(52)] = 2277,
  [SMALL_STATE(53)] = 2302,
  [SMALL_STATE(54)] = 2338,
  [SMALL_STATE(55)] = 2370,
  [SMALL_STATE(56)] = 2402,
  [SMALL_STATE(57)] = 2438,
  [SMALL_STATE(58)] = 2474,
  [SMALL_STATE(59)] = 2498,
  [SMALL_STATE(60)] = 2530,
  [SMALL_STATE(61)] = 2554,
  [SMALL_STATE(62)] = 2586,
  [SMALL_STATE(63)] = 2622,
  [SMALL_STATE(64)] = 2658,
  [SMALL_STATE(65)] = 2688,
  [SMALL_STATE(66)] = 2724,
  [SMALL_STATE(67)] = 2754,
  [SMALL_STATE(68)] = 2790,
  [SMALL_STATE(69)] = 2822,
  [SMALL_STATE(70)] = 2854,
  [SMALL_STATE(71)] = 2890,
  [SMALL_STATE(72)] = 2912,
  [SMALL_STATE(73)] = 2943,
  [SMALL_STATE(74)] = 2974,
  [SMALL_STATE(75)] = 3003,
  [SMALL_STATE(76)] = 3034,
  [SMALL_STATE(77)] = 3055,
  [SMALL_STATE(78)] = 3086,
  [SMALL_STATE(79)] = 3115,
  [SMALL_STATE(80)] = 3136,
  [SMALL_STATE(81)] = 3169,
  [SMALL_STATE(82)] = 3202,
  [SMALL_STATE(83)] = 3223,
  [SMALL_STATE(84)] = 3254,
  [SMALL_STATE(85)] = 3285,
  [SMALL_STATE(86)] = 3318,
  [SMALL_STATE(87)] = 3351,
  [SMALL_STATE(88)] = 3372,
  [SMALL_STATE(89)] = 3393,
  [SMALL_STATE(90)] = 3426,
  [SMALL_STATE(91)] = 3459,
  [SMALL_STATE(92)] = 3487,
  [SMALL_STATE(93)] = 3507,
  [SMALL_STATE(94)] = 3535,
  [SMALL_STATE(95)] = 3555,
  [SMALL_STATE(96)] = 3575,
  [SMALL_STATE(97)] = 3595,
  [SMALL_STATE(98)] = 3615,
  [SMALL_STATE(99)] = 3643,
  [SMALL_STATE(100)] = 3672,
  [SMALL_STATE(101)] = 3701,
  [SMALL_STATE(102)] = 3728,
  [SMALL_STATE(103)] = 3759,
  [SMALL_STATE(104)] = 3786,
  [SMALL_STATE(105)] = 3813,
  [SMALL_STATE(106)] = 3844,
  [SMALL_STATE(107)] = 3871,
  [SMALL_STATE(108)] = 3898,
  [SMALL_STATE(109)] = 3927,
  [SMALL_STATE(110)] = 3953,
  [SMALL_STATE(111)] = 3979,
  [SMALL_STATE(112)] = 3999,
  [SMALL_STATE(113)] = 4025,
  [SMALL_STATE(114)] = 4047,
  [SMALL_STATE(115)] = 4067,
  [SMALL_STATE(116)] = 4093,
  [SMALL_STATE(117)] = 4117,
  [SMALL_STATE(118)] = 4139,
  [SMALL_STATE(119)] = 4163,
  [SMALL_STATE(120)] = 4185,
  [SMALL_STATE(121)] = 4205,
  [SMALL_STATE(122)] = 4231,
  [SMALL_STATE(123)] = 4251,
  [SMALL_STATE(124)] = 4275,
  [SMALL_STATE(125)] = 4297,
  [SMALL_STATE(126)] = 4318,
  [SMALL_STATE(127)] = 4339,
  [SMALL_STATE(128)] = 4358,
  [SMALL_STATE(129)] = 4377,
  [SMALL_STATE(130)] = 4396,
  [SMALL_STATE(131)] = 4417,
  [SMALL_STATE(132)] = 4434,
  [SMALL_STATE(133)] = 4458,
  [SMALL_STATE(134)] = 4476,
  [SMALL_STATE(135)] = 4500,
  [SMALL_STATE(136)] = 4518,
  [SMALL_STATE(137)] = 4538,
  [SMALL_STATE(138)] = 4552,
  [SMALL_STATE(139)] = 4576,
  [SMALL_STATE(140)] = 4596,
  [SMALL_STATE(141)] = 4614,
  [SMALL_STATE(142)] = 4632,
  [SMALL_STATE(143)] = 4646,
  [SMALL_STATE(144)] = 4662,
  [SMALL_STATE(145)] = 4686,
  [SMALL_STATE(146)] = 4706,
  [SMALL_STATE(147)] = 4726,
  [SMALL_STATE(148)] = 4746,
  [SMALL_STATE(149)] = 4762,
  [SMALL_STATE(150)] = 4780,
  [SMALL_STATE(151)] = 4796,
  [SMALL_STATE(152)] = 4812,
  [SMALL_STATE(153)] = 4828,
  [SMALL_STATE(154)] = 4849,
  [SMALL_STATE(155)] = 4864,
  [SMALL_STATE(156)] = 4879,
  [SMALL_STATE(157)] = 4894,
  [SMALL_STATE(158)] = 4911,
  [SMALL_STATE(159)] = 4926,
  [SMALL_STATE(160)] = 4945,
  [SMALL_STATE(161)] = 4966,
  [SMALL_STATE(162)] = 4987,
  [SMALL_STATE(163)] = 5004,
  [SMALL_STATE(164)] = 5025,
  [SMALL_STATE(165)] = 5040,
  [SMALL_STATE(166)] = 5063,
  [SMALL_STATE(167)] = 5082,
  [SMALL_STATE(168)] = 5103,
  [SMALL_STATE(169)] = 5118,
  [SMALL_STATE(170)] = 5139,
  [SMALL_STATE(171)] = 5160,
  [SMALL_STATE(172)] = 5183,
  [SMALL_STATE(173)] = 5198,
  [SMALL_STATE(174)] = 5213,
  [SMALL_STATE(175)] = 5232,
  [SMALL_STATE(176)] = 5255,
  [SMALL_STATE(177)] = 5278,
  [SMALL_STATE(178)] = 5301,
  [SMALL_STATE(179)] = 5316,
  [SMALL_STATE(180)] = 5339,
  [SMALL_STATE(181)] = 5356,
  [SMALL_STATE(182)] = 5373,
  [SMALL_STATE(183)] = 5390,
  [SMALL_STATE(184)] = 5409,
  [SMALL_STATE(185)] = 5432,
  [SMALL_STATE(186)] = 5455,
  [SMALL_STATE(187)] = 5474,
  [SMALL_STATE(188)] = 5493,
  [SMALL_STATE(189)] = 5514,
  [SMALL_STATE(190)] = 5532,
  [SMALL_STATE(191)] = 5550,
  [SMALL_STATE(192)] = 5564,
  [SMALL_STATE(193)] = 5578,
  [SMALL_STATE(194)] = 5594,
  [SMALL_STATE(195)] = 5608,
  [SMALL_STATE(196)] = 5626,
  [SMALL_STATE(197)] = 5638,
  [SMALL_STATE(198)] = 5652,
  [SMALL_STATE(199)] = 5672,
  [SMALL_STATE(200)] = 5692,
  [SMALL_STATE(201)] = 5710,
  [SMALL_STATE(202)] = 5722,
  [SMALL_STATE(203)] = 5734,
  [SMALL_STATE(204)] = 5752,
  [SMALL_STATE(205)] = 5768,
  [SMALL_STATE(206)] = 5786,
  [SMALL_STATE(207)] = 5802,
  [SMALL_STATE(208)] = 5818,
  [SMALL_STATE(209)] = 5836,
  [SMALL_STATE(210)] = 5854,
  [SMALL_STATE(211)] = 5870,
  [SMALL_STATE(212)] = 5888,
  [SMALL_STATE(213)] = 5899,
  [SMALL_STATE(214)] = 5916,
  [SMALL_STATE(215)] = 5931,
  [SMALL_STATE(216)] = 5942,
  [SMALL_STATE(217)] = 5953,
  [SMALL_STATE(218)] = 5968,
  [SMALL_STATE(219)] = 5983,
  [SMALL_STATE(220)] = 5994,
  [SMALL_STATE(221)] = 6009,
  [SMALL_STATE(222)] = 6026,
  [SMALL_STATE(223)] = 6041,
  [SMALL_STATE(224)] = 6052,
  [SMALL_STATE(225)] = 6069,
  [SMALL_STATE(226)] = 6084,
  [SMALL_STATE(227)] = 6095,
  [SMALL_STATE(228)] = 6110,
  [SMALL_STATE(229)] = 6125,
  [SMALL_STATE(230)] = 6142,
  [SMALL_STATE(231)] = 6157,
  [SMALL_STATE(232)] = 6168,
  [SMALL_STATE(233)] = 6179,
  [SMALL_STATE(234)] = 6196,
  [SMALL_STATE(235)] = 6207,
  [SMALL_STATE(236)] = 6218,
  [SMALL_STATE(237)] = 6235,
  [SMALL_STATE(238)] = 6250,
  [SMALL_STATE(239)] = 6267,
  [SMALL_STATE(240)] = 6278,
  [SMALL_STATE(241)] = 6289,
  [SMALL_STATE(242)] = 6304,
  [SMALL_STATE(243)] = 6315,
  [SMALL_STATE(244)] = 6328,
  [SMALL_STATE(245)] = 6339,
  [SMALL_STATE(246)] = 6353,
  [SMALL_STATE(247)] = 6367,
  [SMALL_STATE(248)] = 6381,
  [SMALL_STATE(249)] = 6395,
  [SMALL_STATE(250)] = 6409,
  [SMALL_STATE(251)] = 6423,
  [SMALL_STATE(252)] = 6437,
  [SMALL_STATE(253)] = 6451,
  [SMALL_STATE(254)] = 6465,
  [SMALL_STATE(255)] = 6477,
  [SMALL_STATE(256)] = 6491,
  [SMALL_STATE(257)] = 6505,
  [SMALL_STATE(258)] = 6519,
  [SMALL_STATE(259)] = 6533,
  [SMALL_STATE(260)] = 6547,
  [SMALL_STATE(261)] = 6559,
  [SMALL_STATE(262)] = 6573,
  [SMALL_STATE(263)] = 6587,
  [SMALL_STATE(264)] = 6601,
  [SMALL_STATE(265)] = 6615,
  [SMALL_STATE(266)] = 6629,
  [SMALL_STATE(267)] = 6643,
  [SMALL_STATE(268)] = 6657,
  [SMALL_STATE(269)] = 6671,
  [SMALL_STATE(270)] = 6685,
  [SMALL_STATE(271)] = 6699,
  [SMALL_STATE(272)] = 6713,
  [SMALL_STATE(273)] = 6723,
  [SMALL_STATE(274)] = 6737,
  [SMALL_STATE(275)] = 6749,
  [SMALL_STATE(276)] = 6759,
  [SMALL_STATE(277)] = 6773,
  [SMALL_STATE(278)] = 6787,
  [SMALL_STATE(279)] = 6801,
  [SMALL_STATE(280)] = 6815,
  [SMALL_STATE(281)] = 6829,
  [SMALL_STATE(282)] = 6839,
  [SMALL_STATE(283)] = 6853,
  [SMALL_STATE(284)] = 6867,
  [SMALL_STATE(285)] = 6881,
  [SMALL_STATE(286)] = 6895,
  [SMALL_STATE(287)] = 6909,
  [SMALL_STATE(288)] = 6921,
  [SMALL_STATE(289)] = 6935,
  [SMALL_STATE(290)] = 6949,
  [SMALL_STATE(291)] = 6963,
  [SMALL_STATE(292)] = 6977,
  [SMALL_STATE(293)] = 6987,
  [SMALL_STATE(294)] = 7001,
  [SMALL_STATE(295)] = 7011,
  [SMALL_STATE(296)] = 7021,
  [SMALL_STATE(297)] = 7035,
  [SMALL_STATE(298)] = 7049,
  [SMALL_STATE(299)] = 7063,
  [SMALL_STATE(300)] = 7077,
  [SMALL_STATE(301)] = 7087,
  [SMALL_STATE(302)] = 7097,
  [SMALL_STATE(303)] = 7111,
  [SMALL_STATE(304)] = 7125,
  [SMALL_STATE(305)] = 7139,
  [SMALL_STATE(306)] = 7149,
  [SMALL_STATE(307)] = 7161,
  [SMALL_STATE(308)] = 7175,
  [SMALL_STATE(309)] = 7187,
  [SMALL_STATE(310)] = 7201,
  [SMALL_STATE(311)] = 7215,
  [SMALL_STATE(312)] = 7229,
  [SMALL_STATE(313)] = 7241,
  [SMALL_STATE(314)] = 7255,
  [SMALL_STATE(315)] = 7269,
  [SMALL_STATE(316)] = 7279,
  [SMALL_STATE(317)] = 7293,
  [SMALL_STATE(318)] = 7302,
  [SMALL_STATE(319)] = 7311,
  [SMALL_STATE(320)] = 7322,
  [SMALL_STATE(321)] = 7333,
  [SMALL_STATE(322)] = 7342,
  [SMALL_STATE(323)] = 7351,
  [SMALL_STATE(324)] = 7360,
  [SMALL_STATE(325)] = 7369,
  [SMALL_STATE(326)] = 7378,
  [SMALL_STATE(327)] = 7387,
  [SMALL_STATE(328)] = 7396,
  [SMALL_STATE(329)] = 7405,
  [SMALL_STATE(330)] = 7416,
  [SMALL_STATE(331)] = 7427,
  [SMALL_STATE(332)] = 7436,
  [SMALL_STATE(333)] = 7447,
  [SMALL_STATE(334)] = 7456,
  [SMALL_STATE(335)] = 7465,
  [SMALL_STATE(336)] = 7474,
  [SMALL_STATE(337)] = 7485,
  [SMALL_STATE(338)] = 7496,
  [SMALL_STATE(339)] = 7507,
  [SMALL_STATE(340)] = 7516,
  [SMALL_STATE(341)] = 7525,
  [SMALL_STATE(342)] = 7536,
  [SMALL_STATE(343)] = 7545,
  [SMALL_STATE(344)] = 7554,
  [SMALL_STATE(345)] = 7563,
  [SMALL_STATE(346)] = 7574,
  [SMALL_STATE(347)] = 7583,
  [SMALL_STATE(348)] = 7594,
  [SMALL_STATE(349)] = 7603,
  [SMALL_STATE(350)] = 7612,
  [SMALL_STATE(351)] = 7623,
  [SMALL_STATE(352)] = 7632,
  [SMALL_STATE(353)] = 7643,
  [SMALL_STATE(354)] = 7654,
  [SMALL_STATE(355)] = 7663,
  [SMALL_STATE(356)] = 7674,
  [SMALL_STATE(357)] = 7683,
  [SMALL_STATE(358)] = 7694,
  [SMALL_STATE(359)] = 7703,
  [SMALL_STATE(360)] = 7714,
  [SMALL_STATE(361)] = 7723,
  [SMALL_STATE(362)] = 7732,
  [SMALL_STATE(363)] = 7743,
  [SMALL_STATE(364)] = 7752,
  [SMALL_STATE(365)] = 7761,
  [SMALL_STATE(366)] = 7770,
  [SMALL_STATE(367)] = 7779,
  [SMALL_STATE(368)] = 7788,
  [SMALL_STATE(369)] = 7797,
  [SMALL_STATE(370)] = 7806,
  [SMALL_STATE(371)] = 7817,
  [SMALL_STATE(372)] = 7826,
  [SMALL_STATE(373)] = 7835,
  [SMALL_STATE(374)] = 7844,
  [SMALL_STATE(375)] = 7853,
  [SMALL_STATE(376)] = 7862,
  [SMALL_STATE(377)] = 7873,
  [SMALL_STATE(378)] = 7882,
  [SMALL_STATE(379)] = 7891,
  [SMALL_STATE(380)] = 7900,
  [SMALL_STATE(381)] = 7909,
  [SMALL_STATE(382)] = 7918,
  [SMALL_STATE(383)] = 7929,
  [SMALL_STATE(384)] = 7938,
  [SMALL_STATE(385)] = 7947,
  [SMALL_STATE(386)] = 7956,
  [SMALL_STATE(387)] = 7964,
  [SMALL_STATE(388)] = 7972,
  [SMALL_STATE(389)] = 7980,
  [SMALL_STATE(390)] = 7988,
  [SMALL_STATE(391)] = 7996,
  [SMALL_STATE(392)] = 8004,
  [SMALL_STATE(393)] = 8012,
  [SMALL_STATE(394)] = 8020,
  [SMALL_STATE(395)] = 8028,
  [SMALL_STATE(396)] = 8036,
  [SMALL_STATE(397)] = 8044,
  [SMALL_STATE(398)] = 8052,
  [SMALL_STATE(399)] = 8060,
  [SMALL_STATE(400)] = 8068,
  [SMALL_STATE(401)] = 8076,
  [SMALL_STATE(402)] = 8084,
  [SMALL_STATE(403)] = 8092,
  [SMALL_STATE(404)] = 8100,
  [SMALL_STATE(405)] = 8108,
  [SMALL_STATE(406)] = 8116,
  [SMALL_STATE(407)] = 8124,
  [SMALL_STATE(408)] = 8132,
  [SMALL_STATE(409)] = 8140,
  [SMALL_STATE(410)] = 8148,
  [SMALL_STATE(411)] = 8156,
  [SMALL_STATE(412)] = 8164,
  [SMALL_STATE(413)] = 8172,
  [SMALL_STATE(414)] = 8180,
  [SMALL_STATE(415)] = 8188,
  [SMALL_STATE(416)] = 8196,
  [SMALL_STATE(417)] = 8204,
  [SMALL_STATE(418)] = 8212,
  [SMALL_STATE(419)] = 8220,
  [SMALL_STATE(420)] = 8228,
  [SMALL_STATE(421)] = 8236,
  [SMALL_STATE(422)] = 8244,
  [SMALL_STATE(423)] = 8252,
  [SMALL_STATE(424)] = 8260,
  [SMALL_STATE(425)] = 8268,
  [SMALL_STATE(426)] = 8276,
  [SMALL_STATE(427)] = 8284,
  [SMALL_STATE(428)] = 8292,
  [SMALL_STATE(429)] = 8300,
  [SMALL_STATE(430)] = 8308,
  [SMALL_STATE(431)] = 8316,
  [SMALL_STATE(432)] = 8324,
  [SMALL_STATE(433)] = 8332,
  [SMALL_STATE(434)] = 8340,
  [SMALL_STATE(435)] = 8348,
  [SMALL_STATE(436)] = 8356,
  [SMALL_STATE(437)] = 8364,
  [SMALL_STATE(438)] = 8372,
  [SMALL_STATE(439)] = 8380,
  [SMALL_STATE(440)] = 8388,
  [SMALL_STATE(441)] = 8396,
  [SMALL_STATE(442)] = 8404,
  [SMALL_STATE(443)] = 8412,
  [SMALL_STATE(444)] = 8420,
  [SMALL_STATE(445)] = 8428,
  [SMALL_STATE(446)] = 8436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(52),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(79),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(79),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(285),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(22),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_app, 2, .production_id = 10),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_app, 2, .production_id = 10),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(58),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(10),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(92),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(92),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(258),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(27),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_kind, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_kind, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(319),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(122),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(57),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_app, 2, .production_id = 10),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_app, 2, .production_id = 10),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(128),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(65),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(58),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(53),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_member, 2, .production_id = 9),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_member, 1, .production_id = 9),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(141),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(56),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(181),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(63),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1, .production_id = 12),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(52),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(70),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_parens, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_parens, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 2, .production_id = 12),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_unit, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_unit, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(114),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(67),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 3),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(114),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pat_infix_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(234),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(101),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_app, 2, .production_id = 10),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(150),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(445),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(231),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(107),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty_path, 1, .production_id = 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty_path, 1, .production_id = 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, .production_id = 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_parens, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 3),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(139),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_unit, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typevar, 5),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 2),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_parens, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typevar, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_unit, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(121),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_infix, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_infix, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_infix, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(213),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(309),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(34),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(266),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(32),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(110),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(153),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(281),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(414),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(112),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 11),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_unit, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 4, .production_id = 3),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(163),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_parens, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2), SHIFT_REPEAT(330),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 5, .production_id = 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pat_ident, 1, .production_id = 7),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(115),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(109),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2), SHIFT_REPEAT(8),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2), SHIFT_REPEAT(199),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(252),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 7, .production_id = 3),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(265),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2), SHIFT_REPEAT(362),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_do, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_infix, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 1),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pat_infix_repeat1, 2), SHIFT_REPEAT(147),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 6),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(4),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lambda, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 11),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(188),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 4, .production_id = 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixity, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 4, .production_id = 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 4, .production_id = 8),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 4, .production_id = 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__postfix, 4),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix, 4),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_where, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(415),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__infix, 5),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 5, .production_id = 6),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 5, .production_id = 6),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 5, .production_id = 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 5, .production_id = 13),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 12, .production_id = 3),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 11, .production_id = 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 10, .production_id = 11),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 10, .production_id = 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 7, .production_id = 11),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 9, .production_id = 11),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 9, .production_id = 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 1, .production_id = 4),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 8, .production_id = 11),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_let, 4),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 8, .production_id = 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 6),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 6),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 8, .production_id = 6),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [930] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
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
