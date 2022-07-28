#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 591
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
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
  anon_sym_as = 9,
  anon_sym_prefix = 10,
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
  sym_import_item = 56,
  sym_fixity = 57,
  sym__prefix = 58,
  sym__infix = 59,
  sym__postfix = 60,
  sym_type = 61,
  sym__type_kind = 62,
  sym__type_alias = 63,
  sym__type_ctor = 64,
  sym_ctor = 65,
  sym_typevar = 66,
  sym_func = 67,
  sym__func_type = 68,
  sym__func_body = 69,
  sym_class = 70,
  sym_fundep = 71,
  sym_member = 72,
  sym_where_clause = 73,
  sym_where_member = 74,
  sym_where_kind = 75,
  sym__ty = 76,
  sym_ty_where = 77,
  sym_ty_app = 78,
  sym_ty_infix = 79,
  sym__ty_atom = 80,
  sym_ty_unit = 81,
  sym_ty_parens = 82,
  sym__pattern = 83,
  sym_pat_app = 84,
  sym_pat_infix = 85,
  sym__pat_atom = 86,
  sym_pat_unit = 87,
  sym_pat_parens = 88,
  sym__expression = 89,
  sym__expression2 = 90,
  sym_expr_typed = 91,
  sym_expr_app = 92,
  sym_expr_infix = 93,
  sym__expr_atom = 94,
  sym_expr_unit = 95,
  sym_expr_parens = 96,
  sym_expr_do = 97,
  sym_expr_lambda = 98,
  sym_expr_if = 99,
  sym_expr_case = 100,
  sym_case_arm = 101,
  sym__expr_block = 102,
  sym__stmt = 103,
  sym_stmt_let = 104,
  sym__literal = 105,
  sym_int_literal = 106,
  sym_string_literal = 107,
  sym__ty_path = 108,
  sym__pat_ident = 109,
  sym_symbol = 110,
  sym_path = 111,
  aux_sym__attr_value_repeat1 = 112,
  aux_sym_module_repeat1 = 113,
  aux_sym_module_repeat2 = 114,
  aux_sym_import_repeat1 = 115,
  aux_sym__type_alias_repeat1 = 116,
  aux_sym__type_ctor_repeat1 = 117,
  aux_sym_ctor_repeat1 = 118,
  aux_sym__func_body_repeat1 = 119,
  aux_sym_class_repeat1 = 120,
  aux_sym_class_repeat2 = 121,
  aux_sym_fundep_repeat1 = 122,
  aux_sym_where_clause_repeat1 = 123,
  aux_sym_ty_infix_repeat1 = 124,
  aux_sym_pat_infix_repeat1 = 125,
  aux_sym_expr_app_repeat1 = 126,
  aux_sym_expr_infix_repeat1 = 127,
  aux_sym_expr_case_repeat1 = 128,
  aux_sym__expr_block_repeat1 = 129,
  aux_sym_string_literal_repeat1 = 130,
  aux_sym_path_repeat1 = 131,
  alias_sym_pat_identifier = 132,
  alias_sym_ty_path = 133,
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
  [anon_sym_as] = "as",
  [anon_sym_prefix] = "prefix",
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
  [sym_import_item] = "import_item",
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
  [sym_expr_case] = "expr_case",
  [sym_case_arm] = "case_arm",
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
  [aux_sym_import_repeat1] = "import_repeat1",
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
  [aux_sym_expr_case_repeat1] = "expr_case_repeat1",
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
  [anon_sym_as] = anon_sym_as,
  [anon_sym_prefix] = anon_sym_prefix,
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
  [sym_import_item] = sym_import_item,
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
  [sym_expr_case] = sym_expr_case,
  [sym_case_arm] = sym_case_arm,
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
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
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
  [aux_sym_expr_case_repeat1] = aux_sym_expr_case_repeat1,
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
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefix] = {
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
  [sym_import_item] = {
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
  [sym_expr_case] = {
    .visible = true,
    .named = true,
  },
  [sym_case_arm] = {
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
  [aux_sym_import_repeat1] = {
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
  [aux_sym_expr_case_repeat1] = {
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
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(20)
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '|') ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(2)
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '`') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(2)
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '`') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(3)
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '`') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(5)
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '`') ADVANCE(33);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(5)
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '`') ADVANCE(33);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(7)
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(7)
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(10)
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(10)
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(10)
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(12)
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '`') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(12)
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '`') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(14)
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(14)
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(40);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(37);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(20)
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '`') ADVANCE(33);
      if (lookahead == '|') ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_int_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_int_literal_token3);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(40);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(44);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(48);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
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
  [3] = {.lex_state = 2, .external_lex_state = 3},
  [4] = {.lex_state = 2, .external_lex_state = 4},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
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
  [24] = {.lex_state = 2, .external_lex_state = 4},
  [25] = {.lex_state = 2, .external_lex_state = 4},
  [26] = {.lex_state = 0, .external_lex_state = 4},
  [27] = {.lex_state = 2, .external_lex_state = 4},
  [28] = {.lex_state = 2, .external_lex_state = 4},
  [29] = {.lex_state = 2, .external_lex_state = 4},
  [30] = {.lex_state = 2, .external_lex_state = 4},
  [31] = {.lex_state = 2, .external_lex_state = 4},
  [32] = {.lex_state = 2, .external_lex_state = 4},
  [33] = {.lex_state = 2, .external_lex_state = 4},
  [34] = {.lex_state = 2, .external_lex_state = 4},
  [35] = {.lex_state = 2, .external_lex_state = 5},
  [36] = {.lex_state = 2, .external_lex_state = 5},
  [37] = {.lex_state = 3, .external_lex_state = 4},
  [38] = {.lex_state = 2, .external_lex_state = 5},
  [39] = {.lex_state = 2, .external_lex_state = 5},
  [40] = {.lex_state = 2, .external_lex_state = 5},
  [41] = {.lex_state = 3, .external_lex_state = 4},
  [42] = {.lex_state = 3, .external_lex_state = 4},
  [43] = {.lex_state = 3, .external_lex_state = 4},
  [44] = {.lex_state = 3, .external_lex_state = 4},
  [45] = {.lex_state = 2, .external_lex_state = 4},
  [46] = {.lex_state = 4, .external_lex_state = 4},
  [47] = {.lex_state = 1, .external_lex_state = 4},
  [48] = {.lex_state = 2, .external_lex_state = 4},
  [49] = {.lex_state = 2, .external_lex_state = 4},
  [50] = {.lex_state = 2, .external_lex_state = 4},
  [51] = {.lex_state = 1, .external_lex_state = 4},
  [52] = {.lex_state = 2, .external_lex_state = 4},
  [53] = {.lex_state = 2, .external_lex_state = 4},
  [54] = {.lex_state = 7, .external_lex_state = 4},
  [55] = {.lex_state = 2, .external_lex_state = 4},
  [56] = {.lex_state = 7, .external_lex_state = 4},
  [57] = {.lex_state = 4, .external_lex_state = 4},
  [58] = {.lex_state = 0, .external_lex_state = 4},
  [59] = {.lex_state = 4, .external_lex_state = 4},
  [60] = {.lex_state = 4, .external_lex_state = 4},
  [61] = {.lex_state = 4, .external_lex_state = 4},
  [62] = {.lex_state = 7, .external_lex_state = 4},
  [63] = {.lex_state = 7, .external_lex_state = 4},
  [64] = {.lex_state = 2, .external_lex_state = 4},
  [65] = {.lex_state = 4, .external_lex_state = 4},
  [66] = {.lex_state = 2, .external_lex_state = 4},
  [67] = {.lex_state = 1, .external_lex_state = 5},
  [68] = {.lex_state = 1, .external_lex_state = 5},
  [69] = {.lex_state = 8, .external_lex_state = 5},
  [70] = {.lex_state = 4, .external_lex_state = 4},
  [71] = {.lex_state = 2, .external_lex_state = 4},
  [72] = {.lex_state = 4, .external_lex_state = 4},
  [73] = {.lex_state = 2, .external_lex_state = 5},
  [74] = {.lex_state = 4, .external_lex_state = 4},
  [75] = {.lex_state = 2, .external_lex_state = 4},
  [76] = {.lex_state = 0, .external_lex_state = 4},
  [77] = {.lex_state = 2, .external_lex_state = 4},
  [78] = {.lex_state = 7, .external_lex_state = 5},
  [79] = {.lex_state = 8, .external_lex_state = 5},
  [80] = {.lex_state = 8, .external_lex_state = 5},
  [81] = {.lex_state = 2, .external_lex_state = 4},
  [82] = {.lex_state = 3, .external_lex_state = 4},
  [83] = {.lex_state = 0, .external_lex_state = 4},
  [84] = {.lex_state = 0, .external_lex_state = 5},
  [85] = {.lex_state = 2, .external_lex_state = 4},
  [86] = {.lex_state = 2, .external_lex_state = 4},
  [87] = {.lex_state = 8, .external_lex_state = 5},
  [88] = {.lex_state = 2, .external_lex_state = 4},
  [89] = {.lex_state = 11, .external_lex_state = 4},
  [90] = {.lex_state = 11, .external_lex_state = 4},
  [91] = {.lex_state = 2, .external_lex_state = 4},
  [92] = {.lex_state = 2, .external_lex_state = 4},
  [93] = {.lex_state = 14, .external_lex_state = 4},
  [94] = {.lex_state = 0, .external_lex_state = 5},
  [95] = {.lex_state = 7, .external_lex_state = 5},
  [96] = {.lex_state = 7, .external_lex_state = 5},
  [97] = {.lex_state = 2, .external_lex_state = 5},
  [98] = {.lex_state = 2, .external_lex_state = 4},
  [99] = {.lex_state = 2, .external_lex_state = 5},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 2, .external_lex_state = 4},
  [102] = {.lex_state = 2, .external_lex_state = 4},
  [103] = {.lex_state = 0, .external_lex_state = 5},
  [104] = {.lex_state = 2, .external_lex_state = 4},
  [105] = {.lex_state = 2, .external_lex_state = 4},
  [106] = {.lex_state = 7, .external_lex_state = 5},
  [107] = {.lex_state = 2, .external_lex_state = 5},
  [108] = {.lex_state = 2, .external_lex_state = 4},
  [109] = {.lex_state = 2, .external_lex_state = 5},
  [110] = {.lex_state = 14, .external_lex_state = 4},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 4, .external_lex_state = 4},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 5},
  [118] = {.lex_state = 4, .external_lex_state = 4},
  [119] = {.lex_state = 2, .external_lex_state = 5},
  [120] = {.lex_state = 0, .external_lex_state = 4},
  [121] = {.lex_state = 2, .external_lex_state = 5},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 2, .external_lex_state = 5},
  [124] = {.lex_state = 3, .external_lex_state = 4},
  [125] = {.lex_state = 3, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 5},
  [127] = {.lex_state = 14, .external_lex_state = 4},
  [128] = {.lex_state = 14, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 3, .external_lex_state = 4},
  [131] = {.lex_state = 2, .external_lex_state = 5},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 3, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 3, .external_lex_state = 4},
  [137] = {.lex_state = 3, .external_lex_state = 4},
  [138] = {.lex_state = 3, .external_lex_state = 4},
  [139] = {.lex_state = 3, .external_lex_state = 4},
  [140] = {.lex_state = 3, .external_lex_state = 4},
  [141] = {.lex_state = 3, .external_lex_state = 4},
  [142] = {.lex_state = 2, .external_lex_state = 4},
  [143] = {.lex_state = 2, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 3, .external_lex_state = 4},
  [148] = {.lex_state = 2, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 3, .external_lex_state = 4},
  [151] = {.lex_state = 2, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 5},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 4},
  [156] = {.lex_state = 0, .external_lex_state = 5},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 0, .external_lex_state = 4},
  [159] = {.lex_state = 4, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 5},
  [161] = {.lex_state = 2, .external_lex_state = 4},
  [162] = {.lex_state = 6, .external_lex_state = 4},
  [163] = {.lex_state = 6, .external_lex_state = 4},
  [164] = {.lex_state = 0, .external_lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 4},
  [166] = {.lex_state = 0, .external_lex_state = 4},
  [167] = {.lex_state = 2, .external_lex_state = 4},
  [168] = {.lex_state = 0, .external_lex_state = 4},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 0, .external_lex_state = 4},
  [171] = {.lex_state = 2, .external_lex_state = 4},
  [172] = {.lex_state = 0, .external_lex_state = 4},
  [173] = {.lex_state = 0, .external_lex_state = 5},
  [174] = {.lex_state = 0, .external_lex_state = 5},
  [175] = {.lex_state = 0, .external_lex_state = 4},
  [176] = {.lex_state = 7, .external_lex_state = 4},
  [177] = {.lex_state = 7, .external_lex_state = 4},
  [178] = {.lex_state = 9, .external_lex_state = 5},
  [179] = {.lex_state = 9, .external_lex_state = 5},
  [180] = {.lex_state = 0, .external_lex_state = 5},
  [181] = {.lex_state = 2, .external_lex_state = 4},
  [182] = {.lex_state = 4, .external_lex_state = 4},
  [183] = {.lex_state = 2, .external_lex_state = 4},
  [184] = {.lex_state = 2, .external_lex_state = 4},
  [185] = {.lex_state = 0, .external_lex_state = 4},
  [186] = {.lex_state = 0, .external_lex_state = 5},
  [187] = {.lex_state = 7, .external_lex_state = 4},
  [188] = {.lex_state = 0, .external_lex_state = 4},
  [189] = {.lex_state = 2, .external_lex_state = 4},
  [190] = {.lex_state = 2, .external_lex_state = 4},
  [191] = {.lex_state = 0, .external_lex_state = 4},
  [192] = {.lex_state = 2, .external_lex_state = 4},
  [193] = {.lex_state = 4, .external_lex_state = 4},
  [194] = {.lex_state = 2, .external_lex_state = 4},
  [195] = {.lex_state = 0, .external_lex_state = 4},
  [196] = {.lex_state = 4, .external_lex_state = 4},
  [197] = {.lex_state = 7, .external_lex_state = 4},
  [198] = {.lex_state = 8, .external_lex_state = 5},
  [199] = {.lex_state = 0, .external_lex_state = 4},
  [200] = {.lex_state = 0, .external_lex_state = 4},
  [201] = {.lex_state = 0, .external_lex_state = 5},
  [202] = {.lex_state = 0, .external_lex_state = 5},
  [203] = {.lex_state = 0, .external_lex_state = 5},
  [204] = {.lex_state = 0, .external_lex_state = 4},
  [205] = {.lex_state = 2, .external_lex_state = 4},
  [206] = {.lex_state = 7, .external_lex_state = 4},
  [207] = {.lex_state = 0, .external_lex_state = 5},
  [208] = {.lex_state = 0, .external_lex_state = 5},
  [209] = {.lex_state = 2, .external_lex_state = 4},
  [210] = {.lex_state = 0, .external_lex_state = 5},
  [211] = {.lex_state = 2, .external_lex_state = 4},
  [212] = {.lex_state = 0, .external_lex_state = 5},
  [213] = {.lex_state = 0, .external_lex_state = 5},
  [214] = {.lex_state = 0, .external_lex_state = 5},
  [215] = {.lex_state = 2, .external_lex_state = 4},
  [216] = {.lex_state = 8, .external_lex_state = 5},
  [217] = {.lex_state = 6, .external_lex_state = 5},
  [218] = {.lex_state = 6, .external_lex_state = 5},
  [219] = {.lex_state = 0, .external_lex_state = 4},
  [220] = {.lex_state = 0, .external_lex_state = 5},
  [221] = {.lex_state = 2, .external_lex_state = 4},
  [222] = {.lex_state = 8, .external_lex_state = 5},
  [223] = {.lex_state = 0, .external_lex_state = 4},
  [224] = {.lex_state = 0, .external_lex_state = 5},
  [225] = {.lex_state = 0, .external_lex_state = 5},
  [226] = {.lex_state = 7, .external_lex_state = 4},
  [227] = {.lex_state = 4, .external_lex_state = 4},
  [228] = {.lex_state = 0, .external_lex_state = 4},
  [229] = {.lex_state = 3, .external_lex_state = 4},
  [230] = {.lex_state = 0, .external_lex_state = 4},
  [231] = {.lex_state = 2, .external_lex_state = 5},
  [232] = {.lex_state = 2, .external_lex_state = 5},
  [233] = {.lex_state = 0, .external_lex_state = 4},
  [234] = {.lex_state = 0, .external_lex_state = 4},
  [235] = {.lex_state = 4, .external_lex_state = 4},
  [236] = {.lex_state = 2, .external_lex_state = 5},
  [237] = {.lex_state = 0, .external_lex_state = 4},
  [238] = {.lex_state = 2, .external_lex_state = 5},
  [239] = {.lex_state = 2, .external_lex_state = 5},
  [240] = {.lex_state = 2, .external_lex_state = 5},
  [241] = {.lex_state = 0, .external_lex_state = 4},
  [242] = {.lex_state = 4, .external_lex_state = 4},
  [243] = {.lex_state = 0, .external_lex_state = 4},
  [244] = {.lex_state = 0, .external_lex_state = 4},
  [245] = {.lex_state = 0, .external_lex_state = 3},
  [246] = {.lex_state = 4, .external_lex_state = 4},
  [247] = {.lex_state = 0, .external_lex_state = 4},
  [248] = {.lex_state = 0, .external_lex_state = 4},
  [249] = {.lex_state = 0, .external_lex_state = 5},
  [250] = {.lex_state = 8, .external_lex_state = 5},
  [251] = {.lex_state = 4, .external_lex_state = 4},
  [252] = {.lex_state = 0, .external_lex_state = 3},
  [253] = {.lex_state = 0, .external_lex_state = 4},
  [254] = {.lex_state = 13, .external_lex_state = 4},
  [255] = {.lex_state = 0, .external_lex_state = 3},
  [256] = {.lex_state = 13, .external_lex_state = 4},
  [257] = {.lex_state = 0, .external_lex_state = 3},
  [258] = {.lex_state = 0, .external_lex_state = 3},
  [259] = {.lex_state = 2, .external_lex_state = 4},
  [260] = {.lex_state = 8, .external_lex_state = 5},
  [261] = {.lex_state = 2, .external_lex_state = 5},
  [262] = {.lex_state = 7, .external_lex_state = 5},
  [263] = {.lex_state = 8, .external_lex_state = 5},
  [264] = {.lex_state = 7, .external_lex_state = 5},
  [265] = {.lex_state = 7, .external_lex_state = 5},
  [266] = {.lex_state = 2, .external_lex_state = 4},
  [267] = {.lex_state = 7, .external_lex_state = 4},
  [268] = {.lex_state = 0, .external_lex_state = 3},
  [269] = {.lex_state = 0, .external_lex_state = 3},
  [270] = {.lex_state = 0, .external_lex_state = 3},
  [271] = {.lex_state = 3, .external_lex_state = 4},
  [272] = {.lex_state = 0, .external_lex_state = 5},
  [273] = {.lex_state = 3, .external_lex_state = 4},
  [274] = {.lex_state = 0, .external_lex_state = 4},
  [275] = {.lex_state = 2, .external_lex_state = 5},
  [276] = {.lex_state = 14, .external_lex_state = 4},
  [277] = {.lex_state = 14, .external_lex_state = 4},
  [278] = {.lex_state = 3, .external_lex_state = 4},
  [279] = {.lex_state = 14, .external_lex_state = 4},
  [280] = {.lex_state = 3, .external_lex_state = 4},
  [281] = {.lex_state = 3, .external_lex_state = 4},
  [282] = {.lex_state = 7, .external_lex_state = 5},
  [283] = {.lex_state = 3, .external_lex_state = 4},
  [284] = {.lex_state = 8, .external_lex_state = 5},
  [285] = {.lex_state = 3, .external_lex_state = 4},
  [286] = {.lex_state = 3, .external_lex_state = 4},
  [287] = {.lex_state = 0, .external_lex_state = 4},
  [288] = {.lex_state = 3, .external_lex_state = 4},
  [289] = {.lex_state = 3, .external_lex_state = 4},
  [290] = {.lex_state = 3, .external_lex_state = 4},
  [291] = {.lex_state = 2, .external_lex_state = 5},
  [292] = {.lex_state = 3, .external_lex_state = 4},
  [293] = {.lex_state = 2, .external_lex_state = 5},
  [294] = {.lex_state = 3, .external_lex_state = 4},
  [295] = {.lex_state = 3, .external_lex_state = 4},
  [296] = {.lex_state = 3, .external_lex_state = 4},
  [297] = {.lex_state = 7, .external_lex_state = 5},
  [298] = {.lex_state = 2, .external_lex_state = 5},
  [299] = {.lex_state = 3, .external_lex_state = 4},
  [300] = {.lex_state = 3, .external_lex_state = 4},
  [301] = {.lex_state = 3, .external_lex_state = 4},
  [302] = {.lex_state = 0, .external_lex_state = 5},
  [303] = {.lex_state = 3, .external_lex_state = 4},
  [304] = {.lex_state = 0, .external_lex_state = 5},
  [305] = {.lex_state = 0, .external_lex_state = 4},
  [306] = {.lex_state = 7, .external_lex_state = 5},
  [307] = {.lex_state = 3, .external_lex_state = 4},
  [308] = {.lex_state = 2, .external_lex_state = 4},
  [309] = {.lex_state = 0, .external_lex_state = 5},
  [310] = {.lex_state = 3, .external_lex_state = 4},
  [311] = {.lex_state = 0, .external_lex_state = 5},
  [312] = {.lex_state = 0, .external_lex_state = 4},
  [313] = {.lex_state = 3, .external_lex_state = 4},
  [314] = {.lex_state = 3, .external_lex_state = 4},
  [315] = {.lex_state = 3, .external_lex_state = 4},
  [316] = {.lex_state = 0, .external_lex_state = 4},
  [317] = {.lex_state = 0, .external_lex_state = 4},
  [318] = {.lex_state = 0, .external_lex_state = 4},
  [319] = {.lex_state = 7, .external_lex_state = 5},
  [320] = {.lex_state = 0, .external_lex_state = 5},
  [321] = {.lex_state = 2, .external_lex_state = 5},
  [322] = {.lex_state = 3, .external_lex_state = 4},
  [323] = {.lex_state = 0, .external_lex_state = 5},
  [324] = {.lex_state = 0, .external_lex_state = 5},
  [325] = {.lex_state = 0, .external_lex_state = 4},
  [326] = {.lex_state = 14, .external_lex_state = 4},
  [327] = {.lex_state = 2, .external_lex_state = 4},
  [328] = {.lex_state = 0, .external_lex_state = 5},
  [329] = {.lex_state = 0, .external_lex_state = 5},
  [330] = {.lex_state = 14, .external_lex_state = 4},
  [331] = {.lex_state = 0, .external_lex_state = 5},
  [332] = {.lex_state = 0, .external_lex_state = 5},
  [333] = {.lex_state = 0, .external_lex_state = 4},
  [334] = {.lex_state = 2, .external_lex_state = 4},
  [335] = {.lex_state = 3, .external_lex_state = 4},
  [336] = {.lex_state = 0, .external_lex_state = 5},
  [337] = {.lex_state = 0, .external_lex_state = 5},
  [338] = {.lex_state = 0, .external_lex_state = 4},
  [339] = {.lex_state = 0, .external_lex_state = 4},
  [340] = {.lex_state = 3, .external_lex_state = 4},
  [341] = {.lex_state = 0, .external_lex_state = 4},
  [342] = {.lex_state = 0, .external_lex_state = 5},
  [343] = {.lex_state = 14, .external_lex_state = 4},
  [344] = {.lex_state = 0, .external_lex_state = 4},
  [345] = {.lex_state = 2, .external_lex_state = 4},
  [346] = {.lex_state = 3, .external_lex_state = 4},
  [347] = {.lex_state = 15, .external_lex_state = 4},
  [348] = {.lex_state = 0, .external_lex_state = 5},
  [349] = {.lex_state = 0, .external_lex_state = 4},
  [350] = {.lex_state = 0, .external_lex_state = 5},
  [351] = {.lex_state = 0, .external_lex_state = 4},
  [352] = {.lex_state = 0, .external_lex_state = 4},
  [353] = {.lex_state = 0, .external_lex_state = 5},
  [354] = {.lex_state = 2, .external_lex_state = 4},
  [355] = {.lex_state = 0, .external_lex_state = 4},
  [356] = {.lex_state = 0, .external_lex_state = 5},
  [357] = {.lex_state = 0, .external_lex_state = 4},
  [358] = {.lex_state = 0, .external_lex_state = 4},
  [359] = {.lex_state = 0, .external_lex_state = 4},
  [360] = {.lex_state = 0, .external_lex_state = 5},
  [361] = {.lex_state = 0, .external_lex_state = 5},
  [362] = {.lex_state = 0, .external_lex_state = 5},
  [363] = {.lex_state = 0, .external_lex_state = 4},
  [364] = {.lex_state = 0, .external_lex_state = 5},
  [365] = {.lex_state = 0, .external_lex_state = 4},
  [366] = {.lex_state = 3, .external_lex_state = 4},
  [367] = {.lex_state = 0, .external_lex_state = 4},
  [368] = {.lex_state = 0, .external_lex_state = 5},
  [369] = {.lex_state = 0, .external_lex_state = 4},
  [370] = {.lex_state = 15, .external_lex_state = 4},
  [371] = {.lex_state = 4, .external_lex_state = 4},
  [372] = {.lex_state = 15, .external_lex_state = 4},
  [373] = {.lex_state = 15, .external_lex_state = 4},
  [374] = {.lex_state = 15, .external_lex_state = 4},
  [375] = {.lex_state = 4, .external_lex_state = 4},
  [376] = {.lex_state = 0, .external_lex_state = 5},
  [377] = {.lex_state = 0, .external_lex_state = 5},
  [378] = {.lex_state = 0, .external_lex_state = 4},
  [379] = {.lex_state = 0, .external_lex_state = 5},
  [380] = {.lex_state = 0, .external_lex_state = 4},
  [381] = {.lex_state = 15, .external_lex_state = 4},
  [382] = {.lex_state = 15, .external_lex_state = 4},
  [383] = {.lex_state = 4, .external_lex_state = 4},
  [384] = {.lex_state = 0, .external_lex_state = 5},
  [385] = {.lex_state = 0, .external_lex_state = 5},
  [386] = {.lex_state = 0, .external_lex_state = 4},
  [387] = {.lex_state = 0, .external_lex_state = 5},
  [388] = {.lex_state = 0, .external_lex_state = 5},
  [389] = {.lex_state = 0, .external_lex_state = 4},
  [390] = {.lex_state = 0, .external_lex_state = 5},
  [391] = {.lex_state = 0, .external_lex_state = 5},
  [392] = {.lex_state = 0, .external_lex_state = 5},
  [393] = {.lex_state = 0, .external_lex_state = 5},
  [394] = {.lex_state = 0, .external_lex_state = 5},
  [395] = {.lex_state = 15, .external_lex_state = 4},
  [396] = {.lex_state = 2, .external_lex_state = 4},
  [397] = {.lex_state = 0, .external_lex_state = 5},
  [398] = {.lex_state = 4, .external_lex_state = 4},
  [399] = {.lex_state = 4, .external_lex_state = 4},
  [400] = {.lex_state = 0, .external_lex_state = 5},
  [401] = {.lex_state = 15, .external_lex_state = 4},
  [402] = {.lex_state = 14, .external_lex_state = 4},
  [403] = {.lex_state = 0, .external_lex_state = 5},
  [404] = {.lex_state = 4, .external_lex_state = 4},
  [405] = {.lex_state = 0, .external_lex_state = 5},
  [406] = {.lex_state = 0, .external_lex_state = 5},
  [407] = {.lex_state = 0, .external_lex_state = 5},
  [408] = {.lex_state = 0, .external_lex_state = 5},
  [409] = {.lex_state = 0, .external_lex_state = 5},
  [410] = {.lex_state = 0, .external_lex_state = 4},
  [411] = {.lex_state = 0, .external_lex_state = 5},
  [412] = {.lex_state = 0, .external_lex_state = 5},
  [413] = {.lex_state = 0, .external_lex_state = 5},
  [414] = {.lex_state = 0, .external_lex_state = 5},
  [415] = {.lex_state = 0, .external_lex_state = 5},
  [416] = {.lex_state = 0, .external_lex_state = 5},
  [417] = {.lex_state = 0, .external_lex_state = 5},
  [418] = {.lex_state = 0, .external_lex_state = 4},
  [419] = {.lex_state = 0, .external_lex_state = 5},
  [420] = {.lex_state = 0, .external_lex_state = 5},
  [421] = {.lex_state = 2, .external_lex_state = 4},
  [422] = {.lex_state = 0, .external_lex_state = 5},
  [423] = {.lex_state = 0, .external_lex_state = 4},
  [424] = {.lex_state = 0, .external_lex_state = 5},
  [425] = {.lex_state = 0, .external_lex_state = 5},
  [426] = {.lex_state = 0, .external_lex_state = 5},
  [427] = {.lex_state = 0, .external_lex_state = 5},
  [428] = {.lex_state = 3, .external_lex_state = 4},
  [429] = {.lex_state = 0, .external_lex_state = 4},
  [430] = {.lex_state = 0, .external_lex_state = 5},
  [431] = {.lex_state = 0, .external_lex_state = 4},
  [432] = {.lex_state = 0, .external_lex_state = 5},
  [433] = {.lex_state = 0, .external_lex_state = 5},
  [434] = {.lex_state = 0, .external_lex_state = 6},
  [435] = {.lex_state = 0, .external_lex_state = 5},
  [436] = {.lex_state = 0, .external_lex_state = 5},
  [437] = {.lex_state = 0, .external_lex_state = 6},
  [438] = {.lex_state = 0, .external_lex_state = 5},
  [439] = {.lex_state = 0, .external_lex_state = 5},
  [440] = {.lex_state = 0, .external_lex_state = 5},
  [441] = {.lex_state = 0, .external_lex_state = 5},
  [442] = {.lex_state = 0, .external_lex_state = 5},
  [443] = {.lex_state = 0, .external_lex_state = 4},
  [444] = {.lex_state = 0, .external_lex_state = 5},
  [445] = {.lex_state = 0, .external_lex_state = 5},
  [446] = {.lex_state = 0, .external_lex_state = 5},
  [447] = {.lex_state = 0, .external_lex_state = 5},
  [448] = {.lex_state = 0, .external_lex_state = 5},
  [449] = {.lex_state = 0, .external_lex_state = 5},
  [450] = {.lex_state = 0, .external_lex_state = 4},
  [451] = {.lex_state = 0, .external_lex_state = 5},
  [452] = {.lex_state = 0, .external_lex_state = 4},
  [453] = {.lex_state = 0, .external_lex_state = 4},
  [454] = {.lex_state = 0, .external_lex_state = 5},
  [455] = {.lex_state = 0, .external_lex_state = 4},
  [456] = {.lex_state = 0, .external_lex_state = 5},
  [457] = {.lex_state = 0, .external_lex_state = 5},
  [458] = {.lex_state = 0, .external_lex_state = 5},
  [459] = {.lex_state = 0, .external_lex_state = 5},
  [460] = {.lex_state = 0, .external_lex_state = 4},
  [461] = {.lex_state = 0, .external_lex_state = 5},
  [462] = {.lex_state = 0, .external_lex_state = 5},
  [463] = {.lex_state = 0, .external_lex_state = 4},
  [464] = {.lex_state = 0, .external_lex_state = 5},
  [465] = {.lex_state = 0, .external_lex_state = 4},
  [466] = {.lex_state = 0, .external_lex_state = 4},
  [467] = {.lex_state = 0, .external_lex_state = 6},
  [468] = {.lex_state = 0, .external_lex_state = 5},
  [469] = {.lex_state = 0, .external_lex_state = 4},
  [470] = {.lex_state = 0, .external_lex_state = 4},
  [471] = {.lex_state = 0, .external_lex_state = 5},
  [472] = {.lex_state = 0, .external_lex_state = 5},
  [473] = {.lex_state = 0, .external_lex_state = 5},
  [474] = {.lex_state = 0, .external_lex_state = 4},
  [475] = {.lex_state = 0, .external_lex_state = 5},
  [476] = {.lex_state = 0, .external_lex_state = 4},
  [477] = {.lex_state = 0, .external_lex_state = 5},
  [478] = {.lex_state = 4, .external_lex_state = 4},
  [479] = {.lex_state = 0, .external_lex_state = 5},
  [480] = {.lex_state = 4, .external_lex_state = 4},
  [481] = {.lex_state = 0, .external_lex_state = 5},
  [482] = {.lex_state = 0, .external_lex_state = 4},
  [483] = {.lex_state = 0, .external_lex_state = 5},
  [484] = {.lex_state = 0, .external_lex_state = 5},
  [485] = {.lex_state = 4, .external_lex_state = 4},
  [486] = {.lex_state = 0, .external_lex_state = 5},
  [487] = {.lex_state = 0, .external_lex_state = 5},
  [488] = {.lex_state = 4, .external_lex_state = 4},
  [489] = {.lex_state = 0, .external_lex_state = 5},
  [490] = {.lex_state = 0, .external_lex_state = 5},
  [491] = {.lex_state = 2, .external_lex_state = 4},
  [492] = {.lex_state = 0, .external_lex_state = 4},
  [493] = {.lex_state = 0, .external_lex_state = 5},
  [494] = {.lex_state = 0, .external_lex_state = 5},
  [495] = {.lex_state = 0, .external_lex_state = 5},
  [496] = {.lex_state = 0, .external_lex_state = 5},
  [497] = {.lex_state = 0, .external_lex_state = 4},
  [498] = {.lex_state = 0, .external_lex_state = 5},
  [499] = {.lex_state = 0, .external_lex_state = 5},
  [500] = {.lex_state = 0, .external_lex_state = 5},
  [501] = {.lex_state = 0, .external_lex_state = 5},
  [502] = {.lex_state = 0, .external_lex_state = 5},
  [503] = {.lex_state = 0, .external_lex_state = 4},
  [504] = {.lex_state = 0, .external_lex_state = 6},
  [505] = {.lex_state = 0, .external_lex_state = 5},
  [506] = {.lex_state = 0, .external_lex_state = 5},
  [507] = {.lex_state = 0, .external_lex_state = 5},
  [508] = {.lex_state = 0, .external_lex_state = 5},
  [509] = {.lex_state = 0, .external_lex_state = 5},
  [510] = {.lex_state = 0, .external_lex_state = 4},
  [511] = {.lex_state = 0, .external_lex_state = 5},
  [512] = {.lex_state = 0, .external_lex_state = 4},
  [513] = {.lex_state = 2, .external_lex_state = 4},
  [514] = {.lex_state = 0, .external_lex_state = 4},
  [515] = {.lex_state = 0, .external_lex_state = 4},
  [516] = {.lex_state = 0, .external_lex_state = 6},
  [517] = {.lex_state = 2, .external_lex_state = 4},
  [518] = {.lex_state = 0, .external_lex_state = 4},
  [519] = {.lex_state = 8, .external_lex_state = 4},
  [520] = {.lex_state = 0, .external_lex_state = 4},
  [521] = {.lex_state = 2, .external_lex_state = 4},
  [522] = {.lex_state = 0, .external_lex_state = 4},
  [523] = {.lex_state = 2, .external_lex_state = 4},
  [524] = {.lex_state = 2, .external_lex_state = 4},
  [525] = {.lex_state = 2, .external_lex_state = 4},
  [526] = {.lex_state = 0, .external_lex_state = 4},
  [527] = {.lex_state = 0, .external_lex_state = 4},
  [528] = {.lex_state = 0, .external_lex_state = 4},
  [529] = {.lex_state = 2, .external_lex_state = 4},
  [530] = {.lex_state = 2, .external_lex_state = 4},
  [531] = {.lex_state = 0, .external_lex_state = 6},
  [532] = {.lex_state = 0, .external_lex_state = 4},
  [533] = {.lex_state = 0, .external_lex_state = 4},
  [534] = {.lex_state = 2, .external_lex_state = 4},
  [535] = {.lex_state = 0, .external_lex_state = 4},
  [536] = {.lex_state = 0, .external_lex_state = 4},
  [537] = {.lex_state = 0, .external_lex_state = 4},
  [538] = {.lex_state = 2, .external_lex_state = 4},
  [539] = {.lex_state = 2, .external_lex_state = 4},
  [540] = {.lex_state = 0, .external_lex_state = 4},
  [541] = {.lex_state = 0, .external_lex_state = 4},
  [542] = {.lex_state = 0, .external_lex_state = 4},
  [543] = {.lex_state = 2, .external_lex_state = 4},
  [544] = {.lex_state = 0, .external_lex_state = 4},
  [545] = {.lex_state = 0, .external_lex_state = 6},
  [546] = {.lex_state = 0, .external_lex_state = 4},
  [547] = {.lex_state = 2, .external_lex_state = 4},
  [548] = {.lex_state = 0, .external_lex_state = 6},
  [549] = {.lex_state = 0, .external_lex_state = 4},
  [550] = {.lex_state = 0, .external_lex_state = 4},
  [551] = {.lex_state = 2, .external_lex_state = 4},
  [552] = {.lex_state = 0, .external_lex_state = 6},
  [553] = {.lex_state = 0, .external_lex_state = 6},
  [554] = {.lex_state = 0, .external_lex_state = 4},
  [555] = {.lex_state = 2, .external_lex_state = 4},
  [556] = {.lex_state = 0, .external_lex_state = 4},
  [557] = {.lex_state = 0, .external_lex_state = 4},
  [558] = {.lex_state = 2, .external_lex_state = 4},
  [559] = {.lex_state = 2, .external_lex_state = 4},
  [560] = {.lex_state = 0, .external_lex_state = 4},
  [561] = {.lex_state = 0, .external_lex_state = 4},
  [562] = {.lex_state = 0, .external_lex_state = 4},
  [563] = {.lex_state = 0, .external_lex_state = 4},
  [564] = {.lex_state = 0, .external_lex_state = 4},
  [565] = {.lex_state = 2, .external_lex_state = 4},
  [566] = {.lex_state = 0, .external_lex_state = 4},
  [567] = {.lex_state = 0, .external_lex_state = 6},
  [568] = {.lex_state = 0, .external_lex_state = 4},
  [569] = {.lex_state = 0, .external_lex_state = 6},
  [570] = {.lex_state = 0, .external_lex_state = 6},
  [571] = {.lex_state = 0, .external_lex_state = 4},
  [572] = {.lex_state = 0, .external_lex_state = 6},
  [573] = {.lex_state = 0, .external_lex_state = 4},
  [574] = {.lex_state = 0, .external_lex_state = 6},
  [575] = {.lex_state = 8, .external_lex_state = 4},
  [576] = {.lex_state = 0, .external_lex_state = 4},
  [577] = {.lex_state = 0, .external_lex_state = 4},
  [578] = {.lex_state = 0, .external_lex_state = 6},
  [579] = {.lex_state = 2, .external_lex_state = 4},
  [580] = {.lex_state = 0, .external_lex_state = 4},
  [581] = {.lex_state = 0, .external_lex_state = 4},
  [582] = {.lex_state = 0, .external_lex_state = 4},
  [583] = {.lex_state = 0, .external_lex_state = 4},
  [584] = {.lex_state = 0, .external_lex_state = 4},
  [585] = {.lex_state = 0, .external_lex_state = 4},
  [586] = {.lex_state = 0, .external_lex_state = 4},
  [587] = {.lex_state = 0, .external_lex_state = 4},
  [588] = {.lex_state = 0, .external_lex_state = 4},
  [589] = {.lex_state = 2, .external_lex_state = 4},
  [590] = {.lex_state = 0, .external_lex_state = 4},
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
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_prefix] = ACTIONS(1),
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
    [sym_source_file] = STATE(588),
    [sym_attribute] = STATE(312),
    [sym_module] = STATE(546),
    [aux_sym_module_repeat1] = STATE(312),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [aux_sym__token1] = ACTIONS(3),
    [sym_empty_file] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
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
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_recur,
    ACTIONS(33), 1,
      sym__layout_end,
    STATE(236), 1,
      sym_expr_app,
    STATE(350), 1,
      sym_expr_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    STATE(528), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(35), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(392), 8,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
      sym__stmt,
      sym_stmt_let,
  [73] = 19,
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
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_recur,
    ACTIONS(35), 1,
      sym__layout_end,
    STATE(236), 1,
      sym_expr_app,
    STATE(350), 1,
      sym_expr_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    STATE(528), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(35), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(425), 8,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
      sym__stmt,
      sym_stmt_let,
  [146] = 18,
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
      anon_sym_case,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_recur,
    STATE(236), 1,
      sym_expr_app,
    STATE(350), 1,
      sym_expr_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    STATE(528), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(35), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(458), 8,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
      sym__stmt,
      sym_stmt_let,
  [216] = 21,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_import,
    ACTIONS(41), 1,
      anon_sym_prefix,
    ACTIONS(45), 1,
      anon_sym_postfix,
    ACTIONS(47), 1,
      anon_sym_foreign,
    ACTIONS(49), 1,
      anon_sym_type,
    ACTIONS(51), 1,
      anon_sym_class,
    ACTIONS(53), 1,
      anon_sym_member,
    ACTIONS(55), 1,
      sym__layout_end,
    STATE(393), 1,
      sym_item,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    STATE(490), 1,
      sym__type_ctor,
    STATE(495), 1,
      sym__type_alias,
    STATE(496), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(26), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(499), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(500), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [291] = 21,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_import,
    ACTIONS(41), 1,
      anon_sym_prefix,
    ACTIONS(45), 1,
      anon_sym_postfix,
    ACTIONS(47), 1,
      anon_sym_foreign,
    ACTIONS(49), 1,
      anon_sym_type,
    ACTIONS(51), 1,
      anon_sym_class,
    ACTIONS(53), 1,
      anon_sym_member,
    ACTIONS(57), 1,
      sym__layout_end,
    STATE(427), 1,
      sym_item,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    STATE(490), 1,
      sym__type_ctor,
    STATE(495), 1,
      sym__type_alias,
    STATE(496), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(26), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(499), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(500), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [366] = 20,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_import,
    ACTIONS(41), 1,
      anon_sym_prefix,
    ACTIONS(45), 1,
      anon_sym_postfix,
    ACTIONS(47), 1,
      anon_sym_foreign,
    ACTIONS(49), 1,
      anon_sym_type,
    ACTIONS(51), 1,
      anon_sym_class,
    ACTIONS(53), 1,
      anon_sym_member,
    STATE(433), 1,
      sym_item,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    STATE(490), 1,
      sym__type_ctor,
    STATE(495), 1,
      sym__type_alias,
    STATE(496), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(26), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(499), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(500), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [438] = 18,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(529), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [506] = 18,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(565), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [574] = 18,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(517), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [642] = 17,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(560), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [707] = 17,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_fn,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      aux_sym_int_literal_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      sym_recur,
    STATE(229), 1,
      sym_expr_infix,
    STATE(286), 1,
      sym_expr_app,
    STATE(460), 1,
      aux_sym_path_repeat1,
    STATE(576), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(296), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(37), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [772] = 17,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(561), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [837] = 17,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(515), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [902] = 17,
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
      anon_sym_case,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_recur,
    STATE(236), 1,
      sym_expr_app,
    STATE(350), 1,
      sym_expr_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    STATE(528), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(445), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(35), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [967] = 17,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(296), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1032] = 17,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_fn,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      aux_sym_int_literal_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      sym_recur,
    STATE(229), 1,
      sym_expr_infix,
    STATE(286), 1,
      sym_expr_app,
    STATE(460), 1,
      aux_sym_path_repeat1,
    STATE(576), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(540), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(37), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1097] = 17,
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
      anon_sym_case,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_recur,
    STATE(236), 1,
      sym_expr_app,
    STATE(350), 1,
      sym_expr_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    STATE(528), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(471), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(35), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1162] = 17,
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
      anon_sym_case,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_recur,
    STATE(236), 1,
      sym_expr_app,
    STATE(350), 1,
      sym_expr_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    STATE(528), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(439), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(35), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1227] = 17,
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
      anon_sym_case,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_recur,
    STATE(236), 1,
      sym_expr_app,
    STATE(350), 1,
      sym_expr_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    STATE(528), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(507), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(35), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1292] = 17,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(586), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1357] = 17,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_fn,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      aux_sym_int_literal_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      sym_recur,
    STATE(229), 1,
      sym_expr_infix,
    STATE(286), 1,
      sym_expr_app,
    STATE(460), 1,
      aux_sym_path_repeat1,
    STATE(576), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(301), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(37), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1422] = 17,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(533), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1487] = 17,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(301), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1552] = 17,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(583), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1617] = 19,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_import,
    ACTIONS(41), 1,
      anon_sym_prefix,
    ACTIONS(45), 1,
      anon_sym_postfix,
    ACTIONS(47), 1,
      anon_sym_foreign,
    ACTIONS(49), 1,
      anon_sym_type,
    ACTIONS(51), 1,
      anon_sym_class,
    ACTIONS(53), 1,
      anon_sym_member,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    STATE(490), 1,
      sym__type_ctor,
    STATE(495), 1,
      sym__type_alias,
    STATE(496), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(58), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(499), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(464), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [1686] = 17,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(585), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1751] = 17,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_if,
    ACTIONS(71), 1,
      anon_sym_case,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_recur,
    STATE(181), 1,
      sym_expr_app,
    STATE(229), 1,
      sym_expr_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    STATE(562), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(584), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(30), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1816] = 17,
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
      anon_sym_case,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_recur,
    STATE(236), 1,
      sym_expr_app,
    STATE(350), 1,
      sym_expr_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    STATE(528), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(442), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(35), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1881] = 15,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym_operator,
    ACTIONS(111), 1,
      sym_recur,
    STATE(184), 1,
      aux_sym_expr_infix_repeat1,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(105), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(32), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1938] = 11,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_recur,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(115), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(113), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(32), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1986] = 11,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_recur,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(119), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(117), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(33), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2034] = 11,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      aux_sym_int_literal_token1,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      sym_recur,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(136), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(131), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(129), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(33), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2082] = 11,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym_recur,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(147), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(145), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(32), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2130] = 14,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(149), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      sym_operator,
    ACTIONS(153), 1,
      sym_recur,
    STATE(232), 1,
      aux_sym_expr_infix_repeat1,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(101), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(36), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2183] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      sym_recur,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(117), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(39), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2227] = 14,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      aux_sym_int_literal_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 1,
      anon_sym_DASH_GT,
    ACTIONS(157), 1,
      anon_sym_BQUOTE,
    ACTIONS(159), 1,
      sym_operator,
    ACTIONS(161), 1,
      sym_recur,
    STATE(283), 1,
      aux_sym_expr_infix_repeat1,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(41), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2279] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_recur,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(113), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(36), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2323] = 10,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      aux_sym_int_literal_token1,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym_recur,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(172), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(129), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(39), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2367] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_recur,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(145), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(36), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2411] = 11,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      aux_sym_int_literal_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_recur,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(117), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(119), 2,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(43), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2456] = 11,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      aux_sym_int_literal_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_recur,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(113), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(115), 2,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(41), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2501] = 11,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      aux_sym_int_literal_token1,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym_recur,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(129), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(131), 2,
      anon_sym_DASH_GT,
      sym_operator,
    ACTIONS(192), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(43), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2546] = 11,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      aux_sym_int_literal_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_recur,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(145), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(147), 2,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(41), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2591] = 12,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 1,
      anon_sym_where,
    ACTIONS(209), 1,
      sym_operator,
    STATE(190), 1,
      sym_path,
    STATE(205), 1,
      aux_sym_ty_infix_repeat1,
    STATE(288), 1,
      sym_where_clause,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(205), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(66), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2635] = 5,
    ACTIONS(215), 1,
      anon_sym_EQ,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(213), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(211), 12,
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
  [2665] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(221), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(219), 8,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [2692] = 10,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      aux_sym_int_literal_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym_recur,
    STATE(340), 1,
      sym_expr_app,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(44), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [2731] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_recur,
    STATE(209), 1,
      sym_expr_app,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(31), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [2770] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      sym_recur,
    STATE(291), 1,
      sym_expr_app,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(38), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [2809] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(233), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(231), 8,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [2836] = 10,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      aux_sym_int_literal_token1,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      sym_recur,
    STATE(313), 1,
      sym_expr_app,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(42), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [2875] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_int_literal_token1,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      sym_recur,
    STATE(211), 1,
      sym_expr_app,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(75), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(34), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [2914] = 10,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 1,
      sym_operator,
    STATE(187), 1,
      sym_path,
    STATE(197), 1,
      aux_sym_ty_infix_repeat1,
    STATE(466), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(245), 4,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(62), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2953] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      sym_recur,
    STATE(293), 1,
      sym_expr_app,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(40), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [2992] = 8,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_path,
    STATE(466), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(259), 5,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(56), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3026] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(263), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(261), 12,
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
  [3050] = 4,
    ACTIONS(267), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(58), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(265), 12,
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
  [3076] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(272), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(270), 12,
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
  [3100] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(276), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(274), 12,
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
  [3124] = 8,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_path,
    STATE(452), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(259), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(61), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3158] = 8,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_path,
    STATE(466), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(286), 5,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(56), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3192] = 8,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_path,
    STATE(466), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(290), 5,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(62), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3226] = 8,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_path,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 2,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(290), 4,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
    STATE(66), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3260] = 8,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_path,
    STATE(452), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(296), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(298), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(70), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3294] = 8,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_path,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(284), 2,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(286), 4,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
    STATE(71), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3328] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(231), 6,
      anon_sym_as,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(233), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [3354] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(219), 6,
      anon_sym_as,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(221), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [3380] = 10,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_operator,
    STATE(198), 1,
      sym_path,
    STATE(260), 1,
      aux_sym_ty_infix_repeat1,
    STATE(469), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(245), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(87), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3418] = 8,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_path,
    STATE(452), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(306), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(308), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(61), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3452] = 8,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_path,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 2,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(259), 4,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
    STATE(71), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3486] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(318), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(316), 12,
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
  [3510] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_where,
    ACTIONS(324), 1,
      sym_operator,
    STATE(240), 1,
      sym_path,
    STATE(275), 1,
      aux_sym_ty_infix_repeat1,
    STATE(432), 1,
      sym_where_clause,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(97), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3550] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(328), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(326), 12,
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
  [3574] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(326), 6,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(328), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3597] = 11,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    STATE(238), 1,
      sym_ty_app,
    STATE(240), 1,
      sym_path,
    STATE(320), 1,
      aux_sym__type_ctor_repeat1,
    STATE(331), 1,
      sym_ty_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(493), 2,
      sym__ty,
      sym_ty_where,
    STATE(73), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3636] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(334), 6,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(336), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3659] = 10,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      sym_operator,
    STATE(265), 1,
      sym_path,
    STATE(297), 1,
      aux_sym_ty_infix_repeat1,
    STATE(463), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(95), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3696] = 8,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(198), 1,
      sym_path,
    STATE(469), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(259), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(79), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3729] = 8,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    STATE(198), 1,
      sym_path,
    STATE(469), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(290), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(87), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3762] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(316), 6,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(318), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3785] = 11,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_DASH_GT,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_where,
    ACTIONS(354), 1,
      sym_operator,
    STATE(285), 1,
      sym_path,
    STATE(288), 1,
      sym_where_clause,
    STATE(315), 1,
      aux_sym_ty_infix_repeat1,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(124), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3824] = 11,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    STATE(238), 1,
      sym_ty_app,
    STATE(240), 1,
      sym_path,
    STATE(331), 1,
      sym_ty_infix,
    STATE(336), 1,
      aux_sym__type_ctor_repeat1,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(508), 2,
      sym__ty,
      sym_ty_where,
    STATE(73), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3863] = 7,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_path,
    STATE(474), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_PIPE,
    STATE(84), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3894] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(362), 6,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(364), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3917] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(270), 6,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(272), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3940] = 8,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    STATE(198), 1,
      sym_path,
    STATE(469), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(284), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(286), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(79), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3973] = 10,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(543), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4009] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(219), 6,
      anon_sym_DASH_GT,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(221), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [4033] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(231), 6,
      anon_sym_DASH_GT,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(233), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [4057] = 10,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(555), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4093] = 10,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(558), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4129] = 9,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      sym_operator,
    STATE(279), 1,
      sym_path,
    STATE(326), 1,
      aux_sym_ty_infix_repeat1,
    STATE(455), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    STATE(127), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4163] = 7,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_path,
    STATE(474), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(296), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(103), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4193] = 8,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_path,
    STATE(463), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(284), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(106), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4225] = 8,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_path,
    STATE(463), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(95), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4257] = 8,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(286), 1,
      anon_sym_where,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    STATE(240), 1,
      sym_path,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(284), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(107), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4289] = 10,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(551), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4325] = 8,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_where,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    STATE(240), 1,
      sym_path,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(97), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4357] = 3,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(386), 12,
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
  [4379] = 10,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(579), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4415] = 10,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(538), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4451] = 7,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_path,
    STATE(474), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(306), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(84), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4481] = 10,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(547), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4517] = 10,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(524), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4553] = 8,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_path,
    STATE(463), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(259), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(106), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4585] = 8,
    ACTIONS(259), 1,
      anon_sym_where,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(240), 1,
      sym_path,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(107), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4617] = 10,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(523), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4653] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(334), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(336), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [4674] = 7,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    STATE(279), 1,
      sym_path,
    STATE(455), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(259), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(110), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4703] = 9,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(513), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4736] = 4,
    ACTIONS(418), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(219), 5,
      anon_sym_as,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(221), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
  [4759] = 9,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(238), 1,
      sym_ty_app,
    STATE(240), 1,
      sym_path,
    STATE(331), 1,
      sym_ty_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(505), 2,
      sym__ty,
      sym_ty_where,
    STATE(73), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4792] = 9,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(238), 1,
      sym_ty_app,
    STATE(240), 1,
      sym_path,
    STATE(331), 1,
      sym_ty_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(461), 2,
      sym__ty,
      sym_ty_where,
    STATE(73), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4825] = 9,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(285), 1,
      sym_path,
    STATE(290), 1,
      sym_ty_app,
    STATE(352), 1,
      sym_ty_infix,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(307), 2,
      sym__ty,
      sym_ty_where,
    STATE(82), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4858] = 9,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(238), 1,
      sym_ty_app,
    STATE(240), 1,
      sym_path,
    STATE(331), 1,
      sym_ty_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(486), 2,
      sym__ty,
      sym_ty_where,
    STATE(73), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4891] = 7,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_path,
    STATE(474), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(422), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(84), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4920] = 4,
    ACTIONS(418), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(231), 5,
      anon_sym_as,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(233), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
  [4943] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(270), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(272), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [4964] = 9,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(238), 1,
      sym_ty_app,
    STATE(240), 1,
      sym_path,
    STATE(331), 1,
      sym_ty_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(436), 2,
      sym__ty,
      sym_ty_where,
    STATE(73), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4997] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(326), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(328), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [5018] = 9,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(238), 1,
      sym_ty_app,
    STATE(240), 1,
      sym_path,
    STATE(331), 1,
      sym_ty_infix,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(483), 2,
      sym__ty,
      sym_ty_where,
    STATE(73), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5051] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(316), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(318), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [5072] = 7,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(285), 1,
      sym_path,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(286), 3,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
    STATE(130), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5101] = 7,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(285), 1,
      sym_path,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(290), 3,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
    STATE(124), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5130] = 7,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_path,
    STATE(474), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(424), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(117), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5159] = 7,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(279), 1,
      sym_path,
    STATE(455), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(286), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(110), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5188] = 7,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(279), 1,
      sym_path,
    STATE(455), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(290), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(127), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5217] = 9,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(307), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5250] = 7,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(285), 1,
      sym_path,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(259), 3,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
    STATE(130), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5279] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(362), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(364), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [5300] = 9,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(189), 1,
      sym_ty_app,
    STATE(190), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(530), 2,
      sym__ty,
      sym_ty_where,
    STATE(45), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5333] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(326), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(328), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [5353] = 8,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      sym__layout_end,
    STATE(335), 1,
      sym_pat_app,
    STATE(400), 1,
      sym_case_arm,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(482), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(138), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5383] = 8,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      sym__layout_end,
    STATE(335), 1,
      sym_pat_app,
    STATE(385), 1,
      sym_case_arm,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(482), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(138), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5413] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(270), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(272), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [5433] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(362), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(364), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [5453] = 7,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(444), 1,
      sym_operator,
    STATE(346), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(442), 2,
      anon_sym_DASH_GT,
      anon_sym_if,
    STATE(141), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5481] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(316), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(318), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [5501] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(334), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(336), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [5521] = 5,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(446), 3,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
    STATE(150), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5544] = 7,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(589), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(143), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5571] = 7,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 1,
      sym_operator,
    STATE(354), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(167), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5598] = 8,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(246), 1,
      sym_ty_infix,
    STATE(279), 1,
      sym_path,
    STATE(343), 1,
      sym_ty_app,
    STATE(455), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(93), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5627] = 8,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    STATE(198), 1,
      sym_path,
    STATE(250), 1,
      sym_ty_app,
    STATE(329), 1,
      sym_ty_infix,
    STATE(469), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(69), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5656] = 8,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_path,
    STATE(282), 1,
      sym_ty_app,
    STATE(329), 1,
      sym_ty_infix,
    STATE(463), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(78), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5685] = 5,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(440), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(458), 3,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
    STATE(141), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5708] = 7,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(525), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(143), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5735] = 8,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(187), 1,
      sym_path,
    STATE(206), 1,
      sym_ty_app,
    STATE(246), 1,
      sym_ty_infix,
    STATE(466), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(54), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5764] = 5,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(470), 3,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
    STATE(150), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5787] = 7,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(521), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(143), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5814] = 9,
    ACTIONS(474), 1,
      sym_identifier,
    ACTIONS(476), 1,
      anon_sym_EQ,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_PIPE,
    ACTIONS(482), 1,
      anon_sym_where,
    STATE(412), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(484), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(156), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [5845] = 7,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym_pat_app,
    STATE(468), 1,
      sym_case_arm,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(482), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(138), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5872] = 7,
    ACTIONS(259), 1,
      anon_sym_of,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_path,
    STATE(452), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(154), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5899] = 7,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(486), 1,
      anon_sym_of,
    STATE(190), 1,
      sym_path,
    STATE(452), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(154), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5926] = 9,
    ACTIONS(474), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    ACTIONS(482), 1,
      anon_sym_where,
    ACTIONS(488), 1,
      anon_sym_EQ,
    ACTIONS(490), 1,
      anon_sym_PIPE,
    STATE(360), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(492), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(160), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [5957] = 6,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_EQ,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(195), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5981] = 6,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(190), 1,
      sym_path,
    STATE(452), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(155), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [6005] = 5,
    ACTIONS(418), 1,
      anon_sym_SLASH,
    ACTIONS(504), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(233), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(231), 4,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
  [6027] = 6,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_where,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(160), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
    ACTIONS(509), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_PIPE,
  [6051] = 5,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(522), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(161), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6073] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(233), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(231), 6,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [6093] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(221), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(219), 6,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [6113] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(285), 1,
      sym_path,
    STATE(428), 1,
      sym_ty_app,
    STATE(460), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(125), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6139] = 7,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_path,
    STATE(319), 1,
      sym_ty_app,
    STATE(463), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(96), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6165] = 7,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(187), 1,
      sym_path,
    STATE(267), 1,
      sym_ty_app,
    STATE(466), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(63), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6191] = 5,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(524), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(161), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6213] = 7,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(190), 1,
      sym_path,
    STATE(259), 1,
      sym_ty_app,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(64), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6239] = 5,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(522), 2,
      anon_sym_EQ,
      anon_sym_DASH_GT,
    STATE(169), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6261] = 7,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    STATE(198), 1,
      sym_path,
    STATE(284), 1,
      sym_ty_app,
    STATE(469), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(80), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6287] = 5,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(532), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(167), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6309] = 7,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(279), 1,
      sym_path,
    STATE(402), 1,
      sym_ty_app,
    STATE(455), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(128), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6335] = 4,
    ACTIONS(418), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(231), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(233), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6355] = 4,
    ACTIONS(418), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(219), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(221), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6375] = 7,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(240), 1,
      sym_path,
    STATE(321), 1,
      sym_ty_app,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(99), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6401] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(536), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(534), 6,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [6418] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(540), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(538), 6,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [6435] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(231), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(233), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [6454] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(219), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(221), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [6473] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(542), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(544), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6490] = 6,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym_operator,
    STATE(184), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(101), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [6513] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(542), 4,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(544), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6530] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(536), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(534), 5,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
  [6547] = 5,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym_operator,
    STATE(192), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(546), 5,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [6568] = 5,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(548), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(169), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6589] = 4,
    ACTIONS(418), 1,
      anon_sym_SLASH,
    ACTIONS(550), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(233), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [6608] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(544), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(542), 6,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [6625] = 5,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(169), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6646] = 6,
    ACTIONS(209), 1,
      sym_operator,
    ACTIONS(554), 1,
      anon_sym_where,
    STATE(205), 1,
      aux_sym_ty_infix_repeat1,
    STATE(288), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [6669] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(544), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(542), 5,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
  [6686] = 5,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(556), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(169), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6707] = 5,
    ACTIONS(558), 1,
      anon_sym_BQUOTE,
    ACTIONS(561), 1,
      sym_operator,
    STATE(192), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(113), 5,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [6728] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(538), 4,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(540), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6745] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(540), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(538), 5,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
  [6762] = 5,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(169), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6783] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(534), 4,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(536), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6800] = 5,
    ACTIONS(247), 1,
      sym_operator,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(566), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [6820] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(542), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(544), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [6836] = 4,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(188), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6854] = 5,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(491), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(171), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [6874] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(570), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(572), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [6890] = 5,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_where,
    STATE(202), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(577), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [6910] = 5,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(585), 1,
      anon_sym_where,
    STATE(202), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(583), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [6930] = 4,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(191), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6948] = 4,
    ACTIONS(209), 1,
      sym_operator,
    STATE(215), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(566), 5,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
  [6966] = 5,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      sym_operator,
    STATE(197), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [6986] = 7,
    ACTIONS(587), 1,
      anon_sym_EQ,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_where,
    STATE(249), 1,
      aux_sym_class_repeat1,
    STATE(426), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(593), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7010] = 7,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_where,
    ACTIONS(595), 1,
      anon_sym_EQ,
    STATE(207), 1,
      aux_sym_class_repeat1,
    STATE(356), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(597), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7034] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(113), 7,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_of,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [7048] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(599), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(601), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [7064] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(145), 7,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_of,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [7078] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(536), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_identifier,
  [7092] = 7,
    ACTIONS(587), 1,
      anon_sym_EQ,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_where,
    STATE(225), 1,
      aux_sym_class_repeat1,
    STATE(426), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(593), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7116] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(540), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_identifier,
  [7130] = 4,
    ACTIONS(603), 1,
      sym_operator,
    STATE(215), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 5,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
  [7148] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(538), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(540), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [7164] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(221), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [7182] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(233), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [7200] = 4,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(185), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [7218] = 4,
    ACTIONS(418), 1,
      anon_sym_SLASH,
    ACTIONS(606), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(233), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [7236] = 5,
    ACTIONS(608), 1,
      aux_sym_int_literal_token1,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(610), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(57), 3,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
  [7256] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(534), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(536), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [7272] = 5,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(366), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(147), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [7292] = 5,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(616), 1,
      anon_sym_where,
    STATE(202), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(614), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7312] = 7,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_where,
    ACTIONS(618), 1,
      anon_sym_EQ,
    STATE(249), 1,
      aux_sym_class_repeat1,
    STATE(416), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(620), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7336] = 5,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(622), 1,
      sym_operator,
    STATE(226), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7356] = 4,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(625), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7373] = 6,
    ACTIONS(630), 1,
      sym_identifier,
    STATE(94), 1,
      sym__ty_path,
    STATE(180), 1,
      sym_path,
    STATE(474), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(304), 2,
      sym_where_member,
      sym_where_kind,
  [7394] = 3,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(101), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7409] = 6,
    ACTIONS(632), 1,
      sym_identifier,
    STATE(94), 1,
      sym__ty_path,
    STATE(180), 1,
      sym_path,
    STATE(474), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(328), 2,
      sym_where_member,
      sym_where_kind,
  [7430] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(538), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(540), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
  [7445] = 5,
    ACTIONS(149), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      sym_operator,
    STATE(261), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(546), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
  [7464] = 6,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(65), 1,
      sym__ty_path,
    STATE(182), 1,
      sym_path,
    STATE(452), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(235), 2,
      sym_where_member,
      sym_where_kind,
  [7485] = 4,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(554), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [7502] = 4,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(636), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7519] = 6,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(149), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      sym_operator,
    STATE(232), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(101), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7540] = 6,
    ACTIONS(632), 1,
      sym_identifier,
    STATE(94), 1,
      sym__ty_path,
    STATE(180), 1,
      sym_path,
    STATE(474), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(342), 2,
      sym_where_member,
      sym_where_kind,
  [7561] = 6,
    ACTIONS(324), 1,
      sym_operator,
    ACTIONS(640), 1,
      anon_sym_where,
    STATE(275), 1,
      aux_sym_ty_infix_repeat1,
    STATE(432), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7582] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(534), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(536), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
  [7597] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(542), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(544), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
  [7612] = 6,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(65), 1,
      sym__ty_path,
    STATE(182), 1,
      sym_path,
    STATE(452), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(251), 2,
      sym_where_member,
      sym_where_kind,
  [7633] = 4,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(642), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7650] = 6,
    ACTIONS(644), 1,
      sym_identifier,
    STATE(65), 1,
      sym__ty_path,
    STATE(182), 1,
      sym_path,
    STATE(452), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(351), 2,
      sym_where_member,
      sym_where_kind,
  [7671] = 6,
    ACTIONS(644), 1,
      sym_identifier,
    STATE(65), 1,
      sym__ty_path,
    STATE(182), 1,
      sym_path,
    STATE(452), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(251), 2,
      sym_where_member,
      sym_where_kind,
  [7692] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_foreign,
    ACTIONS(648), 1,
      sym__layout_end,
    STATE(422), 1,
      sym_func,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7715] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7728] = 6,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(652), 1,
      anon_sym_EQ,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(274), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [7749] = 4,
    ACTIONS(418), 1,
      anon_sym_SLASH,
    ACTIONS(658), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(233), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_identifier,
  [7766] = 4,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(660), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_where,
  [7783] = 5,
    ACTIONS(304), 1,
      sym_operator,
    STATE(260), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(245), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7802] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(625), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7815] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_foreign,
    ACTIONS(665), 1,
      sym__layout_end,
    STATE(353), 1,
      sym_func,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7838] = 6,
    ACTIONS(630), 1,
      sym_identifier,
    STATE(94), 1,
      sym__ty_path,
    STATE(180), 1,
      sym_path,
    STATE(474), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(328), 2,
      sym_where_member,
      sym_where_kind,
  [7859] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(221), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(219), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [7876] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_foreign,
    ACTIONS(667), 1,
      sym__layout_end,
    STATE(348), 1,
      sym_func,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7899] = 4,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(233), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(231), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [7916] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_foreign,
    ACTIONS(669), 1,
      sym__layout_end,
    STATE(376), 1,
      sym_func,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7939] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_foreign,
    ACTIONS(671), 1,
      sym__layout_end,
    STATE(411), 1,
      sym_func,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7962] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 6,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [7975] = 5,
    ACTIONS(304), 1,
      sym_operator,
    STATE(263), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(566), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(568), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7994] = 5,
    ACTIONS(673), 1,
      anon_sym_BQUOTE,
    ACTIONS(676), 1,
      sym_operator,
    STATE(261), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(113), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
  [8013] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(538), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(540), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [8028] = 5,
    ACTIONS(679), 1,
      sym_operator,
    STATE(263), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(290), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [8047] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(536), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [8062] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(542), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(544), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [8077] = 4,
    ACTIONS(554), 1,
      anon_sym_where,
    STATE(288), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8094] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(288), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8109] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_foreign,
    ACTIONS(682), 1,
      sym__layout_end,
    STATE(414), 1,
      sym_func,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8132] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_foreign,
    ACTIONS(684), 1,
      sym__layout_end,
    STATE(407), 1,
      sym_func,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8155] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_foreign,
    ACTIONS(686), 1,
      sym__layout_end,
    STATE(390), 1,
      sym_func,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8178] = 3,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(688), 4,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
      sym_identifier,
  [8192] = 4,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(625), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [8208] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(695), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8220] = 5,
    ACTIONS(650), 1,
      sym_identifier,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    ACTIONS(697), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(305), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [8238] = 4,
    ACTIONS(324), 1,
      sym_operator,
    STATE(298), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(566), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
  [8254] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(540), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(538), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [8268] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(536), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(534), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [8282] = 6,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    ACTIONS(115), 1,
      anon_sym_DASH_GT,
    ACTIONS(699), 1,
      anon_sym_BQUOTE,
    ACTIONS(702), 1,
      sym_operator,
    STATE(278), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8302] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(544), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(542), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [8316] = 3,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(538), 4,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
      sym_identifier,
  [8330] = 3,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(534), 4,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
      sym_identifier,
  [8344] = 5,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      sym_operator,
    STATE(297), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8362] = 6,
    ACTIONS(157), 1,
      anon_sym_BQUOTE,
    ACTIONS(159), 1,
      sym_operator,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(705), 1,
      anon_sym_DASH_GT,
    STATE(278), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8382] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(290), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
  [8396] = 3,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(542), 4,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
      sym_identifier,
  [8410] = 6,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 1,
      anon_sym_DASH_GT,
    ACTIONS(157), 1,
      anon_sym_BQUOTE,
    ACTIONS(159), 1,
      sym_operator,
    STATE(283), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8430] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_foreign,
    STATE(451), 1,
      sym_func,
    STATE(481), 1,
      sym__func_body,
    STATE(484), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8450] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(707), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8462] = 3,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(709), 4,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
      sym_identifier,
  [8476] = 6,
    ACTIONS(205), 1,
      anon_sym_DASH_GT,
    ACTIONS(354), 1,
      sym_operator,
    ACTIONS(713), 1,
      anon_sym_where,
    STATE(288), 1,
      sym_where_clause,
    STATE(315), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8496] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(113), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
  [8508] = 3,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(715), 4,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
      sym_identifier,
  [8522] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(145), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
  [8534] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(719), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8546] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(721), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8558] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(723), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8570] = 5,
    ACTIONS(342), 1,
      sym_operator,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(566), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8588] = 4,
    ACTIONS(725), 1,
      sym_operator,
    STATE(298), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
  [8604] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(728), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8616] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(730), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8628] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(732), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8640] = 4,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(642), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [8656] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(736), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8668] = 4,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(636), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [8684] = 5,
    ACTIONS(509), 1,
      anon_sym_EQ,
    ACTIONS(738), 1,
      sym_identifier,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(305), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [8702] = 5,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(744), 1,
      sym_operator,
    STATE(306), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8720] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(747), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8732] = 6,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      sym_import_item,
    STATE(480), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8752] = 5,
    ACTIONS(591), 1,
      anon_sym_where,
    ACTIONS(755), 1,
      anon_sym_EQ,
    STATE(361), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(757), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8770] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(759), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8782] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(660), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_where,
  [8794] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(761), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(58), 2,
      sym_attribute,
      aux_sym_module_repeat1,
  [8809] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(113), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(115), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [8822] = 5,
    ACTIONS(458), 1,
      anon_sym_DASH_GT,
    ACTIONS(532), 1,
      anon_sym_if,
    ACTIONS(763), 1,
      sym_operator,
    STATE(314), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8839] = 5,
    ACTIONS(354), 1,
      sym_operator,
    ACTIONS(566), 1,
      anon_sym_where,
    ACTIONS(568), 1,
      anon_sym_DASH_GT,
    STATE(322), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8856] = 5,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    STATE(480), 1,
      sym_symbol,
    STATE(485), 1,
      sym_import_item,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8873] = 5,
    ACTIONS(766), 1,
      sym_identifier,
    ACTIONS(768), 1,
      anon_sym_DASH_GT,
    STATE(213), 1,
      sym_fundep,
    STATE(367), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8890] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(717), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [8901] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      sym_operator,
  [8914] = 4,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    STATE(332), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(770), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8929] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(288), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
      sym_operator,
  [8940] = 5,
    ACTIONS(288), 1,
      anon_sym_where,
    ACTIONS(290), 1,
      anon_sym_DASH_GT,
    ACTIONS(772), 1,
      sym_operator,
    STATE(322), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8957] = 4,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(777), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(779), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8972] = 4,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(642), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8987] = 5,
    ACTIONS(766), 1,
      sym_identifier,
    ACTIONS(768), 1,
      anon_sym_DASH_GT,
    STATE(311), 1,
      sym_fundep,
    STATE(367), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9004] = 4,
    ACTIONS(378), 1,
      sym_operator,
    STATE(330), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(568), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [9019] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(717), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [9030] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(625), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [9041] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [9052] = 4,
    ACTIONS(783), 1,
      sym_operator,
    STATE(330), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [9067] = 4,
    ACTIONS(640), 1,
      anon_sym_where,
    STATE(432), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9082] = 4,
    ACTIONS(786), 1,
      anon_sym_PIPE,
    STATE(332), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(789), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9097] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(690), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [9108] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(711), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [9119] = 5,
    ACTIONS(442), 1,
      anon_sym_DASH_GT,
    ACTIONS(444), 1,
      sym_operator,
    ACTIONS(454), 1,
      anon_sym_if,
    STATE(346), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9136] = 4,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    STATE(332), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(791), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9151] = 4,
    ACTIONS(793), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(625), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9166] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(711), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [9177] = 5,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(180), 1,
      sym_path,
    STATE(309), 1,
      sym__ty_path,
    STATE(474), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9194] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(145), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(147), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [9207] = 5,
    ACTIONS(766), 1,
      sym_identifier,
    ACTIONS(768), 1,
      anon_sym_DASH_GT,
    STATE(208), 1,
      sym_fundep,
    STATE(367), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9224] = 4,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(636), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9239] = 4,
    ACTIONS(378), 1,
      sym_operator,
    STATE(326), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [9254] = 4,
    ACTIONS(608), 1,
      aux_sym_int_literal_token1,
    STATE(410), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(610), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
  [9269] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(690), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [9280] = 5,
    ACTIONS(444), 1,
      sym_operator,
    ACTIONS(796), 1,
      anon_sym_DASH_GT,
    ACTIONS(798), 1,
      anon_sym_if,
    STATE(314), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9297] = 4,
    ACTIONS(800), 1,
      aux_sym_string_literal_token1,
    ACTIONS(802), 1,
      anon_sym_DQUOTE2,
    STATE(395), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(804), 2,
      sym_comment,
      aux_sym__token1,
  [9311] = 4,
    ACTIONS(684), 1,
      sym__layout_end,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    STATE(409), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9325] = 4,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
    STATE(568), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9339] = 3,
    ACTIONS(103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(101), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9351] = 4,
    ACTIONS(636), 1,
      anon_sym_DASH_GT,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9365] = 4,
    ACTIONS(203), 1,
      anon_sym_DASH_GT,
    ACTIONS(713), 1,
      anon_sym_where,
    STATE(288), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9379] = 4,
    ACTIONS(671), 1,
      sym__layout_end,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    STATE(405), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9393] = 4,
    ACTIONS(456), 1,
      sym_operator,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9407] = 4,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
    STATE(532), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9421] = 3,
    ACTIONS(587), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(593), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9433] = 4,
    ACTIONS(625), 1,
      anon_sym_DASH_GT,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9447] = 4,
    ACTIONS(642), 1,
      anon_sym_DASH_GT,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9461] = 4,
    ACTIONS(577), 1,
      anon_sym_DASH_GT,
    ACTIONS(813), 1,
      sym_identifier,
    STATE(359), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9475] = 3,
    ACTIONS(595), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(597), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9487] = 3,
    ACTIONS(816), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(818), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9499] = 3,
    ACTIONS(820), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(822), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9511] = 4,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
    STATE(514), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9525] = 4,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    ACTIONS(824), 1,
      sym__layout_end,
    STATE(424), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9539] = 4,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
    STATE(544), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9553] = 3,
    ACTIONS(532), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(458), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [9565] = 4,
    ACTIONS(826), 1,
      sym_identifier,
    ACTIONS(828), 1,
      anon_sym_DASH_GT,
    STATE(359), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9579] = 4,
    ACTIONS(830), 1,
      sym__layout_semicolon,
    ACTIONS(833), 1,
      sym__layout_end,
    STATE(368), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9593] = 4,
    ACTIONS(835), 1,
      sym_identifier,
    STATE(371), 1,
      sym__attr_body,
    STATE(539), 1,
      sym__attr_value,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9607] = 4,
    ACTIONS(837), 1,
      aux_sym_string_literal_token1,
    ACTIONS(839), 1,
      anon_sym_DQUOTE2,
    STATE(374), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(804), 2,
      sym_comment,
      aux_sym__token1,
  [9621] = 4,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    ACTIONS(843), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9635] = 4,
    ACTIONS(845), 1,
      aux_sym_string_literal_token1,
    ACTIONS(847), 1,
      anon_sym_DQUOTE2,
    STATE(401), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(804), 2,
      sym_comment,
      aux_sym__token1,
  [9649] = 4,
    ACTIONS(849), 1,
      aux_sym_string_literal_token1,
    ACTIONS(851), 1,
      anon_sym_DQUOTE2,
    STATE(372), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(804), 2,
      sym_comment,
      aux_sym__token1,
  [9663] = 4,
    ACTIONS(845), 1,
      aux_sym_string_literal_token1,
    ACTIONS(853), 1,
      anon_sym_DQUOTE2,
    STATE(401), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(804), 2,
      sym_comment,
      aux_sym__token1,
  [9677] = 4,
    ACTIONS(843), 1,
      anon_sym_COMMA,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9691] = 4,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    ACTIONS(857), 1,
      sym__layout_end,
    STATE(364), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9705] = 4,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    ACTIONS(857), 1,
      sym__layout_end,
    STATE(424), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9719] = 4,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(323), 1,
      sym_path,
    STATE(492), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9733] = 4,
    ACTIONS(859), 1,
      sym__layout_semicolon,
    ACTIONS(861), 1,
      sym__layout_end,
    STATE(368), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9747] = 4,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
    STATE(536), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9761] = 4,
    ACTIONS(845), 1,
      aux_sym_string_literal_token1,
    ACTIONS(863), 1,
      anon_sym_DQUOTE2,
    STATE(401), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(804), 2,
      sym_comment,
      aux_sym__token1,
  [9775] = 4,
    ACTIONS(865), 1,
      aux_sym_string_literal_token1,
    ACTIONS(867), 1,
      anon_sym_DQUOTE2,
    STATE(381), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(804), 2,
      sym_comment,
      aux_sym__token1,
  [9789] = 4,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_import_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9803] = 4,
    ACTIONS(859), 1,
      sym__layout_semicolon,
    ACTIONS(873), 1,
      sym__layout_end,
    STATE(368), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9817] = 4,
    ACTIONS(859), 1,
      sym__layout_semicolon,
    ACTIONS(875), 1,
      sym__layout_end,
    STATE(384), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9831] = 4,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
    STATE(580), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9845] = 4,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    ACTIONS(877), 1,
      sym__layout_end,
    STATE(424), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9859] = 4,
    ACTIONS(879), 1,
      sym__layout_semicolon,
    ACTIONS(881), 1,
      sym__layout_end,
    STATE(415), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9873] = 4,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
    STATE(541), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9887] = 4,
    ACTIONS(669), 1,
      sym__layout_end,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    STATE(377), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9901] = 4,
    ACTIONS(669), 1,
      sym__layout_end,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    STATE(424), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9915] = 4,
    ACTIONS(879), 1,
      sym__layout_semicolon,
    ACTIONS(883), 1,
      sym__layout_end,
    STATE(388), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9929] = 4,
    ACTIONS(885), 1,
      sym__layout_semicolon,
    ACTIONS(887), 1,
      sym__layout_end,
    STATE(420), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9943] = 4,
    ACTIONS(879), 1,
      sym__layout_semicolon,
    ACTIONS(889), 1,
      sym__layout_end,
    STATE(415), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9957] = 4,
    ACTIONS(845), 1,
      aux_sym_string_literal_token1,
    ACTIONS(891), 1,
      anon_sym_DQUOTE2,
    STATE(401), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(804), 2,
      sym_comment,
      aux_sym__token1,
  [9971] = 4,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      sym_operator,
    STATE(396), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9985] = 3,
    ACTIONS(896), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(898), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9997] = 4,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_import_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10011] = 4,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_import_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10025] = 4,
    ACTIONS(859), 1,
      sym__layout_semicolon,
    ACTIONS(907), 1,
      sym__layout_end,
    STATE(379), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10039] = 4,
    ACTIONS(909), 1,
      aux_sym_string_literal_token1,
    ACTIONS(912), 1,
      anon_sym_DQUOTE2,
    STATE(401), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(804), 2,
      sym_comment,
      aux_sym__token1,
  [10053] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(290), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [10063] = 3,
    ACTIONS(914), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(916), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10075] = 4,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    STATE(404), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10089] = 4,
    ACTIONS(648), 1,
      sym__layout_end,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    STATE(424), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10103] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(789), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
  [10113] = 4,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    ACTIONS(923), 1,
      sym__layout_end,
    STATE(387), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10127] = 4,
    ACTIONS(885), 1,
      sym__layout_semicolon,
    ACTIONS(925), 1,
      sym__layout_end,
    STATE(413), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10141] = 4,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    ACTIONS(923), 1,
      sym__layout_end,
    STATE(424), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10155] = 4,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(452), 1,
      aux_sym_path_repeat1,
    STATE(564), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10169] = 4,
    ACTIONS(648), 1,
      sym__layout_end,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    STATE(419), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10183] = 3,
    ACTIONS(488), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(492), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10195] = 4,
    ACTIONS(927), 1,
      sym__layout_semicolon,
    ACTIONS(930), 1,
      sym__layout_end,
    STATE(413), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10209] = 4,
    ACTIONS(686), 1,
      sym__layout_end,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    STATE(391), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10223] = 4,
    ACTIONS(932), 1,
      sym__layout_semicolon,
    ACTIONS(935), 1,
      sym__layout_end,
    STATE(415), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10237] = 3,
    ACTIONS(937), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(939), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10249] = 4,
    ACTIONS(686), 1,
      sym__layout_end,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    STATE(424), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10263] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(601), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [10273] = 4,
    ACTIONS(682), 1,
      sym__layout_end,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    STATE(424), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10287] = 4,
    ACTIONS(885), 1,
      sym__layout_semicolon,
    ACTIONS(941), 1,
      sym__layout_end,
    STATE(413), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10301] = 4,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 1,
      sym_operator,
    STATE(354), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10315] = 4,
    ACTIONS(682), 1,
      sym__layout_end,
    ACTIONS(806), 1,
      sym__layout_semicolon,
    STATE(417), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10329] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(572), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [10339] = 4,
    ACTIONS(943), 1,
      sym__layout_semicolon,
    ACTIONS(946), 1,
      sym__layout_end,
    STATE(424), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10353] = 4,
    ACTIONS(879), 1,
      sym__layout_semicolon,
    ACTIONS(948), 1,
      sym__layout_end,
    STATE(394), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10367] = 3,
    ACTIONS(618), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(620), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10379] = 4,
    ACTIONS(885), 1,
      sym__layout_semicolon,
    ACTIONS(950), 1,
      sym__layout_end,
    STATE(408), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10393] = 3,
    ACTIONS(288), 1,
      anon_sym_where,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(290), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [10405] = 3,
    ACTIONS(835), 1,
      sym_identifier,
    STATE(478), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10416] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(952), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10425] = 3,
    ACTIONS(835), 1,
      sym_identifier,
    STATE(100), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10436] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(707), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10445] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(930), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10454] = 3,
    ACTIONS(954), 1,
      sym__layout_start,
    STATE(441), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10465] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(956), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10474] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(958), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10483] = 3,
    ACTIONS(954), 1,
      sym__layout_start,
    STATE(448), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10494] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(960), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10503] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(962), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10512] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(964), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10521] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(966), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10530] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(732), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10539] = 3,
    ACTIONS(968), 1,
      sym_identifier,
    STATE(224), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10550] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(970), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10559] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(972), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10568] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(974), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10577] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(976), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10586] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(730), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10595] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(939), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10604] = 3,
    ACTIONS(978), 1,
      anon_sym_LPAREN,
    STATE(502), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10615] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(946), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10624] = 3,
    ACTIONS(980), 1,
      sym_identifier,
    STATE(465), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10635] = 3,
    ACTIONS(978), 1,
      anon_sym_LPAREN,
    STATE(494), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10646] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(982), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10655] = 3,
    ACTIONS(984), 1,
      sym_identifier,
    STATE(465), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10666] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(986), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10675] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(736), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10684] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(935), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10693] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(593), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10702] = 3,
    ACTIONS(988), 1,
      sym_identifier,
    STATE(465), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10713] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(747), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10722] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(719), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10731] = 3,
    ACTIONS(990), 1,
      sym_identifier,
    STATE(465), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10742] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(992), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10751] = 3,
    ACTIONS(994), 1,
      sym_identifier,
    STATE(465), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10762] = 3,
    ACTIONS(997), 1,
      sym_identifier,
    STATE(465), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10773] = 3,
    ACTIONS(954), 1,
      sym__layout_start,
    STATE(440), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10784] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(833), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10793] = 3,
    ACTIONS(999), 1,
      sym_identifier,
    STATE(465), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10804] = 3,
    ACTIONS(1001), 1,
      sym_identifier,
    STATE(406), 1,
      sym_ctor,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10815] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1003), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10824] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(695), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10833] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1005), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10842] = 3,
    ACTIONS(1007), 1,
      sym_identifier,
    STATE(465), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10853] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(620), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10862] = 3,
    ACTIONS(1009), 1,
      sym_identifier,
    STATE(203), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10873] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(728), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10882] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(918), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10891] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1011), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10900] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1013), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10909] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1015), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10918] = 3,
    ACTIONS(1017), 1,
      anon_sym_DASH_GT,
    ACTIONS(1019), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10929] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1021), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10938] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1015), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10947] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(902), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10956] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1023), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10965] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(898), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10974] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(982), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10983] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(916), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10992] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1025), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11001] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(532), 2,
      anon_sym_RPAREN,
      sym_operator,
  [11010] = 3,
    ACTIONS(1027), 1,
      sym_identifier,
    STATE(465), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11021] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1029), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11030] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1031), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11039] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1025), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11048] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1025), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11057] = 3,
    ACTIONS(978), 1,
      anon_sym_LPAREN,
    STATE(501), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11068] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(721), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11077] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1033), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11086] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1035), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11095] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1037), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11104] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1039), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11113] = 3,
    ACTIONS(1041), 1,
      sym_identifier,
    STATE(465), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11124] = 3,
    ACTIONS(1043), 1,
      sym__layout_start,
    STATE(300), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11135] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1045), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11144] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(759), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11153] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(723), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11162] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1047), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11171] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1049), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11180] = 3,
    ACTIONS(1051), 1,
      sym_identifier,
    ACTIONS(1053), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11191] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1055), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11200] = 2,
    ACTIONS(1057), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11208] = 2,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11216] = 2,
    ACTIONS(1061), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11224] = 2,
    ACTIONS(1063), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11232] = 2,
    ACTIONS(1065), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11240] = 2,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11248] = 2,
    ACTIONS(1069), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11256] = 2,
    ACTIONS(1071), 1,
      anon_sym_RPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11264] = 2,
    ACTIONS(1073), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11272] = 2,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11280] = 2,
    ACTIONS(1077), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11288] = 2,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11296] = 2,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11304] = 2,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11312] = 2,
    ACTIONS(1085), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11320] = 2,
    ACTIONS(1087), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11328] = 2,
    ACTIONS(1089), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11336] = 2,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11344] = 2,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11352] = 2,
    ACTIONS(1095), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11360] = 2,
    ACTIONS(1097), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11368] = 2,
    ACTIONS(1099), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11376] = 2,
    ACTIONS(1101), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11384] = 2,
    ACTIONS(1103), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11392] = 2,
    ACTIONS(1105), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11400] = 2,
    ACTIONS(418), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11408] = 2,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11416] = 2,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11424] = 2,
    ACTIONS(1111), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11432] = 2,
    ACTIONS(1113), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11440] = 2,
    ACTIONS(1115), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11448] = 2,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11456] = 2,
    ACTIONS(1119), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11464] = 2,
    ACTIONS(1121), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11472] = 2,
    ACTIONS(1123), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11480] = 2,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11488] = 2,
    ACTIONS(1127), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11496] = 2,
    ACTIONS(1129), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11504] = 2,
    ACTIONS(1131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11512] = 2,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11520] = 2,
    ACTIONS(1135), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11528] = 2,
    ACTIONS(1137), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11536] = 2,
    ACTIONS(1139), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11544] = 2,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11552] = 2,
    ACTIONS(1143), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11560] = 2,
    ACTIONS(1145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11568] = 2,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11576] = 2,
    ACTIONS(1149), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11584] = 2,
    ACTIONS(1151), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11592] = 2,
    ACTIONS(1153), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11600] = 2,
    ACTIONS(1155), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11608] = 2,
    ACTIONS(1157), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11616] = 2,
    ACTIONS(1159), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11624] = 2,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11632] = 2,
    ACTIONS(1163), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11640] = 2,
    ACTIONS(1165), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11648] = 2,
    ACTIONS(1167), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11656] = 2,
    ACTIONS(1169), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11664] = 2,
    ACTIONS(1171), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11672] = 2,
    ACTIONS(1173), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11680] = 2,
    ACTIONS(1175), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11688] = 2,
    ACTIONS(1177), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11696] = 2,
    ACTIONS(1179), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11704] = 2,
    ACTIONS(1181), 1,
      anon_sym_RPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11712] = 2,
    ACTIONS(1183), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11720] = 2,
    ACTIONS(1185), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11728] = 2,
    ACTIONS(1187), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11736] = 2,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11744] = 2,
    ACTIONS(1191), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11752] = 2,
    ACTIONS(1193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11760] = 2,
    ACTIONS(1195), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11768] = 2,
    ACTIONS(1197), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11776] = 2,
    ACTIONS(1199), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11784] = 2,
    ACTIONS(1201), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11792] = 2,
    ACTIONS(1203), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11800] = 2,
    ACTIONS(1205), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11808] = 2,
    ACTIONS(1207), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11816] = 2,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11824] = 2,
    ACTIONS(1211), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 291,
  [SMALL_STATE(7)] = 366,
  [SMALL_STATE(8)] = 438,
  [SMALL_STATE(9)] = 506,
  [SMALL_STATE(10)] = 574,
  [SMALL_STATE(11)] = 642,
  [SMALL_STATE(12)] = 707,
  [SMALL_STATE(13)] = 772,
  [SMALL_STATE(14)] = 837,
  [SMALL_STATE(15)] = 902,
  [SMALL_STATE(16)] = 967,
  [SMALL_STATE(17)] = 1032,
  [SMALL_STATE(18)] = 1097,
  [SMALL_STATE(19)] = 1162,
  [SMALL_STATE(20)] = 1227,
  [SMALL_STATE(21)] = 1292,
  [SMALL_STATE(22)] = 1357,
  [SMALL_STATE(23)] = 1422,
  [SMALL_STATE(24)] = 1487,
  [SMALL_STATE(25)] = 1552,
  [SMALL_STATE(26)] = 1617,
  [SMALL_STATE(27)] = 1686,
  [SMALL_STATE(28)] = 1751,
  [SMALL_STATE(29)] = 1816,
  [SMALL_STATE(30)] = 1881,
  [SMALL_STATE(31)] = 1938,
  [SMALL_STATE(32)] = 1986,
  [SMALL_STATE(33)] = 2034,
  [SMALL_STATE(34)] = 2082,
  [SMALL_STATE(35)] = 2130,
  [SMALL_STATE(36)] = 2183,
  [SMALL_STATE(37)] = 2227,
  [SMALL_STATE(38)] = 2279,
  [SMALL_STATE(39)] = 2323,
  [SMALL_STATE(40)] = 2367,
  [SMALL_STATE(41)] = 2411,
  [SMALL_STATE(42)] = 2456,
  [SMALL_STATE(43)] = 2501,
  [SMALL_STATE(44)] = 2546,
  [SMALL_STATE(45)] = 2591,
  [SMALL_STATE(46)] = 2635,
  [SMALL_STATE(47)] = 2665,
  [SMALL_STATE(48)] = 2692,
  [SMALL_STATE(49)] = 2731,
  [SMALL_STATE(50)] = 2770,
  [SMALL_STATE(51)] = 2809,
  [SMALL_STATE(52)] = 2836,
  [SMALL_STATE(53)] = 2875,
  [SMALL_STATE(54)] = 2914,
  [SMALL_STATE(55)] = 2953,
  [SMALL_STATE(56)] = 2992,
  [SMALL_STATE(57)] = 3026,
  [SMALL_STATE(58)] = 3050,
  [SMALL_STATE(59)] = 3076,
  [SMALL_STATE(60)] = 3100,
  [SMALL_STATE(61)] = 3124,
  [SMALL_STATE(62)] = 3158,
  [SMALL_STATE(63)] = 3192,
  [SMALL_STATE(64)] = 3226,
  [SMALL_STATE(65)] = 3260,
  [SMALL_STATE(66)] = 3294,
  [SMALL_STATE(67)] = 3328,
  [SMALL_STATE(68)] = 3354,
  [SMALL_STATE(69)] = 3380,
  [SMALL_STATE(70)] = 3418,
  [SMALL_STATE(71)] = 3452,
  [SMALL_STATE(72)] = 3486,
  [SMALL_STATE(73)] = 3510,
  [SMALL_STATE(74)] = 3550,
  [SMALL_STATE(75)] = 3574,
  [SMALL_STATE(76)] = 3597,
  [SMALL_STATE(77)] = 3636,
  [SMALL_STATE(78)] = 3659,
  [SMALL_STATE(79)] = 3696,
  [SMALL_STATE(80)] = 3729,
  [SMALL_STATE(81)] = 3762,
  [SMALL_STATE(82)] = 3785,
  [SMALL_STATE(83)] = 3824,
  [SMALL_STATE(84)] = 3863,
  [SMALL_STATE(85)] = 3894,
  [SMALL_STATE(86)] = 3917,
  [SMALL_STATE(87)] = 3940,
  [SMALL_STATE(88)] = 3973,
  [SMALL_STATE(89)] = 4009,
  [SMALL_STATE(90)] = 4033,
  [SMALL_STATE(91)] = 4057,
  [SMALL_STATE(92)] = 4093,
  [SMALL_STATE(93)] = 4129,
  [SMALL_STATE(94)] = 4163,
  [SMALL_STATE(95)] = 4193,
  [SMALL_STATE(96)] = 4225,
  [SMALL_STATE(97)] = 4257,
  [SMALL_STATE(98)] = 4289,
  [SMALL_STATE(99)] = 4325,
  [SMALL_STATE(100)] = 4357,
  [SMALL_STATE(101)] = 4379,
  [SMALL_STATE(102)] = 4415,
  [SMALL_STATE(103)] = 4451,
  [SMALL_STATE(104)] = 4481,
  [SMALL_STATE(105)] = 4517,
  [SMALL_STATE(106)] = 4553,
  [SMALL_STATE(107)] = 4585,
  [SMALL_STATE(108)] = 4617,
  [SMALL_STATE(109)] = 4653,
  [SMALL_STATE(110)] = 4674,
  [SMALL_STATE(111)] = 4703,
  [SMALL_STATE(112)] = 4736,
  [SMALL_STATE(113)] = 4759,
  [SMALL_STATE(114)] = 4792,
  [SMALL_STATE(115)] = 4825,
  [SMALL_STATE(116)] = 4858,
  [SMALL_STATE(117)] = 4891,
  [SMALL_STATE(118)] = 4920,
  [SMALL_STATE(119)] = 4943,
  [SMALL_STATE(120)] = 4964,
  [SMALL_STATE(121)] = 4997,
  [SMALL_STATE(122)] = 5018,
  [SMALL_STATE(123)] = 5051,
  [SMALL_STATE(124)] = 5072,
  [SMALL_STATE(125)] = 5101,
  [SMALL_STATE(126)] = 5130,
  [SMALL_STATE(127)] = 5159,
  [SMALL_STATE(128)] = 5188,
  [SMALL_STATE(129)] = 5217,
  [SMALL_STATE(130)] = 5250,
  [SMALL_STATE(131)] = 5279,
  [SMALL_STATE(132)] = 5300,
  [SMALL_STATE(133)] = 5333,
  [SMALL_STATE(134)] = 5353,
  [SMALL_STATE(135)] = 5383,
  [SMALL_STATE(136)] = 5413,
  [SMALL_STATE(137)] = 5433,
  [SMALL_STATE(138)] = 5453,
  [SMALL_STATE(139)] = 5481,
  [SMALL_STATE(140)] = 5501,
  [SMALL_STATE(141)] = 5521,
  [SMALL_STATE(142)] = 5544,
  [SMALL_STATE(143)] = 5571,
  [SMALL_STATE(144)] = 5598,
  [SMALL_STATE(145)] = 5627,
  [SMALL_STATE(146)] = 5656,
  [SMALL_STATE(147)] = 5685,
  [SMALL_STATE(148)] = 5708,
  [SMALL_STATE(149)] = 5735,
  [SMALL_STATE(150)] = 5764,
  [SMALL_STATE(151)] = 5787,
  [SMALL_STATE(152)] = 5814,
  [SMALL_STATE(153)] = 5845,
  [SMALL_STATE(154)] = 5872,
  [SMALL_STATE(155)] = 5899,
  [SMALL_STATE(156)] = 5926,
  [SMALL_STATE(157)] = 5957,
  [SMALL_STATE(158)] = 5981,
  [SMALL_STATE(159)] = 6005,
  [SMALL_STATE(160)] = 6027,
  [SMALL_STATE(161)] = 6051,
  [SMALL_STATE(162)] = 6073,
  [SMALL_STATE(163)] = 6093,
  [SMALL_STATE(164)] = 6113,
  [SMALL_STATE(165)] = 6139,
  [SMALL_STATE(166)] = 6165,
  [SMALL_STATE(167)] = 6191,
  [SMALL_STATE(168)] = 6213,
  [SMALL_STATE(169)] = 6239,
  [SMALL_STATE(170)] = 6261,
  [SMALL_STATE(171)] = 6287,
  [SMALL_STATE(172)] = 6309,
  [SMALL_STATE(173)] = 6335,
  [SMALL_STATE(174)] = 6355,
  [SMALL_STATE(175)] = 6375,
  [SMALL_STATE(176)] = 6401,
  [SMALL_STATE(177)] = 6418,
  [SMALL_STATE(178)] = 6435,
  [SMALL_STATE(179)] = 6454,
  [SMALL_STATE(180)] = 6473,
  [SMALL_STATE(181)] = 6490,
  [SMALL_STATE(182)] = 6513,
  [SMALL_STATE(183)] = 6530,
  [SMALL_STATE(184)] = 6547,
  [SMALL_STATE(185)] = 6568,
  [SMALL_STATE(186)] = 6589,
  [SMALL_STATE(187)] = 6608,
  [SMALL_STATE(188)] = 6625,
  [SMALL_STATE(189)] = 6646,
  [SMALL_STATE(190)] = 6669,
  [SMALL_STATE(191)] = 6686,
  [SMALL_STATE(192)] = 6707,
  [SMALL_STATE(193)] = 6728,
  [SMALL_STATE(194)] = 6745,
  [SMALL_STATE(195)] = 6762,
  [SMALL_STATE(196)] = 6783,
  [SMALL_STATE(197)] = 6800,
  [SMALL_STATE(198)] = 6820,
  [SMALL_STATE(199)] = 6836,
  [SMALL_STATE(200)] = 6854,
  [SMALL_STATE(201)] = 6874,
  [SMALL_STATE(202)] = 6890,
  [SMALL_STATE(203)] = 6910,
  [SMALL_STATE(204)] = 6930,
  [SMALL_STATE(205)] = 6948,
  [SMALL_STATE(206)] = 6966,
  [SMALL_STATE(207)] = 6986,
  [SMALL_STATE(208)] = 7010,
  [SMALL_STATE(209)] = 7034,
  [SMALL_STATE(210)] = 7048,
  [SMALL_STATE(211)] = 7064,
  [SMALL_STATE(212)] = 7078,
  [SMALL_STATE(213)] = 7092,
  [SMALL_STATE(214)] = 7116,
  [SMALL_STATE(215)] = 7130,
  [SMALL_STATE(216)] = 7148,
  [SMALL_STATE(217)] = 7164,
  [SMALL_STATE(218)] = 7182,
  [SMALL_STATE(219)] = 7200,
  [SMALL_STATE(220)] = 7218,
  [SMALL_STATE(221)] = 7236,
  [SMALL_STATE(222)] = 7256,
  [SMALL_STATE(223)] = 7272,
  [SMALL_STATE(224)] = 7292,
  [SMALL_STATE(225)] = 7312,
  [SMALL_STATE(226)] = 7336,
  [SMALL_STATE(227)] = 7356,
  [SMALL_STATE(228)] = 7373,
  [SMALL_STATE(229)] = 7394,
  [SMALL_STATE(230)] = 7409,
  [SMALL_STATE(231)] = 7430,
  [SMALL_STATE(232)] = 7445,
  [SMALL_STATE(233)] = 7464,
  [SMALL_STATE(234)] = 7485,
  [SMALL_STATE(235)] = 7502,
  [SMALL_STATE(236)] = 7519,
  [SMALL_STATE(237)] = 7540,
  [SMALL_STATE(238)] = 7561,
  [SMALL_STATE(239)] = 7582,
  [SMALL_STATE(240)] = 7597,
  [SMALL_STATE(241)] = 7612,
  [SMALL_STATE(242)] = 7633,
  [SMALL_STATE(243)] = 7650,
  [SMALL_STATE(244)] = 7671,
  [SMALL_STATE(245)] = 7692,
  [SMALL_STATE(246)] = 7715,
  [SMALL_STATE(247)] = 7728,
  [SMALL_STATE(248)] = 7749,
  [SMALL_STATE(249)] = 7766,
  [SMALL_STATE(250)] = 7783,
  [SMALL_STATE(251)] = 7802,
  [SMALL_STATE(252)] = 7815,
  [SMALL_STATE(253)] = 7838,
  [SMALL_STATE(254)] = 7859,
  [SMALL_STATE(255)] = 7876,
  [SMALL_STATE(256)] = 7899,
  [SMALL_STATE(257)] = 7916,
  [SMALL_STATE(258)] = 7939,
  [SMALL_STATE(259)] = 7962,
  [SMALL_STATE(260)] = 7975,
  [SMALL_STATE(261)] = 7994,
  [SMALL_STATE(262)] = 8013,
  [SMALL_STATE(263)] = 8028,
  [SMALL_STATE(264)] = 8047,
  [SMALL_STATE(265)] = 8062,
  [SMALL_STATE(266)] = 8077,
  [SMALL_STATE(267)] = 8094,
  [SMALL_STATE(268)] = 8109,
  [SMALL_STATE(269)] = 8132,
  [SMALL_STATE(270)] = 8155,
  [SMALL_STATE(271)] = 8178,
  [SMALL_STATE(272)] = 8192,
  [SMALL_STATE(273)] = 8208,
  [SMALL_STATE(274)] = 8220,
  [SMALL_STATE(275)] = 8238,
  [SMALL_STATE(276)] = 8254,
  [SMALL_STATE(277)] = 8268,
  [SMALL_STATE(278)] = 8282,
  [SMALL_STATE(279)] = 8302,
  [SMALL_STATE(280)] = 8316,
  [SMALL_STATE(281)] = 8330,
  [SMALL_STATE(282)] = 8344,
  [SMALL_STATE(283)] = 8362,
  [SMALL_STATE(284)] = 8382,
  [SMALL_STATE(285)] = 8396,
  [SMALL_STATE(286)] = 8410,
  [SMALL_STATE(287)] = 8430,
  [SMALL_STATE(288)] = 8450,
  [SMALL_STATE(289)] = 8462,
  [SMALL_STATE(290)] = 8476,
  [SMALL_STATE(291)] = 8496,
  [SMALL_STATE(292)] = 8508,
  [SMALL_STATE(293)] = 8522,
  [SMALL_STATE(294)] = 8534,
  [SMALL_STATE(295)] = 8546,
  [SMALL_STATE(296)] = 8558,
  [SMALL_STATE(297)] = 8570,
  [SMALL_STATE(298)] = 8588,
  [SMALL_STATE(299)] = 8604,
  [SMALL_STATE(300)] = 8616,
  [SMALL_STATE(301)] = 8628,
  [SMALL_STATE(302)] = 8640,
  [SMALL_STATE(303)] = 8656,
  [SMALL_STATE(304)] = 8668,
  [SMALL_STATE(305)] = 8684,
  [SMALL_STATE(306)] = 8702,
  [SMALL_STATE(307)] = 8720,
  [SMALL_STATE(308)] = 8732,
  [SMALL_STATE(309)] = 8752,
  [SMALL_STATE(310)] = 8770,
  [SMALL_STATE(311)] = 8782,
  [SMALL_STATE(312)] = 8794,
  [SMALL_STATE(313)] = 8809,
  [SMALL_STATE(314)] = 8822,
  [SMALL_STATE(315)] = 8839,
  [SMALL_STATE(316)] = 8856,
  [SMALL_STATE(317)] = 8873,
  [SMALL_STATE(318)] = 8890,
  [SMALL_STATE(319)] = 8901,
  [SMALL_STATE(320)] = 8914,
  [SMALL_STATE(321)] = 8929,
  [SMALL_STATE(322)] = 8940,
  [SMALL_STATE(323)] = 8957,
  [SMALL_STATE(324)] = 8972,
  [SMALL_STATE(325)] = 8987,
  [SMALL_STATE(326)] = 9004,
  [SMALL_STATE(327)] = 9019,
  [SMALL_STATE(328)] = 9030,
  [SMALL_STATE(329)] = 9041,
  [SMALL_STATE(330)] = 9052,
  [SMALL_STATE(331)] = 9067,
  [SMALL_STATE(332)] = 9082,
  [SMALL_STATE(333)] = 9097,
  [SMALL_STATE(334)] = 9108,
  [SMALL_STATE(335)] = 9119,
  [SMALL_STATE(336)] = 9136,
  [SMALL_STATE(337)] = 9151,
  [SMALL_STATE(338)] = 9166,
  [SMALL_STATE(339)] = 9177,
  [SMALL_STATE(340)] = 9194,
  [SMALL_STATE(341)] = 9207,
  [SMALL_STATE(342)] = 9224,
  [SMALL_STATE(343)] = 9239,
  [SMALL_STATE(344)] = 9254,
  [SMALL_STATE(345)] = 9269,
  [SMALL_STATE(346)] = 9280,
  [SMALL_STATE(347)] = 9297,
  [SMALL_STATE(348)] = 9311,
  [SMALL_STATE(349)] = 9325,
  [SMALL_STATE(350)] = 9339,
  [SMALL_STATE(351)] = 9351,
  [SMALL_STATE(352)] = 9365,
  [SMALL_STATE(353)] = 9379,
  [SMALL_STATE(354)] = 9393,
  [SMALL_STATE(355)] = 9407,
  [SMALL_STATE(356)] = 9421,
  [SMALL_STATE(357)] = 9433,
  [SMALL_STATE(358)] = 9447,
  [SMALL_STATE(359)] = 9461,
  [SMALL_STATE(360)] = 9475,
  [SMALL_STATE(361)] = 9487,
  [SMALL_STATE(362)] = 9499,
  [SMALL_STATE(363)] = 9511,
  [SMALL_STATE(364)] = 9525,
  [SMALL_STATE(365)] = 9539,
  [SMALL_STATE(366)] = 9553,
  [SMALL_STATE(367)] = 9565,
  [SMALL_STATE(368)] = 9579,
  [SMALL_STATE(369)] = 9593,
  [SMALL_STATE(370)] = 9607,
  [SMALL_STATE(371)] = 9621,
  [SMALL_STATE(372)] = 9635,
  [SMALL_STATE(373)] = 9649,
  [SMALL_STATE(374)] = 9663,
  [SMALL_STATE(375)] = 9677,
  [SMALL_STATE(376)] = 9691,
  [SMALL_STATE(377)] = 9705,
  [SMALL_STATE(378)] = 9719,
  [SMALL_STATE(379)] = 9733,
  [SMALL_STATE(380)] = 9747,
  [SMALL_STATE(381)] = 9761,
  [SMALL_STATE(382)] = 9775,
  [SMALL_STATE(383)] = 9789,
  [SMALL_STATE(384)] = 9803,
  [SMALL_STATE(385)] = 9817,
  [SMALL_STATE(386)] = 9831,
  [SMALL_STATE(387)] = 9845,
  [SMALL_STATE(388)] = 9859,
  [SMALL_STATE(389)] = 9873,
  [SMALL_STATE(390)] = 9887,
  [SMALL_STATE(391)] = 9901,
  [SMALL_STATE(392)] = 9915,
  [SMALL_STATE(393)] = 9929,
  [SMALL_STATE(394)] = 9943,
  [SMALL_STATE(395)] = 9957,
  [SMALL_STATE(396)] = 9971,
  [SMALL_STATE(397)] = 9985,
  [SMALL_STATE(398)] = 9997,
  [SMALL_STATE(399)] = 10011,
  [SMALL_STATE(400)] = 10025,
  [SMALL_STATE(401)] = 10039,
  [SMALL_STATE(402)] = 10053,
  [SMALL_STATE(403)] = 10063,
  [SMALL_STATE(404)] = 10075,
  [SMALL_STATE(405)] = 10089,
  [SMALL_STATE(406)] = 10103,
  [SMALL_STATE(407)] = 10113,
  [SMALL_STATE(408)] = 10127,
  [SMALL_STATE(409)] = 10141,
  [SMALL_STATE(410)] = 10155,
  [SMALL_STATE(411)] = 10169,
  [SMALL_STATE(412)] = 10183,
  [SMALL_STATE(413)] = 10195,
  [SMALL_STATE(414)] = 10209,
  [SMALL_STATE(415)] = 10223,
  [SMALL_STATE(416)] = 10237,
  [SMALL_STATE(417)] = 10249,
  [SMALL_STATE(418)] = 10263,
  [SMALL_STATE(419)] = 10273,
  [SMALL_STATE(420)] = 10287,
  [SMALL_STATE(421)] = 10301,
  [SMALL_STATE(422)] = 10315,
  [SMALL_STATE(423)] = 10329,
  [SMALL_STATE(424)] = 10339,
  [SMALL_STATE(425)] = 10353,
  [SMALL_STATE(426)] = 10367,
  [SMALL_STATE(427)] = 10379,
  [SMALL_STATE(428)] = 10393,
  [SMALL_STATE(429)] = 10405,
  [SMALL_STATE(430)] = 10416,
  [SMALL_STATE(431)] = 10425,
  [SMALL_STATE(432)] = 10436,
  [SMALL_STATE(433)] = 10445,
  [SMALL_STATE(434)] = 10454,
  [SMALL_STATE(435)] = 10465,
  [SMALL_STATE(436)] = 10474,
  [SMALL_STATE(437)] = 10483,
  [SMALL_STATE(438)] = 10494,
  [SMALL_STATE(439)] = 10503,
  [SMALL_STATE(440)] = 10512,
  [SMALL_STATE(441)] = 10521,
  [SMALL_STATE(442)] = 10530,
  [SMALL_STATE(443)] = 10539,
  [SMALL_STATE(444)] = 10550,
  [SMALL_STATE(445)] = 10559,
  [SMALL_STATE(446)] = 10568,
  [SMALL_STATE(447)] = 10577,
  [SMALL_STATE(448)] = 10586,
  [SMALL_STATE(449)] = 10595,
  [SMALL_STATE(450)] = 10604,
  [SMALL_STATE(451)] = 10615,
  [SMALL_STATE(452)] = 10624,
  [SMALL_STATE(453)] = 10635,
  [SMALL_STATE(454)] = 10646,
  [SMALL_STATE(455)] = 10655,
  [SMALL_STATE(456)] = 10666,
  [SMALL_STATE(457)] = 10675,
  [SMALL_STATE(458)] = 10684,
  [SMALL_STATE(459)] = 10693,
  [SMALL_STATE(460)] = 10702,
  [SMALL_STATE(461)] = 10713,
  [SMALL_STATE(462)] = 10722,
  [SMALL_STATE(463)] = 10731,
  [SMALL_STATE(464)] = 10742,
  [SMALL_STATE(465)] = 10751,
  [SMALL_STATE(466)] = 10762,
  [SMALL_STATE(467)] = 10773,
  [SMALL_STATE(468)] = 10784,
  [SMALL_STATE(469)] = 10793,
  [SMALL_STATE(470)] = 10804,
  [SMALL_STATE(471)] = 10815,
  [SMALL_STATE(472)] = 10824,
  [SMALL_STATE(473)] = 10833,
  [SMALL_STATE(474)] = 10842,
  [SMALL_STATE(475)] = 10853,
  [SMALL_STATE(476)] = 10862,
  [SMALL_STATE(477)] = 10873,
  [SMALL_STATE(478)] = 10882,
  [SMALL_STATE(479)] = 10891,
  [SMALL_STATE(480)] = 10900,
  [SMALL_STATE(481)] = 10909,
  [SMALL_STATE(482)] = 10918,
  [SMALL_STATE(483)] = 10929,
  [SMALL_STATE(484)] = 10938,
  [SMALL_STATE(485)] = 10947,
  [SMALL_STATE(486)] = 10956,
  [SMALL_STATE(487)] = 10965,
  [SMALL_STATE(488)] = 10974,
  [SMALL_STATE(489)] = 10983,
  [SMALL_STATE(490)] = 10992,
  [SMALL_STATE(491)] = 11001,
  [SMALL_STATE(492)] = 11010,
  [SMALL_STATE(493)] = 11021,
  [SMALL_STATE(494)] = 11030,
  [SMALL_STATE(495)] = 11039,
  [SMALL_STATE(496)] = 11048,
  [SMALL_STATE(497)] = 11057,
  [SMALL_STATE(498)] = 11068,
  [SMALL_STATE(499)] = 11077,
  [SMALL_STATE(500)] = 11086,
  [SMALL_STATE(501)] = 11095,
  [SMALL_STATE(502)] = 11104,
  [SMALL_STATE(503)] = 11113,
  [SMALL_STATE(504)] = 11124,
  [SMALL_STATE(505)] = 11135,
  [SMALL_STATE(506)] = 11144,
  [SMALL_STATE(507)] = 11153,
  [SMALL_STATE(508)] = 11162,
  [SMALL_STATE(509)] = 11171,
  [SMALL_STATE(510)] = 11180,
  [SMALL_STATE(511)] = 11191,
  [SMALL_STATE(512)] = 11200,
  [SMALL_STATE(513)] = 11208,
  [SMALL_STATE(514)] = 11216,
  [SMALL_STATE(515)] = 11224,
  [SMALL_STATE(516)] = 11232,
  [SMALL_STATE(517)] = 11240,
  [SMALL_STATE(518)] = 11248,
  [SMALL_STATE(519)] = 11256,
  [SMALL_STATE(520)] = 11264,
  [SMALL_STATE(521)] = 11272,
  [SMALL_STATE(522)] = 11280,
  [SMALL_STATE(523)] = 11288,
  [SMALL_STATE(524)] = 11296,
  [SMALL_STATE(525)] = 11304,
  [SMALL_STATE(526)] = 11312,
  [SMALL_STATE(527)] = 11320,
  [SMALL_STATE(528)] = 11328,
  [SMALL_STATE(529)] = 11336,
  [SMALL_STATE(530)] = 11344,
  [SMALL_STATE(531)] = 11352,
  [SMALL_STATE(532)] = 11360,
  [SMALL_STATE(533)] = 11368,
  [SMALL_STATE(534)] = 11376,
  [SMALL_STATE(535)] = 11384,
  [SMALL_STATE(536)] = 11392,
  [SMALL_STATE(537)] = 11400,
  [SMALL_STATE(538)] = 11408,
  [SMALL_STATE(539)] = 11416,
  [SMALL_STATE(540)] = 11424,
  [SMALL_STATE(541)] = 11432,
  [SMALL_STATE(542)] = 11440,
  [SMALL_STATE(543)] = 11448,
  [SMALL_STATE(544)] = 11456,
  [SMALL_STATE(545)] = 11464,
  [SMALL_STATE(546)] = 11472,
  [SMALL_STATE(547)] = 11480,
  [SMALL_STATE(548)] = 11488,
  [SMALL_STATE(549)] = 11496,
  [SMALL_STATE(550)] = 11504,
  [SMALL_STATE(551)] = 11512,
  [SMALL_STATE(552)] = 11520,
  [SMALL_STATE(553)] = 11528,
  [SMALL_STATE(554)] = 11536,
  [SMALL_STATE(555)] = 11544,
  [SMALL_STATE(556)] = 11552,
  [SMALL_STATE(557)] = 11560,
  [SMALL_STATE(558)] = 11568,
  [SMALL_STATE(559)] = 11576,
  [SMALL_STATE(560)] = 11584,
  [SMALL_STATE(561)] = 11592,
  [SMALL_STATE(562)] = 11600,
  [SMALL_STATE(563)] = 11608,
  [SMALL_STATE(564)] = 11616,
  [SMALL_STATE(565)] = 11624,
  [SMALL_STATE(566)] = 11632,
  [SMALL_STATE(567)] = 11640,
  [SMALL_STATE(568)] = 11648,
  [SMALL_STATE(569)] = 11656,
  [SMALL_STATE(570)] = 11664,
  [SMALL_STATE(571)] = 11672,
  [SMALL_STATE(572)] = 11680,
  [SMALL_STATE(573)] = 11688,
  [SMALL_STATE(574)] = 11696,
  [SMALL_STATE(575)] = 11704,
  [SMALL_STATE(576)] = 11712,
  [SMALL_STATE(577)] = 11720,
  [SMALL_STATE(578)] = 11728,
  [SMALL_STATE(579)] = 11736,
  [SMALL_STATE(580)] = 11744,
  [SMALL_STATE(581)] = 11752,
  [SMALL_STATE(582)] = 11760,
  [SMALL_STATE(583)] = 11768,
  [SMALL_STATE(584)] = 11776,
  [SMALL_STATE(585)] = 11784,
  [SMALL_STATE(586)] = 11792,
  [SMALL_STATE(587)] = 11800,
  [SMALL_STATE(588)] = 11808,
  [SMALL_STATE(589)] = 11816,
  [SMALL_STATE(590)] = 11824,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_app, 2, .production_id = 11),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_app, 2, .production_id = 11),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(51),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(10),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(81),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(81),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(382),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(33),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(67),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(9),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(123),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(123),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(347),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(39),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(90),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(8),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(139),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(139),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(373),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(43),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_kind, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_kind, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(162),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(104),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(431),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 4),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(118),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(88),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_app, 2, .production_id = 11),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_app, 2, .production_id = 11),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_member, 1, .production_id = 10),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_member, 1, .production_id = 10),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_member, 2, .production_id = 10),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_member, 2, .production_id = 10),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(51),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(101),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_unit, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_unit, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(178),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(102),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(173),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(105),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_parens, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_parens, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(218),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(98),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(67),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(108),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(256),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(92),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 2, .production_id = 9),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1, .production_id = 9),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(90),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(91),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_app, 2, .production_id = 11),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pat_infix_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(292),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(148),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__func_body_repeat1, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(201),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(587),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(327),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(151),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_app, 2, .production_id = 11),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(318),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(142),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pat_infix_repeat1, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_unit, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_unit, 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_parens, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_parens, 3),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty_path, 1, .production_id = 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty_path, 1, .production_id = 5),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_infix, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(363),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(49),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_infix, 2),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_infix, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typevar, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 1),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(202),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 2),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 3),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typevar, 5),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 5),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(168),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 3),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, .production_id = 3),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(166),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(241),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(325),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(386),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(50),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(170),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_parens, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_parens, 3),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(253),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(355),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(52),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_infix, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_where, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_unit, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_unit, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pat_ident, 1, .production_id = 6),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pat_ident, 1, .production_id = 6),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_case, 7),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_case, 6),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 6),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(175),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_case, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_do, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lambda, 4),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 4),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(423),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(571),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(165),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_typed, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 12),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [763] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pat_infix_repeat1, 2), SHIFT_REPEAT(223),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 5, .production_id = 3),
  [772] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(164),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(172),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2), SHIFT_REPEAT(470),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 4, .production_id = 3),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(230),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_infix, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_infix, 2),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(244),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(359),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 12),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_case_repeat1, 2), SHIFT_REPEAT(153),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_case_repeat1, 2),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pat_infix_repeat1, 2), SHIFT_REPEAT(200),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(316),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [909] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(401),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2), SHIFT_REPEAT(429),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(7),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2), SHIFT_REPEAT(4),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 7, .production_id = 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2), SHIFT_REPEAT(287),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 8, .production_id = 12),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 8, .production_id = 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 3, .production_id = 9),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 8),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_let, 4),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 3, .production_id = 8),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 4, .production_id = 13),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 7, .production_id = 12),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_arm, 5),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 12, .production_id = 3),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 11, .production_id = 3),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 7),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(537),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_arm, 3),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 10, .production_id = 12),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 10, .production_id = 3),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_item, 1),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 1, .production_id = 4),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 5, .production_id = 7),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 4, .production_id = 3),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 4),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 5, .production_id = 3),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix, 4),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixity, 1),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__infix, 5),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__postfix, 4),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 4, .production_id = 3),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 4, .production_id = 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 9, .production_id = 12),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 9, .production_id = 3),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 3),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 7),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 3),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 7),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 8, .production_id = 7),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 3),
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
