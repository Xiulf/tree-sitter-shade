#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 651
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 2
#define TOKEN_COUNT 50
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
  anon_sym_DOT_DOT = 8,
  anon_sym_import = 9,
  anon_sym_as = 10,
  anon_sym_prefix = 11,
  anon_sym_infix = 12,
  anon_sym_infixl = 13,
  anon_sym_infixr = 14,
  anon_sym_postfix = 15,
  anon_sym_foreign = 16,
  anon_sym_type = 17,
  anon_sym_COLON_COLON = 18,
  anon_sym_PIPE = 19,
  anon_sym_class = 20,
  anon_sym_DASH_GT = 21,
  anon_sym_member = 22,
  anon_sym_of = 23,
  anon_sym_where = 24,
  anon_sym_BQUOTE = 25,
  anon_sym_do = 26,
  anon_sym_fn = 27,
  anon_sym_if = 28,
  anon_sym_then = 29,
  anon_sym_else = 30,
  anon_sym_case = 31,
  anon_sym_let = 32,
  aux_sym_int_literal_token1 = 33,
  aux_sym_int_literal_token2 = 34,
  aux_sym_int_literal_token3 = 35,
  anon_sym_DQUOTE = 36,
  aux_sym_string_literal_token1 = 37,
  anon_sym_DQUOTE2 = 38,
  sym_operator = 39,
  anon_sym_RPAREN2 = 40,
  anon_sym_DOT = 41,
  sym_comment = 42,
  sym_recur = 43,
  aux_sym__token1 = 44,
  sym__layout_semicolon = 45,
  sym__layout_start = 46,
  sym__layout_end = 47,
  sym__slash = 48,
  sym_empty_file = 49,
  sym_source_file = 50,
  sym_attribute = 51,
  sym__attr_body = 52,
  sym__attr_value = 53,
  sym_module = 54,
  sym_exports = 55,
  sym_export = 56,
  sym_export_group = 57,
  sym_item = 58,
  sym_import = 59,
  sym_import_item = 60,
  sym_fixity = 61,
  sym__prefix = 62,
  sym__infix = 63,
  sym__postfix = 64,
  sym_type = 65,
  sym__type_kind = 66,
  sym__type_alias = 67,
  sym__type_ctor = 68,
  sym_ctor = 69,
  sym_typevar = 70,
  sym_func = 71,
  sym__func_type = 72,
  sym__func_body = 73,
  sym_class = 74,
  sym_fundep = 75,
  sym_member = 76,
  sym_where_clause = 77,
  sym_where_member = 78,
  sym_where_kind = 79,
  sym__ty = 80,
  sym_ty_where = 81,
  sym_ty_app = 82,
  sym_ty_infix = 83,
  sym__ty_atom = 84,
  sym_ty_unit = 85,
  sym_ty_parens = 86,
  sym__pattern = 87,
  sym_pat_app = 88,
  sym_pat_infix = 89,
  sym__pat_atom = 90,
  sym_pat_unit = 91,
  sym_pat_parens = 92,
  sym__expression = 93,
  sym__expression2 = 94,
  sym_expr_typed = 95,
  sym_expr_app = 96,
  sym_expr_infix = 97,
  sym__expr_atom = 98,
  sym_expr_unit = 99,
  sym_expr_parens = 100,
  sym_expr_do = 101,
  sym_expr_lambda = 102,
  sym_expr_if = 103,
  sym_expr_case = 104,
  sym_case_arm = 105,
  sym__expr_block = 106,
  sym__stmt = 107,
  sym_stmt_let = 108,
  sym__literal = 109,
  sym_int_literal = 110,
  sym_string_literal = 111,
  sym__ty_path = 112,
  sym__pat_ident = 113,
  sym_symbol = 114,
  sym_path = 115,
  aux_sym__attr_value_repeat1 = 116,
  aux_sym_module_repeat1 = 117,
  aux_sym_module_repeat2 = 118,
  aux_sym_exports_repeat1 = 119,
  aux_sym_export_group_repeat1 = 120,
  aux_sym_import_repeat1 = 121,
  aux_sym__type_alias_repeat1 = 122,
  aux_sym__type_ctor_repeat1 = 123,
  aux_sym_ctor_repeat1 = 124,
  aux_sym__func_body_repeat1 = 125,
  aux_sym_class_repeat1 = 126,
  aux_sym_class_repeat2 = 127,
  aux_sym_fundep_repeat1 = 128,
  aux_sym_where_clause_repeat1 = 129,
  aux_sym_ty_infix_repeat1 = 130,
  aux_sym_pat_infix_repeat1 = 131,
  aux_sym_expr_app_repeat1 = 132,
  aux_sym_expr_infix_repeat1 = 133,
  aux_sym_expr_case_repeat1 = 134,
  aux_sym__expr_block_repeat1 = 135,
  aux_sym_string_literal_repeat1 = 136,
  aux_sym_path_repeat1 = 137,
  alias_sym_pat_identifier = 138,
  alias_sym_ty_path = 139,
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
  [anon_sym_DOT_DOT] = "..",
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
  [anon_sym_DOT] = ".",
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
  [sym_exports] = "exports",
  [sym_export] = "export",
  [sym_export_group] = "export_group",
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
  [aux_sym_exports_repeat1] = "exports_repeat1",
  [aux_sym_export_group_repeat1] = "export_group_repeat1",
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
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
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
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_exports] = sym_exports,
  [sym_export] = sym_export,
  [sym_export_group] = sym_export_group,
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
  [aux_sym_exports_repeat1] = aux_sym_exports_repeat1,
  [aux_sym_export_group_repeat1] = aux_sym_export_group_repeat1,
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
  [anon_sym_DOT_DOT] = {
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
  [anon_sym_DOT] = {
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
  [sym_exports] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_export_group] = {
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
  [aux_sym_exports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_group_repeat1] = {
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
  [5] = {.index = 4, .length = 1},
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
    {field_name, 1},
  [2] =
    {field_last, 1},
  [3] =
    {field_name, 2},
  [4] =
    {field_name, 0, .inherited = true},
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
  [6] = {
    [0] = alias_sym_ty_path,
  },
  [7] = {
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
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(26)
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '|') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(2)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '|') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(2)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '|') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(4)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '`') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(4)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '`') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(6)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ';') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(6)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ';') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(9)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(9)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(9)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(11)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '`') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(11)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '`') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(13)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ';') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(13)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ';') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(14)
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(15)
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(16)
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(17)
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(18)
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(19)
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ';') ADVANCE(60);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(47);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(26)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '|') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_int_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_int_literal_token3);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(47);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_operator);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(58);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
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
  [2] = {.lex_state = 1, .external_lex_state = 3},
  [3] = {.lex_state = 1, .external_lex_state = 3},
  [4] = {.lex_state = 1, .external_lex_state = 4},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 4},
  [10] = {.lex_state = 1, .external_lex_state = 4},
  [11] = {.lex_state = 1, .external_lex_state = 4},
  [12] = {.lex_state = 1, .external_lex_state = 4},
  [13] = {.lex_state = 1, .external_lex_state = 4},
  [14] = {.lex_state = 1, .external_lex_state = 4},
  [15] = {.lex_state = 1, .external_lex_state = 4},
  [16] = {.lex_state = 1, .external_lex_state = 4},
  [17] = {.lex_state = 1, .external_lex_state = 4},
  [18] = {.lex_state = 1, .external_lex_state = 4},
  [19] = {.lex_state = 1, .external_lex_state = 4},
  [20] = {.lex_state = 1, .external_lex_state = 4},
  [21] = {.lex_state = 1, .external_lex_state = 4},
  [22] = {.lex_state = 1, .external_lex_state = 4},
  [23] = {.lex_state = 1, .external_lex_state = 4},
  [24] = {.lex_state = 1, .external_lex_state = 4},
  [25] = {.lex_state = 1, .external_lex_state = 4},
  [26] = {.lex_state = 1, .external_lex_state = 4},
  [27] = {.lex_state = 0, .external_lex_state = 4},
  [28] = {.lex_state = 1, .external_lex_state = 4},
  [29] = {.lex_state = 1, .external_lex_state = 4},
  [30] = {.lex_state = 1, .external_lex_state = 4},
  [31] = {.lex_state = 1, .external_lex_state = 4},
  [32] = {.lex_state = 1, .external_lex_state = 4},
  [33] = {.lex_state = 1, .external_lex_state = 4},
  [34] = {.lex_state = 1, .external_lex_state = 4},
  [35] = {.lex_state = 4, .external_lex_state = 4},
  [36] = {.lex_state = 4, .external_lex_state = 4},
  [37] = {.lex_state = 4, .external_lex_state = 4},
  [38] = {.lex_state = 4, .external_lex_state = 4},
  [39] = {.lex_state = 6, .external_lex_state = 4},
  [40] = {.lex_state = 4, .external_lex_state = 4},
  [41] = {.lex_state = 4, .external_lex_state = 4},
  [42] = {.lex_state = 7, .external_lex_state = 5},
  [43] = {.lex_state = 4, .external_lex_state = 4},
  [44] = {.lex_state = 1, .external_lex_state = 4},
  [45] = {.lex_state = 6, .external_lex_state = 4},
  [46] = {.lex_state = 6, .external_lex_state = 4},
  [47] = {.lex_state = 4, .external_lex_state = 4},
  [48] = {.lex_state = 1, .external_lex_state = 4},
  [49] = {.lex_state = 4, .external_lex_state = 5},
  [50] = {.lex_state = 4, .external_lex_state = 5},
  [51] = {.lex_state = 4, .external_lex_state = 4},
  [52] = {.lex_state = 1, .external_lex_state = 4},
  [53] = {.lex_state = 6, .external_lex_state = 4},
  [54] = {.lex_state = 4, .external_lex_state = 5},
  [55] = {.lex_state = 1, .external_lex_state = 4},
  [56] = {.lex_state = 7, .external_lex_state = 5},
  [57] = {.lex_state = 1, .external_lex_state = 5},
  [58] = {.lex_state = 4, .external_lex_state = 5},
  [59] = {.lex_state = 7, .external_lex_state = 5},
  [60] = {.lex_state = 11, .external_lex_state = 4},
  [61] = {.lex_state = 11, .external_lex_state = 4},
  [62] = {.lex_state = 6, .external_lex_state = 5},
  [63] = {.lex_state = 4, .external_lex_state = 5},
  [64] = {.lex_state = 1, .external_lex_state = 4},
  [65] = {.lex_state = 7, .external_lex_state = 5},
  [66] = {.lex_state = 4, .external_lex_state = 5},
  [67] = {.lex_state = 1, .external_lex_state = 5},
  [68] = {.lex_state = 4, .external_lex_state = 5},
  [69] = {.lex_state = 13, .external_lex_state = 4},
  [70] = {.lex_state = 1, .external_lex_state = 4},
  [71] = {.lex_state = 1, .external_lex_state = 4},
  [72] = {.lex_state = 6, .external_lex_state = 5},
  [73] = {.lex_state = 6, .external_lex_state = 5},
  [74] = {.lex_state = 11, .external_lex_state = 4},
  [75] = {.lex_state = 1, .external_lex_state = 4},
  [76] = {.lex_state = 11, .external_lex_state = 4},
  [77] = {.lex_state = 6, .external_lex_state = 5},
  [78] = {.lex_state = 1, .external_lex_state = 4},
  [79] = {.lex_state = 1, .external_lex_state = 4},
  [80] = {.lex_state = 1, .external_lex_state = 5},
  [81] = {.lex_state = 1, .external_lex_state = 4},
  [82] = {.lex_state = 1, .external_lex_state = 4},
  [83] = {.lex_state = 1, .external_lex_state = 4},
  [84] = {.lex_state = 11, .external_lex_state = 4},
  [85] = {.lex_state = 4, .external_lex_state = 5},
  [86] = {.lex_state = 1, .external_lex_state = 4},
  [87] = {.lex_state = 4, .external_lex_state = 5},
  [88] = {.lex_state = 11, .external_lex_state = 4},
  [89] = {.lex_state = 13, .external_lex_state = 4},
  [90] = {.lex_state = 11, .external_lex_state = 4},
  [91] = {.lex_state = 11, .external_lex_state = 4},
  [92] = {.lex_state = 1, .external_lex_state = 5},
  [93] = {.lex_state = 11, .external_lex_state = 4},
  [94] = {.lex_state = 1, .external_lex_state = 4},
  [95] = {.lex_state = 1, .external_lex_state = 4},
  [96] = {.lex_state = 1, .external_lex_state = 4},
  [97] = {.lex_state = 1, .external_lex_state = 4},
  [98] = {.lex_state = 1, .external_lex_state = 4},
  [99] = {.lex_state = 1, .external_lex_state = 5},
  [100] = {.lex_state = 13, .external_lex_state = 4},
  [101] = {.lex_state = 13, .external_lex_state = 4},
  [102] = {.lex_state = 1, .external_lex_state = 4},
  [103] = {.lex_state = 1, .external_lex_state = 4},
  [104] = {.lex_state = 1, .external_lex_state = 4},
  [105] = {.lex_state = 1, .external_lex_state = 4},
  [106] = {.lex_state = 1, .external_lex_state = 3},
  [107] = {.lex_state = 11, .external_lex_state = 4},
  [108] = {.lex_state = 1, .external_lex_state = 3},
  [109] = {.lex_state = 1, .external_lex_state = 4},
  [110] = {.lex_state = 4, .external_lex_state = 4},
  [111] = {.lex_state = 1, .external_lex_state = 4},
  [112] = {.lex_state = 1, .external_lex_state = 4},
  [113] = {.lex_state = 1, .external_lex_state = 4},
  [114] = {.lex_state = 1, .external_lex_state = 4},
  [115] = {.lex_state = 1, .external_lex_state = 4},
  [116] = {.lex_state = 11, .external_lex_state = 4},
  [117] = {.lex_state = 1, .external_lex_state = 4},
  [118] = {.lex_state = 11, .external_lex_state = 4},
  [119] = {.lex_state = 1, .external_lex_state = 4},
  [120] = {.lex_state = 1, .external_lex_state = 4},
  [121] = {.lex_state = 1, .external_lex_state = 4},
  [122] = {.lex_state = 1, .external_lex_state = 4},
  [123] = {.lex_state = 11, .external_lex_state = 4},
  [124] = {.lex_state = 1, .external_lex_state = 4},
  [125] = {.lex_state = 4, .external_lex_state = 4},
  [126] = {.lex_state = 4, .external_lex_state = 4},
  [127] = {.lex_state = 1, .external_lex_state = 4},
  [128] = {.lex_state = 1, .external_lex_state = 4},
  [129] = {.lex_state = 1, .external_lex_state = 4},
  [130] = {.lex_state = 4, .external_lex_state = 4},
  [131] = {.lex_state = 1, .external_lex_state = 4},
  [132] = {.lex_state = 1, .external_lex_state = 4},
  [133] = {.lex_state = 1, .external_lex_state = 4},
  [134] = {.lex_state = 3, .external_lex_state = 4},
  [135] = {.lex_state = 1, .external_lex_state = 4},
  [136] = {.lex_state = 3, .external_lex_state = 4},
  [137] = {.lex_state = 1, .external_lex_state = 4},
  [138] = {.lex_state = 1, .external_lex_state = 4},
  [139] = {.lex_state = 1, .external_lex_state = 4},
  [140] = {.lex_state = 1, .external_lex_state = 4},
  [141] = {.lex_state = 1, .external_lex_state = 4},
  [142] = {.lex_state = 1, .external_lex_state = 4},
  [143] = {.lex_state = 1, .external_lex_state = 4},
  [144] = {.lex_state = 1, .external_lex_state = 4},
  [145] = {.lex_state = 1, .external_lex_state = 4},
  [146] = {.lex_state = 1, .external_lex_state = 4},
  [147] = {.lex_state = 1, .external_lex_state = 4},
  [148] = {.lex_state = 4, .external_lex_state = 4},
  [149] = {.lex_state = 4, .external_lex_state = 4},
  [150] = {.lex_state = 4, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 1, .external_lex_state = 4},
  [153] = {.lex_state = 3, .external_lex_state = 5},
  [154] = {.lex_state = 3, .external_lex_state = 5},
  [155] = {.lex_state = 1, .external_lex_state = 4},
  [156] = {.lex_state = 1, .external_lex_state = 4},
  [157] = {.lex_state = 1, .external_lex_state = 4},
  [158] = {.lex_state = 1, .external_lex_state = 4},
  [159] = {.lex_state = 1, .external_lex_state = 4},
  [160] = {.lex_state = 1, .external_lex_state = 4},
  [161] = {.lex_state = 4, .external_lex_state = 4},
  [162] = {.lex_state = 1, .external_lex_state = 4},
  [163] = {.lex_state = 1, .external_lex_state = 4},
  [164] = {.lex_state = 4, .external_lex_state = 4},
  [165] = {.lex_state = 1, .external_lex_state = 4},
  [166] = {.lex_state = 10, .external_lex_state = 4},
  [167] = {.lex_state = 4, .external_lex_state = 5},
  [168] = {.lex_state = 1, .external_lex_state = 5},
  [169] = {.lex_state = 4, .external_lex_state = 5},
  [170] = {.lex_state = 5, .external_lex_state = 4},
  [171] = {.lex_state = 11, .external_lex_state = 4},
  [172] = {.lex_state = 11, .external_lex_state = 4},
  [173] = {.lex_state = 4, .external_lex_state = 5},
  [174] = {.lex_state = 0, .external_lex_state = 4},
  [175] = {.lex_state = 11, .external_lex_state = 4},
  [176] = {.lex_state = 1, .external_lex_state = 4},
  [177] = {.lex_state = 10, .external_lex_state = 4},
  [178] = {.lex_state = 5, .external_lex_state = 4},
  [179] = {.lex_state = 1, .external_lex_state = 4},
  [180] = {.lex_state = 1, .external_lex_state = 5},
  [181] = {.lex_state = 4, .external_lex_state = 4},
  [182] = {.lex_state = 4, .external_lex_state = 5},
  [183] = {.lex_state = 8, .external_lex_state = 5},
  [184] = {.lex_state = 6, .external_lex_state = 4},
  [185] = {.lex_state = 6, .external_lex_state = 4},
  [186] = {.lex_state = 4, .external_lex_state = 4},
  [187] = {.lex_state = 6, .external_lex_state = 4},
  [188] = {.lex_state = 4, .external_lex_state = 4},
  [189] = {.lex_state = 6, .external_lex_state = 4},
  [190] = {.lex_state = 1, .external_lex_state = 5},
  [191] = {.lex_state = 8, .external_lex_state = 5},
  [192] = {.lex_state = 1, .external_lex_state = 4},
  [193] = {.lex_state = 1, .external_lex_state = 4},
  [194] = {.lex_state = 6, .external_lex_state = 4},
  [195] = {.lex_state = 1, .external_lex_state = 4},
  [196] = {.lex_state = 6, .external_lex_state = 4},
  [197] = {.lex_state = 1, .external_lex_state = 5},
  [198] = {.lex_state = 4, .external_lex_state = 5},
  [199] = {.lex_state = 7, .external_lex_state = 5},
  [200] = {.lex_state = 5, .external_lex_state = 5},
  [201] = {.lex_state = 7, .external_lex_state = 5},
  [202] = {.lex_state = 7, .external_lex_state = 5},
  [203] = {.lex_state = 7, .external_lex_state = 5},
  [204] = {.lex_state = 1, .external_lex_state = 5},
  [205] = {.lex_state = 1, .external_lex_state = 5},
  [206] = {.lex_state = 1, .external_lex_state = 5},
  [207] = {.lex_state = 11, .external_lex_state = 4},
  [208] = {.lex_state = 7, .external_lex_state = 5},
  [209] = {.lex_state = 11, .external_lex_state = 4},
  [210] = {.lex_state = 7, .external_lex_state = 5},
  [211] = {.lex_state = 1, .external_lex_state = 5},
  [212] = {.lex_state = 5, .external_lex_state = 5},
  [213] = {.lex_state = 1, .external_lex_state = 5},
  [214] = {.lex_state = 1, .external_lex_state = 5},
  [215] = {.lex_state = 0, .external_lex_state = 5},
  [216] = {.lex_state = 6, .external_lex_state = 5},
  [217] = {.lex_state = 6, .external_lex_state = 5},
  [218] = {.lex_state = 4, .external_lex_state = 5},
  [219] = {.lex_state = 4, .external_lex_state = 5},
  [220] = {.lex_state = 6, .external_lex_state = 5},
  [221] = {.lex_state = 12, .external_lex_state = 4},
  [222] = {.lex_state = 0, .external_lex_state = 5},
  [223] = {.lex_state = 1, .external_lex_state = 4},
  [224] = {.lex_state = 4, .external_lex_state = 5},
  [225] = {.lex_state = 6, .external_lex_state = 5},
  [226] = {.lex_state = 12, .external_lex_state = 4},
  [227] = {.lex_state = 6, .external_lex_state = 5},
  [228] = {.lex_state = 6, .external_lex_state = 5},
  [229] = {.lex_state = 11, .external_lex_state = 4},
  [230] = {.lex_state = 13, .external_lex_state = 4},
  [231] = {.lex_state = 0, .external_lex_state = 5},
  [232] = {.lex_state = 13, .external_lex_state = 4},
  [233] = {.lex_state = 11, .external_lex_state = 4},
  [234] = {.lex_state = 11, .external_lex_state = 4},
  [235] = {.lex_state = 11, .external_lex_state = 4},
  [236] = {.lex_state = 13, .external_lex_state = 4},
  [237] = {.lex_state = 11, .external_lex_state = 4},
  [238] = {.lex_state = 13, .external_lex_state = 4},
  [239] = {.lex_state = 11, .external_lex_state = 4},
  [240] = {.lex_state = 13, .external_lex_state = 4},
  [241] = {.lex_state = 13, .external_lex_state = 4},
  [242] = {.lex_state = 14, .external_lex_state = 4},
  [243] = {.lex_state = 14, .external_lex_state = 4},
  [244] = {.lex_state = 14, .external_lex_state = 4},
  [245] = {.lex_state = 1, .external_lex_state = 4},
  [246] = {.lex_state = 4, .external_lex_state = 4},
  [247] = {.lex_state = 1, .external_lex_state = 4},
  [248] = {.lex_state = 14, .external_lex_state = 4},
  [249] = {.lex_state = 4, .external_lex_state = 4},
  [250] = {.lex_state = 1, .external_lex_state = 4},
  [251] = {.lex_state = 4, .external_lex_state = 4},
  [252] = {.lex_state = 15, .external_lex_state = 4},
  [253] = {.lex_state = 1, .external_lex_state = 4},
  [254] = {.lex_state = 14, .external_lex_state = 4},
  [255] = {.lex_state = 15, .external_lex_state = 4},
  [256] = {.lex_state = 0, .external_lex_state = 5},
  [257] = {.lex_state = 0, .external_lex_state = 5},
  [258] = {.lex_state = 0, .external_lex_state = 5},
  [259] = {.lex_state = 0, .external_lex_state = 5},
  [260] = {.lex_state = 14, .external_lex_state = 4},
  [261] = {.lex_state = 0, .external_lex_state = 5},
  [262] = {.lex_state = 15, .external_lex_state = 4},
  [263] = {.lex_state = 14, .external_lex_state = 4},
  [264] = {.lex_state = 0, .external_lex_state = 5},
  [265] = {.lex_state = 0, .external_lex_state = 5},
  [266] = {.lex_state = 0, .external_lex_state = 5},
  [267] = {.lex_state = 0, .external_lex_state = 5},
  [268] = {.lex_state = 14, .external_lex_state = 4},
  [269] = {.lex_state = 1, .external_lex_state = 4},
  [270] = {.lex_state = 1, .external_lex_state = 4},
  [271] = {.lex_state = 14, .external_lex_state = 5},
  [272] = {.lex_state = 14, .external_lex_state = 4},
  [273] = {.lex_state = 1, .external_lex_state = 4},
  [274] = {.lex_state = 0, .external_lex_state = 3},
  [275] = {.lex_state = 0, .external_lex_state = 3},
  [276] = {.lex_state = 0, .external_lex_state = 4},
  [277] = {.lex_state = 0, .external_lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 5},
  [279] = {.lex_state = 16, .external_lex_state = 5},
  [280] = {.lex_state = 0, .external_lex_state = 4},
  [281] = {.lex_state = 1, .external_lex_state = 4},
  [282] = {.lex_state = 16, .external_lex_state = 5},
  [283] = {.lex_state = 1, .external_lex_state = 4},
  [284] = {.lex_state = 1, .external_lex_state = 4},
  [285] = {.lex_state = 0, .external_lex_state = 3},
  [286] = {.lex_state = 15, .external_lex_state = 4},
  [287] = {.lex_state = 0, .external_lex_state = 4},
  [288] = {.lex_state = 0, .external_lex_state = 4},
  [289] = {.lex_state = 0, .external_lex_state = 4},
  [290] = {.lex_state = 14, .external_lex_state = 5},
  [291] = {.lex_state = 14, .external_lex_state = 5},
  [292] = {.lex_state = 0, .external_lex_state = 3},
  [293] = {.lex_state = 0, .external_lex_state = 4},
  [294] = {.lex_state = 0, .external_lex_state = 4},
  [295] = {.lex_state = 14, .external_lex_state = 5},
  [296] = {.lex_state = 16, .external_lex_state = 5},
  [297] = {.lex_state = 1, .external_lex_state = 4},
  [298] = {.lex_state = 0, .external_lex_state = 3},
  [299] = {.lex_state = 0, .external_lex_state = 3},
  [300] = {.lex_state = 0, .external_lex_state = 4},
  [301] = {.lex_state = 1, .external_lex_state = 4},
  [302] = {.lex_state = 0, .external_lex_state = 3},
  [303] = {.lex_state = 0, .external_lex_state = 3},
  [304] = {.lex_state = 15, .external_lex_state = 5},
  [305] = {.lex_state = 14, .external_lex_state = 5},
  [306] = {.lex_state = 1, .external_lex_state = 4},
  [307] = {.lex_state = 1, .external_lex_state = 4},
  [308] = {.lex_state = 0, .external_lex_state = 5},
  [309] = {.lex_state = 0, .external_lex_state = 5},
  [310] = {.lex_state = 16, .external_lex_state = 5},
  [311] = {.lex_state = 1, .external_lex_state = 4},
  [312] = {.lex_state = 15, .external_lex_state = 5},
  [313] = {.lex_state = 1, .external_lex_state = 4},
  [314] = {.lex_state = 1, .external_lex_state = 4},
  [315] = {.lex_state = 17, .external_lex_state = 4},
  [316] = {.lex_state = 15, .external_lex_state = 5},
  [317] = {.lex_state = 17, .external_lex_state = 4},
  [318] = {.lex_state = 1, .external_lex_state = 4},
  [319] = {.lex_state = 0, .external_lex_state = 4},
  [320] = {.lex_state = 0, .external_lex_state = 4},
  [321] = {.lex_state = 14, .external_lex_state = 5},
  [322] = {.lex_state = 1, .external_lex_state = 4},
  [323] = {.lex_state = 1, .external_lex_state = 4},
  [324] = {.lex_state = 1, .external_lex_state = 4},
  [325] = {.lex_state = 0, .external_lex_state = 5},
  [326] = {.lex_state = 0, .external_lex_state = 5},
  [327] = {.lex_state = 1, .external_lex_state = 4},
  [328] = {.lex_state = 14, .external_lex_state = 5},
  [329] = {.lex_state = 17, .external_lex_state = 4},
  [330] = {.lex_state = 1, .external_lex_state = 4},
  [331] = {.lex_state = 17, .external_lex_state = 4},
  [332] = {.lex_state = 1, .external_lex_state = 4},
  [333] = {.lex_state = 14, .external_lex_state = 5},
  [334] = {.lex_state = 0, .external_lex_state = 5},
  [335] = {.lex_state = 0, .external_lex_state = 4},
  [336] = {.lex_state = 0, .external_lex_state = 4},
  [337] = {.lex_state = 0, .external_lex_state = 4},
  [338] = {.lex_state = 18, .external_lex_state = 4},
  [339] = {.lex_state = 17, .external_lex_state = 4},
  [340] = {.lex_state = 17, .external_lex_state = 4},
  [341] = {.lex_state = 0, .external_lex_state = 5},
  [342] = {.lex_state = 17, .external_lex_state = 4},
  [343] = {.lex_state = 1, .external_lex_state = 4},
  [344] = {.lex_state = 0, .external_lex_state = 5},
  [345] = {.lex_state = 17, .external_lex_state = 4},
  [346] = {.lex_state = 17, .external_lex_state = 4},
  [347] = {.lex_state = 0, .external_lex_state = 5},
  [348] = {.lex_state = 0, .external_lex_state = 5},
  [349] = {.lex_state = 14, .external_lex_state = 5},
  [350] = {.lex_state = 0, .external_lex_state = 5},
  [351] = {.lex_state = 0, .external_lex_state = 4},
  [352] = {.lex_state = 0, .external_lex_state = 5},
  [353] = {.lex_state = 0, .external_lex_state = 4},
  [354] = {.lex_state = 0, .external_lex_state = 5},
  [355] = {.lex_state = 0, .external_lex_state = 5},
  [356] = {.lex_state = 0, .external_lex_state = 4},
  [357] = {.lex_state = 0, .external_lex_state = 5},
  [358] = {.lex_state = 0, .external_lex_state = 5},
  [359] = {.lex_state = 15, .external_lex_state = 5},
  [360] = {.lex_state = 0, .external_lex_state = 4},
  [361] = {.lex_state = 17, .external_lex_state = 4},
  [362] = {.lex_state = 0, .external_lex_state = 4},
  [363] = {.lex_state = 18, .external_lex_state = 4},
  [364] = {.lex_state = 18, .external_lex_state = 4},
  [365] = {.lex_state = 0, .external_lex_state = 4},
  [366] = {.lex_state = 17, .external_lex_state = 4},
  [367] = {.lex_state = 0, .external_lex_state = 5},
  [368] = {.lex_state = 0, .external_lex_state = 5},
  [369] = {.lex_state = 0, .external_lex_state = 4},
  [370] = {.lex_state = 0, .external_lex_state = 5},
  [371] = {.lex_state = 0, .external_lex_state = 4},
  [372] = {.lex_state = 0, .external_lex_state = 5},
  [373] = {.lex_state = 0, .external_lex_state = 5},
  [374] = {.lex_state = 0, .external_lex_state = 4},
  [375] = {.lex_state = 0, .external_lex_state = 4},
  [376] = {.lex_state = 0, .external_lex_state = 4},
  [377] = {.lex_state = 0, .external_lex_state = 4},
  [378] = {.lex_state = 0, .external_lex_state = 4},
  [379] = {.lex_state = 0, .external_lex_state = 5},
  [380] = {.lex_state = 0, .external_lex_state = 4},
  [381] = {.lex_state = 0, .external_lex_state = 5},
  [382] = {.lex_state = 0, .external_lex_state = 4},
  [383] = {.lex_state = 0, .external_lex_state = 4},
  [384] = {.lex_state = 0, .external_lex_state = 4},
  [385] = {.lex_state = 20, .external_lex_state = 4},
  [386] = {.lex_state = 0, .external_lex_state = 5},
  [387] = {.lex_state = 0, .external_lex_state = 5},
  [388] = {.lex_state = 1, .external_lex_state = 4},
  [389] = {.lex_state = 0, .external_lex_state = 5},
  [390] = {.lex_state = 0, .external_lex_state = 5},
  [391] = {.lex_state = 0, .external_lex_state = 4},
  [392] = {.lex_state = 0, .external_lex_state = 5},
  [393] = {.lex_state = 20, .external_lex_state = 4},
  [394] = {.lex_state = 20, .external_lex_state = 4},
  [395] = {.lex_state = 1, .external_lex_state = 4},
  [396] = {.lex_state = 20, .external_lex_state = 4},
  [397] = {.lex_state = 20, .external_lex_state = 4},
  [398] = {.lex_state = 0, .external_lex_state = 5},
  [399] = {.lex_state = 0, .external_lex_state = 5},
  [400] = {.lex_state = 20, .external_lex_state = 4},
  [401] = {.lex_state = 20, .external_lex_state = 4},
  [402] = {.lex_state = 17, .external_lex_state = 4},
  [403] = {.lex_state = 20, .external_lex_state = 4},
  [404] = {.lex_state = 20, .external_lex_state = 4},
  [405] = {.lex_state = 20, .external_lex_state = 4},
  [406] = {.lex_state = 0, .external_lex_state = 5},
  [407] = {.lex_state = 20, .external_lex_state = 4},
  [408] = {.lex_state = 0, .external_lex_state = 5},
  [409] = {.lex_state = 0, .external_lex_state = 5},
  [410] = {.lex_state = 20, .external_lex_state = 4},
  [411] = {.lex_state = 0, .external_lex_state = 5},
  [412] = {.lex_state = 0, .external_lex_state = 5},
  [413] = {.lex_state = 1, .external_lex_state = 4},
  [414] = {.lex_state = 20, .external_lex_state = 4},
  [415] = {.lex_state = 0, .external_lex_state = 4},
  [416] = {.lex_state = 20, .external_lex_state = 4},
  [417] = {.lex_state = 0, .external_lex_state = 4},
  [418] = {.lex_state = 0, .external_lex_state = 5},
  [419] = {.lex_state = 0, .external_lex_state = 4},
  [420] = {.lex_state = 0, .external_lex_state = 4},
  [421] = {.lex_state = 0, .external_lex_state = 5},
  [422] = {.lex_state = 20, .external_lex_state = 4},
  [423] = {.lex_state = 20, .external_lex_state = 4},
  [424] = {.lex_state = 0, .external_lex_state = 5},
  [425] = {.lex_state = 0, .external_lex_state = 5},
  [426] = {.lex_state = 0, .external_lex_state = 5},
  [427] = {.lex_state = 0, .external_lex_state = 5},
  [428] = {.lex_state = 0, .external_lex_state = 5},
  [429] = {.lex_state = 0, .external_lex_state = 5},
  [430] = {.lex_state = 0, .external_lex_state = 5},
  [431] = {.lex_state = 1, .external_lex_state = 4},
  [432] = {.lex_state = 0, .external_lex_state = 5},
  [433] = {.lex_state = 19, .external_lex_state = 4},
  [434] = {.lex_state = 1, .external_lex_state = 4},
  [435] = {.lex_state = 20, .external_lex_state = 4},
  [436] = {.lex_state = 20, .external_lex_state = 4},
  [437] = {.lex_state = 14, .external_lex_state = 4},
  [438] = {.lex_state = 20, .external_lex_state = 4},
  [439] = {.lex_state = 0, .external_lex_state = 5},
  [440] = {.lex_state = 1, .external_lex_state = 4},
  [441] = {.lex_state = 0, .external_lex_state = 4},
  [442] = {.lex_state = 0, .external_lex_state = 4},
  [443] = {.lex_state = 0, .external_lex_state = 5},
  [444] = {.lex_state = 1, .external_lex_state = 4},
  [445] = {.lex_state = 1, .external_lex_state = 4},
  [446] = {.lex_state = 18, .external_lex_state = 4},
  [447] = {.lex_state = 0, .external_lex_state = 5},
  [448] = {.lex_state = 0, .external_lex_state = 5},
  [449] = {.lex_state = 0, .external_lex_state = 4},
  [450] = {.lex_state = 0, .external_lex_state = 5},
  [451] = {.lex_state = 0, .external_lex_state = 5},
  [452] = {.lex_state = 0, .external_lex_state = 4},
  [453] = {.lex_state = 0, .external_lex_state = 5},
  [454] = {.lex_state = 17, .external_lex_state = 4},
  [455] = {.lex_state = 14, .external_lex_state = 4},
  [456] = {.lex_state = 0, .external_lex_state = 5},
  [457] = {.lex_state = 0, .external_lex_state = 5},
  [458] = {.lex_state = 1, .external_lex_state = 4},
  [459] = {.lex_state = 0, .external_lex_state = 5},
  [460] = {.lex_state = 1, .external_lex_state = 4},
  [461] = {.lex_state = 0, .external_lex_state = 5},
  [462] = {.lex_state = 0, .external_lex_state = 5},
  [463] = {.lex_state = 0, .external_lex_state = 5},
  [464] = {.lex_state = 0, .external_lex_state = 5},
  [465] = {.lex_state = 0, .external_lex_state = 5},
  [466] = {.lex_state = 1, .external_lex_state = 4},
  [467] = {.lex_state = 1, .external_lex_state = 4},
  [468] = {.lex_state = 0, .external_lex_state = 4},
  [469] = {.lex_state = 0, .external_lex_state = 5},
  [470] = {.lex_state = 14, .external_lex_state = 4},
  [471] = {.lex_state = 0, .external_lex_state = 5},
  [472] = {.lex_state = 0, .external_lex_state = 5},
  [473] = {.lex_state = 0, .external_lex_state = 5},
  [474] = {.lex_state = 0, .external_lex_state = 5},
  [475] = {.lex_state = 0, .external_lex_state = 5},
  [476] = {.lex_state = 0, .external_lex_state = 5},
  [477] = {.lex_state = 0, .external_lex_state = 4},
  [478] = {.lex_state = 1, .external_lex_state = 4},
  [479] = {.lex_state = 0, .external_lex_state = 4},
  [480] = {.lex_state = 0, .external_lex_state = 5},
  [481] = {.lex_state = 0, .external_lex_state = 5},
  [482] = {.lex_state = 0, .external_lex_state = 5},
  [483] = {.lex_state = 0, .external_lex_state = 4},
  [484] = {.lex_state = 0, .external_lex_state = 5},
  [485] = {.lex_state = 0, .external_lex_state = 5},
  [486] = {.lex_state = 0, .external_lex_state = 4},
  [487] = {.lex_state = 0, .external_lex_state = 5},
  [488] = {.lex_state = 0, .external_lex_state = 5},
  [489] = {.lex_state = 1, .external_lex_state = 4},
  [490] = {.lex_state = 1, .external_lex_state = 4},
  [491] = {.lex_state = 0, .external_lex_state = 5},
  [492] = {.lex_state = 0, .external_lex_state = 5},
  [493] = {.lex_state = 0, .external_lex_state = 5},
  [494] = {.lex_state = 0, .external_lex_state = 4},
  [495] = {.lex_state = 0, .external_lex_state = 5},
  [496] = {.lex_state = 0, .external_lex_state = 5},
  [497] = {.lex_state = 0, .external_lex_state = 5},
  [498] = {.lex_state = 1, .external_lex_state = 4},
  [499] = {.lex_state = 0, .external_lex_state = 5},
  [500] = {.lex_state = 0, .external_lex_state = 5},
  [501] = {.lex_state = 0, .external_lex_state = 5},
  [502] = {.lex_state = 0, .external_lex_state = 6},
  [503] = {.lex_state = 0, .external_lex_state = 5},
  [504] = {.lex_state = 0, .external_lex_state = 5},
  [505] = {.lex_state = 0, .external_lex_state = 5},
  [506] = {.lex_state = 0, .external_lex_state = 5},
  [507] = {.lex_state = 0, .external_lex_state = 6},
  [508] = {.lex_state = 0, .external_lex_state = 4},
  [509] = {.lex_state = 0, .external_lex_state = 5},
  [510] = {.lex_state = 0, .external_lex_state = 5},
  [511] = {.lex_state = 0, .external_lex_state = 5},
  [512] = {.lex_state = 0, .external_lex_state = 5},
  [513] = {.lex_state = 0, .external_lex_state = 5},
  [514] = {.lex_state = 0, .external_lex_state = 4},
  [515] = {.lex_state = 0, .external_lex_state = 5},
  [516] = {.lex_state = 0, .external_lex_state = 4},
  [517] = {.lex_state = 0, .external_lex_state = 6},
  [518] = {.lex_state = 0, .external_lex_state = 4},
  [519] = {.lex_state = 0, .external_lex_state = 4},
  [520] = {.lex_state = 0, .external_lex_state = 4},
  [521] = {.lex_state = 0, .external_lex_state = 4},
  [522] = {.lex_state = 0, .external_lex_state = 5},
  [523] = {.lex_state = 0, .external_lex_state = 5},
  [524] = {.lex_state = 1, .external_lex_state = 4},
  [525] = {.lex_state = 0, .external_lex_state = 4},
  [526] = {.lex_state = 1, .external_lex_state = 4},
  [527] = {.lex_state = 1, .external_lex_state = 4},
  [528] = {.lex_state = 1, .external_lex_state = 4},
  [529] = {.lex_state = 0, .external_lex_state = 5},
  [530] = {.lex_state = 0, .external_lex_state = 6},
  [531] = {.lex_state = 0, .external_lex_state = 5},
  [532] = {.lex_state = 0, .external_lex_state = 6},
  [533] = {.lex_state = 0, .external_lex_state = 5},
  [534] = {.lex_state = 0, .external_lex_state = 4},
  [535] = {.lex_state = 0, .external_lex_state = 6},
  [536] = {.lex_state = 0, .external_lex_state = 5},
  [537] = {.lex_state = 0, .external_lex_state = 4},
  [538] = {.lex_state = 0, .external_lex_state = 5},
  [539] = {.lex_state = 1, .external_lex_state = 4},
  [540] = {.lex_state = 14, .external_lex_state = 4},
  [541] = {.lex_state = 0, .external_lex_state = 6},
  [542] = {.lex_state = 0, .external_lex_state = 4},
  [543] = {.lex_state = 0, .external_lex_state = 5},
  [544] = {.lex_state = 0, .external_lex_state = 5},
  [545] = {.lex_state = 0, .external_lex_state = 5},
  [546] = {.lex_state = 0, .external_lex_state = 5},
  [547] = {.lex_state = 0, .external_lex_state = 4},
  [548] = {.lex_state = 1, .external_lex_state = 4},
  [549] = {.lex_state = 0, .external_lex_state = 4},
  [550] = {.lex_state = 1, .external_lex_state = 4},
  [551] = {.lex_state = 0, .external_lex_state = 5},
  [552] = {.lex_state = 0, .external_lex_state = 5},
  [553] = {.lex_state = 0, .external_lex_state = 5},
  [554] = {.lex_state = 0, .external_lex_state = 5},
  [555] = {.lex_state = 0, .external_lex_state = 6},
  [556] = {.lex_state = 0, .external_lex_state = 4},
  [557] = {.lex_state = 0, .external_lex_state = 5},
  [558] = {.lex_state = 0, .external_lex_state = 5},
  [559] = {.lex_state = 0, .external_lex_state = 5},
  [560] = {.lex_state = 0, .external_lex_state = 5},
  [561] = {.lex_state = 0, .external_lex_state = 5},
  [562] = {.lex_state = 0, .external_lex_state = 5},
  [563] = {.lex_state = 0, .external_lex_state = 5},
  [564] = {.lex_state = 0, .external_lex_state = 5},
  [565] = {.lex_state = 0, .external_lex_state = 4},
  [566] = {.lex_state = 0, .external_lex_state = 5},
  [567] = {.lex_state = 0, .external_lex_state = 4},
  [568] = {.lex_state = 0, .external_lex_state = 6},
  [569] = {.lex_state = 0, .external_lex_state = 4},
  [570] = {.lex_state = 0, .external_lex_state = 6},
  [571] = {.lex_state = 0, .external_lex_state = 4},
  [572] = {.lex_state = 0, .external_lex_state = 4},
  [573] = {.lex_state = 0, .external_lex_state = 4},
  [574] = {.lex_state = 1, .external_lex_state = 4},
  [575] = {.lex_state = 1, .external_lex_state = 4},
  [576] = {.lex_state = 0, .external_lex_state = 4},
  [577] = {.lex_state = 0, .external_lex_state = 6},
  [578] = {.lex_state = 0, .external_lex_state = 6},
  [579] = {.lex_state = 1, .external_lex_state = 4},
  [580] = {.lex_state = 0, .external_lex_state = 4},
  [581] = {.lex_state = 0, .external_lex_state = 4},
  [582] = {.lex_state = 0, .external_lex_state = 4},
  [583] = {.lex_state = 0, .external_lex_state = 4},
  [584] = {.lex_state = 1, .external_lex_state = 4},
  [585] = {.lex_state = 0, .external_lex_state = 4},
  [586] = {.lex_state = 1, .external_lex_state = 4},
  [587] = {.lex_state = 0, .external_lex_state = 4},
  [588] = {.lex_state = 1, .external_lex_state = 4},
  [589] = {.lex_state = 1, .external_lex_state = 4},
  [590] = {.lex_state = 7, .external_lex_state = 4},
  [591] = {.lex_state = 1, .external_lex_state = 4},
  [592] = {.lex_state = 0, .external_lex_state = 6},
  [593] = {.lex_state = 0, .external_lex_state = 4},
  [594] = {.lex_state = 7, .external_lex_state = 4},
  [595] = {.lex_state = 1, .external_lex_state = 4},
  [596] = {.lex_state = 0, .external_lex_state = 4},
  [597] = {.lex_state = 0, .external_lex_state = 4},
  [598] = {.lex_state = 0, .external_lex_state = 4},
  [599] = {.lex_state = 0, .external_lex_state = 4},
  [600] = {.lex_state = 0, .external_lex_state = 4},
  [601] = {.lex_state = 1, .external_lex_state = 4},
  [602] = {.lex_state = 1, .external_lex_state = 4},
  [603] = {.lex_state = 0, .external_lex_state = 4},
  [604] = {.lex_state = 0, .external_lex_state = 4},
  [605] = {.lex_state = 1, .external_lex_state = 4},
  [606] = {.lex_state = 0, .external_lex_state = 4},
  [607] = {.lex_state = 1, .external_lex_state = 4},
  [608] = {.lex_state = 0, .external_lex_state = 4},
  [609] = {.lex_state = 1, .external_lex_state = 4},
  [610] = {.lex_state = 0, .external_lex_state = 6},
  [611] = {.lex_state = 0, .external_lex_state = 4},
  [612] = {.lex_state = 0, .external_lex_state = 4},
  [613] = {.lex_state = 1, .external_lex_state = 4},
  [614] = {.lex_state = 0, .external_lex_state = 4},
  [615] = {.lex_state = 1, .external_lex_state = 4},
  [616] = {.lex_state = 0, .external_lex_state = 6},
  [617] = {.lex_state = 0, .external_lex_state = 4},
  [618] = {.lex_state = 1, .external_lex_state = 4},
  [619] = {.lex_state = 14, .external_lex_state = 4},
  [620] = {.lex_state = 0, .external_lex_state = 4},
  [621] = {.lex_state = 14, .external_lex_state = 4},
  [622] = {.lex_state = 0, .external_lex_state = 4},
  [623] = {.lex_state = 1, .external_lex_state = 4},
  [624] = {.lex_state = 0, .external_lex_state = 4},
  [625] = {.lex_state = 0, .external_lex_state = 4},
  [626] = {.lex_state = 0, .external_lex_state = 4},
  [627] = {.lex_state = 0, .external_lex_state = 6},
  [628] = {.lex_state = 0, .external_lex_state = 6},
  [629] = {.lex_state = 0, .external_lex_state = 6},
  [630] = {.lex_state = 0, .external_lex_state = 4},
  [631] = {.lex_state = 1, .external_lex_state = 4},
  [632] = {.lex_state = 0, .external_lex_state = 4},
  [633] = {.lex_state = 0, .external_lex_state = 4},
  [634] = {.lex_state = 0, .external_lex_state = 4},
  [635] = {.lex_state = 1, .external_lex_state = 4},
  [636] = {.lex_state = 0, .external_lex_state = 4},
  [637] = {.lex_state = 0, .external_lex_state = 4},
  [638] = {.lex_state = 0, .external_lex_state = 4},
  [639] = {.lex_state = 0, .external_lex_state = 4},
  [640] = {.lex_state = 0, .external_lex_state = 4},
  [641] = {.lex_state = 0, .external_lex_state = 4},
  [642] = {.lex_state = 0, .external_lex_state = 4},
  [643] = {.lex_state = 0, .external_lex_state = 4},
  [644] = {.lex_state = 0, .external_lex_state = 4},
  [645] = {.lex_state = 0, .external_lex_state = 4},
  [646] = {.lex_state = 0, .external_lex_state = 4},
  [647] = {.lex_state = 0, .external_lex_state = 4},
  [648] = {.lex_state = 0, .external_lex_state = 4},
  [649] = {.lex_state = 0, .external_lex_state = 4},
  [650] = {.lex_state = 0, .external_lex_state = 4},
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
    [anon_sym_DOT_DOT] = ACTIONS(1),
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
    [anon_sym_DOT] = ACTIONS(1),
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
    [sym_source_file] = STATE(648),
    [sym_attribute] = STATE(360),
    [sym_module] = STATE(614),
    [aux_sym_module_repeat1] = STATE(360),
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
    STATE(290), 1,
      sym_expr_app,
    STATE(472), 1,
      sym_expr_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    STATE(582), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(49), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(430), 8,
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
    STATE(290), 1,
      sym_expr_app,
    STATE(472), 1,
      sym_expr_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    STATE(582), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(49), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(471), 8,
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
    STATE(290), 1,
      sym_expr_app,
    STATE(472), 1,
      sym_expr_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    STATE(582), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(49), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(563), 8,
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
    STATE(464), 1,
      sym_item,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    STATE(557), 1,
      sym__type_ctor,
    STATE(558), 1,
      sym__type_alias,
    STATE(560), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(27), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(473), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(564), 6,
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
    STATE(448), 1,
      sym_item,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    STATE(557), 1,
      sym__type_ctor,
    STATE(558), 1,
      sym__type_alias,
    STATE(560), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(27), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(473), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(564), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [366] = 21,
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
    ACTIONS(59), 1,
      sym__layout_end,
    STATE(421), 1,
      sym_item,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    STATE(557), 1,
      sym__type_ctor,
    STATE(558), 1,
      sym__type_alias,
    STATE(560), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(27), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(473), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(564), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [441] = 21,
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
    ACTIONS(61), 1,
      sym__layout_end,
    STATE(450), 1,
      sym_item,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    STATE(557), 1,
      sym__type_ctor,
    STATE(558), 1,
      sym__type_alias,
    STATE(560), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(27), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(473), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(564), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [516] = 20,
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
    STATE(501), 1,
      sym_item,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    STATE(557), 1,
      sym__type_ctor,
    STATE(558), 1,
      sym__type_alias,
    STATE(560), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(27), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(473), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(564), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [588] = 18,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(579), 6,
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
  [656] = 18,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(584), 6,
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
  [724] = 18,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(615), 6,
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
  [792] = 17,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_fn,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_recur,
    STATE(273), 1,
      sym_expr_infix,
    STATE(317), 1,
      sym_expr_app,
    STATE(525), 1,
      aux_sym_path_repeat1,
    STATE(636), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(313), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(61), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [857] = 17,
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
    STATE(290), 1,
      sym_expr_app,
    STATE(472), 1,
      sym_expr_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    STATE(582), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(509), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(49), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [922] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(611), 6,
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
  [987] = 17,
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
    STATE(290), 1,
      sym_expr_app,
    STATE(472), 1,
      sym_expr_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    STATE(582), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(510), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(49), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1052] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(644), 6,
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
  [1117] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(643), 6,
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
  [1182] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(569), 6,
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
  [1247] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(646), 6,
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
  [1312] = 17,
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
    STATE(290), 1,
      sym_expr_app,
    STATE(472), 1,
      sym_expr_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    STATE(582), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(543), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(49), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1377] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(583), 6,
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
  [1442] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(330), 6,
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
  [1507] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(608), 6,
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
  [1572] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(313), 6,
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
  [1637] = 17,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_recur,
    STATE(243), 1,
      sym_expr_app,
    STATE(273), 1,
      sym_expr_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    STATE(622), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(598), 6,
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
  [1702] = 19,
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
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    STATE(557), 1,
      sym__type_ctor,
    STATE(558), 1,
      sym__type_alias,
    STATE(560), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(151), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(473), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(529), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [1771] = 17,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_fn,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_recur,
    STATE(273), 1,
      sym_expr_infix,
    STATE(317), 1,
      sym_expr_app,
    STATE(525), 1,
      aux_sym_path_repeat1,
    STATE(636), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(330), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(61), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1836] = 17,
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
    STATE(290), 1,
      sym_expr_app,
    STATE(472), 1,
      sym_expr_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    STATE(582), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(536), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(49), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1901] = 17,
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
    STATE(290), 1,
      sym_expr_app,
    STATE(472), 1,
      sym_expr_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    STATE(582), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(493), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(49), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1966] = 17,
    ACTIONS(69), 1,
      anon_sym_do,
    ACTIONS(75), 1,
      anon_sym_case,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_fn,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_recur,
    STATE(273), 1,
      sym_expr_infix,
    STATE(317), 1,
      sym_expr_app,
    STATE(525), 1,
      aux_sym_path_repeat1,
    STATE(636), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(638), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(61), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [2031] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(107), 9,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(105), 16,
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
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
  [2065] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(111), 9,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(109), 16,
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
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
  [2099] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(115), 9,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(113), 16,
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
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
  [2133] = 15,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(123), 1,
      anon_sym_BQUOTE,
    ACTIONS(125), 1,
      sym_operator,
    ACTIONS(127), 1,
      sym_recur,
    STATE(248), 1,
      aux_sym_expr_infix_repeat1,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(121), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(37), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2190] = 15,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      anon_sym_where,
    ACTIONS(137), 1,
      sym_operator,
    STATE(186), 1,
      sym_path,
    STATE(254), 1,
      aux_sym_ty_infix_repeat1,
    STATE(323), 1,
      sym_where_clause,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(133), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(47), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2247] = 11,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_recur,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(139), 3,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(141), 4,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
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
  [2295] = 11,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      sym_recur,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(145), 3,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(147), 4,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(37), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2343] = 13,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      aux_sym_int_literal_token1,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_operator,
    STATE(194), 1,
      sym_path,
    STATE(252), 1,
      aux_sym_ty_infix_repeat1,
    STATE(537), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(159), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(155), 4,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(53), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2395] = 11,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      sym_recur,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(165), 3,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(167), 4,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(37), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2443] = 11,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      aux_sym_int_literal_token1,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym_recur,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(182), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(175), 3,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(177), 4,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
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
  [2491] = 13,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_int_literal_token1,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_operator,
    STATE(210), 1,
      sym_path,
    STATE(282), 1,
      aux_sym_ty_infix_repeat1,
    STATE(547), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(153), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(155), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
    ACTIONS(197), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(65), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2542] = 11,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_path,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(205), 5,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(47), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2589] = 11,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(211), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(213), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(48), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2636] = 11,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      aux_sym_int_literal_token1,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      sym_path,
    STATE(537), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(159), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(205), 5,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(53), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2683] = 11,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(231), 1,
      aux_sym_int_literal_token1,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_path,
    STATE(537), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(234), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(229), 5,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(46), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2730] = 11,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_path,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(242), 5,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(51), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2777] = 11,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(244), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(246), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(52), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2824] = 14,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(248), 1,
      anon_sym_BQUOTE,
    ACTIONS(250), 1,
      sym_operator,
    ACTIONS(252), 1,
      sym_recur,
    STATE(291), 1,
      aux_sym_expr_infix_repeat1,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(117), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(63), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2877] = 14,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_where,
    ACTIONS(258), 1,
      sym_operator,
    STATE(219), 1,
      sym_path,
    STATE(305), 1,
      aux_sym_ty_infix_repeat1,
    STATE(512), 1,
      sym_where_clause,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(131), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(85), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2930] = 11,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      aux_sym_int_literal_token1,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_path,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(269), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(229), 5,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(51), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2977] = 11,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      aux_sym_int_literal_token1,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(284), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(227), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(229), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(52), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3024] = 11,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      aux_sym_int_literal_token1,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      sym_path,
    STATE(537), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(159), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(242), 5,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(46), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3071] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      sym_operator,
    ACTIONS(252), 1,
      sym_recur,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(165), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    STATE(63), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [3117] = 14,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    STATE(219), 1,
      sym_path,
    STATE(271), 1,
      sym_ty_app,
    STATE(344), 1,
      sym_ty_infix,
    STATE(352), 1,
      aux_sym__type_ctor_repeat1,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(482), 2,
      sym__ty,
      sym_ty_where,
    STATE(50), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [3169] = 11,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_int_literal_token1,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym_path,
    STATE(547), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(197), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(203), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(205), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(65), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3215] = 10,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      aux_sym_int_literal_token1,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_path,
    STATE(556), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(303), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(227), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_PIPE,
    STATE(57), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3259] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_operator,
    ACTIONS(252), 1,
      sym_recur,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(145), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    STATE(63), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [3305] = 11,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      aux_sym_int_literal_token1,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym_path,
    STATE(547), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(227), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(318), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(229), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(59), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3351] = 14,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_DASH_GT,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_where,
    ACTIONS(328), 1,
      sym_operator,
    STATE(234), 1,
      sym_path,
    STATE(323), 1,
      sym_where_clause,
    STATE(366), 1,
      aux_sym_ty_infix_repeat1,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(90), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3403] = 14,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(121), 1,
      anon_sym_DASH_GT,
    ACTIONS(330), 1,
      anon_sym_BQUOTE,
    ACTIONS(332), 1,
      sym_operator,
    ACTIONS(334), 1,
      sym_recur,
    STATE(315), 1,
      aux_sym_expr_infix_repeat1,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(74), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [3455] = 13,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      aux_sym_int_literal_token1,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      sym_operator,
    STATE(217), 1,
      sym_path,
    STATE(316), 1,
      aux_sym_ty_infix_repeat1,
    STATE(534), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(153), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(342), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(77), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3505] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      sym_operator,
    ACTIONS(348), 1,
      sym_recur,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(139), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    STATE(66), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [3551] = 14,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    STATE(219), 1,
      sym_path,
    STATE(271), 1,
      sym_ty_app,
    STATE(344), 1,
      sym_ty_infix,
    STATE(355), 1,
      aux_sym__type_ctor_repeat1,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(499), 2,
      sym__ty,
      sym_ty_where,
    STATE(50), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [3603] = 11,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_int_literal_token1,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym_path,
    STATE(547), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(197), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(240), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(242), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(59), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3649] = 11,
    ACTIONS(177), 1,
      sym_operator,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      aux_sym_int_literal_token1,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      sym_recur,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(359), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(175), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    STATE(66), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [3695] = 10,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      aux_sym_int_literal_token1,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_path,
    STATE(556), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(374), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(211), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(80), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3738] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_path,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(203), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(205), 2,
      anon_sym_where,
      sym_operator,
    STATE(85), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3783] = 12,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      aux_sym_int_literal_token1,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      sym_operator,
    STATE(240), 1,
      sym_path,
    STATE(364), 1,
      aux_sym_ty_infix_repeat1,
    STATE(521), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(384), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(101), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3830] = 13,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(618), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [3879] = 13,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(601), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [3928] = 11,
    ACTIONS(396), 1,
      sym_identifier,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      aux_sym_int_literal_token1,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      sym_path,
    STATE(534), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(227), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(405), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(72), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3973] = 11,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      aux_sym_int_literal_token1,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      sym_path,
    STATE(534), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(342), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(77), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4018] = 11,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(411), 1,
      sym_recur,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(139), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(141), 2,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(76), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [4063] = 13,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(591), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [4112] = 11,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      aux_sym_int_literal_token1,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      sym_recur,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(175), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(177), 2,
      anon_sym_DASH_GT,
      sym_operator,
    ACTIONS(424), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(76), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [4157] = 11,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      aux_sym_int_literal_token1,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      sym_path,
    STATE(534), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(240), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(342), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(72), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4202] = 13,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(613), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [4251] = 13,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(574), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [4300] = 10,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      aux_sym_int_literal_token1,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_path,
    STATE(556), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(374), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(244), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(57), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4343] = 13,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(631), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [4392] = 13,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(607), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [4441] = 13,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(588), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [4490] = 11,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      sym_recur,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(165), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(167), 2,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(74), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [4535] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_path,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(240), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(242), 2,
      anon_sym_where,
      sym_operator,
    STATE(87), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4580] = 13,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(595), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [4629] = 11,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      aux_sym_int_literal_token1,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      sym_path,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(227), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(229), 2,
      anon_sym_where,
      sym_operator,
    ACTIONS(454), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(87), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4674] = 11,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      sym_recur,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(145), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(147), 2,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(74), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [4719] = 10,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      aux_sym_int_literal_token1,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      sym_path,
    STATE(521), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(469), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(229), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(89), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4761] = 10,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_path,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(242), 3,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
    STATE(93), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4803] = 10,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_path,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(205), 3,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
    STATE(90), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4845] = 10,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      aux_sym_int_literal_token1,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_path,
    STATE(556), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(374), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(475), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(57), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4887] = 10,
    ACTIONS(477), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      aux_sym_int_literal_token1,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    STATE(234), 1,
      sym_path,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(486), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(229), 3,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
    STATE(93), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4929] = 12,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(219), 1,
      sym_path,
    STATE(271), 1,
      sym_ty_app,
    STATE(344), 1,
      sym_ty_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(562), 2,
      sym__ty,
      sym_ty_where,
    STATE(50), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [4975] = 12,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(219), 1,
      sym_path,
    STATE(271), 1,
      sym_ty_app,
    STATE(344), 1,
      sym_ty_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(503), 2,
      sym__ty,
      sym_ty_where,
    STATE(50), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5021] = 12,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      sym_identifier,
    STATE(234), 1,
      sym_path,
    STATE(331), 1,
      sym_ty_app,
    STATE(375), 1,
      sym_ty_infix,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(306), 2,
      sym__ty,
      sym_ty_where,
    STATE(60), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5067] = 12,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(219), 1,
      sym_path,
    STATE(271), 1,
      sym_ty_app,
    STATE(344), 1,
      sym_ty_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(480), 2,
      sym__ty,
      sym_ty_where,
    STATE(50), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5113] = 12,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(605), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5159] = 10,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      aux_sym_int_literal_token1,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_path,
    STATE(556), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(374), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(494), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(92), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5201] = 10,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      aux_sym_int_literal_token1,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      sym_path,
    STATE(521), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(384), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(205), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(101), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5243] = 10,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      aux_sym_int_literal_token1,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      sym_path,
    STATE(521), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(384), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(242), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(89), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5285] = 12,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(586), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5331] = 12,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    STATE(186), 1,
      sym_path,
    STATE(242), 1,
      sym_ty_app,
    STATE(284), 1,
      sym_ty_infix,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(306), 2,
      sym__ty,
      sym_ty_where,
    STATE(36), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5377] = 12,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(219), 1,
      sym_path,
    STATE(271), 1,
      sym_ty_app,
    STATE(344), 1,
      sym_ty_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(496), 2,
      sym__ty,
      sym_ty_where,
    STATE(50), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5423] = 12,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(219), 1,
      sym_path,
    STATE(271), 1,
      sym_ty_app,
    STATE(344), 1,
      sym_ty_infix,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(566), 2,
      sym__ty,
      sym_ty_where,
    STATE(50), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5469] = 11,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      sym__layout_end,
    STATE(342), 1,
      sym_pat_app,
    STATE(392), 1,
      sym_case_arm,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(519), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(107), 7,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
  [5512] = 10,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      sym_identifier,
    ACTIONS(506), 1,
      sym_operator,
    STATE(345), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(504), 2,
      anon_sym_DASH_GT,
      anon_sym_if,
    STATE(123), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5553] = 11,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      sym__layout_end,
    STATE(342), 1,
      sym_pat_app,
    STATE(427), 1,
      sym_case_arm,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(519), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(107), 7,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
  [5596] = 10,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(575), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(110), 7,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
  [5636] = 10,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(518), 1,
      sym_operator,
    STATE(470), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(126), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5676] = 11,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_int_literal_token1,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym_path,
    STATE(279), 1,
      sym_ty_app,
    STATE(357), 1,
      sym_ty_infix,
    STATE(547), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(197), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(42), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5718] = 5,
    ACTIONS(524), 1,
      anon_sym_EQ,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(522), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(520), 12,
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
  [5748] = 11,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      aux_sym_int_literal_token1,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      sym_path,
    STATE(301), 1,
      sym_ty_infix,
    STATE(338), 1,
      sym_ty_app,
    STATE(521), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(384), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(69), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5790] = 11,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      aux_sym_int_literal_token1,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      sym_path,
    STATE(304), 1,
      sym_ty_app,
    STATE(357), 1,
      sym_ty_infix,
    STATE(534), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(342), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(62), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5832] = 10,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    STATE(342), 1,
      sym_pat_app,
    STATE(497), 1,
      sym_case_arm,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(519), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(107), 7,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
  [5872] = 8,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      aux_sym_int_literal_token1,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(539), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(534), 3,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
    STATE(116), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5908] = 11,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      aux_sym_int_literal_token1,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(545), 1,
      sym_identifier,
    STATE(194), 1,
      sym_path,
    STATE(262), 1,
      sym_ty_app,
    STATE(301), 1,
      sym_ty_infix,
    STATE(537), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(159), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(39), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [5950] = 8,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(547), 3,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
    STATE(123), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5986] = 10,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(635), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(110), 7,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
  [6026] = 10,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(551), 1,
      anon_sym_of,
    STATE(186), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(122), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [6066] = 10,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(589), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(110), 7,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
  [6106] = 10,
    ACTIONS(229), 1,
      anon_sym_of,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(281), 1,
      aux_sym_int_literal_token1,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(284), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(122), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [6146] = 8,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(555), 3,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
    STATE(116), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6182] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(557), 1,
      sym_recur,
    STATE(333), 1,
      sym_expr_app,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(58), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [6221] = 9,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(547), 1,
      sym_operator,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(126), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6258] = 9,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(555), 1,
      sym_operator,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(130), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6295] = 10,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      sym_recur,
    STATE(268), 1,
      sym_expr_app,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
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
  [6334] = 4,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(565), 6,
      anon_sym_as,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
    ACTIONS(567), 9,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [6361] = 4,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(571), 6,
      anon_sym_as,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
    ACTIONS(573), 9,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [6388] = 9,
    ACTIONS(534), 1,
      sym_operator,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(583), 1,
      aux_sym_int_literal_token1,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(586), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(130), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6425] = 10,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(592), 1,
      sym_recur,
    STATE(340), 1,
      sym_expr_app,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(88), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [6464] = 10,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(594), 1,
      sym_recur,
    STATE(346), 1,
      sym_expr_app,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(84), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [6503] = 10,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      sym_identifier,
    STATE(186), 1,
      sym_path,
    STATE(272), 1,
      sym_ty_app,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(43), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [6542] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(567), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(565), 8,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [6569] = 10,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      aux_sym_int_literal_token1,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      sym_path,
    STATE(446), 1,
      sym_ty_app,
    STATE(521), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(384), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(100), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [6608] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(573), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(571), 8,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [6635] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(598), 1,
      sym_recur,
    STATE(328), 1,
      sym_expr_app,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(54), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [6674] = 10,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      sym_identifier,
    STATE(234), 1,
      sym_path,
    STATE(454), 1,
      sym_ty_app,
    STATE(525), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(91), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [6713] = 10,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(600), 1,
      sym_recur,
    STATE(263), 1,
      sym_expr_app,
    STATE(565), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
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
  [6752] = 10,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      aux_sym_int_literal_token1,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      sym_path,
    STATE(359), 1,
      sym_ty_app,
    STATE(534), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(342), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(73), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [6791] = 10,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      aux_sym_int_literal_token1,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(545), 1,
      sym_identifier,
    STATE(194), 1,
      sym_path,
    STATE(286), 1,
      sym_ty_app,
    STATE(537), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(159), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(45), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [6830] = 8,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(608), 1,
      aux_sym_int_literal_token1,
    ACTIONS(614), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(581), 2,
      anon_sym_EQ,
      anon_sym_DASH_GT,
    ACTIONS(611), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(142), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6865] = 10,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      aux_sym_int_literal_token1,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(210), 1,
      sym_path,
    STATE(310), 1,
      sym_ty_app,
    STATE(547), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(197), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(56), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [6904] = 10,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(219), 1,
      sym_path,
    STATE(349), 1,
      sym_ty_app,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(68), 7,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
  [6943] = 9,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(619), 1,
      anon_sym_EQ,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(155), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6980] = 9,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(186), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(120), 8,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [7017] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(629), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(627), 12,
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
  [7041] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(111), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(109), 8,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [7065] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(107), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(105), 8,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [7089] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(115), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(113), 8,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [7113] = 4,
    ACTIONS(633), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(151), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(631), 12,
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
  [7139] = 8,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(636), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(142), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [7173] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(571), 6,
      anon_sym_as,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(573), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7199] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(565), 6,
      anon_sym_as,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(567), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7225] = 8,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(638), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(142), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [7259] = 8,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(142), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [7293] = 8,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(642), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(142), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [7327] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(646), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(644), 12,
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
  [7351] = 8,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    STATE(540), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(125), 7,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
  [7384] = 7,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(157), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [7415] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(648), 7,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(650), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7438] = 8,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    STATE(402), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(118), 7,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
  [7471] = 7,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(156), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [7502] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(652), 7,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(654), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7525] = 7,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(152), 8,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [7556] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(565), 6,
      anon_sym_DASH_GT,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(567), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7580] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(109), 5,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(111), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7602] = 4,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(571), 3,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_identifier,
    ACTIONS(573), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7626] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(113), 5,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(115), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7648] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(567), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(565), 7,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [7672] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(115), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(113), 7,
      anon_sym_DASH_GT,
      anon_sym_where,
      anon_sym_if,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [7694] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(107), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(105), 7,
      anon_sym_DASH_GT,
      anon_sym_where,
      anon_sym_if,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [7716] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(105), 5,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(107), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7738] = 3,
    ACTIONS(658), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(656), 12,
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
  [7760] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(111), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(109), 7,
      anon_sym_DASH_GT,
      anon_sym_where,
      anon_sym_if,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [7782] = 7,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(600), 7,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym__pat_ident,
  [7812] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(571), 6,
      anon_sym_DASH_GT,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(573), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7836] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(573), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(571), 7,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [7860] = 5,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(660), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(565), 5,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
    ACTIONS(567), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7886] = 4,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(565), 3,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_identifier,
    ACTIONS(567), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7910] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(664), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(662), 7,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [7931] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(652), 4,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(654), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [7952] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(571), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(573), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [7975] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(115), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(113), 7,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [7996] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(107), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(105), 7,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [8017] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(668), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(666), 7,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [8038] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(664), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(662), 7,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [8059] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(672), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(670), 7,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [8080] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(672), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(670), 7,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [8101] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(666), 3,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_identifier,
    ACTIONS(668), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [8122] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(565), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(567), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8145] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(670), 5,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
    ACTIONS(672), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [8166] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(662), 5,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
    ACTIONS(664), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [8187] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(668), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(666), 7,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [8208] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(666), 5,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
    ACTIONS(668), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [8229] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(111), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(109), 7,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [8250] = 5,
    ACTIONS(565), 1,
      aux_sym_int_literal_token1,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(674), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(567), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8275] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(648), 4,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(650), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [8296] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(670), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(672), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8316] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(565), 3,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(567), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8338] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(109), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(111), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8358] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(105), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(107), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8378] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(115), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8398] = 3,
    ACTIONS(662), 1,
      aux_sym_int_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(664), 10,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8418] = 3,
    ACTIONS(670), 1,
      aux_sym_int_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(672), 10,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8438] = 5,
    ACTIONS(565), 1,
      aux_sym_int_literal_token1,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(676), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(567), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8462] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(648), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(650), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [8482] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(662), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(664), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8502] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(652), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(654), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [8522] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(666), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(668), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8542] = 3,
    ACTIONS(109), 1,
      aux_sym_int_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(111), 10,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8562] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(571), 3,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(573), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8584] = 3,
    ACTIONS(105), 1,
      aux_sym_int_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(107), 10,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8604] = 3,
    ACTIONS(113), 1,
      aux_sym_int_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(115), 10,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8624] = 9,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(680), 1,
      anon_sym_EQ,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    ACTIONS(684), 1,
      anon_sym_PIPE,
    ACTIONS(686), 1,
      anon_sym_where,
    STATE(469), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(688), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(231), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [8655] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(662), 3,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(664), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8674] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(666), 3,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(668), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8693] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(662), 4,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
    ACTIONS(664), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [8712] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(666), 4,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
    ACTIONS(668), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [8731] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(670), 3,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(672), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8750] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(571), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(573), 5,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8771] = 9,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(682), 1,
      anon_sym_LPAREN,
    ACTIONS(686), 1,
      anon_sym_where,
    ACTIONS(690), 1,
      anon_sym_EQ,
    ACTIONS(692), 1,
      anon_sym_PIPE,
    STATE(368), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(694), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(215), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [8802] = 5,
    ACTIONS(565), 1,
      aux_sym_int_literal_token1,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(696), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(567), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8825] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(670), 4,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
    ACTIONS(672), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [8844] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(109), 3,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(111), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8863] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(565), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(567), 5,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8884] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(105), 3,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(107), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8903] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(113), 3,
      anon_sym_COMMA,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(115), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8922] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(672), 4,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(670), 5,
      anon_sym_DASH_GT,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [8940] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(105), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(107), 5,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [8958] = 6,
    ACTIONS(698), 1,
      sym_identifier,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(706), 1,
      anon_sym_where,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(231), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
    ACTIONS(701), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_PIPE,
  [8982] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(670), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(672), 5,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [9000] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(710), 4,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(708), 5,
      anon_sym_DASH_GT,
      anon_sym_if,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [9018] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(668), 4,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(666), 5,
      anon_sym_DASH_GT,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [9036] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(664), 4,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(662), 5,
      anon_sym_DASH_GT,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [9054] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(109), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(111), 5,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [9072] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(714), 4,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(712), 5,
      anon_sym_DASH_GT,
      anon_sym_if,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [9090] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(662), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(664), 5,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [9108] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(718), 4,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(716), 5,
      anon_sym_DASH_GT,
      anon_sym_if,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
  [9126] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(666), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(668), 5,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [9144] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(113), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(115), 5,
      anon_sym_LPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [9162] = 6,
    ACTIONS(720), 1,
      anon_sym_where,
    ACTIONS(722), 1,
      sym_operator,
    STATE(254), 1,
      aux_sym_ty_infix_repeat1,
    STATE(323), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(131), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9185] = 6,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(123), 1,
      anon_sym_BQUOTE,
    ACTIONS(724), 1,
      sym_operator,
    STATE(248), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(117), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9208] = 5,
    ACTIONS(726), 1,
      anon_sym_BQUOTE,
    ACTIONS(729), 1,
      sym_operator,
    STATE(244), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(145), 5,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9229] = 3,
    ACTIONS(708), 1,
      aux_sym_int_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(710), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [9246] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(708), 2,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(710), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [9263] = 3,
    ACTIONS(716), 1,
      aux_sym_int_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(718), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [9280] = 5,
    ACTIONS(123), 1,
      anon_sym_BQUOTE,
    ACTIONS(724), 1,
      sym_operator,
    STATE(244), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(732), 5,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9301] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(712), 2,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(714), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [9318] = 3,
    ACTIONS(712), 1,
      aux_sym_int_literal_token1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(714), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [9335] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(716), 2,
      aux_sym_int_literal_token1,
      sym_operator,
    ACTIONS(718), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_identifier,
  [9352] = 5,
    ACTIONS(163), 1,
      sym_operator,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(734), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9372] = 5,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(147), 3,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
  [9392] = 4,
    ACTIONS(722), 1,
      sym_operator,
    STATE(260), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(734), 5,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
  [9410] = 5,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      sym_operator,
    STATE(255), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9430] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(741), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(743), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [9446] = 7,
    ACTIONS(745), 1,
      anon_sym_EQ,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_where,
    STATE(264), 1,
      aux_sym_class_repeat1,
    STATE(451), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(751), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9470] = 5,
    ACTIONS(753), 1,
      sym_identifier,
    ACTIONS(758), 1,
      anon_sym_where,
    STATE(258), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(756), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [9490] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(760), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(762), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [9506] = 4,
    ACTIONS(764), 1,
      sym_operator,
    STATE(260), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 5,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
  [9524] = 5,
    ACTIONS(767), 1,
      sym_identifier,
    ACTIONS(771), 1,
      anon_sym_where,
    STATE(258), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(769), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [9544] = 5,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      sym_operator,
    STATE(252), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(153), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9564] = 2,
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
  [9578] = 7,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_where,
    ACTIONS(773), 1,
      anon_sym_EQ,
    STATE(278), 1,
      aux_sym_class_repeat1,
    STATE(426), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(775), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9602] = 5,
    ACTIONS(767), 1,
      sym_identifier,
    ACTIONS(779), 1,
      anon_sym_where,
    STATE(258), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(777), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [9622] = 7,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_where,
    ACTIONS(781), 1,
      anon_sym_EQ,
    STATE(278), 1,
      aux_sym_class_repeat1,
    STATE(408), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(783), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9646] = 7,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_where,
    ACTIONS(773), 1,
      anon_sym_EQ,
    STATE(266), 1,
      aux_sym_class_repeat1,
    STATE(426), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(775), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9670] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(165), 7,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_of,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [9684] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(785), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9697] = 4,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(785), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9714] = 6,
    ACTIONS(790), 1,
      anon_sym_where,
    ACTIONS(792), 1,
      sym_operator,
    STATE(305), 1,
      aux_sym_ty_infix_repeat1,
    STATE(512), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(131), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9735] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 6,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [9748] = 3,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(117), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9763] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_foreign,
    ACTIONS(796), 1,
      sym__layout_end,
    STATE(411), 1,
      sym_func,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9786] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_foreign,
    ACTIONS(798), 1,
      sym__layout_end,
    STATE(453), 1,
      sym_func,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9809] = 6,
    ACTIONS(800), 1,
      sym_identifier,
    STATE(67), 1,
      sym__ty_path,
    STATE(190), 1,
      sym_path,
    STATE(556), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(358), 2,
      sym_where_member,
      sym_where_kind,
  [9830] = 6,
    ACTIONS(802), 1,
      sym_identifier,
    STATE(44), 1,
      sym__ty_path,
    STATE(195), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(371), 2,
      sym_where_member,
      sym_where_kind,
  [9851] = 4,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(804), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_where,
  [9868] = 5,
    ACTIONS(201), 1,
      sym_operator,
    STATE(282), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(153), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(155), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [9887] = 6,
    ACTIONS(802), 1,
      sym_identifier,
    STATE(44), 1,
      sym__ty_path,
    STATE(195), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(269), 2,
      sym_where_member,
      sym_where_kind,
  [9908] = 7,
    ACTIONS(809), 1,
      sym_identifier,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(815), 1,
      anon_sym_module,
    STATE(395), 1,
      sym_export,
    STATE(526), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9931] = 5,
    ACTIONS(201), 1,
      sym_operator,
    STATE(296), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(734), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(736), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [9950] = 4,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(817), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9967] = 4,
    ACTIONS(720), 1,
      anon_sym_where,
    STATE(323), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(131), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [9984] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_foreign,
    ACTIONS(821), 1,
      sym__layout_end,
    STATE(406), 1,
      sym_func,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10007] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(203), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10022] = 6,
    ACTIONS(800), 1,
      sym_identifier,
    STATE(67), 1,
      sym__ty_path,
    STATE(190), 1,
      sym_path,
    STATE(556), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(341), 2,
      sym_where_member,
      sym_where_kind,
  [10043] = 6,
    ACTIONS(823), 1,
      sym_identifier,
    STATE(67), 1,
      sym__ty_path,
    STATE(190), 1,
      sym_path,
    STATE(556), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(326), 2,
      sym_where_member,
      sym_where_kind,
  [10064] = 6,
    ACTIONS(825), 1,
      sym_identifier,
    STATE(44), 1,
      sym__ty_path,
    STATE(195), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(283), 2,
      sym_where_member,
      sym_where_kind,
  [10085] = 6,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(248), 1,
      anon_sym_BQUOTE,
    ACTIONS(827), 1,
      sym_operator,
    STATE(291), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(117), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10106] = 5,
    ACTIONS(248), 1,
      anon_sym_BQUOTE,
    ACTIONS(827), 1,
      sym_operator,
    STATE(295), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(732), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
  [10125] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_foreign,
    ACTIONS(829), 1,
      sym__layout_end,
    STATE(373), 1,
      sym_func,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10148] = 6,
    ACTIONS(825), 1,
      sym_identifier,
    STATE(44), 1,
      sym__ty_path,
    STATE(195), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(269), 2,
      sym_where_member,
      sym_where_kind,
  [10169] = 6,
    ACTIONS(823), 1,
      sym_identifier,
    STATE(67), 1,
      sym__ty_path,
    STATE(190), 1,
      sym_path,
    STATE(556), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(341), 2,
      sym_where_member,
      sym_where_kind,
  [10190] = 5,
    ACTIONS(831), 1,
      anon_sym_BQUOTE,
    ACTIONS(834), 1,
      sym_operator,
    STATE(295), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(145), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
  [10209] = 5,
    ACTIONS(837), 1,
      sym_operator,
    STATE(296), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(205), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [10228] = 4,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(840), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10245] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_foreign,
    ACTIONS(842), 1,
      sym__layout_end,
    STATE(389), 1,
      sym_func,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10268] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_foreign,
    ACTIONS(844), 1,
      sym__layout_end,
    STATE(367), 1,
      sym_func,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10291] = 6,
    ACTIONS(846), 1,
      sym_identifier,
    ACTIONS(848), 1,
      anon_sym_EQ,
    ACTIONS(850), 1,
      anon_sym_LPAREN,
    ACTIONS(852), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(335), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [10312] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(153), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10325] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_foreign,
    ACTIONS(854), 1,
      sym__layout_end,
    STATE(425), 1,
      sym_func,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10348] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_foreign,
    ACTIONS(856), 1,
      sym__layout_end,
    STATE(398), 1,
      sym_func,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10371] = 5,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      sym_operator,
    STATE(316), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(153), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10389] = 4,
    ACTIONS(792), 1,
      sym_operator,
    STATE(321), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(734), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
  [10405] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(858), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10417] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(860), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10429] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(804), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_where,
  [10441] = 4,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(840), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [10457] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(205), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
  [10471] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(864), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10483] = 5,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      sym_operator,
    STATE(312), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10501] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(869), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10513] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(871), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10525] = 6,
    ACTIONS(330), 1,
      anon_sym_BQUOTE,
    ACTIONS(332), 1,
      sym_operator,
    ACTIONS(732), 1,
      anon_sym_COLON_COLON,
    ACTIONS(873), 1,
      anon_sym_DASH_GT,
    STATE(329), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10545] = 5,
    ACTIONS(346), 1,
      sym_operator,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(734), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10563] = 6,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(121), 1,
      anon_sym_DASH_GT,
    ACTIONS(330), 1,
      anon_sym_BQUOTE,
    ACTIONS(332), 1,
      sym_operator,
    STATE(315), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10583] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(875), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10595] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_foreign,
    STATE(552), 1,
      sym_func,
    STATE(553), 1,
      sym__func_body,
    STATE(554), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10615] = 5,
    ACTIONS(701), 1,
      anon_sym_EQ,
    ACTIONS(877), 1,
      sym_identifier,
    ACTIONS(880), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(320), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [10633] = 4,
    ACTIONS(883), 1,
      sym_operator,
    STATE(321), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
  [10649] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(886), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10661] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(888), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10673] = 6,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(890), 1,
      sym_identifier,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      sym_import_item,
    STATE(490), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10693] = 4,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(785), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [10709] = 4,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(817), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [10725] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(897), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10737] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(165), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
  [10749] = 6,
    ACTIONS(145), 1,
      anon_sym_COLON_COLON,
    ACTIONS(147), 1,
      anon_sym_DASH_GT,
    ACTIONS(899), 1,
      anon_sym_BQUOTE,
    ACTIONS(902), 1,
      sym_operator,
    STATE(329), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10769] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(905), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10781] = 6,
    ACTIONS(133), 1,
      anon_sym_DASH_GT,
    ACTIONS(328), 1,
      sym_operator,
    ACTIONS(907), 1,
      anon_sym_where,
    STATE(323), 1,
      sym_where_clause,
    STATE(366), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10801] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(909), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [10813] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(145), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
  [10825] = 5,
    ACTIONS(749), 1,
      anon_sym_where,
    ACTIONS(911), 1,
      anon_sym_EQ,
    STATE(447), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(913), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10843] = 5,
    ACTIONS(846), 1,
      sym_identifier,
    ACTIONS(850), 1,
      anon_sym_LPAREN,
    ACTIONS(915), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(320), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [10861] = 6,
    ACTIONS(809), 1,
      sym_identifier,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_module,
    STATE(524), 1,
      sym_export,
    STATE(526), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10881] = 5,
    ACTIONS(811), 1,
      anon_sym_LPAREN,
    ACTIONS(890), 1,
      sym_identifier,
    STATE(490), 1,
      sym_symbol,
    STATE(548), 1,
      sym_import_item,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10898] = 4,
    ACTIONS(388), 1,
      sym_operator,
    STATE(364), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [10913] = 5,
    ACTIONS(203), 1,
      anon_sym_where,
    ACTIONS(205), 1,
      anon_sym_DASH_GT,
    ACTIONS(917), 1,
      sym_operator,
    STATE(339), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10930] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(145), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(147), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [10943] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(785), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [10954] = 5,
    ACTIONS(504), 1,
      anon_sym_DASH_GT,
    ACTIONS(506), 1,
      sym_operator,
    ACTIONS(516), 1,
      anon_sym_if,
    STATE(345), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10971] = 4,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    STATE(550), 1,
      sym_export_group,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(922), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10986] = 4,
    ACTIONS(790), 1,
      anon_sym_where,
    STATE(512), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(131), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11001] = 5,
    ACTIONS(506), 1,
      sym_operator,
    ACTIONS(924), 1,
      anon_sym_DASH_GT,
    ACTIONS(926), 1,
      anon_sym_if,
    STATE(361), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11018] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(165), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(167), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [11031] = 4,
    ACTIONS(928), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(932), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11046] = 4,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(840), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11061] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
      sym_operator,
  [11072] = 4,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(785), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11087] = 5,
    ACTIONS(939), 1,
      sym_identifier,
    ACTIONS(941), 1,
      anon_sym_DASH_GT,
    STATE(257), 1,
      sym_fundep,
    STATE(468), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11104] = 4,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    STATE(354), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(943), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11119] = 4,
    ACTIONS(215), 1,
      aux_sym_int_literal_token1,
    STATE(442), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
  [11134] = 4,
    ACTIONS(945), 1,
      anon_sym_PIPE,
    STATE(354), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(948), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11149] = 4,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    STATE(354), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(950), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11164] = 5,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(190), 1,
      sym_path,
    STATE(334), 1,
      sym__ty_path,
    STATE(556), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11181] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(153), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [11192] = 4,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(817), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11207] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(203), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      sym_operator,
  [11220] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(952), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(151), 2,
      sym_attribute,
      aux_sym_module_repeat1,
  [11235] = 5,
    ACTIONS(547), 1,
      anon_sym_DASH_GT,
    ACTIONS(559), 1,
      anon_sym_if,
    ACTIONS(954), 1,
      sym_operator,
    STATE(361), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11252] = 5,
    ACTIONS(939), 1,
      sym_identifier,
    ACTIONS(941), 1,
      anon_sym_DASH_GT,
    STATE(308), 1,
      sym_fundep,
    STATE(468), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11269] = 4,
    ACTIONS(957), 1,
      sym_operator,
    STATE(363), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [11284] = 4,
    ACTIONS(388), 1,
      sym_operator,
    STATE(363), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(736), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [11299] = 5,
    ACTIONS(939), 1,
      sym_identifier,
    ACTIONS(941), 1,
      anon_sym_DASH_GT,
    STATE(267), 1,
      sym_fundep,
    STATE(468), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11316] = 5,
    ACTIONS(328), 1,
      sym_operator,
    ACTIONS(734), 1,
      anon_sym_where,
    ACTIONS(736), 1,
      anon_sym_DASH_GT,
    STATE(339), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11333] = 4,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    ACTIONS(962), 1,
      sym__layout_end,
    STATE(387), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11347] = 3,
    ACTIONS(680), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(688), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11359] = 4,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(374), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11373] = 4,
    ACTIONS(964), 1,
      sym__layout_semicolon,
    ACTIONS(966), 1,
      sym__layout_end,
    STATE(379), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11387] = 4,
    ACTIONS(817), 1,
      anon_sym_DASH_GT,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11401] = 4,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    ACTIONS(970), 1,
      sym__layout_end,
    STATE(412), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11415] = 4,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    ACTIONS(970), 1,
      sym__layout_end,
    STATE(381), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11429] = 4,
    ACTIONS(972), 1,
      anon_sym_EQ,
    ACTIONS(974), 1,
      anon_sym_LPAREN,
    STATE(630), 1,
      sym_exports,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11443] = 4,
    ACTIONS(131), 1,
      anon_sym_DASH_GT,
    ACTIONS(907), 1,
      anon_sym_where,
    STATE(323), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11457] = 4,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(383), 1,
      sym_path,
    STATE(494), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11471] = 4,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(494), 1,
      aux_sym_path_repeat1,
    STATE(581), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11485] = 4,
    ACTIONS(976), 1,
      sym_identifier,
    STATE(388), 1,
      sym__attr_body,
    STATE(623), 1,
      sym__attr_value,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11499] = 4,
    ACTIONS(978), 1,
      sym__layout_semicolon,
    ACTIONS(981), 1,
      sym__layout_end,
    STATE(379), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11513] = 4,
    ACTIONS(785), 1,
      anon_sym_DASH_GT,
    ACTIONS(983), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11527] = 4,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    ACTIONS(986), 1,
      sym__layout_end,
    STATE(412), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11541] = 4,
    ACTIONS(840), 1,
      anon_sym_DASH_GT,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11555] = 4,
    ACTIONS(974), 1,
      anon_sym_LPAREN,
    ACTIONS(988), 1,
      anon_sym_EQ,
    STATE(596), 1,
      sym_exports,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11569] = 4,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(494), 1,
      aux_sym_path_repeat1,
    STATE(571), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11583] = 4,
    ACTIONS(990), 1,
      aux_sym_string_literal_token1,
    ACTIONS(992), 1,
      anon_sym_DQUOTE2,
    STATE(405), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11597] = 4,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    ACTIONS(962), 1,
      sym__layout_end,
    STATE(412), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11611] = 4,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    ACTIONS(996), 1,
      sym__layout_end,
    STATE(412), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11625] = 4,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
    STATE(413), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11639] = 4,
    ACTIONS(829), 1,
      sym__layout_end,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    STATE(372), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11653] = 4,
    ACTIONS(829), 1,
      sym__layout_end,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    STATE(412), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11667] = 4,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(494), 1,
      aux_sym_path_repeat1,
    STATE(550), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11681] = 4,
    ACTIONS(964), 1,
      sym__layout_semicolon,
    ACTIONS(1002), 1,
      sym__layout_end,
    STATE(370), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11695] = 4,
    ACTIONS(1004), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1006), 1,
      anon_sym_DQUOTE2,
    STATE(438), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11709] = 4,
    ACTIONS(1008), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE2,
    STATE(393), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11723] = 4,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_exports_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11737] = 4,
    ACTIONS(1004), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1016), 1,
      anon_sym_DQUOTE2,
    STATE(438), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11751] = 4,
    ACTIONS(1018), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1020), 1,
      anon_sym_DQUOTE2,
    STATE(396), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11765] = 4,
    ACTIONS(842), 1,
      sym__layout_end,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    STATE(390), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11779] = 4,
    ACTIONS(842), 1,
      sym__layout_end,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    STATE(412), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11793] = 4,
    ACTIONS(1004), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1022), 1,
      anon_sym_DQUOTE2,
    STATE(438), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11807] = 4,
    ACTIONS(1024), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1026), 1,
      anon_sym_DQUOTE2,
    STATE(400), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11821] = 3,
    ACTIONS(559), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(547), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [11833] = 4,
    ACTIONS(1004), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1028), 1,
      anon_sym_DQUOTE2,
    STATE(438), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11847] = 4,
    ACTIONS(1030), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE2,
    STATE(403), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11861] = 4,
    ACTIONS(1004), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1034), 1,
      anon_sym_DQUOTE2,
    STATE(438), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11875] = 4,
    ACTIONS(844), 1,
      sym__layout_end,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    STATE(386), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11889] = 4,
    ACTIONS(1004), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1036), 1,
      anon_sym_DQUOTE2,
    STATE(438), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11903] = 3,
    ACTIONS(1038), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1040), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11915] = 4,
    ACTIONS(856), 1,
      sym__layout_end,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    STATE(412), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11929] = 4,
    ACTIONS(1042), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1044), 1,
      anon_sym_DQUOTE2,
    STATE(407), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11943] = 4,
    ACTIONS(856), 1,
      sym__layout_end,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    STATE(399), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11957] = 4,
    ACTIONS(1046), 1,
      sym__layout_semicolon,
    ACTIONS(1049), 1,
      sym__layout_end,
    STATE(412), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11971] = 4,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(440), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11985] = 4,
    ACTIONS(1004), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1053), 1,
      anon_sym_DQUOTE2,
    STATE(438), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [11999] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(762), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [12009] = 4,
    ACTIONS(1055), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1057), 1,
      anon_sym_DQUOTE2,
    STATE(414), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [12023] = 4,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(347), 1,
      sym_path,
    STATE(542), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12037] = 4,
    ACTIONS(1059), 1,
      sym__layout_semicolon,
    ACTIONS(1062), 1,
      sym__layout_end,
    STATE(418), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12051] = 4,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(494), 1,
      aux_sym_path_repeat1,
    STATE(599), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12065] = 4,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(494), 1,
      aux_sym_path_repeat1,
    STATE(603), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12079] = 4,
    ACTIONS(57), 1,
      sym__layout_end,
    ACTIONS(1064), 1,
      sym__layout_semicolon,
    STATE(443), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12093] = 4,
    ACTIONS(1004), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1066), 1,
      anon_sym_DQUOTE2,
    STATE(438), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [12107] = 4,
    ACTIONS(1068), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1070), 1,
      anon_sym_DQUOTE2,
    STATE(422), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [12121] = 4,
    ACTIONS(964), 1,
      sym__layout_semicolon,
    ACTIONS(1072), 1,
      sym__layout_end,
    STATE(379), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12135] = 4,
    ACTIONS(796), 1,
      sym__layout_end,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    STATE(409), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12149] = 3,
    ACTIONS(781), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(783), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12161] = 4,
    ACTIONS(964), 1,
      sym__layout_semicolon,
    ACTIONS(1074), 1,
      sym__layout_end,
    STATE(424), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12175] = 4,
    ACTIONS(796), 1,
      sym__layout_end,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    STATE(412), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12189] = 4,
    ACTIONS(1076), 1,
      sym__layout_semicolon,
    ACTIONS(1078), 1,
      sym__layout_end,
    STATE(418), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12203] = 4,
    ACTIONS(1076), 1,
      sym__layout_semicolon,
    ACTIONS(1080), 1,
      sym__layout_end,
    STATE(429), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12217] = 4,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    STATE(431), 1,
      aux_sym_import_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12231] = 3,
    ACTIONS(1087), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1089), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12243] = 4,
    ACTIONS(1091), 1,
      sym_identifier,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    ACTIONS(1095), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12257] = 4,
    ACTIONS(1014), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      aux_sym_exports_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12271] = 4,
    ACTIONS(1004), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1099), 1,
      anon_sym_DQUOTE2,
    STATE(438), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [12285] = 4,
    ACTIONS(1101), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1103), 1,
      anon_sym_DQUOTE2,
    STATE(435), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [12299] = 4,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(1105), 1,
      sym_operator,
    STATE(437), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12313] = 4,
    ACTIONS(1108), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1111), 1,
      anon_sym_DQUOTE2,
    STATE(438), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(994), 2,
      sym_comment,
      aux_sym__token1,
  [12327] = 4,
    ACTIONS(1076), 1,
      sym__layout_semicolon,
    ACTIONS(1113), 1,
      sym__layout_end,
    STATE(418), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12341] = 4,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12355] = 4,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(494), 1,
      aux_sym_path_repeat1,
    STATE(572), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12369] = 4,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(494), 1,
      aux_sym_path_repeat1,
    STATE(624), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12383] = 4,
    ACTIONS(1064), 1,
      sym__layout_semicolon,
    ACTIONS(1120), 1,
      sym__layout_end,
    STATE(456), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12397] = 4,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
    STATE(458), 1,
      aux_sym_export_group_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12411] = 4,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      aux_sym_exports_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12425] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(205), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [12435] = 3,
    ACTIONS(1131), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1133), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12447] = 4,
    ACTIONS(1064), 1,
      sym__layout_semicolon,
    ACTIONS(1120), 1,
      sym__layout_end,
    STATE(459), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12461] = 4,
    ACTIONS(756), 1,
      anon_sym_DASH_GT,
    ACTIONS(1135), 1,
      sym_identifier,
    STATE(449), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12475] = 4,
    ACTIONS(55), 1,
      sym__layout_end,
    ACTIONS(1064), 1,
      sym__layout_semicolon,
    STATE(462), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12489] = 3,
    ACTIONS(773), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(775), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12501] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(743), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [12511] = 4,
    ACTIONS(854), 1,
      sym__layout_end,
    ACTIONS(960), 1,
      sym__layout_semicolon,
    STATE(428), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12525] = 3,
    ACTIONS(203), 1,
      anon_sym_where,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(205), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [12537] = 4,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(1138), 1,
      sym_operator,
    STATE(470), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12551] = 4,
    ACTIONS(1140), 1,
      sym__layout_semicolon,
    ACTIONS(1143), 1,
      sym__layout_end,
    STATE(456), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12565] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(948), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
  [12575] = 4,
    ACTIONS(1124), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      aux_sym_export_group_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12589] = 4,
    ACTIONS(1064), 1,
      sym__layout_semicolon,
    ACTIONS(1147), 1,
      sym__layout_end,
    STATE(456), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12603] = 4,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    STATE(431), 1,
      aux_sym_import_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12617] = 3,
    ACTIONS(1153), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1155), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12629] = 4,
    ACTIONS(1064), 1,
      sym__layout_semicolon,
    ACTIONS(1157), 1,
      sym__layout_end,
    STATE(456), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12643] = 4,
    ACTIONS(1064), 1,
      sym__layout_semicolon,
    ACTIONS(1159), 1,
      sym__layout_end,
    STATE(456), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12657] = 4,
    ACTIONS(1064), 1,
      sym__layout_semicolon,
    ACTIONS(1157), 1,
      sym__layout_end,
    STATE(463), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12671] = 3,
    ACTIONS(1161), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1163), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12683] = 4,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
    STATE(466), 1,
      aux_sym_export_group_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12697] = 4,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      aux_sym_import_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12711] = 4,
    ACTIONS(1172), 1,
      sym_identifier,
    ACTIONS(1174), 1,
      anon_sym_DASH_GT,
    STATE(449), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12725] = 3,
    ACTIONS(745), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(751), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12737] = 4,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    ACTIONS(1138), 1,
      sym_operator,
    STATE(437), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12751] = 4,
    ACTIONS(1076), 1,
      sym__layout_semicolon,
    ACTIONS(1176), 1,
      sym__layout_end,
    STATE(439), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12765] = 3,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(117), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12777] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1178), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12786] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(909), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12795] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(886), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12804] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1180), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12813] = 3,
    ACTIONS(976), 1,
      sym_identifier,
    STATE(174), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12824] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1165), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12833] = 3,
    ACTIONS(1182), 1,
      sym_identifier,
    STATE(261), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12844] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1184), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12853] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(864), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12862] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1186), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12871] = 3,
    ACTIONS(1188), 1,
      sym_identifier,
    STATE(457), 1,
      sym_ctor,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12882] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(783), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12891] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1190), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12900] = 3,
    ACTIONS(1192), 1,
      anon_sym_LPAREN,
    STATE(495), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12911] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1194), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12920] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1163), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12929] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1196), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12938] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1198), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [12947] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1200), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12956] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1202), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12965] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1204), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12974] = 3,
    ACTIONS(1206), 1,
      sym_identifier,
    STATE(508), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12985] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1208), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [12994] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1210), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13003] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(981), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13012] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1212), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13021] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1214), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13030] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(860), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13039] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1143), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13048] = 3,
    ACTIONS(1216), 1,
      sym__layout_start,
    STATE(476), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13059] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1218), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13068] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(775), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13077] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1220), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13086] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1222), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13095] = 3,
    ACTIONS(1224), 1,
      ts_builtin_sym_end,
    ACTIONS(1226), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13106] = 3,
    ACTIONS(1228), 1,
      sym_identifier,
    STATE(508), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13117] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(869), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13126] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1231), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13135] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1233), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13144] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(888), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13153] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1235), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13162] = 3,
    ACTIONS(1192), 1,
      anon_sym_LPAREN,
    STATE(485), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13173] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1237), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13182] = 3,
    ACTIONS(1192), 1,
      anon_sym_LPAREN,
    STATE(487), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13193] = 3,
    ACTIONS(1216), 1,
      sym__layout_start,
    STATE(522), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13204] = 3,
    ACTIONS(1239), 1,
      sym_identifier,
    STATE(265), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13215] = 3,
    ACTIONS(1241), 1,
      anon_sym_DASH_GT,
    ACTIONS(1243), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13226] = 3,
    ACTIONS(1245), 1,
      sym_identifier,
    ACTIONS(1247), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13237] = 3,
    ACTIONS(1249), 1,
      sym_identifier,
    STATE(508), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13248] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(875), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13257] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1251), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13266] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1126), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13275] = 3,
    ACTIONS(1253), 1,
      sym_identifier,
    STATE(508), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13286] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(922), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13295] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1255), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13304] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1233), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13313] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1257), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13322] = 3,
    ACTIONS(1259), 1,
      ts_builtin_sym_end,
    ACTIONS(1261), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13333] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1263), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13342] = 3,
    ACTIONS(1216), 1,
      sym__layout_start,
    STATE(546), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13353] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1265), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13362] = 3,
    ACTIONS(1267), 1,
      sym_identifier,
    STATE(508), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13373] = 3,
    ACTIONS(1269), 1,
      ts_builtin_sym_end,
    ACTIONS(1271), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13384] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1273), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13393] = 3,
    ACTIONS(1275), 1,
      sym_identifier,
    STATE(508), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13404] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(871), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13413] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1115), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13422] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(559), 2,
      anon_sym_RPAREN,
      sym_operator,
  [13431] = 3,
    ACTIONS(1277), 1,
      ts_builtin_sym_end,
    ACTIONS(1279), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13442] = 3,
    ACTIONS(1281), 1,
      sym_identifier,
    STATE(508), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13453] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(905), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13462] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1089), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13471] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1283), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13480] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1285), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13489] = 3,
    ACTIONS(1287), 1,
      sym_identifier,
    STATE(508), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13500] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1082), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13509] = 3,
    ACTIONS(976), 1,
      sym_identifier,
    STATE(539), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13520] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1289), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13529] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1040), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13538] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1049), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13547] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1291), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13556] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1291), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13565] = 3,
    ACTIONS(1293), 1,
      sym__layout_start,
    STATE(318), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13576] = 3,
    ACTIONS(1295), 1,
      sym_identifier,
    STATE(508), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13587] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1297), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13596] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1297), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13605] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1299), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13614] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1297), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13623] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(897), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13632] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1301), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13641] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1062), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13650] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1303), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13659] = 3,
    ACTIONS(1305), 1,
      sym_identifier,
    STATE(508), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13670] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(858), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [13679] = 2,
    ACTIONS(1307), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13687] = 2,
    ACTIONS(1309), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13695] = 2,
    ACTIONS(1311), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13703] = 2,
    ACTIONS(1313), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13711] = 2,
    ACTIONS(1315), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13719] = 2,
    ACTIONS(1317), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13727] = 2,
    ACTIONS(1319), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13735] = 2,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13743] = 2,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13751] = 2,
    ACTIONS(1325), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13759] = 2,
    ACTIONS(1327), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13767] = 2,
    ACTIONS(1329), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13775] = 2,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13783] = 2,
    ACTIONS(1333), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13791] = 2,
    ACTIONS(1335), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13799] = 2,
    ACTIONS(1337), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13807] = 2,
    ACTIONS(1339), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13815] = 2,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13823] = 2,
    ACTIONS(1343), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13831] = 2,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13839] = 2,
    ACTIONS(1347), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13847] = 2,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13855] = 2,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13863] = 2,
    ACTIONS(1353), 1,
      anon_sym_RPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13871] = 2,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13879] = 2,
    ACTIONS(1357), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13887] = 2,
    ACTIONS(1359), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13895] = 2,
    ACTIONS(1361), 1,
      anon_sym_RPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13903] = 2,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13911] = 2,
    ACTIONS(1365), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13919] = 2,
    ACTIONS(1367), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13927] = 2,
    ACTIONS(1369), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13935] = 2,
    ACTIONS(1371), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13943] = 2,
    ACTIONS(1373), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13951] = 2,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13959] = 2,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13967] = 2,
    ACTIONS(1377), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13975] = 2,
    ACTIONS(1379), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13983] = 2,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13991] = 2,
    ACTIONS(1383), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [13999] = 2,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14007] = 2,
    ACTIONS(1387), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14015] = 2,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14023] = 2,
    ACTIONS(1389), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14031] = 2,
    ACTIONS(1391), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14039] = 2,
    ACTIONS(1393), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14047] = 2,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14055] = 2,
    ACTIONS(1397), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14063] = 2,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14071] = 2,
    ACTIONS(1401), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14079] = 2,
    ACTIONS(1403), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14087] = 2,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14095] = 2,
    ACTIONS(1407), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14103] = 2,
    ACTIONS(1409), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14111] = 2,
    ACTIONS(1411), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14119] = 2,
    ACTIONS(1413), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14127] = 2,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14135] = 2,
    ACTIONS(1417), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14143] = 2,
    ACTIONS(1419), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14151] = 2,
    ACTIONS(1421), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14159] = 2,
    ACTIONS(1423), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14167] = 2,
    ACTIONS(1425), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14175] = 2,
    ACTIONS(1427), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14183] = 2,
    ACTIONS(1429), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14191] = 2,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14199] = 2,
    ACTIONS(1433), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14207] = 2,
    ACTIONS(1435), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14215] = 2,
    ACTIONS(1437), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14223] = 2,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14231] = 2,
    ACTIONS(1441), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14239] = 2,
    ACTIONS(1443), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14247] = 2,
    ACTIONS(1445), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14255] = 2,
    ACTIONS(1447), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14263] = 2,
    ACTIONS(1449), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14271] = 2,
    ACTIONS(1451), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14279] = 2,
    ACTIONS(1453), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14287] = 2,
    ACTIONS(1455), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14295] = 2,
    ACTIONS(1457), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14303] = 2,
    ACTIONS(1459), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14311] = 2,
    ACTIONS(1461), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14319] = 2,
    ACTIONS(1463), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14327] = 2,
    ACTIONS(1465), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14335] = 2,
    ACTIONS(1467), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [14343] = 2,
    ACTIONS(1469), 1,
      anon_sym_COLON_COLON,
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
  [SMALL_STATE(8)] = 441,
  [SMALL_STATE(9)] = 516,
  [SMALL_STATE(10)] = 588,
  [SMALL_STATE(11)] = 656,
  [SMALL_STATE(12)] = 724,
  [SMALL_STATE(13)] = 792,
  [SMALL_STATE(14)] = 857,
  [SMALL_STATE(15)] = 922,
  [SMALL_STATE(16)] = 987,
  [SMALL_STATE(17)] = 1052,
  [SMALL_STATE(18)] = 1117,
  [SMALL_STATE(19)] = 1182,
  [SMALL_STATE(20)] = 1247,
  [SMALL_STATE(21)] = 1312,
  [SMALL_STATE(22)] = 1377,
  [SMALL_STATE(23)] = 1442,
  [SMALL_STATE(24)] = 1507,
  [SMALL_STATE(25)] = 1572,
  [SMALL_STATE(26)] = 1637,
  [SMALL_STATE(27)] = 1702,
  [SMALL_STATE(28)] = 1771,
  [SMALL_STATE(29)] = 1836,
  [SMALL_STATE(30)] = 1901,
  [SMALL_STATE(31)] = 1966,
  [SMALL_STATE(32)] = 2031,
  [SMALL_STATE(33)] = 2065,
  [SMALL_STATE(34)] = 2099,
  [SMALL_STATE(35)] = 2133,
  [SMALL_STATE(36)] = 2190,
  [SMALL_STATE(37)] = 2247,
  [SMALL_STATE(38)] = 2295,
  [SMALL_STATE(39)] = 2343,
  [SMALL_STATE(40)] = 2395,
  [SMALL_STATE(41)] = 2443,
  [SMALL_STATE(42)] = 2491,
  [SMALL_STATE(43)] = 2542,
  [SMALL_STATE(44)] = 2589,
  [SMALL_STATE(45)] = 2636,
  [SMALL_STATE(46)] = 2683,
  [SMALL_STATE(47)] = 2730,
  [SMALL_STATE(48)] = 2777,
  [SMALL_STATE(49)] = 2824,
  [SMALL_STATE(50)] = 2877,
  [SMALL_STATE(51)] = 2930,
  [SMALL_STATE(52)] = 2977,
  [SMALL_STATE(53)] = 3024,
  [SMALL_STATE(54)] = 3071,
  [SMALL_STATE(55)] = 3117,
  [SMALL_STATE(56)] = 3169,
  [SMALL_STATE(57)] = 3215,
  [SMALL_STATE(58)] = 3259,
  [SMALL_STATE(59)] = 3305,
  [SMALL_STATE(60)] = 3351,
  [SMALL_STATE(61)] = 3403,
  [SMALL_STATE(62)] = 3455,
  [SMALL_STATE(63)] = 3505,
  [SMALL_STATE(64)] = 3551,
  [SMALL_STATE(65)] = 3603,
  [SMALL_STATE(66)] = 3649,
  [SMALL_STATE(67)] = 3695,
  [SMALL_STATE(68)] = 3738,
  [SMALL_STATE(69)] = 3783,
  [SMALL_STATE(70)] = 3830,
  [SMALL_STATE(71)] = 3879,
  [SMALL_STATE(72)] = 3928,
  [SMALL_STATE(73)] = 3973,
  [SMALL_STATE(74)] = 4018,
  [SMALL_STATE(75)] = 4063,
  [SMALL_STATE(76)] = 4112,
  [SMALL_STATE(77)] = 4157,
  [SMALL_STATE(78)] = 4202,
  [SMALL_STATE(79)] = 4251,
  [SMALL_STATE(80)] = 4300,
  [SMALL_STATE(81)] = 4343,
  [SMALL_STATE(82)] = 4392,
  [SMALL_STATE(83)] = 4441,
  [SMALL_STATE(84)] = 4490,
  [SMALL_STATE(85)] = 4535,
  [SMALL_STATE(86)] = 4580,
  [SMALL_STATE(87)] = 4629,
  [SMALL_STATE(88)] = 4674,
  [SMALL_STATE(89)] = 4719,
  [SMALL_STATE(90)] = 4761,
  [SMALL_STATE(91)] = 4803,
  [SMALL_STATE(92)] = 4845,
  [SMALL_STATE(93)] = 4887,
  [SMALL_STATE(94)] = 4929,
  [SMALL_STATE(95)] = 4975,
  [SMALL_STATE(96)] = 5021,
  [SMALL_STATE(97)] = 5067,
  [SMALL_STATE(98)] = 5113,
  [SMALL_STATE(99)] = 5159,
  [SMALL_STATE(100)] = 5201,
  [SMALL_STATE(101)] = 5243,
  [SMALL_STATE(102)] = 5285,
  [SMALL_STATE(103)] = 5331,
  [SMALL_STATE(104)] = 5377,
  [SMALL_STATE(105)] = 5423,
  [SMALL_STATE(106)] = 5469,
  [SMALL_STATE(107)] = 5512,
  [SMALL_STATE(108)] = 5553,
  [SMALL_STATE(109)] = 5596,
  [SMALL_STATE(110)] = 5636,
  [SMALL_STATE(111)] = 5676,
  [SMALL_STATE(112)] = 5718,
  [SMALL_STATE(113)] = 5748,
  [SMALL_STATE(114)] = 5790,
  [SMALL_STATE(115)] = 5832,
  [SMALL_STATE(116)] = 5872,
  [SMALL_STATE(117)] = 5908,
  [SMALL_STATE(118)] = 5950,
  [SMALL_STATE(119)] = 5986,
  [SMALL_STATE(120)] = 6026,
  [SMALL_STATE(121)] = 6066,
  [SMALL_STATE(122)] = 6106,
  [SMALL_STATE(123)] = 6146,
  [SMALL_STATE(124)] = 6182,
  [SMALL_STATE(125)] = 6221,
  [SMALL_STATE(126)] = 6258,
  [SMALL_STATE(127)] = 6295,
  [SMALL_STATE(128)] = 6334,
  [SMALL_STATE(129)] = 6361,
  [SMALL_STATE(130)] = 6388,
  [SMALL_STATE(131)] = 6425,
  [SMALL_STATE(132)] = 6464,
  [SMALL_STATE(133)] = 6503,
  [SMALL_STATE(134)] = 6542,
  [SMALL_STATE(135)] = 6569,
  [SMALL_STATE(136)] = 6608,
  [SMALL_STATE(137)] = 6635,
  [SMALL_STATE(138)] = 6674,
  [SMALL_STATE(139)] = 6713,
  [SMALL_STATE(140)] = 6752,
  [SMALL_STATE(141)] = 6791,
  [SMALL_STATE(142)] = 6830,
  [SMALL_STATE(143)] = 6865,
  [SMALL_STATE(144)] = 6904,
  [SMALL_STATE(145)] = 6943,
  [SMALL_STATE(146)] = 6980,
  [SMALL_STATE(147)] = 7017,
  [SMALL_STATE(148)] = 7041,
  [SMALL_STATE(149)] = 7065,
  [SMALL_STATE(150)] = 7089,
  [SMALL_STATE(151)] = 7113,
  [SMALL_STATE(152)] = 7139,
  [SMALL_STATE(153)] = 7173,
  [SMALL_STATE(154)] = 7199,
  [SMALL_STATE(155)] = 7225,
  [SMALL_STATE(156)] = 7259,
  [SMALL_STATE(157)] = 7293,
  [SMALL_STATE(158)] = 7327,
  [SMALL_STATE(159)] = 7351,
  [SMALL_STATE(160)] = 7384,
  [SMALL_STATE(161)] = 7415,
  [SMALL_STATE(162)] = 7438,
  [SMALL_STATE(163)] = 7471,
  [SMALL_STATE(164)] = 7502,
  [SMALL_STATE(165)] = 7525,
  [SMALL_STATE(166)] = 7556,
  [SMALL_STATE(167)] = 7580,
  [SMALL_STATE(168)] = 7602,
  [SMALL_STATE(169)] = 7626,
  [SMALL_STATE(170)] = 7648,
  [SMALL_STATE(171)] = 7672,
  [SMALL_STATE(172)] = 7694,
  [SMALL_STATE(173)] = 7716,
  [SMALL_STATE(174)] = 7738,
  [SMALL_STATE(175)] = 7760,
  [SMALL_STATE(176)] = 7782,
  [SMALL_STATE(177)] = 7812,
  [SMALL_STATE(178)] = 7836,
  [SMALL_STATE(179)] = 7860,
  [SMALL_STATE(180)] = 7886,
  [SMALL_STATE(181)] = 7910,
  [SMALL_STATE(182)] = 7931,
  [SMALL_STATE(183)] = 7952,
  [SMALL_STATE(184)] = 7975,
  [SMALL_STATE(185)] = 7996,
  [SMALL_STATE(186)] = 8017,
  [SMALL_STATE(187)] = 8038,
  [SMALL_STATE(188)] = 8059,
  [SMALL_STATE(189)] = 8080,
  [SMALL_STATE(190)] = 8101,
  [SMALL_STATE(191)] = 8122,
  [SMALL_STATE(192)] = 8145,
  [SMALL_STATE(193)] = 8166,
  [SMALL_STATE(194)] = 8187,
  [SMALL_STATE(195)] = 8208,
  [SMALL_STATE(196)] = 8229,
  [SMALL_STATE(197)] = 8250,
  [SMALL_STATE(198)] = 8275,
  [SMALL_STATE(199)] = 8296,
  [SMALL_STATE(200)] = 8316,
  [SMALL_STATE(201)] = 8338,
  [SMALL_STATE(202)] = 8358,
  [SMALL_STATE(203)] = 8378,
  [SMALL_STATE(204)] = 8398,
  [SMALL_STATE(205)] = 8418,
  [SMALL_STATE(206)] = 8438,
  [SMALL_STATE(207)] = 8462,
  [SMALL_STATE(208)] = 8482,
  [SMALL_STATE(209)] = 8502,
  [SMALL_STATE(210)] = 8522,
  [SMALL_STATE(211)] = 8542,
  [SMALL_STATE(212)] = 8562,
  [SMALL_STATE(213)] = 8584,
  [SMALL_STATE(214)] = 8604,
  [SMALL_STATE(215)] = 8624,
  [SMALL_STATE(216)] = 8655,
  [SMALL_STATE(217)] = 8674,
  [SMALL_STATE(218)] = 8693,
  [SMALL_STATE(219)] = 8712,
  [SMALL_STATE(220)] = 8731,
  [SMALL_STATE(221)] = 8750,
  [SMALL_STATE(222)] = 8771,
  [SMALL_STATE(223)] = 8802,
  [SMALL_STATE(224)] = 8825,
  [SMALL_STATE(225)] = 8844,
  [SMALL_STATE(226)] = 8863,
  [SMALL_STATE(227)] = 8884,
  [SMALL_STATE(228)] = 8903,
  [SMALL_STATE(229)] = 8922,
  [SMALL_STATE(230)] = 8940,
  [SMALL_STATE(231)] = 8958,
  [SMALL_STATE(232)] = 8982,
  [SMALL_STATE(233)] = 9000,
  [SMALL_STATE(234)] = 9018,
  [SMALL_STATE(235)] = 9036,
  [SMALL_STATE(236)] = 9054,
  [SMALL_STATE(237)] = 9072,
  [SMALL_STATE(238)] = 9090,
  [SMALL_STATE(239)] = 9108,
  [SMALL_STATE(240)] = 9126,
  [SMALL_STATE(241)] = 9144,
  [SMALL_STATE(242)] = 9162,
  [SMALL_STATE(243)] = 9185,
  [SMALL_STATE(244)] = 9208,
  [SMALL_STATE(245)] = 9229,
  [SMALL_STATE(246)] = 9246,
  [SMALL_STATE(247)] = 9263,
  [SMALL_STATE(248)] = 9280,
  [SMALL_STATE(249)] = 9301,
  [SMALL_STATE(250)] = 9318,
  [SMALL_STATE(251)] = 9335,
  [SMALL_STATE(252)] = 9352,
  [SMALL_STATE(253)] = 9372,
  [SMALL_STATE(254)] = 9392,
  [SMALL_STATE(255)] = 9410,
  [SMALL_STATE(256)] = 9430,
  [SMALL_STATE(257)] = 9446,
  [SMALL_STATE(258)] = 9470,
  [SMALL_STATE(259)] = 9490,
  [SMALL_STATE(260)] = 9506,
  [SMALL_STATE(261)] = 9524,
  [SMALL_STATE(262)] = 9544,
  [SMALL_STATE(263)] = 9564,
  [SMALL_STATE(264)] = 9578,
  [SMALL_STATE(265)] = 9602,
  [SMALL_STATE(266)] = 9622,
  [SMALL_STATE(267)] = 9646,
  [SMALL_STATE(268)] = 9670,
  [SMALL_STATE(269)] = 9684,
  [SMALL_STATE(270)] = 9697,
  [SMALL_STATE(271)] = 9714,
  [SMALL_STATE(272)] = 9735,
  [SMALL_STATE(273)] = 9748,
  [SMALL_STATE(274)] = 9763,
  [SMALL_STATE(275)] = 9786,
  [SMALL_STATE(276)] = 9809,
  [SMALL_STATE(277)] = 9830,
  [SMALL_STATE(278)] = 9851,
  [SMALL_STATE(279)] = 9868,
  [SMALL_STATE(280)] = 9887,
  [SMALL_STATE(281)] = 9908,
  [SMALL_STATE(282)] = 9931,
  [SMALL_STATE(283)] = 9950,
  [SMALL_STATE(284)] = 9967,
  [SMALL_STATE(285)] = 9984,
  [SMALL_STATE(286)] = 10007,
  [SMALL_STATE(287)] = 10022,
  [SMALL_STATE(288)] = 10043,
  [SMALL_STATE(289)] = 10064,
  [SMALL_STATE(290)] = 10085,
  [SMALL_STATE(291)] = 10106,
  [SMALL_STATE(292)] = 10125,
  [SMALL_STATE(293)] = 10148,
  [SMALL_STATE(294)] = 10169,
  [SMALL_STATE(295)] = 10190,
  [SMALL_STATE(296)] = 10209,
  [SMALL_STATE(297)] = 10228,
  [SMALL_STATE(298)] = 10245,
  [SMALL_STATE(299)] = 10268,
  [SMALL_STATE(300)] = 10291,
  [SMALL_STATE(301)] = 10312,
  [SMALL_STATE(302)] = 10325,
  [SMALL_STATE(303)] = 10348,
  [SMALL_STATE(304)] = 10371,
  [SMALL_STATE(305)] = 10389,
  [SMALL_STATE(306)] = 10405,
  [SMALL_STATE(307)] = 10417,
  [SMALL_STATE(308)] = 10429,
  [SMALL_STATE(309)] = 10441,
  [SMALL_STATE(310)] = 10457,
  [SMALL_STATE(311)] = 10471,
  [SMALL_STATE(312)] = 10483,
  [SMALL_STATE(313)] = 10501,
  [SMALL_STATE(314)] = 10513,
  [SMALL_STATE(315)] = 10525,
  [SMALL_STATE(316)] = 10545,
  [SMALL_STATE(317)] = 10563,
  [SMALL_STATE(318)] = 10583,
  [SMALL_STATE(319)] = 10595,
  [SMALL_STATE(320)] = 10615,
  [SMALL_STATE(321)] = 10633,
  [SMALL_STATE(322)] = 10649,
  [SMALL_STATE(323)] = 10661,
  [SMALL_STATE(324)] = 10673,
  [SMALL_STATE(325)] = 10693,
  [SMALL_STATE(326)] = 10709,
  [SMALL_STATE(327)] = 10725,
  [SMALL_STATE(328)] = 10737,
  [SMALL_STATE(329)] = 10749,
  [SMALL_STATE(330)] = 10769,
  [SMALL_STATE(331)] = 10781,
  [SMALL_STATE(332)] = 10801,
  [SMALL_STATE(333)] = 10813,
  [SMALL_STATE(334)] = 10825,
  [SMALL_STATE(335)] = 10843,
  [SMALL_STATE(336)] = 10861,
  [SMALL_STATE(337)] = 10881,
  [SMALL_STATE(338)] = 10898,
  [SMALL_STATE(339)] = 10913,
  [SMALL_STATE(340)] = 10930,
  [SMALL_STATE(341)] = 10943,
  [SMALL_STATE(342)] = 10954,
  [SMALL_STATE(343)] = 10971,
  [SMALL_STATE(344)] = 10986,
  [SMALL_STATE(345)] = 11001,
  [SMALL_STATE(346)] = 11018,
  [SMALL_STATE(347)] = 11031,
  [SMALL_STATE(348)] = 11046,
  [SMALL_STATE(349)] = 11061,
  [SMALL_STATE(350)] = 11072,
  [SMALL_STATE(351)] = 11087,
  [SMALL_STATE(352)] = 11104,
  [SMALL_STATE(353)] = 11119,
  [SMALL_STATE(354)] = 11134,
  [SMALL_STATE(355)] = 11149,
  [SMALL_STATE(356)] = 11164,
  [SMALL_STATE(357)] = 11181,
  [SMALL_STATE(358)] = 11192,
  [SMALL_STATE(359)] = 11207,
  [SMALL_STATE(360)] = 11220,
  [SMALL_STATE(361)] = 11235,
  [SMALL_STATE(362)] = 11252,
  [SMALL_STATE(363)] = 11269,
  [SMALL_STATE(364)] = 11284,
  [SMALL_STATE(365)] = 11299,
  [SMALL_STATE(366)] = 11316,
  [SMALL_STATE(367)] = 11333,
  [SMALL_STATE(368)] = 11347,
  [SMALL_STATE(369)] = 11359,
  [SMALL_STATE(370)] = 11373,
  [SMALL_STATE(371)] = 11387,
  [SMALL_STATE(372)] = 11401,
  [SMALL_STATE(373)] = 11415,
  [SMALL_STATE(374)] = 11429,
  [SMALL_STATE(375)] = 11443,
  [SMALL_STATE(376)] = 11457,
  [SMALL_STATE(377)] = 11471,
  [SMALL_STATE(378)] = 11485,
  [SMALL_STATE(379)] = 11499,
  [SMALL_STATE(380)] = 11513,
  [SMALL_STATE(381)] = 11527,
  [SMALL_STATE(382)] = 11541,
  [SMALL_STATE(383)] = 11555,
  [SMALL_STATE(384)] = 11569,
  [SMALL_STATE(385)] = 11583,
  [SMALL_STATE(386)] = 11597,
  [SMALL_STATE(387)] = 11611,
  [SMALL_STATE(388)] = 11625,
  [SMALL_STATE(389)] = 11639,
  [SMALL_STATE(390)] = 11653,
  [SMALL_STATE(391)] = 11667,
  [SMALL_STATE(392)] = 11681,
  [SMALL_STATE(393)] = 11695,
  [SMALL_STATE(394)] = 11709,
  [SMALL_STATE(395)] = 11723,
  [SMALL_STATE(396)] = 11737,
  [SMALL_STATE(397)] = 11751,
  [SMALL_STATE(398)] = 11765,
  [SMALL_STATE(399)] = 11779,
  [SMALL_STATE(400)] = 11793,
  [SMALL_STATE(401)] = 11807,
  [SMALL_STATE(402)] = 11821,
  [SMALL_STATE(403)] = 11833,
  [SMALL_STATE(404)] = 11847,
  [SMALL_STATE(405)] = 11861,
  [SMALL_STATE(406)] = 11875,
  [SMALL_STATE(407)] = 11889,
  [SMALL_STATE(408)] = 11903,
  [SMALL_STATE(409)] = 11915,
  [SMALL_STATE(410)] = 11929,
  [SMALL_STATE(411)] = 11943,
  [SMALL_STATE(412)] = 11957,
  [SMALL_STATE(413)] = 11971,
  [SMALL_STATE(414)] = 11985,
  [SMALL_STATE(415)] = 11999,
  [SMALL_STATE(416)] = 12009,
  [SMALL_STATE(417)] = 12023,
  [SMALL_STATE(418)] = 12037,
  [SMALL_STATE(419)] = 12051,
  [SMALL_STATE(420)] = 12065,
  [SMALL_STATE(421)] = 12079,
  [SMALL_STATE(422)] = 12093,
  [SMALL_STATE(423)] = 12107,
  [SMALL_STATE(424)] = 12121,
  [SMALL_STATE(425)] = 12135,
  [SMALL_STATE(426)] = 12149,
  [SMALL_STATE(427)] = 12161,
  [SMALL_STATE(428)] = 12175,
  [SMALL_STATE(429)] = 12189,
  [SMALL_STATE(430)] = 12203,
  [SMALL_STATE(431)] = 12217,
  [SMALL_STATE(432)] = 12231,
  [SMALL_STATE(433)] = 12243,
  [SMALL_STATE(434)] = 12257,
  [SMALL_STATE(435)] = 12271,
  [SMALL_STATE(436)] = 12285,
  [SMALL_STATE(437)] = 12299,
  [SMALL_STATE(438)] = 12313,
  [SMALL_STATE(439)] = 12327,
  [SMALL_STATE(440)] = 12341,
  [SMALL_STATE(441)] = 12355,
  [SMALL_STATE(442)] = 12369,
  [SMALL_STATE(443)] = 12383,
  [SMALL_STATE(444)] = 12397,
  [SMALL_STATE(445)] = 12411,
  [SMALL_STATE(446)] = 12425,
  [SMALL_STATE(447)] = 12435,
  [SMALL_STATE(448)] = 12447,
  [SMALL_STATE(449)] = 12461,
  [SMALL_STATE(450)] = 12475,
  [SMALL_STATE(451)] = 12489,
  [SMALL_STATE(452)] = 12501,
  [SMALL_STATE(453)] = 12511,
  [SMALL_STATE(454)] = 12525,
  [SMALL_STATE(455)] = 12537,
  [SMALL_STATE(456)] = 12551,
  [SMALL_STATE(457)] = 12565,
  [SMALL_STATE(458)] = 12575,
  [SMALL_STATE(459)] = 12589,
  [SMALL_STATE(460)] = 12603,
  [SMALL_STATE(461)] = 12617,
  [SMALL_STATE(462)] = 12629,
  [SMALL_STATE(463)] = 12643,
  [SMALL_STATE(464)] = 12657,
  [SMALL_STATE(465)] = 12671,
  [SMALL_STATE(466)] = 12683,
  [SMALL_STATE(467)] = 12697,
  [SMALL_STATE(468)] = 12711,
  [SMALL_STATE(469)] = 12725,
  [SMALL_STATE(470)] = 12737,
  [SMALL_STATE(471)] = 12751,
  [SMALL_STATE(472)] = 12765,
  [SMALL_STATE(473)] = 12777,
  [SMALL_STATE(474)] = 12786,
  [SMALL_STATE(475)] = 12795,
  [SMALL_STATE(476)] = 12804,
  [SMALL_STATE(477)] = 12813,
  [SMALL_STATE(478)] = 12824,
  [SMALL_STATE(479)] = 12833,
  [SMALL_STATE(480)] = 12844,
  [SMALL_STATE(481)] = 12853,
  [SMALL_STATE(482)] = 12862,
  [SMALL_STATE(483)] = 12871,
  [SMALL_STATE(484)] = 12882,
  [SMALL_STATE(485)] = 12891,
  [SMALL_STATE(486)] = 12900,
  [SMALL_STATE(487)] = 12911,
  [SMALL_STATE(488)] = 12920,
  [SMALL_STATE(489)] = 12929,
  [SMALL_STATE(490)] = 12938,
  [SMALL_STATE(491)] = 12947,
  [SMALL_STATE(492)] = 12956,
  [SMALL_STATE(493)] = 12965,
  [SMALL_STATE(494)] = 12974,
  [SMALL_STATE(495)] = 12985,
  [SMALL_STATE(496)] = 12994,
  [SMALL_STATE(497)] = 13003,
  [SMALL_STATE(498)] = 13012,
  [SMALL_STATE(499)] = 13021,
  [SMALL_STATE(500)] = 13030,
  [SMALL_STATE(501)] = 13039,
  [SMALL_STATE(502)] = 13048,
  [SMALL_STATE(503)] = 13059,
  [SMALL_STATE(504)] = 13068,
  [SMALL_STATE(505)] = 13077,
  [SMALL_STATE(506)] = 13086,
  [SMALL_STATE(507)] = 13095,
  [SMALL_STATE(508)] = 13106,
  [SMALL_STATE(509)] = 13117,
  [SMALL_STATE(510)] = 13126,
  [SMALL_STATE(511)] = 13135,
  [SMALL_STATE(512)] = 13144,
  [SMALL_STATE(513)] = 13153,
  [SMALL_STATE(514)] = 13162,
  [SMALL_STATE(515)] = 13173,
  [SMALL_STATE(516)] = 13182,
  [SMALL_STATE(517)] = 13193,
  [SMALL_STATE(518)] = 13204,
  [SMALL_STATE(519)] = 13215,
  [SMALL_STATE(520)] = 13226,
  [SMALL_STATE(521)] = 13237,
  [SMALL_STATE(522)] = 13248,
  [SMALL_STATE(523)] = 13257,
  [SMALL_STATE(524)] = 13266,
  [SMALL_STATE(525)] = 13275,
  [SMALL_STATE(526)] = 13286,
  [SMALL_STATE(527)] = 13295,
  [SMALL_STATE(528)] = 13304,
  [SMALL_STATE(529)] = 13313,
  [SMALL_STATE(530)] = 13322,
  [SMALL_STATE(531)] = 13333,
  [SMALL_STATE(532)] = 13342,
  [SMALL_STATE(533)] = 13353,
  [SMALL_STATE(534)] = 13362,
  [SMALL_STATE(535)] = 13373,
  [SMALL_STATE(536)] = 13384,
  [SMALL_STATE(537)] = 13393,
  [SMALL_STATE(538)] = 13404,
  [SMALL_STATE(539)] = 13413,
  [SMALL_STATE(540)] = 13422,
  [SMALL_STATE(541)] = 13431,
  [SMALL_STATE(542)] = 13442,
  [SMALL_STATE(543)] = 13453,
  [SMALL_STATE(544)] = 13462,
  [SMALL_STATE(545)] = 13471,
  [SMALL_STATE(546)] = 13480,
  [SMALL_STATE(547)] = 13489,
  [SMALL_STATE(548)] = 13500,
  [SMALL_STATE(549)] = 13509,
  [SMALL_STATE(550)] = 13520,
  [SMALL_STATE(551)] = 13529,
  [SMALL_STATE(552)] = 13538,
  [SMALL_STATE(553)] = 13547,
  [SMALL_STATE(554)] = 13556,
  [SMALL_STATE(555)] = 13565,
  [SMALL_STATE(556)] = 13576,
  [SMALL_STATE(557)] = 13587,
  [SMALL_STATE(558)] = 13596,
  [SMALL_STATE(559)] = 13605,
  [SMALL_STATE(560)] = 13614,
  [SMALL_STATE(561)] = 13623,
  [SMALL_STATE(562)] = 13632,
  [SMALL_STATE(563)] = 13641,
  [SMALL_STATE(564)] = 13650,
  [SMALL_STATE(565)] = 13659,
  [SMALL_STATE(566)] = 13670,
  [SMALL_STATE(567)] = 13679,
  [SMALL_STATE(568)] = 13687,
  [SMALL_STATE(569)] = 13695,
  [SMALL_STATE(570)] = 13703,
  [SMALL_STATE(571)] = 13711,
  [SMALL_STATE(572)] = 13719,
  [SMALL_STATE(573)] = 13727,
  [SMALL_STATE(574)] = 13735,
  [SMALL_STATE(575)] = 13743,
  [SMALL_STATE(576)] = 13751,
  [SMALL_STATE(577)] = 13759,
  [SMALL_STATE(578)] = 13767,
  [SMALL_STATE(579)] = 13775,
  [SMALL_STATE(580)] = 13783,
  [SMALL_STATE(581)] = 13791,
  [SMALL_STATE(582)] = 13799,
  [SMALL_STATE(583)] = 13807,
  [SMALL_STATE(584)] = 13815,
  [SMALL_STATE(585)] = 13823,
  [SMALL_STATE(586)] = 13831,
  [SMALL_STATE(587)] = 13839,
  [SMALL_STATE(588)] = 13847,
  [SMALL_STATE(589)] = 13855,
  [SMALL_STATE(590)] = 13863,
  [SMALL_STATE(591)] = 13871,
  [SMALL_STATE(592)] = 13879,
  [SMALL_STATE(593)] = 13887,
  [SMALL_STATE(594)] = 13895,
  [SMALL_STATE(595)] = 13903,
  [SMALL_STATE(596)] = 13911,
  [SMALL_STATE(597)] = 13919,
  [SMALL_STATE(598)] = 13927,
  [SMALL_STATE(599)] = 13935,
  [SMALL_STATE(600)] = 13943,
  [SMALL_STATE(601)] = 13951,
  [SMALL_STATE(602)] = 13959,
  [SMALL_STATE(603)] = 13967,
  [SMALL_STATE(604)] = 13975,
  [SMALL_STATE(605)] = 13983,
  [SMALL_STATE(606)] = 13991,
  [SMALL_STATE(607)] = 13999,
  [SMALL_STATE(608)] = 14007,
  [SMALL_STATE(609)] = 14015,
  [SMALL_STATE(610)] = 14023,
  [SMALL_STATE(611)] = 14031,
  [SMALL_STATE(612)] = 14039,
  [SMALL_STATE(613)] = 14047,
  [SMALL_STATE(614)] = 14055,
  [SMALL_STATE(615)] = 14063,
  [SMALL_STATE(616)] = 14071,
  [SMALL_STATE(617)] = 14079,
  [SMALL_STATE(618)] = 14087,
  [SMALL_STATE(619)] = 14095,
  [SMALL_STATE(620)] = 14103,
  [SMALL_STATE(621)] = 14111,
  [SMALL_STATE(622)] = 14119,
  [SMALL_STATE(623)] = 14127,
  [SMALL_STATE(624)] = 14135,
  [SMALL_STATE(625)] = 14143,
  [SMALL_STATE(626)] = 14151,
  [SMALL_STATE(627)] = 14159,
  [SMALL_STATE(628)] = 14167,
  [SMALL_STATE(629)] = 14175,
  [SMALL_STATE(630)] = 14183,
  [SMALL_STATE(631)] = 14191,
  [SMALL_STATE(632)] = 14199,
  [SMALL_STATE(633)] = 14207,
  [SMALL_STATE(634)] = 14215,
  [SMALL_STATE(635)] = 14223,
  [SMALL_STATE(636)] = 14231,
  [SMALL_STATE(637)] = 14239,
  [SMALL_STATE(638)] = 14247,
  [SMALL_STATE(639)] = 14255,
  [SMALL_STATE(640)] = 14263,
  [SMALL_STATE(641)] = 14271,
  [SMALL_STATE(642)] = 14279,
  [SMALL_STATE(643)] = 14287,
  [SMALL_STATE(644)] = 14295,
  [SMALL_STATE(645)] = 14303,
  [SMALL_STATE(646)] = 14311,
  [SMALL_STATE(647)] = 14319,
  [SMALL_STATE(648)] = 14327,
  [SMALL_STATE(649)] = 14335,
  [SMALL_STATE(650)] = 14343,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_app, 2, .production_id = 11),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_app, 2, .production_id = 11),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_kind, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_kind, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(134),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(11),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(150),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(150),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(436),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(41),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_member, 1, .production_id = 10),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_member, 1, .production_id = 10),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(170),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(71),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(184),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(184),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(404),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_app, 2, .production_id = 11),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_app, 2, .production_id = 11),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_member, 2, .production_id = 10),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_member, 2, .production_id = 10),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(134),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(81),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(150),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(150),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(436),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(128),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(86),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(34),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(34),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(385),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(180),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(79),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(214),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(214),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(416),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(191),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(83),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(203),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(203),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(410),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(154),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(12),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(169),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(169),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(423),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(66),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(200),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(82),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(228),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(228),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(401),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(166),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(10),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(171),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(171),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(397),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(76),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(154),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(75),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(169),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(169),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(423),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(226),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(70),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(241),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(241),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(394),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 2, .production_id = 9),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(166),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(78),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(171),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(171),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(397),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1, .production_id = 9),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(233),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(109),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__func_body_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(171),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(171),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(397),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pat_infix_repeat1, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_app, 2, .production_id = 11),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pat_infix_repeat1, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_app, 2, .production_id = 11),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 3),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(246),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(121),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(150),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(150),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(436),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(245),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(119),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(34),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(34),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(385),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(477),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 4),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_unit, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_unit, 2),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_parens, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_parens, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_unit, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_unit, 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty_path, 1, .production_id = 6),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty_path, 1, .production_id = 6),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_parens, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_parens, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(256),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(647),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pat_ident, 1, .production_id = 7),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pat_ident, 1, .production_id = 7),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_parens, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_parens, 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_unit, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_unit, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(384),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(139),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_infix, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_infix, 2),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_infix, 2),
  [738] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(141),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typevar, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 2),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(258),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typevar, 5),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 5),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(133),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 2),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, .production_id = 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(293),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(362),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(441),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(124),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(143),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 3),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_typed, 3),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_case, 7),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_case, 6),
  [866] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(140),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 6),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 3),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_infix, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_do, 2),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(452),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(626),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(144),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_where, 2),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(294),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 4),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(377),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(131),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lambda, 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_case, 5),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 12),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [917] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(138),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_infix, 2),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_infix, 2),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(287),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 4, .production_id = 2),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2), SHIFT_REPEAT(483),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 5, .production_id = 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [954] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pat_infix_repeat1, 2), SHIFT_REPEAT(162),
  [957] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(135),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_case_repeat1, 2), SHIFT_REPEAT(115),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_case_repeat1, 2),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(280),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 1),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 7, .production_id = 2),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1046] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2), SHIFT_REPEAT(319),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 2),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1059] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2), SHIFT_REPEAT(4),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [1084] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(337),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pat_infix_repeat1, 2), SHIFT_REPEAT(159),
  [1108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(438),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2), SHIFT_REPEAT(549),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exports_repeat1, 2),
  [1128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exports_repeat1, 2), SHIFT_REPEAT(336),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 12),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(449),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(9),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_group_repeat1, 2),
  [1167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_group_repeat1, 2), SHIFT_REPEAT(639),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixity, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 4, .production_id = 13),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 4, .production_id = 2),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 4, .production_id = 2),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__postfix, 4),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix, 4),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_group, 4),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_item, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 10, .production_id = 2),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 10, .production_id = 12),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_arm, 3),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__infix, 5),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 5, .production_id = 4),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_group, 3),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 5, .production_id = 2),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 3, .production_id = 9),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 11, .production_id = 2),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 12, .production_id = 2),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(602),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_arm, 5),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 9, .production_id = 12),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 9, .production_id = 2),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 8, .production_id = 12),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_group, 2),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 2),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 8, .production_id = 2),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 8),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 4),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_let, 4),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 4),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 7, .production_id = 12),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 3, .production_id = 8),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 1, .production_id = 5),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 5),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 7),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 4, .production_id = 2),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 2),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exports, 3),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 9, .production_id = 4),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 2),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 4),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exports, 2),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exports, 4),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 2),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 4),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 8, .production_id = 4),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1465] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 8, .production_id = 2),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
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
