#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 626
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
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(22)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '|') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(2)
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '`') ADVANCE(36);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(2)
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '`') ADVANCE(36);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(3)
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '`') ADVANCE(36);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(5)
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '|') ADVANCE(33);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(5)
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '|') ADVANCE(33);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(7)
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(7)
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(10)
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(10)
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(10)
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(12)
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '`') ADVANCE(36);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(12)
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '`') ADVANCE(36);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(14)
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(14)
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(15)
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ';') ADVANCE(54);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(43);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(40);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(22)
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '|') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_int_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_int_literal_token3);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(43);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(47);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(52);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
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
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 2, .external_lex_state = 4},
  [10] = {.lex_state = 0, .external_lex_state = 4},
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
  [24] = {.lex_state = 0, .external_lex_state = 4},
  [25] = {.lex_state = 2, .external_lex_state = 4},
  [26] = {.lex_state = 2, .external_lex_state = 4},
  [27] = {.lex_state = 2, .external_lex_state = 4},
  [28] = {.lex_state = 2, .external_lex_state = 4},
  [29] = {.lex_state = 2, .external_lex_state = 4},
  [30] = {.lex_state = 2, .external_lex_state = 4},
  [31] = {.lex_state = 2, .external_lex_state = 4},
  [32] = {.lex_state = 2, .external_lex_state = 4},
  [33] = {.lex_state = 2, .external_lex_state = 4},
  [34] = {.lex_state = 2, .external_lex_state = 4},
  [35] = {.lex_state = 2, .external_lex_state = 4},
  [36] = {.lex_state = 2, .external_lex_state = 4},
  [37] = {.lex_state = 2, .external_lex_state = 5},
  [38] = {.lex_state = 2, .external_lex_state = 5},
  [39] = {.lex_state = 2, .external_lex_state = 5},
  [40] = {.lex_state = 3, .external_lex_state = 4},
  [41] = {.lex_state = 2, .external_lex_state = 5},
  [42] = {.lex_state = 2, .external_lex_state = 5},
  [43] = {.lex_state = 3, .external_lex_state = 4},
  [44] = {.lex_state = 3, .external_lex_state = 4},
  [45] = {.lex_state = 3, .external_lex_state = 4},
  [46] = {.lex_state = 3, .external_lex_state = 4},
  [47] = {.lex_state = 4, .external_lex_state = 4},
  [48] = {.lex_state = 2, .external_lex_state = 4},
  [49] = {.lex_state = 7, .external_lex_state = 4},
  [50] = {.lex_state = 2, .external_lex_state = 4},
  [51] = {.lex_state = 2, .external_lex_state = 4},
  [52] = {.lex_state = 2, .external_lex_state = 4},
  [53] = {.lex_state = 2, .external_lex_state = 4},
  [54] = {.lex_state = 2, .external_lex_state = 4},
  [55] = {.lex_state = 1, .external_lex_state = 4},
  [56] = {.lex_state = 1, .external_lex_state = 4},
  [57] = {.lex_state = 2, .external_lex_state = 4},
  [58] = {.lex_state = 2, .external_lex_state = 4},
  [59] = {.lex_state = 1, .external_lex_state = 5},
  [60] = {.lex_state = 8, .external_lex_state = 5},
  [61] = {.lex_state = 7, .external_lex_state = 4},
  [62] = {.lex_state = 4, .external_lex_state = 4},
  [63] = {.lex_state = 4, .external_lex_state = 4},
  [64] = {.lex_state = 4, .external_lex_state = 4},
  [65] = {.lex_state = 1, .external_lex_state = 5},
  [66] = {.lex_state = 4, .external_lex_state = 4},
  [67] = {.lex_state = 7, .external_lex_state = 4},
  [68] = {.lex_state = 7, .external_lex_state = 4},
  [69] = {.lex_state = 4, .external_lex_state = 4},
  [70] = {.lex_state = 2, .external_lex_state = 4},
  [71] = {.lex_state = 4, .external_lex_state = 4},
  [72] = {.lex_state = 2, .external_lex_state = 5},
  [73] = {.lex_state = 4, .external_lex_state = 4},
  [74] = {.lex_state = 2, .external_lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 4},
  [76] = {.lex_state = 4, .external_lex_state = 4},
  [77] = {.lex_state = 0, .external_lex_state = 4},
  [78] = {.lex_state = 2, .external_lex_state = 4},
  [79] = {.lex_state = 2, .external_lex_state = 4},
  [80] = {.lex_state = 2, .external_lex_state = 4},
  [81] = {.lex_state = 2, .external_lex_state = 4},
  [82] = {.lex_state = 8, .external_lex_state = 5},
  [83] = {.lex_state = 2, .external_lex_state = 4},
  [84] = {.lex_state = 7, .external_lex_state = 5},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 5},
  [87] = {.lex_state = 3, .external_lex_state = 4},
  [88] = {.lex_state = 8, .external_lex_state = 5},
  [89] = {.lex_state = 8, .external_lex_state = 5},
  [90] = {.lex_state = 11, .external_lex_state = 4},
  [91] = {.lex_state = 0, .external_lex_state = 5},
  [92] = {.lex_state = 7, .external_lex_state = 5},
  [93] = {.lex_state = 7, .external_lex_state = 5},
  [94] = {.lex_state = 2, .external_lex_state = 4},
  [95] = {.lex_state = 2, .external_lex_state = 4},
  [96] = {.lex_state = 7, .external_lex_state = 5},
  [97] = {.lex_state = 11, .external_lex_state = 4},
  [98] = {.lex_state = 2, .external_lex_state = 4},
  [99] = {.lex_state = 2, .external_lex_state = 4},
  [100] = {.lex_state = 14, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 5},
  [102] = {.lex_state = 2, .external_lex_state = 5},
  [103] = {.lex_state = 2, .external_lex_state = 4},
  [104] = {.lex_state = 2, .external_lex_state = 4},
  [105] = {.lex_state = 2, .external_lex_state = 4},
  [106] = {.lex_state = 2, .external_lex_state = 5},
  [107] = {.lex_state = 2, .external_lex_state = 5},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 2, .external_lex_state = 4},
  [110] = {.lex_state = 2, .external_lex_state = 4},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 4, .external_lex_state = 4},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 14, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 0, .external_lex_state = 4},
  [119] = {.lex_state = 0, .external_lex_state = 5},
  [120] = {.lex_state = 4, .external_lex_state = 4},
  [121] = {.lex_state = 3, .external_lex_state = 4},
  [122] = {.lex_state = 3, .external_lex_state = 4},
  [123] = {.lex_state = 14, .external_lex_state = 4},
  [124] = {.lex_state = 2, .external_lex_state = 5},
  [125] = {.lex_state = 0, .external_lex_state = 5},
  [126] = {.lex_state = 3, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 2, .external_lex_state = 5},
  [129] = {.lex_state = 2, .external_lex_state = 5},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 2, .external_lex_state = 5},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 14, .external_lex_state = 4},
  [134] = {.lex_state = 2, .external_lex_state = 5},
  [135] = {.lex_state = 3, .external_lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 0, .external_lex_state = 3},
  [138] = {.lex_state = 3, .external_lex_state = 4},
  [139] = {.lex_state = 3, .external_lex_state = 4},
  [140] = {.lex_state = 3, .external_lex_state = 4},
  [141] = {.lex_state = 3, .external_lex_state = 4},
  [142] = {.lex_state = 3, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 2, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 2, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 5},
  [149] = {.lex_state = 0, .external_lex_state = 5},
  [150] = {.lex_state = 3, .external_lex_state = 4},
  [151] = {.lex_state = 3, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 3, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 2, .external_lex_state = 4},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 2, .external_lex_state = 4},
  [159] = {.lex_state = 2, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 2, .external_lex_state = 4},
  [162] = {.lex_state = 6, .external_lex_state = 4},
  [163] = {.lex_state = 6, .external_lex_state = 4},
  [164] = {.lex_state = 0, .external_lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 4},
  [166] = {.lex_state = 4, .external_lex_state = 5},
  [167] = {.lex_state = 0, .external_lex_state = 4},
  [168] = {.lex_state = 2, .external_lex_state = 4},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 4, .external_lex_state = 4},
  [171] = {.lex_state = 0, .external_lex_state = 4},
  [172] = {.lex_state = 0, .external_lex_state = 4},
  [173] = {.lex_state = 0, .external_lex_state = 5},
  [174] = {.lex_state = 0, .external_lex_state = 4},
  [175] = {.lex_state = 4, .external_lex_state = 5},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 0, .external_lex_state = 4},
  [178] = {.lex_state = 4, .external_lex_state = 4},
  [179] = {.lex_state = 0, .external_lex_state = 4},
  [180] = {.lex_state = 0, .external_lex_state = 4},
  [181] = {.lex_state = 2, .external_lex_state = 4},
  [182] = {.lex_state = 9, .external_lex_state = 5},
  [183] = {.lex_state = 7, .external_lex_state = 4},
  [184] = {.lex_state = 4, .external_lex_state = 4},
  [185] = {.lex_state = 9, .external_lex_state = 5},
  [186] = {.lex_state = 7, .external_lex_state = 4},
  [187] = {.lex_state = 2, .external_lex_state = 4},
  [188] = {.lex_state = 2, .external_lex_state = 4},
  [189] = {.lex_state = 2, .external_lex_state = 4},
  [190] = {.lex_state = 2, .external_lex_state = 4},
  [191] = {.lex_state = 0, .external_lex_state = 4},
  [192] = {.lex_state = 4, .external_lex_state = 5},
  [193] = {.lex_state = 7, .external_lex_state = 4},
  [194] = {.lex_state = 0, .external_lex_state = 4},
  [195] = {.lex_state = 2, .external_lex_state = 4},
  [196] = {.lex_state = 0, .external_lex_state = 5},
  [197] = {.lex_state = 2, .external_lex_state = 4},
  [198] = {.lex_state = 4, .external_lex_state = 4},
  [199] = {.lex_state = 0, .external_lex_state = 5},
  [200] = {.lex_state = 2, .external_lex_state = 4},
  [201] = {.lex_state = 6, .external_lex_state = 5},
  [202] = {.lex_state = 6, .external_lex_state = 5},
  [203] = {.lex_state = 8, .external_lex_state = 5},
  [204] = {.lex_state = 0, .external_lex_state = 4},
  [205] = {.lex_state = 8, .external_lex_state = 5},
  [206] = {.lex_state = 4, .external_lex_state = 5},
  [207] = {.lex_state = 8, .external_lex_state = 5},
  [208] = {.lex_state = 0, .external_lex_state = 4},
  [209] = {.lex_state = 7, .external_lex_state = 4},
  [210] = {.lex_state = 0, .external_lex_state = 5},
  [211] = {.lex_state = 0, .external_lex_state = 4},
  [212] = {.lex_state = 7, .external_lex_state = 4},
  [213] = {.lex_state = 0, .external_lex_state = 5},
  [214] = {.lex_state = 0, .external_lex_state = 5},
  [215] = {.lex_state = 0, .external_lex_state = 5},
  [216] = {.lex_state = 0, .external_lex_state = 5},
  [217] = {.lex_state = 2, .external_lex_state = 4},
  [218] = {.lex_state = 0, .external_lex_state = 5},
  [219] = {.lex_state = 2, .external_lex_state = 4},
  [220] = {.lex_state = 2, .external_lex_state = 4},
  [221] = {.lex_state = 0, .external_lex_state = 4},
  [222] = {.lex_state = 7, .external_lex_state = 4},
  [223] = {.lex_state = 2, .external_lex_state = 4},
  [224] = {.lex_state = 0, .external_lex_state = 5},
  [225] = {.lex_state = 0, .external_lex_state = 4},
  [226] = {.lex_state = 0, .external_lex_state = 5},
  [227] = {.lex_state = 0, .external_lex_state = 5},
  [228] = {.lex_state = 0, .external_lex_state = 5},
  [229] = {.lex_state = 2, .external_lex_state = 5},
  [230] = {.lex_state = 8, .external_lex_state = 5},
  [231] = {.lex_state = 8, .external_lex_state = 5},
  [232] = {.lex_state = 0, .external_lex_state = 4},
  [233] = {.lex_state = 0, .external_lex_state = 3},
  [234] = {.lex_state = 0, .external_lex_state = 4},
  [235] = {.lex_state = 2, .external_lex_state = 5},
  [236] = {.lex_state = 0, .external_lex_state = 3},
  [237] = {.lex_state = 0, .external_lex_state = 3},
  [238] = {.lex_state = 0, .external_lex_state = 4},
  [239] = {.lex_state = 8, .external_lex_state = 5},
  [240] = {.lex_state = 0, .external_lex_state = 3},
  [241] = {.lex_state = 2, .external_lex_state = 4},
  [242] = {.lex_state = 0, .external_lex_state = 4},
  [243] = {.lex_state = 4, .external_lex_state = 4},
  [244] = {.lex_state = 7, .external_lex_state = 4},
  [245] = {.lex_state = 2, .external_lex_state = 5},
  [246] = {.lex_state = 13, .external_lex_state = 4},
  [247] = {.lex_state = 4, .external_lex_state = 4},
  [248] = {.lex_state = 0, .external_lex_state = 4},
  [249] = {.lex_state = 4, .external_lex_state = 4},
  [250] = {.lex_state = 2, .external_lex_state = 5},
  [251] = {.lex_state = 0, .external_lex_state = 4},
  [252] = {.lex_state = 13, .external_lex_state = 4},
  [253] = {.lex_state = 0, .external_lex_state = 4},
  [254] = {.lex_state = 2, .external_lex_state = 5},
  [255] = {.lex_state = 2, .external_lex_state = 5},
  [256] = {.lex_state = 0, .external_lex_state = 3},
  [257] = {.lex_state = 4, .external_lex_state = 4},
  [258] = {.lex_state = 2, .external_lex_state = 5},
  [259] = {.lex_state = 4, .external_lex_state = 4},
  [260] = {.lex_state = 4, .external_lex_state = 4},
  [261] = {.lex_state = 0, .external_lex_state = 4},
  [262] = {.lex_state = 0, .external_lex_state = 3},
  [263] = {.lex_state = 7, .external_lex_state = 5},
  [264] = {.lex_state = 7, .external_lex_state = 5},
  [265] = {.lex_state = 0, .external_lex_state = 3},
  [266] = {.lex_state = 2, .external_lex_state = 4},
  [267] = {.lex_state = 0, .external_lex_state = 3},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 7, .external_lex_state = 5},
  [270] = {.lex_state = 0, .external_lex_state = 4},
  [271] = {.lex_state = 0, .external_lex_state = 5},
  [272] = {.lex_state = 3, .external_lex_state = 4},
  [273] = {.lex_state = 2, .external_lex_state = 4},
  [274] = {.lex_state = 3, .external_lex_state = 4},
  [275] = {.lex_state = 2, .external_lex_state = 5},
  [276] = {.lex_state = 0, .external_lex_state = 5},
  [277] = {.lex_state = 0, .external_lex_state = 5},
  [278] = {.lex_state = 3, .external_lex_state = 4},
  [279] = {.lex_state = 3, .external_lex_state = 4},
  [280] = {.lex_state = 3, .external_lex_state = 4},
  [281] = {.lex_state = 0, .external_lex_state = 4},
  [282] = {.lex_state = 7, .external_lex_state = 5},
  [283] = {.lex_state = 3, .external_lex_state = 4},
  [284] = {.lex_state = 3, .external_lex_state = 4},
  [285] = {.lex_state = 3, .external_lex_state = 4},
  [286] = {.lex_state = 2, .external_lex_state = 5},
  [287] = {.lex_state = 3, .external_lex_state = 4},
  [288] = {.lex_state = 3, .external_lex_state = 4},
  [289] = {.lex_state = 2, .external_lex_state = 5},
  [290] = {.lex_state = 2, .external_lex_state = 4},
  [291] = {.lex_state = 7, .external_lex_state = 5},
  [292] = {.lex_state = 0, .external_lex_state = 5},
  [293] = {.lex_state = 3, .external_lex_state = 4},
  [294] = {.lex_state = 0, .external_lex_state = 4},
  [295] = {.lex_state = 0, .external_lex_state = 5},
  [296] = {.lex_state = 0, .external_lex_state = 4},
  [297] = {.lex_state = 14, .external_lex_state = 4},
  [298] = {.lex_state = 7, .external_lex_state = 5},
  [299] = {.lex_state = 3, .external_lex_state = 4},
  [300] = {.lex_state = 3, .external_lex_state = 4},
  [301] = {.lex_state = 3, .external_lex_state = 4},
  [302] = {.lex_state = 0, .external_lex_state = 5},
  [303] = {.lex_state = 3, .external_lex_state = 4},
  [304] = {.lex_state = 3, .external_lex_state = 4},
  [305] = {.lex_state = 3, .external_lex_state = 4},
  [306] = {.lex_state = 3, .external_lex_state = 4},
  [307] = {.lex_state = 0, .external_lex_state = 4},
  [308] = {.lex_state = 2, .external_lex_state = 5},
  [309] = {.lex_state = 3, .external_lex_state = 4},
  [310] = {.lex_state = 3, .external_lex_state = 4},
  [311] = {.lex_state = 3, .external_lex_state = 4},
  [312] = {.lex_state = 3, .external_lex_state = 4},
  [313] = {.lex_state = 8, .external_lex_state = 5},
  [314] = {.lex_state = 14, .external_lex_state = 4},
  [315] = {.lex_state = 14, .external_lex_state = 4},
  [316] = {.lex_state = 3, .external_lex_state = 4},
  [317] = {.lex_state = 14, .external_lex_state = 4},
  [318] = {.lex_state = 0, .external_lex_state = 4},
  [319] = {.lex_state = 14, .external_lex_state = 4},
  [320] = {.lex_state = 0, .external_lex_state = 4},
  [321] = {.lex_state = 14, .external_lex_state = 4},
  [322] = {.lex_state = 0, .external_lex_state = 5},
  [323] = {.lex_state = 0, .external_lex_state = 4},
  [324] = {.lex_state = 0, .external_lex_state = 5},
  [325] = {.lex_state = 0, .external_lex_state = 5},
  [326] = {.lex_state = 3, .external_lex_state = 4},
  [327] = {.lex_state = 3, .external_lex_state = 4},
  [328] = {.lex_state = 0, .external_lex_state = 4},
  [329] = {.lex_state = 0, .external_lex_state = 4},
  [330] = {.lex_state = 3, .external_lex_state = 4},
  [331] = {.lex_state = 0, .external_lex_state = 4},
  [332] = {.lex_state = 0, .external_lex_state = 4},
  [333] = {.lex_state = 3, .external_lex_state = 4},
  [334] = {.lex_state = 4, .external_lex_state = 4},
  [335] = {.lex_state = 7, .external_lex_state = 5},
  [336] = {.lex_state = 2, .external_lex_state = 5},
  [337] = {.lex_state = 2, .external_lex_state = 4},
  [338] = {.lex_state = 0, .external_lex_state = 5},
  [339] = {.lex_state = 0, .external_lex_state = 5},
  [340] = {.lex_state = 0, .external_lex_state = 4},
  [341] = {.lex_state = 0, .external_lex_state = 4},
  [342] = {.lex_state = 0, .external_lex_state = 5},
  [343] = {.lex_state = 0, .external_lex_state = 5},
  [344] = {.lex_state = 0, .external_lex_state = 5},
  [345] = {.lex_state = 3, .external_lex_state = 4},
  [346] = {.lex_state = 0, .external_lex_state = 4},
  [347] = {.lex_state = 0, .external_lex_state = 5},
  [348] = {.lex_state = 0, .external_lex_state = 5},
  [349] = {.lex_state = 2, .external_lex_state = 4},
  [350] = {.lex_state = 3, .external_lex_state = 4},
  [351] = {.lex_state = 2, .external_lex_state = 4},
  [352] = {.lex_state = 4, .external_lex_state = 4},
  [353] = {.lex_state = 0, .external_lex_state = 4},
  [354] = {.lex_state = 0, .external_lex_state = 5},
  [355] = {.lex_state = 0, .external_lex_state = 5},
  [356] = {.lex_state = 0, .external_lex_state = 5},
  [357] = {.lex_state = 0, .external_lex_state = 5},
  [358] = {.lex_state = 0, .external_lex_state = 5},
  [359] = {.lex_state = 4, .external_lex_state = 4},
  [360] = {.lex_state = 0, .external_lex_state = 5},
  [361] = {.lex_state = 0, .external_lex_state = 5},
  [362] = {.lex_state = 0, .external_lex_state = 4},
  [363] = {.lex_state = 0, .external_lex_state = 5},
  [364] = {.lex_state = 0, .external_lex_state = 4},
  [365] = {.lex_state = 0, .external_lex_state = 4},
  [366] = {.lex_state = 0, .external_lex_state = 4},
  [367] = {.lex_state = 0, .external_lex_state = 4},
  [368] = {.lex_state = 16, .external_lex_state = 4},
  [369] = {.lex_state = 0, .external_lex_state = 5},
  [370] = {.lex_state = 0, .external_lex_state = 5},
  [371] = {.lex_state = 0, .external_lex_state = 5},
  [372] = {.lex_state = 16, .external_lex_state = 4},
  [373] = {.lex_state = 4, .external_lex_state = 4},
  [374] = {.lex_state = 4, .external_lex_state = 4},
  [375] = {.lex_state = 0, .external_lex_state = 5},
  [376] = {.lex_state = 2, .external_lex_state = 4},
  [377] = {.lex_state = 16, .external_lex_state = 4},
  [378] = {.lex_state = 0, .external_lex_state = 4},
  [379] = {.lex_state = 16, .external_lex_state = 4},
  [380] = {.lex_state = 16, .external_lex_state = 4},
  [381] = {.lex_state = 0, .external_lex_state = 5},
  [382] = {.lex_state = 0, .external_lex_state = 5},
  [383] = {.lex_state = 0, .external_lex_state = 5},
  [384] = {.lex_state = 16, .external_lex_state = 4},
  [385] = {.lex_state = 0, .external_lex_state = 5},
  [386] = {.lex_state = 16, .external_lex_state = 4},
  [387] = {.lex_state = 0, .external_lex_state = 5},
  [388] = {.lex_state = 0, .external_lex_state = 5},
  [389] = {.lex_state = 0, .external_lex_state = 5},
  [390] = {.lex_state = 4, .external_lex_state = 4},
  [391] = {.lex_state = 0, .external_lex_state = 4},
  [392] = {.lex_state = 0, .external_lex_state = 5},
  [393] = {.lex_state = 0, .external_lex_state = 4},
  [394] = {.lex_state = 0, .external_lex_state = 5},
  [395] = {.lex_state = 4, .external_lex_state = 4},
  [396] = {.lex_state = 0, .external_lex_state = 5},
  [397] = {.lex_state = 0, .external_lex_state = 5},
  [398] = {.lex_state = 0, .external_lex_state = 5},
  [399] = {.lex_state = 0, .external_lex_state = 5},
  [400] = {.lex_state = 2, .external_lex_state = 4},
  [401] = {.lex_state = 3, .external_lex_state = 4},
  [402] = {.lex_state = 0, .external_lex_state = 4},
  [403] = {.lex_state = 0, .external_lex_state = 5},
  [404] = {.lex_state = 0, .external_lex_state = 5},
  [405] = {.lex_state = 4, .external_lex_state = 4},
  [406] = {.lex_state = 0, .external_lex_state = 5},
  [407] = {.lex_state = 0, .external_lex_state = 4},
  [408] = {.lex_state = 0, .external_lex_state = 5},
  [409] = {.lex_state = 0, .external_lex_state = 5},
  [410] = {.lex_state = 0, .external_lex_state = 4},
  [411] = {.lex_state = 0, .external_lex_state = 5},
  [412] = {.lex_state = 0, .external_lex_state = 5},
  [413] = {.lex_state = 4, .external_lex_state = 4},
  [414] = {.lex_state = 0, .external_lex_state = 5},
  [415] = {.lex_state = 16, .external_lex_state = 4},
  [416] = {.lex_state = 0, .external_lex_state = 4},
  [417] = {.lex_state = 0, .external_lex_state = 5},
  [418] = {.lex_state = 0, .external_lex_state = 5},
  [419] = {.lex_state = 0, .external_lex_state = 4},
  [420] = {.lex_state = 3, .external_lex_state = 4},
  [421] = {.lex_state = 0, .external_lex_state = 5},
  [422] = {.lex_state = 15, .external_lex_state = 4},
  [423] = {.lex_state = 0, .external_lex_state = 5},
  [424] = {.lex_state = 16, .external_lex_state = 4},
  [425] = {.lex_state = 0, .external_lex_state = 5},
  [426] = {.lex_state = 4, .external_lex_state = 4},
  [427] = {.lex_state = 0, .external_lex_state = 4},
  [428] = {.lex_state = 0, .external_lex_state = 4},
  [429] = {.lex_state = 0, .external_lex_state = 5},
  [430] = {.lex_state = 0, .external_lex_state = 4},
  [431] = {.lex_state = 0, .external_lex_state = 5},
  [432] = {.lex_state = 0, .external_lex_state = 5},
  [433] = {.lex_state = 0, .external_lex_state = 5},
  [434] = {.lex_state = 4, .external_lex_state = 4},
  [435] = {.lex_state = 0, .external_lex_state = 5},
  [436] = {.lex_state = 0, .external_lex_state = 4},
  [437] = {.lex_state = 0, .external_lex_state = 4},
  [438] = {.lex_state = 14, .external_lex_state = 4},
  [439] = {.lex_state = 0, .external_lex_state = 4},
  [440] = {.lex_state = 2, .external_lex_state = 4},
  [441] = {.lex_state = 4, .external_lex_state = 4},
  [442] = {.lex_state = 0, .external_lex_state = 4},
  [443] = {.lex_state = 0, .external_lex_state = 5},
  [444] = {.lex_state = 0, .external_lex_state = 5},
  [445] = {.lex_state = 4, .external_lex_state = 4},
  [446] = {.lex_state = 0, .external_lex_state = 5},
  [447] = {.lex_state = 0, .external_lex_state = 5},
  [448] = {.lex_state = 0, .external_lex_state = 4},
  [449] = {.lex_state = 0, .external_lex_state = 5},
  [450] = {.lex_state = 0, .external_lex_state = 4},
  [451] = {.lex_state = 0, .external_lex_state = 5},
  [452] = {.lex_state = 0, .external_lex_state = 5},
  [453] = {.lex_state = 0, .external_lex_state = 5},
  [454] = {.lex_state = 0, .external_lex_state = 5},
  [455] = {.lex_state = 0, .external_lex_state = 5},
  [456] = {.lex_state = 0, .external_lex_state = 5},
  [457] = {.lex_state = 0, .external_lex_state = 4},
  [458] = {.lex_state = 0, .external_lex_state = 5},
  [459] = {.lex_state = 0, .external_lex_state = 5},
  [460] = {.lex_state = 0, .external_lex_state = 5},
  [461] = {.lex_state = 0, .external_lex_state = 5},
  [462] = {.lex_state = 0, .external_lex_state = 5},
  [463] = {.lex_state = 0, .external_lex_state = 5},
  [464] = {.lex_state = 0, .external_lex_state = 5},
  [465] = {.lex_state = 0, .external_lex_state = 4},
  [466] = {.lex_state = 0, .external_lex_state = 5},
  [467] = {.lex_state = 0, .external_lex_state = 5},
  [468] = {.lex_state = 0, .external_lex_state = 4},
  [469] = {.lex_state = 0, .external_lex_state = 5},
  [470] = {.lex_state = 0, .external_lex_state = 5},
  [471] = {.lex_state = 0, .external_lex_state = 5},
  [472] = {.lex_state = 4, .external_lex_state = 4},
  [473] = {.lex_state = 0, .external_lex_state = 5},
  [474] = {.lex_state = 0, .external_lex_state = 5},
  [475] = {.lex_state = 0, .external_lex_state = 4},
  [476] = {.lex_state = 0, .external_lex_state = 5},
  [477] = {.lex_state = 0, .external_lex_state = 5},
  [478] = {.lex_state = 0, .external_lex_state = 4},
  [479] = {.lex_state = 0, .external_lex_state = 5},
  [480] = {.lex_state = 0, .external_lex_state = 5},
  [481] = {.lex_state = 0, .external_lex_state = 5},
  [482] = {.lex_state = 0, .external_lex_state = 5},
  [483] = {.lex_state = 0, .external_lex_state = 5},
  [484] = {.lex_state = 0, .external_lex_state = 5},
  [485] = {.lex_state = 0, .external_lex_state = 5},
  [486] = {.lex_state = 0, .external_lex_state = 5},
  [487] = {.lex_state = 0, .external_lex_state = 5},
  [488] = {.lex_state = 0, .external_lex_state = 4},
  [489] = {.lex_state = 4, .external_lex_state = 4},
  [490] = {.lex_state = 0, .external_lex_state = 5},
  [491] = {.lex_state = 0, .external_lex_state = 5},
  [492] = {.lex_state = 0, .external_lex_state = 5},
  [493] = {.lex_state = 2, .external_lex_state = 4},
  [494] = {.lex_state = 0, .external_lex_state = 5},
  [495] = {.lex_state = 0, .external_lex_state = 4},
  [496] = {.lex_state = 0, .external_lex_state = 5},
  [497] = {.lex_state = 0, .external_lex_state = 5},
  [498] = {.lex_state = 0, .external_lex_state = 5},
  [499] = {.lex_state = 0, .external_lex_state = 4},
  [500] = {.lex_state = 4, .external_lex_state = 4},
  [501] = {.lex_state = 0, .external_lex_state = 4},
  [502] = {.lex_state = 0, .external_lex_state = 4},
  [503] = {.lex_state = 0, .external_lex_state = 4},
  [504] = {.lex_state = 0, .external_lex_state = 5},
  [505] = {.lex_state = 0, .external_lex_state = 5},
  [506] = {.lex_state = 0, .external_lex_state = 5},
  [507] = {.lex_state = 0, .external_lex_state = 5},
  [508] = {.lex_state = 4, .external_lex_state = 4},
  [509] = {.lex_state = 0, .external_lex_state = 4},
  [510] = {.lex_state = 0, .external_lex_state = 6},
  [511] = {.lex_state = 4, .external_lex_state = 4},
  [512] = {.lex_state = 4, .external_lex_state = 4},
  [513] = {.lex_state = 0, .external_lex_state = 5},
  [514] = {.lex_state = 0, .external_lex_state = 5},
  [515] = {.lex_state = 0, .external_lex_state = 6},
  [516] = {.lex_state = 0, .external_lex_state = 5},
  [517] = {.lex_state = 4, .external_lex_state = 4},
  [518] = {.lex_state = 0, .external_lex_state = 4},
  [519] = {.lex_state = 0, .external_lex_state = 5},
  [520] = {.lex_state = 4, .external_lex_state = 4},
  [521] = {.lex_state = 0, .external_lex_state = 5},
  [522] = {.lex_state = 0, .external_lex_state = 4},
  [523] = {.lex_state = 0, .external_lex_state = 5},
  [524] = {.lex_state = 0, .external_lex_state = 5},
  [525] = {.lex_state = 0, .external_lex_state = 5},
  [526] = {.lex_state = 0, .external_lex_state = 5},
  [527] = {.lex_state = 0, .external_lex_state = 4},
  [528] = {.lex_state = 4, .external_lex_state = 4},
  [529] = {.lex_state = 4, .external_lex_state = 4},
  [530] = {.lex_state = 0, .external_lex_state = 4},
  [531] = {.lex_state = 0, .external_lex_state = 4},
  [532] = {.lex_state = 4, .external_lex_state = 4},
  [533] = {.lex_state = 0, .external_lex_state = 4},
  [534] = {.lex_state = 0, .external_lex_state = 6},
  [535] = {.lex_state = 0, .external_lex_state = 5},
  [536] = {.lex_state = 0, .external_lex_state = 6},
  [537] = {.lex_state = 0, .external_lex_state = 5},
  [538] = {.lex_state = 2, .external_lex_state = 4},
  [539] = {.lex_state = 2, .external_lex_state = 4},
  [540] = {.lex_state = 2, .external_lex_state = 4},
  [541] = {.lex_state = 0, .external_lex_state = 4},
  [542] = {.lex_state = 2, .external_lex_state = 4},
  [543] = {.lex_state = 0, .external_lex_state = 6},
  [544] = {.lex_state = 2, .external_lex_state = 4},
  [545] = {.lex_state = 0, .external_lex_state = 4},
  [546] = {.lex_state = 0, .external_lex_state = 4},
  [547] = {.lex_state = 0, .external_lex_state = 4},
  [548] = {.lex_state = 2, .external_lex_state = 4},
  [549] = {.lex_state = 0, .external_lex_state = 4},
  [550] = {.lex_state = 0, .external_lex_state = 4},
  [551] = {.lex_state = 0, .external_lex_state = 4},
  [552] = {.lex_state = 0, .external_lex_state = 4},
  [553] = {.lex_state = 0, .external_lex_state = 4},
  [554] = {.lex_state = 8, .external_lex_state = 4},
  [555] = {.lex_state = 0, .external_lex_state = 4},
  [556] = {.lex_state = 0, .external_lex_state = 4},
  [557] = {.lex_state = 0, .external_lex_state = 4},
  [558] = {.lex_state = 2, .external_lex_state = 4},
  [559] = {.lex_state = 2, .external_lex_state = 4},
  [560] = {.lex_state = 2, .external_lex_state = 4},
  [561] = {.lex_state = 0, .external_lex_state = 4},
  [562] = {.lex_state = 0, .external_lex_state = 6},
  [563] = {.lex_state = 0, .external_lex_state = 4},
  [564] = {.lex_state = 2, .external_lex_state = 4},
  [565] = {.lex_state = 0, .external_lex_state = 4},
  [566] = {.lex_state = 0, .external_lex_state = 4},
  [567] = {.lex_state = 0, .external_lex_state = 4},
  [568] = {.lex_state = 0, .external_lex_state = 4},
  [569] = {.lex_state = 0, .external_lex_state = 4},
  [570] = {.lex_state = 0, .external_lex_state = 4},
  [571] = {.lex_state = 0, .external_lex_state = 4},
  [572] = {.lex_state = 0, .external_lex_state = 4},
  [573] = {.lex_state = 2, .external_lex_state = 4},
  [574] = {.lex_state = 0, .external_lex_state = 4},
  [575] = {.lex_state = 0, .external_lex_state = 4},
  [576] = {.lex_state = 0, .external_lex_state = 4},
  [577] = {.lex_state = 0, .external_lex_state = 6},
  [578] = {.lex_state = 2, .external_lex_state = 4},
  [579] = {.lex_state = 0, .external_lex_state = 4},
  [580] = {.lex_state = 0, .external_lex_state = 6},
  [581] = {.lex_state = 0, .external_lex_state = 6},
  [582] = {.lex_state = 2, .external_lex_state = 4},
  [583] = {.lex_state = 8, .external_lex_state = 4},
  [584] = {.lex_state = 2, .external_lex_state = 4},
  [585] = {.lex_state = 0, .external_lex_state = 4},
  [586] = {.lex_state = 2, .external_lex_state = 4},
  [587] = {.lex_state = 0, .external_lex_state = 4},
  [588] = {.lex_state = 0, .external_lex_state = 4},
  [589] = {.lex_state = 0, .external_lex_state = 4},
  [590] = {.lex_state = 2, .external_lex_state = 4},
  [591] = {.lex_state = 2, .external_lex_state = 4},
  [592] = {.lex_state = 0, .external_lex_state = 6},
  [593] = {.lex_state = 2, .external_lex_state = 4},
  [594] = {.lex_state = 2, .external_lex_state = 4},
  [595] = {.lex_state = 0, .external_lex_state = 6},
  [596] = {.lex_state = 0, .external_lex_state = 6},
  [597] = {.lex_state = 0, .external_lex_state = 4},
  [598] = {.lex_state = 0, .external_lex_state = 4},
  [599] = {.lex_state = 0, .external_lex_state = 4},
  [600] = {.lex_state = 0, .external_lex_state = 4},
  [601] = {.lex_state = 0, .external_lex_state = 4},
  [602] = {.lex_state = 0, .external_lex_state = 4},
  [603] = {.lex_state = 0, .external_lex_state = 6},
  [604] = {.lex_state = 0, .external_lex_state = 6},
  [605] = {.lex_state = 0, .external_lex_state = 4},
  [606] = {.lex_state = 0, .external_lex_state = 6},
  [607] = {.lex_state = 4, .external_lex_state = 4},
  [608] = {.lex_state = 0, .external_lex_state = 6},
  [609] = {.lex_state = 0, .external_lex_state = 4},
  [610] = {.lex_state = 0, .external_lex_state = 4},
  [611] = {.lex_state = 0, .external_lex_state = 4},
  [612] = {.lex_state = 2, .external_lex_state = 4},
  [613] = {.lex_state = 2, .external_lex_state = 4},
  [614] = {.lex_state = 0, .external_lex_state = 6},
  [615] = {.lex_state = 0, .external_lex_state = 4},
  [616] = {.lex_state = 0, .external_lex_state = 4},
  [617] = {.lex_state = 0, .external_lex_state = 6},
  [618] = {.lex_state = 0, .external_lex_state = 4},
  [619] = {.lex_state = 0, .external_lex_state = 4},
  [620] = {.lex_state = 0, .external_lex_state = 4},
  [621] = {.lex_state = 0, .external_lex_state = 4},
  [622] = {.lex_state = 0, .external_lex_state = 4},
  [623] = {.lex_state = 0, .external_lex_state = 4},
  [624] = {.lex_state = 0, .external_lex_state = 4},
  [625] = {.lex_state = 0, .external_lex_state = 4},
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
    [sym_source_file] = STATE(624),
    [sym_attribute] = STATE(318),
    [sym_module] = STATE(541),
    [aux_sym_module_repeat1] = STATE(318),
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
    STATE(235), 1,
      sym_expr_app,
    STATE(444), 1,
      sym_expr_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    STATE(563), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(37), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(443), 8,
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
    STATE(235), 1,
      sym_expr_app,
    STATE(444), 1,
      sym_expr_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    STATE(563), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(37), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(387), 8,
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
    STATE(235), 1,
      sym_expr_app,
    STATE(444), 1,
      sym_expr_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    STATE(563), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(37), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(481), 8,
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
    STATE(392), 1,
      sym_item,
    STATE(485), 1,
      sym__type_kind,
    STATE(486), 1,
      sym__type_alias,
    STATE(492), 1,
      sym__type_ctor,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(24), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(484), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(482), 6,
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
    STATE(381), 1,
      sym_item,
    STATE(485), 1,
      sym__type_kind,
    STATE(486), 1,
      sym__type_alias,
    STATE(492), 1,
      sym__type_ctor,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(24), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(484), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(482), 6,
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
    STATE(369), 1,
      sym_item,
    STATE(485), 1,
      sym__type_kind,
    STATE(486), 1,
      sym__type_alias,
    STATE(492), 1,
      sym__type_ctor,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(24), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(484), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(482), 6,
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
    STATE(396), 1,
      sym_item,
    STATE(485), 1,
      sym__type_kind,
    STATE(486), 1,
      sym__type_alias,
    STATE(492), 1,
      sym__type_ctor,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(24), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(484), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(482), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [516] = 18,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(564), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [584] = 20,
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
    STATE(485), 1,
      sym__type_kind,
    STATE(486), 1,
      sym__type_alias,
    STATE(492), 1,
      sym__type_ctor,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    STATE(535), 1,
      sym_item,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(24), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(484), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(482), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
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
    STATE(32), 7,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(544), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
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
    STATE(272), 1,
      sym_expr_infix,
    STATE(304), 1,
      sym_expr_app,
    STATE(495), 1,
      aux_sym_path_repeat1,
    STATE(611), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(305), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(40), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [857] = 17,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(587), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(618), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [987] = 17,
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
    STATE(272), 1,
      sym_expr_infix,
    STATE(304), 1,
      sym_expr_app,
    STATE(495), 1,
      aux_sym_path_repeat1,
    STATE(611), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(309), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(40), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1052] = 17,
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
    STATE(235), 1,
      sym_expr_app,
    STATE(444), 1,
      sym_expr_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    STATE(563), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(458), 6,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(619), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(309), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(550), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
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
    STATE(235), 1,
      sym_expr_app,
    STATE(444), 1,
      sym_expr_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    STATE(563), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(473), 6,
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
  [1377] = 17,
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
    STATE(235), 1,
      sym_expr_app,
    STATE(444), 1,
      sym_expr_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    STATE(563), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(452), 6,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(568), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1507] = 19,
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
    STATE(485), 1,
      sym__type_kind,
    STATE(486), 1,
      sym__type_alias,
    STATE(492), 1,
      sym__type_ctor,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(75), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(43), 3,
      anon_sym_infix,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(484), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(514), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [1576] = 17,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(609), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1641] = 17,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(305), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1706] = 17,
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
    STATE(235), 1,
      sym_expr_app,
    STATE(444), 1,
      sym_expr_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    STATE(563), 1,
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
    STATE(37), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
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
    STATE(272), 1,
      sym_expr_infix,
    STATE(304), 1,
      sym_expr_app,
    STATE(495), 1,
      aux_sym_path_repeat1,
    STATE(611), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(623), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(40), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1836] = 17,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(621), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1901] = 17,
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
    STATE(188), 1,
      sym_expr_app,
    STATE(272), 1,
      sym_expr_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    STATE(597), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(585), 6,
      sym__expression,
      sym_expr_typed,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym_expr_case,
    STATE(32), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1966] = 17,
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
    STATE(235), 1,
      sym_expr_app,
    STATE(444), 1,
      sym_expr_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    STATE(563), 1,
      sym__expression2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(462), 6,
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
  [2031] = 15,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 1,
      anon_sym_COLON_COLON,
    ACTIONS(111), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym_operator,
    ACTIONS(115), 1,
      sym_recur,
    STATE(190), 1,
      aux_sym_expr_infix_repeat1,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(109), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(36), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2088] = 11,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_recur,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
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
    STATE(36), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2136] = 11,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_recur,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(123), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(121), 4,
      anon_sym_RPAREN,
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
  [2184] = 11,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_int_literal_token1,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      sym_recur,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(138), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(133), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(131), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(35), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2232] = 11,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      sym_recur,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(149), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(147), 4,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(35), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2280] = 14,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      sym_operator,
    ACTIONS(157), 1,
      sym_recur,
    STATE(250), 1,
      aux_sym_expr_infix_repeat1,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(105), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(42), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2333] = 10,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      aux_sym_int_literal_token1,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      sym_recur,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(168), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(131), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(38), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2377] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_recur,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(121), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(42), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2421] = 14,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_COLON_COLON,
    ACTIONS(109), 1,
      anon_sym_DASH_GT,
    ACTIONS(177), 1,
      anon_sym_BQUOTE,
    ACTIONS(179), 1,
      sym_operator,
    ACTIONS(181), 1,
      sym_recur,
    STATE(284), 1,
      aux_sym_expr_infix_repeat1,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(45), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2473] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_recur,
    STATE(527), 1,
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
    STATE(42), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2517] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_recur,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(147), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(38), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2561] = 11,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      aux_sym_int_literal_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym_recur,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(131), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(133), 2,
      anon_sym_DASH_GT,
      sym_operator,
    ACTIONS(194), 2,
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
  [2606] = 11,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_recur,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(117), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(119), 2,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(45), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2651] = 11,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      sym_recur,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(147), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(149), 2,
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
  [2696] = 11,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_recur,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(121), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(123), 2,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(45), 8,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [2741] = 5,
    ACTIONS(209), 1,
      anon_sym_EQ,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(207), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(205), 12,
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
  [2771] = 12,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      anon_sym_where,
    ACTIONS(221), 1,
      sym_operator,
    STATE(197), 1,
      sym_path,
    STATE(220), 1,
      aux_sym_ty_infix_repeat1,
    STATE(293), 1,
      sym_where_clause,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(217), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(70), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2815] = 10,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    ACTIONS(231), 1,
      sym_operator,
    STATE(193), 1,
      sym_path,
    STATE(209), 1,
      aux_sym_ty_infix_repeat1,
    STATE(502), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(229), 4,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(67), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2854] = 10,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_recur,
    STATE(219), 1,
      sym_expr_app,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
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
  [2893] = 10,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_int_literal_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      sym_recur,
    STATE(223), 1,
      sym_expr_app,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(79), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(33), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [2932] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      sym_recur,
    STATE(308), 1,
      sym_expr_app,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(41), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [2971] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      aux_sym_int_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      sym_recur,
    STATE(289), 1,
      sym_expr_app,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(27), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(39), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [3010] = 10,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      sym_recur,
    STATE(345), 1,
      sym_expr_app,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(46), 7,
      sym__expr_atom,
      sym_expr_unit,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [3049] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(245), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(243), 8,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [3076] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(251), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
    ACTIONS(249), 8,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
  [3103] = 10,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      sym_recur,
    STATE(326), 1,
      sym_expr_app,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(99), 2,
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
  [3142] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_path,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 2,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(257), 4,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
    STATE(70), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3176] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 6,
      anon_sym_as,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(245), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [3202] = 10,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym_operator,
    STATE(203), 1,
      sym_path,
    STATE(239), 1,
      aux_sym_ty_infix_repeat1,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(227), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(229), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(89), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3240] = 8,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym_path,
    STATE(502), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(273), 5,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(61), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3274] = 8,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_path,
    STATE(457), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(271), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(273), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(62), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3308] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(283), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(281), 12,
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
  [3332] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(287), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(285), 12,
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
  [3356] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(249), 6,
      anon_sym_as,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(251), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [3382] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(291), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(289), 12,
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
  [3406] = 8,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym_path,
    STATE(502), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(295), 5,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(61), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3440] = 8,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym_path,
    STATE(502), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 5,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
    STATE(67), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3474] = 8,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_path,
    STATE(457), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(301), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(303), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(62), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3508] = 8,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_path,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(293), 2,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(295), 4,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
    STATE(74), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3542] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(307), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(305), 12,
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
  [3566] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_where,
    ACTIONS(313), 1,
      sym_operator,
    STATE(245), 1,
      sym_path,
    STATE(275), 1,
      aux_sym_ty_infix_repeat1,
    STATE(527), 1,
      aux_sym_path_repeat1,
    STATE(537), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(215), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(107), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3606] = 8,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_path,
    STATE(457), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(315), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(317), 3,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
    STATE(69), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3640] = 8,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_path,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(271), 2,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(273), 4,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
    STATE(74), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3674] = 4,
    ACTIONS(327), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(75), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(325), 12,
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
  [3700] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(332), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(330), 12,
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
  [3724] = 11,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_PIPE,
    STATE(229), 1,
      sym_ty_app,
    STATE(245), 1,
      sym_path,
    STATE(342), 1,
      aux_sym__type_ctor_repeat1,
    STATE(344), 1,
      sym_ty_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(521), 2,
      sym__ty,
      sym_ty_where,
    STATE(72), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3763] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(281), 6,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(283), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3786] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(338), 6,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(340), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3809] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(305), 6,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(307), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3832] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(342), 6,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(344), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3855] = 8,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_path,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(271), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(273), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(82), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3888] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(289), 6,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(291), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [3911] = 10,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_operator,
    STATE(264), 1,
      sym_path,
    STATE(282), 1,
      aux_sym_ty_infix_repeat1,
    STATE(499), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(227), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(96), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3948] = 11,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_PIPE,
    STATE(229), 1,
      sym_ty_app,
    STATE(245), 1,
      sym_path,
    STATE(325), 1,
      aux_sym__type_ctor_repeat1,
    STATE(344), 1,
      sym_ty_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(505), 2,
      sym__ty,
      sym_ty_where,
    STATE(72), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [3987] = 7,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym_path,
    STATE(509), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(271), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_PIPE,
    STATE(86), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4018] = 11,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_DASH_GT,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      anon_sym_where,
    ACTIONS(368), 1,
      sym_operator,
    STATE(285), 1,
      sym_path,
    STATE(293), 1,
      sym_where_clause,
    STATE(330), 1,
      aux_sym_ty_infix_repeat1,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(121), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4057] = 8,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_path,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(257), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(89), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4090] = 8,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_path,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(293), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(295), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    STATE(82), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4123] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 6,
      anon_sym_DASH_GT,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(245), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [4147] = 7,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym_path,
    STATE(509), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(301), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(86), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4177] = 8,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_path,
    STATE(499), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(96), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4209] = 8,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_path,
    STATE(499), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(271), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(93), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4241] = 10,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(542), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4277] = 10,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(593), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4313] = 8,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_path,
    STATE(499), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(293), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      sym_operator,
    STATE(93), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4345] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(249), 6,
      anon_sym_DASH_GT,
      anon_sym_where,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(251), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [4369] = 10,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(559), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4405] = 10,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(573), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4441] = 9,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      sym_operator,
    STATE(315), 1,
      sym_path,
    STATE(321), 1,
      aux_sym_ty_infix_repeat1,
    STATE(488), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    STATE(133), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4475] = 7,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym_path,
    STATE(509), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(315), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
    STATE(91), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4505] = 8,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_where,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(245), 1,
      sym_path,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(107), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4537] = 10,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(578), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4573] = 10,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(540), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4609] = 10,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(582), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4645] = 8,
    ACTIONS(273), 1,
      anon_sym_where,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    STATE(245), 1,
      sym_path,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(271), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(106), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4677] = 8,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_where,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(245), 1,
      sym_path,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(293), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(106), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4709] = 3,
    ACTIONS(410), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(408), 12,
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
  [4731] = 10,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(586), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4767] = 10,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(590), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4803] = 9,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(229), 1,
      sym_ty_app,
    STATE(245), 1,
      sym_path,
    STATE(344), 1,
      sym_ty_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(523), 2,
      sym__ty,
      sym_ty_where,
    STATE(72), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4836] = 9,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(229), 1,
      sym_ty_app,
    STATE(245), 1,
      sym_path,
    STATE(344), 1,
      sym_ty_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(449), 2,
      sym__ty,
      sym_ty_where,
    STATE(72), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4869] = 4,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 5,
      anon_sym_as,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(245), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
  [4892] = 9,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(299), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4925] = 9,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(229), 1,
      sym_ty_app,
    STATE(245), 1,
      sym_path,
    STATE(344), 1,
      sym_ty_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(506), 2,
      sym__ty,
      sym_ty_where,
    STATE(72), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [4958] = 7,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym_path,
    STATE(488), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(273), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(116), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [4987] = 9,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(274), 1,
      sym_ty_app,
    STATE(285), 1,
      sym_path,
    STATE(428), 1,
      sym_ty_infix,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(299), 2,
      sym__ty,
      sym_ty_where,
    STATE(87), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5020] = 9,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(229), 1,
      sym_ty_app,
    STATE(245), 1,
      sym_path,
    STATE(344), 1,
      sym_ty_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(519), 2,
      sym__ty,
      sym_ty_where,
    STATE(72), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5053] = 7,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym_path,
    STATE(509), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(426), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(125), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5082] = 4,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(249), 5,
      anon_sym_as,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(251), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
  [5105] = 7,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(285), 1,
      sym_path,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(295), 3,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
    STATE(122), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5134] = 7,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(285), 1,
      sym_path,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(273), 3,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
    STATE(122), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5163] = 7,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym_path,
    STATE(488), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(133), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5192] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(338), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(340), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [5213] = 7,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym_path,
    STATE(509), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(434), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(86), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5242] = 7,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(285), 1,
      sym_path,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 3,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
    STATE(121), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5271] = 9,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(548), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5304] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(289), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(291), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [5325] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(342), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(344), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [5346] = 9,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(187), 1,
      sym_ty_app,
    STATE(197), 1,
      sym_path,
    STATE(266), 1,
      sym_ty_infix,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(591), 2,
      sym__ty,
      sym_ty_where,
    STATE(48), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5379] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(281), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(283), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [5400] = 9,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(229), 1,
      sym_ty_app,
    STATE(245), 1,
      sym_path,
    STATE(344), 1,
      sym_ty_infix,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(483), 2,
      sym__ty,
      sym_ty_where,
    STATE(72), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5433] = 7,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym_path,
    STATE(488), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(295), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
    STATE(116), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [5462] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(305), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(307), 9,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [5483] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(338), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(340), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [5503] = 8,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(440), 1,
      sym__layout_end,
    STATE(350), 1,
      sym_pat_app,
    STATE(423), 1,
      sym_case_arm,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(465), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(142), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5533] = 8,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      sym__layout_end,
    STATE(350), 1,
      sym_pat_app,
    STATE(375), 1,
      sym_case_arm,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(465), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(142), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5563] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(342), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(344), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [5583] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(305), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(307), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [5603] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(281), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(283), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [5623] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(289), 5,
      anon_sym_DASH_GT,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(291), 6,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [5643] = 7,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(448), 1,
      sym_operator,
    STATE(316), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(446), 2,
      anon_sym_DASH_GT,
      anon_sym_if,
    STATE(150), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5671] = 7,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_of,
    STATE(197), 1,
      sym_path,
    STATE(457), 1,
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
  [5698] = 8,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_path,
    STATE(298), 1,
      sym_ty_app,
    STATE(338), 1,
      sym_ty_infix,
    STATE(499), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(84), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5727] = 7,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(560), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(147), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5754] = 7,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym_pat_app,
    STATE(456), 1,
      sym_case_arm,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(465), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(142), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [5781] = 7,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 1,
      sym_operator,
    STATE(440), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(161), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5808] = 9,
    ACTIONS(462), 1,
      sym_identifier,
    ACTIONS(464), 1,
      anon_sym_EQ,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      anon_sym_PIPE,
    ACTIONS(470), 1,
      anon_sym_where,
    STATE(408), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(472), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(173), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [5839] = 9,
    ACTIONS(462), 1,
      sym_identifier,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 1,
      anon_sym_where,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(476), 1,
      anon_sym_PIPE,
    STATE(398), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(478), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(148), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [5870] = 5,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(480), 3,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
    STATE(153), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5893] = 5,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(482), 3,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
    STATE(150), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5916] = 8,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      sym_identifier,
    STATE(193), 1,
      sym_path,
    STATE(222), 1,
      sym_ty_app,
    STATE(249), 1,
      sym_ty_infix,
    STATE(502), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(49), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [5945] = 5,
    ACTIONS(486), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(492), 3,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
    STATE(153), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [5968] = 7,
    ACTIONS(273), 1,
      anon_sym_of,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_path,
    STATE(457), 1,
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
  [5995] = 7,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(538), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(147), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [6022] = 8,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(249), 1,
      sym_ty_infix,
    STATE(315), 1,
      sym_path,
    STATE(317), 1,
      sym_ty_app,
    STATE(488), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(100), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6051] = 8,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_path,
    STATE(230), 1,
      sym_ty_app,
    STATE(338), 1,
      sym_ty_infix,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(60), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6080] = 7,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(539), 2,
      sym__pattern,
      sym_pat_infix,
    STATE(147), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [6107] = 5,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(504), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(159), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6129] = 7,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      sym_identifier,
    STATE(193), 1,
      sym_path,
    STATE(244), 1,
      sym_ty_app,
    STATE(502), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(68), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6155] = 5,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(506), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(159), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6177] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(251), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(249), 6,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [6197] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(245), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(243), 6,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [6217] = 7,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(285), 1,
      sym_path,
    STATE(420), 1,
      sym_ty_app,
    STATE(495), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(126), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6243] = 7,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym_path,
    STATE(438), 1,
      sym_ty_app,
    STATE(488), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(123), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6269] = 4,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(249), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(251), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6289] = 6,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_EQ,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(191), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6313] = 5,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(516), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(161), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6335] = 7,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_path,
    STATE(335), 1,
      sym_ty_app,
    STATE(499), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(92), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6361] = 5,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(518), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(245), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(243), 4,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
  [6383] = 6,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(197), 1,
      sym_path,
    STATE(457), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(143), 5,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [6407] = 5,
    ACTIONS(522), 1,
      sym_identifier,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(504), 2,
      anon_sym_EQ,
      anon_sym_DASH_GT,
    STATE(172), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6429] = 6,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_where,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(173), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
    ACTIONS(531), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_PIPE,
  [6453] = 7,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(245), 1,
      sym_path,
    STATE(336), 1,
      sym_ty_app,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(102), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6479] = 4,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(245), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6499] = 7,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_path,
    STATE(313), 1,
      sym_ty_app,
    STATE(503), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(88), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6525] = 7,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(197), 1,
      sym_path,
    STATE(241), 1,
      sym_ty_app,
    STATE(530), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(58), 4,
      sym__ty_atom,
      sym_ty_unit,
      sym_ty_parens,
      sym__ty_path,
  [6551] = 3,
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
  [6568] = 5,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(172), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6589] = 5,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(172), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6610] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(548), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(546), 5,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
  [6627] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(245), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [6646] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(548), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(546), 6,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [6663] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(550), 4,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(552), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6680] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(249), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(251), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [6699] = 3,
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
  [6716] = 6,
    ACTIONS(221), 1,
      sym_operator,
    ACTIONS(554), 1,
      anon_sym_where,
    STATE(220), 1,
      aux_sym_ty_infix_repeat1,
    STATE(293), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(215), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [6739] = 6,
    ACTIONS(107), 1,
      anon_sym_COLON_COLON,
    ACTIONS(111), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym_operator,
    STATE(190), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(105), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [6762] = 3,
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
  [6779] = 5,
    ACTIONS(111), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym_operator,
    STATE(195), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(556), 5,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [6800] = 5,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(558), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(172), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6821] = 4,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(560), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(245), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [6840] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(552), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(550), 6,
      anon_sym_COMMA,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
      sym_identifier,
  [6857] = 5,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(172), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [6878] = 5,
    ACTIONS(564), 1,
      anon_sym_BQUOTE,
    ACTIONS(567), 1,
      sym_operator,
    STATE(195), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(121), 5,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [6899] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(550), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(552), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6916] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(552), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
    ACTIONS(550), 5,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
  [6933] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(546), 4,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      sym_identifier,
    ACTIONS(548), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6950] = 3,
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
  [6966] = 4,
    ACTIONS(574), 1,
      sym_operator,
    STATE(200), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 5,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
  [6984] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(251), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [7002] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(245), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [7020] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(550), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(552), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [7036] = 4,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(179), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [7054] = 3,
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
  [7070] = 4,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(577), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(245), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_identifier,
  [7088] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(546), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(548), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [7104] = 4,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(180), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [7122] = 5,
    ACTIONS(231), 1,
      sym_operator,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(579), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7142] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(548), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_identifier,
  [7156] = 5,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    STATE(493), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(168), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [7176] = 5,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      sym_operator,
    STATE(212), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7196] = 7,
    ACTIONS(586), 1,
      anon_sym_EQ,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_where,
    STATE(271), 1,
      aux_sym_class_repeat1,
    STATE(406), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(592), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7220] = 2,
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
  [7234] = 5,
    ACTIONS(594), 1,
      sym_identifier,
    ACTIONS(598), 1,
      anon_sym_where,
    STATE(216), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(596), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7254] = 5,
    ACTIONS(600), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_where,
    STATE(216), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(603), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7274] = 5,
    ACTIONS(607), 1,
      aux_sym_int_literal_token1,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(609), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(76), 3,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
  [7294] = 7,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_where,
    ACTIONS(613), 1,
      anon_sym_EQ,
    STATE(271), 1,
      aux_sym_class_repeat1,
    STATE(388), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(615), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7318] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(121), 7,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_of,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [7332] = 4,
    ACTIONS(221), 1,
      sym_operator,
    STATE(200), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(579), 5,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
  [7350] = 4,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(194), 5,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [7368] = 5,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      sym_operator,
    STATE(209), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(227), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7388] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(117), 7,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_of,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [7402] = 7,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_where,
    ACTIONS(613), 1,
      anon_sym_EQ,
    STATE(213), 1,
      aux_sym_class_repeat1,
    STATE(388), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(615), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7426] = 5,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(401), 1,
      sym_pat_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(151), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [7446] = 5,
    ACTIONS(594), 1,
      sym_identifier,
    ACTIONS(619), 1,
      anon_sym_where,
    STATE(216), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(617), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7466] = 7,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_where,
    ACTIONS(621), 1,
      anon_sym_EQ,
    STATE(218), 1,
      aux_sym_class_repeat1,
    STATE(417), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(623), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7490] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(625), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(627), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [7506] = 6,
    ACTIONS(313), 1,
      sym_operator,
    ACTIONS(629), 1,
      anon_sym_where,
    STATE(275), 1,
      aux_sym_ty_infix_repeat1,
    STATE(537), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(215), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7527] = 5,
    ACTIONS(263), 1,
      sym_operator,
    STATE(239), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(227), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(229), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7546] = 5,
    ACTIONS(631), 1,
      sym_operator,
    STATE(231), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(257), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7565] = 4,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(588), 4,
      sym__pat_atom,
      sym_pat_unit,
      sym_pat_parens,
      sym__pat_ident,
  [7582] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(634), 1,
      anon_sym_foreign,
    ACTIONS(636), 1,
      sym__layout_end,
    STATE(429), 1,
      sym_func,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7605] = 6,
    ACTIONS(638), 1,
      sym_identifier,
    STATE(101), 1,
      sym__ty_path,
    STATE(196), 1,
      sym_path,
    STATE(509), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(322), 2,
      sym_where_member,
      sym_where_kind,
  [7626] = 6,
    ACTIONS(107), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      sym_operator,
    STATE(250), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(105), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [7647] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(634), 1,
      anon_sym_foreign,
    ACTIONS(640), 1,
      sym__layout_end,
    STATE(357), 1,
      sym_func,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7670] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(634), 1,
      anon_sym_foreign,
    ACTIONS(642), 1,
      sym__layout_end,
    STATE(447), 1,
      sym_func,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7693] = 6,
    ACTIONS(644), 1,
      sym_identifier,
    STATE(101), 1,
      sym__ty_path,
    STATE(196), 1,
      sym_path,
    STATE(509), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(339), 2,
      sym_where_member,
      sym_where_kind,
  [7714] = 5,
    ACTIONS(263), 1,
      sym_operator,
    STATE(231), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(579), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(581), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [7733] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(634), 1,
      anon_sym_foreign,
    ACTIONS(646), 1,
      sym__layout_end,
    STATE(382), 1,
      sym_func,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [7756] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 6,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_where,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [7769] = 6,
    ACTIONS(638), 1,
      sym_identifier,
    STATE(101), 1,
      sym__ty_path,
    STATE(196), 1,
      sym_path,
    STATE(509), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(339), 2,
      sym_where_member,
      sym_where_kind,
  [7790] = 4,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(648), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7807] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(255), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7822] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(550), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(552), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
  [7837] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(251), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(249), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [7854] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(648), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7867] = 6,
    ACTIONS(653), 1,
      sym_identifier,
    STATE(73), 1,
      sym__ty_path,
    STATE(184), 1,
      sym_path,
    STATE(457), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(437), 2,
      sym_where_member,
      sym_where_kind,
  [7888] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(227), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [7901] = 5,
    ACTIONS(153), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      sym_operator,
    STATE(254), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(556), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
  [7920] = 6,
    ACTIONS(655), 1,
      sym_identifier,
    STATE(73), 1,
      sym__ty_path,
    STATE(184), 1,
      sym_path,
    STATE(457), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(257), 2,
      sym_where_member,
      sym_where_kind,
  [7941] = 4,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(245), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(243), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [7958] = 6,
    ACTIONS(644), 1,
      sym_identifier,
    STATE(101), 1,
      sym__ty_path,
    STATE(196), 1,
      sym_path,
    STATE(509), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(292), 2,
      sym_where_member,
      sym_where_kind,
  [7979] = 5,
    ACTIONS(657), 1,
      anon_sym_BQUOTE,
    ACTIONS(660), 1,
      sym_operator,
    STATE(254), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(121), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
  [7998] = 3,
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
  [8013] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(634), 1,
      anon_sym_foreign,
    ACTIONS(663), 1,
      sym__layout_end,
    STATE(409), 1,
      sym_func,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8036] = 4,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(665), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8053] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(546), 2,
      anon_sym_where,
      sym_identifier,
    ACTIONS(548), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
  [8068] = 4,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(669), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(245), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_identifier,
  [8085] = 4,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(671), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8102] = 6,
    ACTIONS(655), 1,
      sym_identifier,
    STATE(73), 1,
      sym__ty_path,
    STATE(184), 1,
      sym_path,
    STATE(457), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(247), 2,
      sym_where_member,
      sym_where_kind,
  [8123] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(634), 1,
      anon_sym_foreign,
    ACTIONS(673), 1,
      sym__layout_end,
    STATE(421), 1,
      sym_func,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8146] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(546), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(548), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [8161] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(550), 2,
      anon_sym_COMMA,
      sym_operator,
    ACTIONS(552), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_identifier,
  [8176] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(634), 1,
      anon_sym_foreign,
    ACTIONS(675), 1,
      sym__layout_end,
    STATE(414), 1,
      sym_func,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8199] = 4,
    ACTIONS(554), 1,
      anon_sym_where,
    STATE(293), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(215), 4,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8216] = 7,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(634), 1,
      anon_sym_foreign,
    ACTIONS(677), 1,
      sym__layout_end,
    STATE(399), 1,
      sym_func,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8239] = 6,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(681), 1,
      anon_sym_EQ,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    ACTIONS(685), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(281), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [8260] = 3,
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
  [8275] = 6,
    ACTIONS(653), 1,
      sym_identifier,
    STATE(73), 1,
      sym__ty_path,
    STATE(184), 1,
      sym_path,
    STATE(457), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(247), 2,
      sym_where_member,
      sym_where_kind,
  [8296] = 4,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(687), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_where,
  [8313] = 3,
    ACTIONS(107), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(105), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8328] = 7,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    ACTIONS(698), 1,
      anon_sym_module,
    STATE(395), 1,
      sym_export,
    STATE(472), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8351] = 6,
    ACTIONS(217), 1,
      anon_sym_DASH_GT,
    ACTIONS(368), 1,
      sym_operator,
    ACTIONS(700), 1,
      anon_sym_where,
    STATE(293), 1,
      sym_where_clause,
    STATE(330), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8371] = 4,
    ACTIONS(313), 1,
      sym_operator,
    STATE(286), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(579), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
  [8387] = 5,
    ACTIONS(590), 1,
      anon_sym_where,
    ACTIONS(702), 1,
      anon_sym_EQ,
    STATE(411), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(704), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8405] = 4,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(648), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [8421] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(709), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8433] = 3,
    ACTIONS(713), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(711), 4,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
      sym_identifier,
  [8447] = 3,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(546), 4,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
      sym_identifier,
  [8461] = 5,
    ACTIONS(679), 1,
      sym_identifier,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    ACTIONS(715), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(296), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [8479] = 5,
    ACTIONS(356), 1,
      sym_operator,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(579), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8497] = 3,
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
  [8511] = 6,
    ACTIONS(177), 1,
      anon_sym_BQUOTE,
    ACTIONS(179), 1,
      sym_operator,
    ACTIONS(556), 1,
      anon_sym_COLON_COLON,
    ACTIONS(717), 1,
      anon_sym_DASH_GT,
    STATE(301), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8531] = 3,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(550), 4,
      anon_sym_DASH_GT,
      anon_sym_where,
      sym_operator,
      sym_identifier,
  [8545] = 4,
    ACTIONS(719), 1,
      sym_operator,
    STATE(286), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
  [8561] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(722), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8573] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(724), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8585] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(121), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
  [8597] = 6,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(726), 1,
      sym_identifier,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      sym_import_item,
    STATE(528), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8617] = 5,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      sym_operator,
    STATE(291), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8635] = 4,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(665), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [8651] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(735), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8663] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(634), 1,
      anon_sym_foreign,
    STATE(477), 1,
      sym_func,
    STATE(496), 1,
      sym__func_type,
    STATE(497), 1,
      sym__func_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8683] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(687), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_where,
  [8695] = 5,
    ACTIONS(531), 1,
      anon_sym_EQ,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(296), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [8713] = 3,
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
  [8727] = 5,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      sym_operator,
    STATE(282), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(227), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [8745] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(743), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8757] = 3,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(745), 4,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
      sym_identifier,
  [8771] = 6,
    ACTIONS(121), 1,
      anon_sym_COLON_COLON,
    ACTIONS(123), 1,
      anon_sym_DASH_GT,
    ACTIONS(749), 1,
      anon_sym_BQUOTE,
    ACTIONS(752), 1,
      sym_operator,
    STATE(301), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8791] = 4,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(671), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [8807] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(755), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8819] = 6,
    ACTIONS(107), 1,
      anon_sym_COLON_COLON,
    ACTIONS(109), 1,
      anon_sym_DASH_GT,
    ACTIONS(177), 1,
      anon_sym_BQUOTE,
    ACTIONS(179), 1,
      sym_operator,
    STATE(284), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8839] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(757), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8851] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(759), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8863] = 6,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(698), 1,
      anon_sym_module,
    STATE(472), 1,
      sym_symbol,
    STATE(529), 1,
      sym_export,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [8883] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(117), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
      sym_operator,
  [8895] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(761), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8907] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(763), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8919] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(765), 5,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
  [8931] = 3,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(767), 4,
      anon_sym_DASH_GT,
      anon_sym_if,
      sym_operator,
      sym_identifier,
  [8945] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(257), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_operator,
  [8959] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(548), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(546), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [8973] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(552), 2,
      anon_sym_LPAREN,
      sym_identifier,
    ACTIONS(550), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [8987] = 5,
    ACTIONS(448), 1,
      sym_operator,
    ACTIONS(771), 1,
      anon_sym_DASH_GT,
    ACTIONS(773), 1,
      anon_sym_if,
    STATE(333), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9004] = 4,
    ACTIONS(394), 1,
      sym_operator,
    STATE(321), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [9019] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(775), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(75), 2,
      sym_attribute,
      aux_sym_module_repeat1,
  [9034] = 4,
    ACTIONS(777), 1,
      sym_operator,
    STATE(319), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [9049] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(769), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [9060] = 4,
    ACTIONS(394), 1,
      sym_operator,
    STATE(319), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(581), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [9075] = 4,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(665), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9090] = 5,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(726), 1,
      sym_identifier,
    STATE(489), 1,
      sym_import_item,
    STATE(528), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9107] = 4,
    ACTIONS(782), 1,
      anon_sym_PIPE,
    STATE(324), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(785), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9122] = 4,
    ACTIONS(336), 1,
      anon_sym_PIPE,
    STATE(324), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(787), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9137] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(117), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(119), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [9150] = 5,
    ACTIONS(255), 1,
      anon_sym_where,
    ACTIONS(257), 1,
      anon_sym_DASH_GT,
    ACTIONS(789), 1,
      sym_operator,
    STATE(327), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9167] = 5,
    ACTIONS(792), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_DASH_GT,
    STATE(295), 1,
      sym_fundep,
    STATE(402), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9184] = 5,
    ACTIONS(792), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_DASH_GT,
    STATE(227), 1,
      sym_fundep,
    STATE(402), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9201] = 5,
    ACTIONS(368), 1,
      sym_operator,
    ACTIONS(579), 1,
      anon_sym_where,
    ACTIONS(581), 1,
      anon_sym_DASH_GT,
    STATE(327), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9218] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(713), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [9229] = 5,
    ACTIONS(792), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_DASH_GT,
    STATE(224), 1,
      sym_fundep,
    STATE(402), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9246] = 5,
    ACTIONS(482), 1,
      anon_sym_DASH_GT,
    ACTIONS(516), 1,
      anon_sym_if,
    ACTIONS(796), 1,
      sym_operator,
    STATE(333), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9263] = 4,
    ACTIONS(799), 1,
      anon_sym_LPAREN,
    STATE(500), 1,
      sym_export_group,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(801), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9278] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 2,
      sym__layout_semicolon,
      sym__layout_end,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      sym_operator,
  [9291] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(255), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_where,
      sym_operator,
  [9302] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(769), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [9313] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(227), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [9324] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(648), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [9335] = 4,
    ACTIONS(607), 1,
      aux_sym_int_literal_token1,
    STATE(378), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(609), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
  [9350] = 5,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(196), 1,
      sym_path,
    STATE(276), 1,
      sym__ty_path,
    STATE(509), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9367] = 4,
    ACTIONS(336), 1,
      anon_sym_PIPE,
    STATE(324), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(803), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9382] = 4,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
    ACTIONS(807), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(809), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9397] = 4,
    ACTIONS(629), 1,
      anon_sym_where,
    STATE(537), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(215), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9412] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(121), 2,
      anon_sym_COLON_COLON,
      anon_sym_BQUOTE,
    ACTIONS(123), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [9425] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(747), 4,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_DASH_GT,
      sym_identifier,
  [9436] = 4,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(648), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9451] = 4,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(671), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [9466] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(747), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [9477] = 5,
    ACTIONS(446), 1,
      anon_sym_DASH_GT,
    ACTIONS(448), 1,
      sym_operator,
    ACTIONS(458), 1,
      anon_sym_if,
    STATE(316), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9494] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(713), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
      sym_identifier,
  [9505] = 4,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    STATE(405), 1,
      aux_sym_exports_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9519] = 4,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(457), 1,
      aux_sym_path_repeat1,
    STATE(500), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9533] = 4,
    ACTIONS(818), 1,
      sym__layout_semicolon,
    ACTIONS(820), 1,
      sym__layout_end,
    STATE(361), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9547] = 4,
    ACTIONS(822), 1,
      sym__layout_semicolon,
    ACTIONS(824), 1,
      sym__layout_end,
    STATE(370), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9561] = 4,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    ACTIONS(828), 1,
      sym__layout_end,
    STATE(358), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9575] = 4,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    ACTIONS(828), 1,
      sym__layout_end,
    STATE(363), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9589] = 4,
    ACTIONS(830), 1,
      sym__layout_semicolon,
    ACTIONS(833), 1,
      sym__layout_end,
    STATE(358), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9603] = 4,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    ACTIONS(837), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_export_group_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9617] = 4,
    ACTIONS(818), 1,
      sym__layout_semicolon,
    ACTIONS(839), 1,
      sym__layout_end,
    STATE(361), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9631] = 4,
    ACTIONS(841), 1,
      sym__layout_semicolon,
    ACTIONS(844), 1,
      sym__layout_end,
    STATE(361), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9645] = 4,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(457), 1,
      aux_sym_path_repeat1,
    STATE(572), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9659] = 4,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    ACTIONS(846), 1,
      sym__layout_end,
    STATE(358), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9673] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(627), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [9683] = 4,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(457), 1,
      aux_sym_path_repeat1,
    STATE(574), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9697] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(343), 1,
      sym_path,
    STATE(527), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9711] = 4,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(457), 1,
      aux_sym_path_repeat1,
    STATE(549), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9725] = 4,
    ACTIONS(848), 1,
      aux_sym_string_literal_token1,
    ACTIONS(850), 1,
      anon_sym_DQUOTE2,
    STATE(372), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(852), 2,
      sym_comment,
      aux_sym__token1,
  [9739] = 4,
    ACTIONS(55), 1,
      sym__layout_end,
    ACTIONS(822), 1,
      sym__layout_semicolon,
    STATE(385), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9753] = 4,
    ACTIONS(854), 1,
      sym__layout_semicolon,
    ACTIONS(857), 1,
      sym__layout_end,
    STATE(370), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9767] = 4,
    ACTIONS(859), 1,
      sym__layout_semicolon,
    ACTIONS(862), 1,
      sym__layout_end,
    STATE(371), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9781] = 4,
    ACTIONS(864), 1,
      aux_sym_string_literal_token1,
    ACTIONS(867), 1,
      anon_sym_DQUOTE2,
    STATE(372), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(852), 2,
      sym_comment,
      aux_sym__token1,
  [9795] = 4,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9809] = 4,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9823] = 4,
    ACTIONS(818), 1,
      sym__layout_semicolon,
    ACTIONS(878), 1,
      sym__layout_end,
    STATE(360), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9837] = 4,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 1,
      sym_operator,
    STATE(440), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9851] = 4,
    ACTIONS(848), 1,
      aux_sym_string_literal_token1,
    ACTIONS(880), 1,
      anon_sym_DQUOTE2,
    STATE(372), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(852), 2,
      sym_comment,
      aux_sym__token1,
  [9865] = 4,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(457), 1,
      aux_sym_path_repeat1,
    STATE(551), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9879] = 4,
    ACTIONS(848), 1,
      aux_sym_string_literal_token1,
    ACTIONS(882), 1,
      anon_sym_DQUOTE2,
    STATE(372), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(852), 2,
      sym_comment,
      aux_sym__token1,
  [9893] = 4,
    ACTIONS(884), 1,
      aux_sym_string_literal_token1,
    ACTIONS(886), 1,
      anon_sym_DQUOTE2,
    STATE(379), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(852), 2,
      sym_comment,
      aux_sym__token1,
  [9907] = 4,
    ACTIONS(822), 1,
      sym__layout_semicolon,
    ACTIONS(888), 1,
      sym__layout_end,
    STATE(355), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9921] = 4,
    ACTIONS(677), 1,
      sym__layout_end,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    STATE(403), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9935] = 4,
    ACTIONS(663), 1,
      sym__layout_end,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    STATE(358), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9949] = 4,
    ACTIONS(890), 1,
      aux_sym_string_literal_token1,
    ACTIONS(892), 1,
      anon_sym_DQUOTE2,
    STATE(368), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(852), 2,
      sym_comment,
      aux_sym__token1,
  [9963] = 4,
    ACTIONS(822), 1,
      sym__layout_semicolon,
    ACTIONS(894), 1,
      sym__layout_end,
    STATE(370), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [9977] = 4,
    ACTIONS(896), 1,
      aux_sym_string_literal_token1,
    ACTIONS(898), 1,
      anon_sym_DQUOTE2,
    STATE(424), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(852), 2,
      sym_comment,
      aux_sym__token1,
  [9991] = 4,
    ACTIONS(900), 1,
      sym__layout_semicolon,
    ACTIONS(902), 1,
      sym__layout_end,
    STATE(446), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10005] = 3,
    ACTIONS(586), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(592), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10017] = 4,
    ACTIONS(677), 1,
      sym__layout_end,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    STATE(358), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10031] = 4,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_import_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10045] = 4,
    ACTIONS(671), 1,
      anon_sym_DASH_GT,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10059] = 4,
    ACTIONS(822), 1,
      sym__layout_semicolon,
    ACTIONS(894), 1,
      sym__layout_end,
    STATE(432), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10073] = 4,
    ACTIONS(648), 1,
      anon_sym_DASH_GT,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10087] = 3,
    ACTIONS(914), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(916), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10099] = 4,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_exports_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10113] = 4,
    ACTIONS(57), 1,
      sym__layout_end,
    ACTIONS(822), 1,
      sym__layout_semicolon,
    STATE(433), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10127] = 4,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    ACTIONS(920), 1,
      sym__layout_end,
    STATE(358), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10141] = 3,
    ACTIONS(464), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(472), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10153] = 4,
    ACTIONS(642), 1,
      sym__layout_end,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    STATE(383), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10167] = 4,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(922), 1,
      sym_operator,
    STATE(400), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10181] = 3,
    ACTIONS(516), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(482), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [10193] = 4,
    ACTIONS(925), 1,
      sym_identifier,
    ACTIONS(927), 1,
      anon_sym_DASH_GT,
    STATE(416), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10207] = 4,
    ACTIONS(642), 1,
      sym__layout_end,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    STATE(358), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10221] = 4,
    ACTIONS(900), 1,
      sym__layout_semicolon,
    ACTIONS(929), 1,
      sym__layout_end,
    STATE(371), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10235] = 4,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    ACTIONS(933), 1,
      anon_sym_COMMA,
    STATE(405), 1,
      aux_sym_exports_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10249] = 3,
    ACTIONS(936), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(938), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10261] = 4,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(457), 1,
      aux_sym_path_repeat1,
    STATE(598), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10275] = 3,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(623), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10287] = 4,
    ACTIONS(640), 1,
      sym__layout_end,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    STATE(356), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10301] = 4,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(457), 1,
      aux_sym_path_repeat1,
    STATE(567), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10315] = 3,
    ACTIONS(940), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(942), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10327] = 4,
    ACTIONS(640), 1,
      sym__layout_end,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    STATE(358), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10341] = 4,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10355] = 4,
    ACTIONS(636), 1,
      sym__layout_end,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    STATE(435), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10369] = 4,
    ACTIONS(946), 1,
      aux_sym_string_literal_token1,
    ACTIONS(948), 1,
      anon_sym_DQUOTE2,
    STATE(377), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(852), 2,
      sym_comment,
      aux_sym__token1,
  [10383] = 4,
    ACTIONS(603), 1,
      anon_sym_DASH_GT,
    ACTIONS(950), 1,
      sym_identifier,
    STATE(416), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10397] = 3,
    ACTIONS(613), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(615), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10409] = 3,
    ACTIONS(953), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(955), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10421] = 4,
    ACTIONS(957), 1,
      anon_sym_EQ,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    STATE(605), 1,
      sym_exports,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10435] = 3,
    ACTIONS(255), 1,
      anon_sym_where,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 2,
      anon_sym_DASH_GT,
      sym_operator,
  [10447] = 4,
    ACTIONS(646), 1,
      sym__layout_end,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    STATE(389), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10461] = 4,
    ACTIONS(961), 1,
      sym_identifier,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    ACTIONS(965), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10475] = 4,
    ACTIONS(818), 1,
      sym__layout_semicolon,
    ACTIONS(967), 1,
      sym__layout_end,
    STATE(354), 1,
      aux_sym_expr_case_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10489] = 4,
    ACTIONS(848), 1,
      aux_sym_string_literal_token1,
    ACTIONS(969), 1,
      anon_sym_DQUOTE2,
    STATE(372), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(852), 2,
      sym_comment,
      aux_sym__token1,
  [10503] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(785), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
  [10513] = 4,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_import_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10527] = 4,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(442), 1,
      sym_path,
    STATE(457), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10541] = 4,
    ACTIONS(215), 1,
      anon_sym_DASH_GT,
    ACTIONS(700), 1,
      anon_sym_where,
    STATE(293), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10555] = 4,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    ACTIONS(975), 1,
      sym__layout_end,
    STATE(397), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10569] = 4,
    ACTIONS(977), 1,
      sym_identifier,
    STATE(413), 1,
      sym__attr_body,
    STATE(613), 1,
      sym__attr_value,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10583] = 3,
    ACTIONS(979), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(981), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10595] = 4,
    ACTIONS(822), 1,
      sym__layout_semicolon,
    ACTIONS(983), 1,
      sym__layout_end,
    STATE(370), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10609] = 4,
    ACTIONS(822), 1,
      sym__layout_semicolon,
    ACTIONS(888), 1,
      sym__layout_end,
    STATE(370), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10623] = 4,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    ACTIONS(987), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_export_group_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10637] = 4,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    ACTIONS(975), 1,
      sym__layout_end,
    STATE(358), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10651] = 4,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(419), 1,
      sym_path,
    STATE(457), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10665] = 4,
    ACTIONS(665), 1,
      anon_sym_DASH_GT,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10679] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(257), 3,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      sym_operator,
  [10689] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(572), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [10699] = 4,
    ACTIONS(460), 1,
      sym_operator,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      aux_sym_pat_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10713] = 4,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      aux_sym_import_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10727] = 4,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    ACTIONS(992), 1,
      anon_sym_EQ,
    STATE(615), 1,
      sym_exports,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10741] = 4,
    ACTIONS(900), 1,
      sym__layout_semicolon,
    ACTIONS(994), 1,
      sym__layout_end,
    STATE(404), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10755] = 3,
    ACTIONS(107), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(105), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10767] = 4,
    ACTIONS(837), 1,
      anon_sym_COMMA,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_export_group_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10781] = 4,
    ACTIONS(900), 1,
      sym__layout_semicolon,
    ACTIONS(998), 1,
      sym__layout_end,
    STATE(371), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10795] = 4,
    ACTIONS(663), 1,
      sym__layout_end,
    ACTIONS(826), 1,
      sym__layout_semicolon,
    STATE(412), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10809] = 3,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    STATE(507), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10820] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1002), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10829] = 3,
    ACTIONS(977), 1,
      sym_identifier,
    STATE(108), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10840] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1004), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10849] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1006), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10858] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1008), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10867] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1010), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10876] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(765), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10885] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(844), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10894] = 3,
    ACTIONS(1012), 1,
      sym_identifier,
    STATE(468), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10905] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1014), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10914] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1016), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10923] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1018), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10932] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(763), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10941] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(761), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10950] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1020), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10959] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1022), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10968] = 3,
    ACTIONS(1024), 1,
      anon_sym_DASH_GT,
    ACTIONS(1026), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [10979] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(759), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10988] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1028), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [10997] = 3,
    ACTIONS(1030), 1,
      sym_identifier,
    STATE(468), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11008] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1033), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11017] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1035), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11026] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1037), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11035] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(801), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11044] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(757), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11053] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1039), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11062] = 3,
    ACTIONS(977), 1,
      sym_identifier,
    STATE(508), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11073] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(938), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11082] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(833), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11091] = 3,
    ACTIONS(1041), 1,
      sym_identifier,
    ACTIONS(1043), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11102] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1045), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11111] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(755), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11120] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(862), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11129] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1047), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11138] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(743), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11147] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1049), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11156] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1051), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11165] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1051), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11174] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(592), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11183] = 3,
    ACTIONS(1053), 1,
      sym_identifier,
    STATE(468), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11194] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(904), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11203] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(722), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11212] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(916), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11221] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1051), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11230] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(516), 2,
      anon_sym_RPAREN,
      sym_operator,
  [11239] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(724), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11248] = 3,
    ACTIONS(1055), 1,
      sym_identifier,
    STATE(468), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11259] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1057), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11268] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1057), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11277] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1059), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11286] = 3,
    ACTIONS(1061), 1,
      sym_identifier,
    STATE(468), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11297] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1063), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11306] = 3,
    ACTIONS(1065), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11317] = 3,
    ACTIONS(1067), 1,
      sym_identifier,
    STATE(468), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11328] = 3,
    ACTIONS(1069), 1,
      sym_identifier,
    STATE(468), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11339] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(615), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11348] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1071), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11357] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1073), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11366] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1075), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11375] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(869), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11384] = 3,
    ACTIONS(1077), 1,
      sym_identifier,
    STATE(468), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11395] = 3,
    ACTIONS(1079), 1,
      sym__layout_start,
    STATE(498), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11406] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1081), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11415] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(985), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11424] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1083), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11433] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1085), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11442] = 3,
    ACTIONS(1079), 1,
      sym__layout_start,
    STATE(490), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11453] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(709), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11462] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1004), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11471] = 3,
    ACTIONS(1087), 1,
      sym_identifier,
    STATE(226), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11482] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1089), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11491] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1091), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11500] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1093), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11509] = 3,
    ACTIONS(1095), 1,
      sym_identifier,
    STATE(425), 1,
      sym_ctor,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11520] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1097), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11529] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1099), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11538] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1101), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11547] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(955), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11556] = 3,
    ACTIONS(1103), 1,
      sym_identifier,
    STATE(468), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11567] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1105), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11576] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(931), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11585] = 3,
    ACTIONS(1107), 1,
      sym_identifier,
    STATE(468), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11596] = 3,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    STATE(525), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11607] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(1109), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11616] = 3,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    STATE(524), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11627] = 3,
    ACTIONS(1111), 1,
      sym__layout_start,
    STATE(287), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11638] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(857), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11647] = 3,
    ACTIONS(1079), 1,
      sym__layout_start,
    STATE(513), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11658] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(735), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [11667] = 2,
    ACTIONS(1113), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11675] = 2,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11683] = 2,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11691] = 2,
    ACTIONS(1119), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11699] = 2,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11707] = 2,
    ACTIONS(1123), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11715] = 2,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11723] = 2,
    ACTIONS(1127), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11731] = 2,
    ACTIONS(1129), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11739] = 2,
    ACTIONS(1131), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11747] = 2,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11755] = 2,
    ACTIONS(1135), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11763] = 2,
    ACTIONS(1137), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11771] = 2,
    ACTIONS(1139), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11779] = 2,
    ACTIONS(1141), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11787] = 2,
    ACTIONS(1143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11795] = 2,
    ACTIONS(1145), 1,
      anon_sym_RPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11803] = 2,
    ACTIONS(1147), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11811] = 2,
    ACTIONS(1149), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11819] = 2,
    ACTIONS(1151), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11827] = 2,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11835] = 2,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11843] = 2,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11851] = 2,
    ACTIONS(1157), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11859] = 2,
    ACTIONS(1159), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11867] = 2,
    ACTIONS(1161), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11875] = 2,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11883] = 2,
    ACTIONS(1165), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11891] = 2,
    ACTIONS(1167), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11899] = 2,
    ACTIONS(1169), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11907] = 2,
    ACTIONS(1171), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11915] = 2,
    ACTIONS(1173), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11923] = 2,
    ACTIONS(1175), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11931] = 2,
    ACTIONS(1177), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11939] = 2,
    ACTIONS(1179), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11947] = 2,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11955] = 2,
    ACTIONS(1183), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11963] = 2,
    ACTIONS(1185), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11971] = 2,
    ACTIONS(1187), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11979] = 2,
    ACTIONS(1189), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11987] = 2,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [11995] = 2,
    ACTIONS(1193), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12003] = 2,
    ACTIONS(1195), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12011] = 2,
    ACTIONS(1197), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12019] = 2,
    ACTIONS(1199), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12027] = 2,
    ACTIONS(1201), 1,
      anon_sym_RPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12035] = 2,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12043] = 2,
    ACTIONS(1205), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12051] = 2,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12059] = 2,
    ACTIONS(1209), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12067] = 2,
    ACTIONS(1211), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12075] = 2,
    ACTIONS(1213), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12083] = 2,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12091] = 2,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12099] = 2,
    ACTIONS(1219), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12107] = 2,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12115] = 2,
    ACTIONS(1223), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12123] = 2,
    ACTIONS(1225), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12131] = 2,
    ACTIONS(1227), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12139] = 2,
    ACTIONS(1229), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12147] = 2,
    ACTIONS(1231), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12155] = 2,
    ACTIONS(1233), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12163] = 2,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12171] = 2,
    ACTIONS(1237), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12179] = 2,
    ACTIONS(1239), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12187] = 2,
    ACTIONS(1241), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12195] = 2,
    ACTIONS(1243), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12203] = 2,
    ACTIONS(1245), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12211] = 2,
    ACTIONS(1247), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12219] = 2,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12227] = 2,
    ACTIONS(1249), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12235] = 2,
    ACTIONS(1251), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12243] = 2,
    ACTIONS(1253), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12251] = 2,
    ACTIONS(1255), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12259] = 2,
    ACTIONS(1257), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12267] = 2,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12275] = 2,
    ACTIONS(1261), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12283] = 2,
    ACTIONS(1263), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12291] = 2,
    ACTIONS(1265), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12299] = 2,
    ACTIONS(1267), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12307] = 2,
    ACTIONS(1269), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12315] = 2,
    ACTIONS(1271), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12323] = 2,
    ACTIONS(1273), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12331] = 2,
    ACTIONS(1275), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12339] = 2,
    ACTIONS(1277), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12347] = 2,
    ACTIONS(1279), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12355] = 2,
    ACTIONS(1281), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [12363] = 2,
    ACTIONS(1283), 1,
      sym_identifier,
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
  [SMALL_STATE(10)] = 584,
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
  [SMALL_STATE(25)] = 1576,
  [SMALL_STATE(26)] = 1641,
  [SMALL_STATE(27)] = 1706,
  [SMALL_STATE(28)] = 1771,
  [SMALL_STATE(29)] = 1836,
  [SMALL_STATE(30)] = 1901,
  [SMALL_STATE(31)] = 1966,
  [SMALL_STATE(32)] = 2031,
  [SMALL_STATE(33)] = 2088,
  [SMALL_STATE(34)] = 2136,
  [SMALL_STATE(35)] = 2184,
  [SMALL_STATE(36)] = 2232,
  [SMALL_STATE(37)] = 2280,
  [SMALL_STATE(38)] = 2333,
  [SMALL_STATE(39)] = 2377,
  [SMALL_STATE(40)] = 2421,
  [SMALL_STATE(41)] = 2473,
  [SMALL_STATE(42)] = 2517,
  [SMALL_STATE(43)] = 2561,
  [SMALL_STATE(44)] = 2606,
  [SMALL_STATE(45)] = 2651,
  [SMALL_STATE(46)] = 2696,
  [SMALL_STATE(47)] = 2741,
  [SMALL_STATE(48)] = 2771,
  [SMALL_STATE(49)] = 2815,
  [SMALL_STATE(50)] = 2854,
  [SMALL_STATE(51)] = 2893,
  [SMALL_STATE(52)] = 2932,
  [SMALL_STATE(53)] = 2971,
  [SMALL_STATE(54)] = 3010,
  [SMALL_STATE(55)] = 3049,
  [SMALL_STATE(56)] = 3076,
  [SMALL_STATE(57)] = 3103,
  [SMALL_STATE(58)] = 3142,
  [SMALL_STATE(59)] = 3176,
  [SMALL_STATE(60)] = 3202,
  [SMALL_STATE(61)] = 3240,
  [SMALL_STATE(62)] = 3274,
  [SMALL_STATE(63)] = 3308,
  [SMALL_STATE(64)] = 3332,
  [SMALL_STATE(65)] = 3356,
  [SMALL_STATE(66)] = 3382,
  [SMALL_STATE(67)] = 3406,
  [SMALL_STATE(68)] = 3440,
  [SMALL_STATE(69)] = 3474,
  [SMALL_STATE(70)] = 3508,
  [SMALL_STATE(71)] = 3542,
  [SMALL_STATE(72)] = 3566,
  [SMALL_STATE(73)] = 3606,
  [SMALL_STATE(74)] = 3640,
  [SMALL_STATE(75)] = 3674,
  [SMALL_STATE(76)] = 3700,
  [SMALL_STATE(77)] = 3724,
  [SMALL_STATE(78)] = 3763,
  [SMALL_STATE(79)] = 3786,
  [SMALL_STATE(80)] = 3809,
  [SMALL_STATE(81)] = 3832,
  [SMALL_STATE(82)] = 3855,
  [SMALL_STATE(83)] = 3888,
  [SMALL_STATE(84)] = 3911,
  [SMALL_STATE(85)] = 3948,
  [SMALL_STATE(86)] = 3987,
  [SMALL_STATE(87)] = 4018,
  [SMALL_STATE(88)] = 4057,
  [SMALL_STATE(89)] = 4090,
  [SMALL_STATE(90)] = 4123,
  [SMALL_STATE(91)] = 4147,
  [SMALL_STATE(92)] = 4177,
  [SMALL_STATE(93)] = 4209,
  [SMALL_STATE(94)] = 4241,
  [SMALL_STATE(95)] = 4277,
  [SMALL_STATE(96)] = 4313,
  [SMALL_STATE(97)] = 4345,
  [SMALL_STATE(98)] = 4369,
  [SMALL_STATE(99)] = 4405,
  [SMALL_STATE(100)] = 4441,
  [SMALL_STATE(101)] = 4475,
  [SMALL_STATE(102)] = 4505,
  [SMALL_STATE(103)] = 4537,
  [SMALL_STATE(104)] = 4573,
  [SMALL_STATE(105)] = 4609,
  [SMALL_STATE(106)] = 4645,
  [SMALL_STATE(107)] = 4677,
  [SMALL_STATE(108)] = 4709,
  [SMALL_STATE(109)] = 4731,
  [SMALL_STATE(110)] = 4767,
  [SMALL_STATE(111)] = 4803,
  [SMALL_STATE(112)] = 4836,
  [SMALL_STATE(113)] = 4869,
  [SMALL_STATE(114)] = 4892,
  [SMALL_STATE(115)] = 4925,
  [SMALL_STATE(116)] = 4958,
  [SMALL_STATE(117)] = 4987,
  [SMALL_STATE(118)] = 5020,
  [SMALL_STATE(119)] = 5053,
  [SMALL_STATE(120)] = 5082,
  [SMALL_STATE(121)] = 5105,
  [SMALL_STATE(122)] = 5134,
  [SMALL_STATE(123)] = 5163,
  [SMALL_STATE(124)] = 5192,
  [SMALL_STATE(125)] = 5213,
  [SMALL_STATE(126)] = 5242,
  [SMALL_STATE(127)] = 5271,
  [SMALL_STATE(128)] = 5304,
  [SMALL_STATE(129)] = 5325,
  [SMALL_STATE(130)] = 5346,
  [SMALL_STATE(131)] = 5379,
  [SMALL_STATE(132)] = 5400,
  [SMALL_STATE(133)] = 5433,
  [SMALL_STATE(134)] = 5462,
  [SMALL_STATE(135)] = 5483,
  [SMALL_STATE(136)] = 5503,
  [SMALL_STATE(137)] = 5533,
  [SMALL_STATE(138)] = 5563,
  [SMALL_STATE(139)] = 5583,
  [SMALL_STATE(140)] = 5603,
  [SMALL_STATE(141)] = 5623,
  [SMALL_STATE(142)] = 5643,
  [SMALL_STATE(143)] = 5671,
  [SMALL_STATE(144)] = 5698,
  [SMALL_STATE(145)] = 5727,
  [SMALL_STATE(146)] = 5754,
  [SMALL_STATE(147)] = 5781,
  [SMALL_STATE(148)] = 5808,
  [SMALL_STATE(149)] = 5839,
  [SMALL_STATE(150)] = 5870,
  [SMALL_STATE(151)] = 5893,
  [SMALL_STATE(152)] = 5916,
  [SMALL_STATE(153)] = 5945,
  [SMALL_STATE(154)] = 5968,
  [SMALL_STATE(155)] = 5995,
  [SMALL_STATE(156)] = 6022,
  [SMALL_STATE(157)] = 6051,
  [SMALL_STATE(158)] = 6080,
  [SMALL_STATE(159)] = 6107,
  [SMALL_STATE(160)] = 6129,
  [SMALL_STATE(161)] = 6155,
  [SMALL_STATE(162)] = 6177,
  [SMALL_STATE(163)] = 6197,
  [SMALL_STATE(164)] = 6217,
  [SMALL_STATE(165)] = 6243,
  [SMALL_STATE(166)] = 6269,
  [SMALL_STATE(167)] = 6289,
  [SMALL_STATE(168)] = 6313,
  [SMALL_STATE(169)] = 6335,
  [SMALL_STATE(170)] = 6361,
  [SMALL_STATE(171)] = 6383,
  [SMALL_STATE(172)] = 6407,
  [SMALL_STATE(173)] = 6429,
  [SMALL_STATE(174)] = 6453,
  [SMALL_STATE(175)] = 6479,
  [SMALL_STATE(176)] = 6499,
  [SMALL_STATE(177)] = 6525,
  [SMALL_STATE(178)] = 6551,
  [SMALL_STATE(179)] = 6568,
  [SMALL_STATE(180)] = 6589,
  [SMALL_STATE(181)] = 6610,
  [SMALL_STATE(182)] = 6627,
  [SMALL_STATE(183)] = 6646,
  [SMALL_STATE(184)] = 6663,
  [SMALL_STATE(185)] = 6680,
  [SMALL_STATE(186)] = 6699,
  [SMALL_STATE(187)] = 6716,
  [SMALL_STATE(188)] = 6739,
  [SMALL_STATE(189)] = 6762,
  [SMALL_STATE(190)] = 6779,
  [SMALL_STATE(191)] = 6800,
  [SMALL_STATE(192)] = 6821,
  [SMALL_STATE(193)] = 6840,
  [SMALL_STATE(194)] = 6857,
  [SMALL_STATE(195)] = 6878,
  [SMALL_STATE(196)] = 6899,
  [SMALL_STATE(197)] = 6916,
  [SMALL_STATE(198)] = 6933,
  [SMALL_STATE(199)] = 6950,
  [SMALL_STATE(200)] = 6966,
  [SMALL_STATE(201)] = 6984,
  [SMALL_STATE(202)] = 7002,
  [SMALL_STATE(203)] = 7020,
  [SMALL_STATE(204)] = 7036,
  [SMALL_STATE(205)] = 7054,
  [SMALL_STATE(206)] = 7070,
  [SMALL_STATE(207)] = 7088,
  [SMALL_STATE(208)] = 7104,
  [SMALL_STATE(209)] = 7122,
  [SMALL_STATE(210)] = 7142,
  [SMALL_STATE(211)] = 7156,
  [SMALL_STATE(212)] = 7176,
  [SMALL_STATE(213)] = 7196,
  [SMALL_STATE(214)] = 7220,
  [SMALL_STATE(215)] = 7234,
  [SMALL_STATE(216)] = 7254,
  [SMALL_STATE(217)] = 7274,
  [SMALL_STATE(218)] = 7294,
  [SMALL_STATE(219)] = 7318,
  [SMALL_STATE(220)] = 7332,
  [SMALL_STATE(221)] = 7350,
  [SMALL_STATE(222)] = 7368,
  [SMALL_STATE(223)] = 7388,
  [SMALL_STATE(224)] = 7402,
  [SMALL_STATE(225)] = 7426,
  [SMALL_STATE(226)] = 7446,
  [SMALL_STATE(227)] = 7466,
  [SMALL_STATE(228)] = 7490,
  [SMALL_STATE(229)] = 7506,
  [SMALL_STATE(230)] = 7527,
  [SMALL_STATE(231)] = 7546,
  [SMALL_STATE(232)] = 7565,
  [SMALL_STATE(233)] = 7582,
  [SMALL_STATE(234)] = 7605,
  [SMALL_STATE(235)] = 7626,
  [SMALL_STATE(236)] = 7647,
  [SMALL_STATE(237)] = 7670,
  [SMALL_STATE(238)] = 7693,
  [SMALL_STATE(239)] = 7714,
  [SMALL_STATE(240)] = 7733,
  [SMALL_STATE(241)] = 7756,
  [SMALL_STATE(242)] = 7769,
  [SMALL_STATE(243)] = 7790,
  [SMALL_STATE(244)] = 7807,
  [SMALL_STATE(245)] = 7822,
  [SMALL_STATE(246)] = 7837,
  [SMALL_STATE(247)] = 7854,
  [SMALL_STATE(248)] = 7867,
  [SMALL_STATE(249)] = 7888,
  [SMALL_STATE(250)] = 7901,
  [SMALL_STATE(251)] = 7920,
  [SMALL_STATE(252)] = 7941,
  [SMALL_STATE(253)] = 7958,
  [SMALL_STATE(254)] = 7979,
  [SMALL_STATE(255)] = 7998,
  [SMALL_STATE(256)] = 8013,
  [SMALL_STATE(257)] = 8036,
  [SMALL_STATE(258)] = 8053,
  [SMALL_STATE(259)] = 8068,
  [SMALL_STATE(260)] = 8085,
  [SMALL_STATE(261)] = 8102,
  [SMALL_STATE(262)] = 8123,
  [SMALL_STATE(263)] = 8146,
  [SMALL_STATE(264)] = 8161,
  [SMALL_STATE(265)] = 8176,
  [SMALL_STATE(266)] = 8199,
  [SMALL_STATE(267)] = 8216,
  [SMALL_STATE(268)] = 8239,
  [SMALL_STATE(269)] = 8260,
  [SMALL_STATE(270)] = 8275,
  [SMALL_STATE(271)] = 8296,
  [SMALL_STATE(272)] = 8313,
  [SMALL_STATE(273)] = 8328,
  [SMALL_STATE(274)] = 8351,
  [SMALL_STATE(275)] = 8371,
  [SMALL_STATE(276)] = 8387,
  [SMALL_STATE(277)] = 8405,
  [SMALL_STATE(278)] = 8421,
  [SMALL_STATE(279)] = 8433,
  [SMALL_STATE(280)] = 8447,
  [SMALL_STATE(281)] = 8461,
  [SMALL_STATE(282)] = 8479,
  [SMALL_STATE(283)] = 8497,
  [SMALL_STATE(284)] = 8511,
  [SMALL_STATE(285)] = 8531,
  [SMALL_STATE(286)] = 8545,
  [SMALL_STATE(287)] = 8561,
  [SMALL_STATE(288)] = 8573,
  [SMALL_STATE(289)] = 8585,
  [SMALL_STATE(290)] = 8597,
  [SMALL_STATE(291)] = 8617,
  [SMALL_STATE(292)] = 8635,
  [SMALL_STATE(293)] = 8651,
  [SMALL_STATE(294)] = 8663,
  [SMALL_STATE(295)] = 8683,
  [SMALL_STATE(296)] = 8695,
  [SMALL_STATE(297)] = 8713,
  [SMALL_STATE(298)] = 8727,
  [SMALL_STATE(299)] = 8745,
  [SMALL_STATE(300)] = 8757,
  [SMALL_STATE(301)] = 8771,
  [SMALL_STATE(302)] = 8791,
  [SMALL_STATE(303)] = 8807,
  [SMALL_STATE(304)] = 8819,
  [SMALL_STATE(305)] = 8839,
  [SMALL_STATE(306)] = 8851,
  [SMALL_STATE(307)] = 8863,
  [SMALL_STATE(308)] = 8883,
  [SMALL_STATE(309)] = 8895,
  [SMALL_STATE(310)] = 8907,
  [SMALL_STATE(311)] = 8919,
  [SMALL_STATE(312)] = 8931,
  [SMALL_STATE(313)] = 8945,
  [SMALL_STATE(314)] = 8959,
  [SMALL_STATE(315)] = 8973,
  [SMALL_STATE(316)] = 8987,
  [SMALL_STATE(317)] = 9004,
  [SMALL_STATE(318)] = 9019,
  [SMALL_STATE(319)] = 9034,
  [SMALL_STATE(320)] = 9049,
  [SMALL_STATE(321)] = 9060,
  [SMALL_STATE(322)] = 9075,
  [SMALL_STATE(323)] = 9090,
  [SMALL_STATE(324)] = 9107,
  [SMALL_STATE(325)] = 9122,
  [SMALL_STATE(326)] = 9137,
  [SMALL_STATE(327)] = 9150,
  [SMALL_STATE(328)] = 9167,
  [SMALL_STATE(329)] = 9184,
  [SMALL_STATE(330)] = 9201,
  [SMALL_STATE(331)] = 9218,
  [SMALL_STATE(332)] = 9229,
  [SMALL_STATE(333)] = 9246,
  [SMALL_STATE(334)] = 9263,
  [SMALL_STATE(335)] = 9278,
  [SMALL_STATE(336)] = 9291,
  [SMALL_STATE(337)] = 9302,
  [SMALL_STATE(338)] = 9313,
  [SMALL_STATE(339)] = 9324,
  [SMALL_STATE(340)] = 9335,
  [SMALL_STATE(341)] = 9350,
  [SMALL_STATE(342)] = 9367,
  [SMALL_STATE(343)] = 9382,
  [SMALL_STATE(344)] = 9397,
  [SMALL_STATE(345)] = 9412,
  [SMALL_STATE(346)] = 9425,
  [SMALL_STATE(347)] = 9436,
  [SMALL_STATE(348)] = 9451,
  [SMALL_STATE(349)] = 9466,
  [SMALL_STATE(350)] = 9477,
  [SMALL_STATE(351)] = 9494,
  [SMALL_STATE(352)] = 9505,
  [SMALL_STATE(353)] = 9519,
  [SMALL_STATE(354)] = 9533,
  [SMALL_STATE(355)] = 9547,
  [SMALL_STATE(356)] = 9561,
  [SMALL_STATE(357)] = 9575,
  [SMALL_STATE(358)] = 9589,
  [SMALL_STATE(359)] = 9603,
  [SMALL_STATE(360)] = 9617,
  [SMALL_STATE(361)] = 9631,
  [SMALL_STATE(362)] = 9645,
  [SMALL_STATE(363)] = 9659,
  [SMALL_STATE(364)] = 9673,
  [SMALL_STATE(365)] = 9683,
  [SMALL_STATE(366)] = 9697,
  [SMALL_STATE(367)] = 9711,
  [SMALL_STATE(368)] = 9725,
  [SMALL_STATE(369)] = 9739,
  [SMALL_STATE(370)] = 9753,
  [SMALL_STATE(371)] = 9767,
  [SMALL_STATE(372)] = 9781,
  [SMALL_STATE(373)] = 9795,
  [SMALL_STATE(374)] = 9809,
  [SMALL_STATE(375)] = 9823,
  [SMALL_STATE(376)] = 9837,
  [SMALL_STATE(377)] = 9851,
  [SMALL_STATE(378)] = 9865,
  [SMALL_STATE(379)] = 9879,
  [SMALL_STATE(380)] = 9893,
  [SMALL_STATE(381)] = 9907,
  [SMALL_STATE(382)] = 9921,
  [SMALL_STATE(383)] = 9935,
  [SMALL_STATE(384)] = 9949,
  [SMALL_STATE(385)] = 9963,
  [SMALL_STATE(386)] = 9977,
  [SMALL_STATE(387)] = 9991,
  [SMALL_STATE(388)] = 10005,
  [SMALL_STATE(389)] = 10017,
  [SMALL_STATE(390)] = 10031,
  [SMALL_STATE(391)] = 10045,
  [SMALL_STATE(392)] = 10059,
  [SMALL_STATE(393)] = 10073,
  [SMALL_STATE(394)] = 10087,
  [SMALL_STATE(395)] = 10099,
  [SMALL_STATE(396)] = 10113,
  [SMALL_STATE(397)] = 10127,
  [SMALL_STATE(398)] = 10141,
  [SMALL_STATE(399)] = 10153,
  [SMALL_STATE(400)] = 10167,
  [SMALL_STATE(401)] = 10181,
  [SMALL_STATE(402)] = 10193,
  [SMALL_STATE(403)] = 10207,
  [SMALL_STATE(404)] = 10221,
  [SMALL_STATE(405)] = 10235,
  [SMALL_STATE(406)] = 10249,
  [SMALL_STATE(407)] = 10261,
  [SMALL_STATE(408)] = 10275,
  [SMALL_STATE(409)] = 10287,
  [SMALL_STATE(410)] = 10301,
  [SMALL_STATE(411)] = 10315,
  [SMALL_STATE(412)] = 10327,
  [SMALL_STATE(413)] = 10341,
  [SMALL_STATE(414)] = 10355,
  [SMALL_STATE(415)] = 10369,
  [SMALL_STATE(416)] = 10383,
  [SMALL_STATE(417)] = 10397,
  [SMALL_STATE(418)] = 10409,
  [SMALL_STATE(419)] = 10421,
  [SMALL_STATE(420)] = 10435,
  [SMALL_STATE(421)] = 10447,
  [SMALL_STATE(422)] = 10461,
  [SMALL_STATE(423)] = 10475,
  [SMALL_STATE(424)] = 10489,
  [SMALL_STATE(425)] = 10503,
  [SMALL_STATE(426)] = 10513,
  [SMALL_STATE(427)] = 10527,
  [SMALL_STATE(428)] = 10541,
  [SMALL_STATE(429)] = 10555,
  [SMALL_STATE(430)] = 10569,
  [SMALL_STATE(431)] = 10583,
  [SMALL_STATE(432)] = 10595,
  [SMALL_STATE(433)] = 10609,
  [SMALL_STATE(434)] = 10623,
  [SMALL_STATE(435)] = 10637,
  [SMALL_STATE(436)] = 10651,
  [SMALL_STATE(437)] = 10665,
  [SMALL_STATE(438)] = 10679,
  [SMALL_STATE(439)] = 10689,
  [SMALL_STATE(440)] = 10699,
  [SMALL_STATE(441)] = 10713,
  [SMALL_STATE(442)] = 10727,
  [SMALL_STATE(443)] = 10741,
  [SMALL_STATE(444)] = 10755,
  [SMALL_STATE(445)] = 10767,
  [SMALL_STATE(446)] = 10781,
  [SMALL_STATE(447)] = 10795,
  [SMALL_STATE(448)] = 10809,
  [SMALL_STATE(449)] = 10820,
  [SMALL_STATE(450)] = 10829,
  [SMALL_STATE(451)] = 10840,
  [SMALL_STATE(452)] = 10849,
  [SMALL_STATE(453)] = 10858,
  [SMALL_STATE(454)] = 10867,
  [SMALL_STATE(455)] = 10876,
  [SMALL_STATE(456)] = 10885,
  [SMALL_STATE(457)] = 10894,
  [SMALL_STATE(458)] = 10905,
  [SMALL_STATE(459)] = 10914,
  [SMALL_STATE(460)] = 10923,
  [SMALL_STATE(461)] = 10932,
  [SMALL_STATE(462)] = 10941,
  [SMALL_STATE(463)] = 10950,
  [SMALL_STATE(464)] = 10959,
  [SMALL_STATE(465)] = 10968,
  [SMALL_STATE(466)] = 10979,
  [SMALL_STATE(467)] = 10988,
  [SMALL_STATE(468)] = 10997,
  [SMALL_STATE(469)] = 11008,
  [SMALL_STATE(470)] = 11017,
  [SMALL_STATE(471)] = 11026,
  [SMALL_STATE(472)] = 11035,
  [SMALL_STATE(473)] = 11044,
  [SMALL_STATE(474)] = 11053,
  [SMALL_STATE(475)] = 11062,
  [SMALL_STATE(476)] = 11073,
  [SMALL_STATE(477)] = 11082,
  [SMALL_STATE(478)] = 11091,
  [SMALL_STATE(479)] = 11102,
  [SMALL_STATE(480)] = 11111,
  [SMALL_STATE(481)] = 11120,
  [SMALL_STATE(482)] = 11129,
  [SMALL_STATE(483)] = 11138,
  [SMALL_STATE(484)] = 11147,
  [SMALL_STATE(485)] = 11156,
  [SMALL_STATE(486)] = 11165,
  [SMALL_STATE(487)] = 11174,
  [SMALL_STATE(488)] = 11183,
  [SMALL_STATE(489)] = 11194,
  [SMALL_STATE(490)] = 11203,
  [SMALL_STATE(491)] = 11212,
  [SMALL_STATE(492)] = 11221,
  [SMALL_STATE(493)] = 11230,
  [SMALL_STATE(494)] = 11239,
  [SMALL_STATE(495)] = 11248,
  [SMALL_STATE(496)] = 11259,
  [SMALL_STATE(497)] = 11268,
  [SMALL_STATE(498)] = 11277,
  [SMALL_STATE(499)] = 11286,
  [SMALL_STATE(500)] = 11297,
  [SMALL_STATE(501)] = 11306,
  [SMALL_STATE(502)] = 11317,
  [SMALL_STATE(503)] = 11328,
  [SMALL_STATE(504)] = 11339,
  [SMALL_STATE(505)] = 11348,
  [SMALL_STATE(506)] = 11357,
  [SMALL_STATE(507)] = 11366,
  [SMALL_STATE(508)] = 11375,
  [SMALL_STATE(509)] = 11384,
  [SMALL_STATE(510)] = 11395,
  [SMALL_STATE(511)] = 11406,
  [SMALL_STATE(512)] = 11415,
  [SMALL_STATE(513)] = 11424,
  [SMALL_STATE(514)] = 11433,
  [SMALL_STATE(515)] = 11442,
  [SMALL_STATE(516)] = 11453,
  [SMALL_STATE(517)] = 11462,
  [SMALL_STATE(518)] = 11471,
  [SMALL_STATE(519)] = 11482,
  [SMALL_STATE(520)] = 11491,
  [SMALL_STATE(521)] = 11500,
  [SMALL_STATE(522)] = 11509,
  [SMALL_STATE(523)] = 11520,
  [SMALL_STATE(524)] = 11529,
  [SMALL_STATE(525)] = 11538,
  [SMALL_STATE(526)] = 11547,
  [SMALL_STATE(527)] = 11556,
  [SMALL_STATE(528)] = 11567,
  [SMALL_STATE(529)] = 11576,
  [SMALL_STATE(530)] = 11585,
  [SMALL_STATE(531)] = 11596,
  [SMALL_STATE(532)] = 11607,
  [SMALL_STATE(533)] = 11616,
  [SMALL_STATE(534)] = 11627,
  [SMALL_STATE(535)] = 11638,
  [SMALL_STATE(536)] = 11647,
  [SMALL_STATE(537)] = 11658,
  [SMALL_STATE(538)] = 11667,
  [SMALL_STATE(539)] = 11675,
  [SMALL_STATE(540)] = 11683,
  [SMALL_STATE(541)] = 11691,
  [SMALL_STATE(542)] = 11699,
  [SMALL_STATE(543)] = 11707,
  [SMALL_STATE(544)] = 11715,
  [SMALL_STATE(545)] = 11723,
  [SMALL_STATE(546)] = 11731,
  [SMALL_STATE(547)] = 11739,
  [SMALL_STATE(548)] = 11747,
  [SMALL_STATE(549)] = 11755,
  [SMALL_STATE(550)] = 11763,
  [SMALL_STATE(551)] = 11771,
  [SMALL_STATE(552)] = 11779,
  [SMALL_STATE(553)] = 11787,
  [SMALL_STATE(554)] = 11795,
  [SMALL_STATE(555)] = 11803,
  [SMALL_STATE(556)] = 11811,
  [SMALL_STATE(557)] = 11819,
  [SMALL_STATE(558)] = 11827,
  [SMALL_STATE(559)] = 11835,
  [SMALL_STATE(560)] = 11843,
  [SMALL_STATE(561)] = 11851,
  [SMALL_STATE(562)] = 11859,
  [SMALL_STATE(563)] = 11867,
  [SMALL_STATE(564)] = 11875,
  [SMALL_STATE(565)] = 11883,
  [SMALL_STATE(566)] = 11891,
  [SMALL_STATE(567)] = 11899,
  [SMALL_STATE(568)] = 11907,
  [SMALL_STATE(569)] = 11915,
  [SMALL_STATE(570)] = 11923,
  [SMALL_STATE(571)] = 11931,
  [SMALL_STATE(572)] = 11939,
  [SMALL_STATE(573)] = 11947,
  [SMALL_STATE(574)] = 11955,
  [SMALL_STATE(575)] = 11963,
  [SMALL_STATE(576)] = 11971,
  [SMALL_STATE(577)] = 11979,
  [SMALL_STATE(578)] = 11987,
  [SMALL_STATE(579)] = 11995,
  [SMALL_STATE(580)] = 12003,
  [SMALL_STATE(581)] = 12011,
  [SMALL_STATE(582)] = 12019,
  [SMALL_STATE(583)] = 12027,
  [SMALL_STATE(584)] = 12035,
  [SMALL_STATE(585)] = 12043,
  [SMALL_STATE(586)] = 12051,
  [SMALL_STATE(587)] = 12059,
  [SMALL_STATE(588)] = 12067,
  [SMALL_STATE(589)] = 12075,
  [SMALL_STATE(590)] = 12083,
  [SMALL_STATE(591)] = 12091,
  [SMALL_STATE(592)] = 12099,
  [SMALL_STATE(593)] = 12107,
  [SMALL_STATE(594)] = 12115,
  [SMALL_STATE(595)] = 12123,
  [SMALL_STATE(596)] = 12131,
  [SMALL_STATE(597)] = 12139,
  [SMALL_STATE(598)] = 12147,
  [SMALL_STATE(599)] = 12155,
  [SMALL_STATE(600)] = 12163,
  [SMALL_STATE(601)] = 12171,
  [SMALL_STATE(602)] = 12179,
  [SMALL_STATE(603)] = 12187,
  [SMALL_STATE(604)] = 12195,
  [SMALL_STATE(605)] = 12203,
  [SMALL_STATE(606)] = 12211,
  [SMALL_STATE(607)] = 12219,
  [SMALL_STATE(608)] = 12227,
  [SMALL_STATE(609)] = 12235,
  [SMALL_STATE(610)] = 12243,
  [SMALL_STATE(611)] = 12251,
  [SMALL_STATE(612)] = 12259,
  [SMALL_STATE(613)] = 12267,
  [SMALL_STATE(614)] = 12275,
  [SMALL_STATE(615)] = 12283,
  [SMALL_STATE(616)] = 12291,
  [SMALL_STATE(617)] = 12299,
  [SMALL_STATE(618)] = 12307,
  [SMALL_STATE(619)] = 12315,
  [SMALL_STATE(620)] = 12323,
  [SMALL_STATE(621)] = 12331,
  [SMALL_STATE(622)] = 12339,
  [SMALL_STATE(623)] = 12347,
  [SMALL_STATE(624)] = 12355,
  [SMALL_STATE(625)] = 12363,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(55),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(12),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(83),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(83),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(386),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(35),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_app, 2, .production_id = 11),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_app, 2, .production_id = 11),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(59),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(11),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(128),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(128),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(384),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(38),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(90),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(9),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(141),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(141),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(380),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(43),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_kind, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_kind, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(163),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(105),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(113),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(103),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_app, 2, .production_id = 11),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_app, 2, .production_id = 11),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_member, 2, .production_id = 10),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_member, 2, .production_id = 10),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_member, 1, .production_id = 10),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where_member, 1, .production_id = 10),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(55),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(94),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(450),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_parens, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_parens, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_unit, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_unit, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(182),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(99),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(175),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(98),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(202),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(109),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(59),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(104),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(252),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(95),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1, .production_id = 9),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(90),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(110),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 2, .production_id = 9),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_app, 2, .production_id = 11),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pat_infix_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(279),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(145),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__func_body_repeat1, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(351),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(155),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_app, 2, .production_id = 11),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pat_infix_repeat1, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(331),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(158),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(199),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(622),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_unit, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_unit, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_parens, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_parens, 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty_path, 1, .production_id = 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty_path, 1, .production_id = 5),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_infix, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(367),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(50),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typevar, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 1),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(177),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_infix, 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_infix, 2),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(160),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, .production_id = 3),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 3),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 3),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(216),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 2),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fundep, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typevar, 5),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 5),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(176),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(261),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(407),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(53),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(328),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 12),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(238),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pat_ident, 1, .production_id = 6),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pat_ident, 1, .production_id = 6),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_infix, 2),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(174),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_do, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(169),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_where, 2),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(439),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(545),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_typed, 3),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_unit, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_unit, 2),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(410),
  [752] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(54),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 4),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lambda, 4),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_case, 5),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 6),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_case, 6),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_case, 7),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_parens, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_parens, 3),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pat_infix, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pat_infix, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [777] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(165),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2), SHIFT_REPEAT(522),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 5, .production_id = 3),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(164),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [796] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pat_infix_repeat1, 2), SHIFT_REPEAT(225),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 4, .production_id = 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(242),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2), SHIFT_REPEAT(294),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_case_repeat1, 2), SHIFT_REPEAT(146),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_case_repeat1, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(10),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2), SHIFT_REPEAT(4),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2),
  [864] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(372),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2), SHIFT_REPEAT(475),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(323),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [911] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(270),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pat_infix_repeat1, 2), SHIFT_REPEAT(211),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exports_repeat1, 2),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exports_repeat1, 2), SHIFT_REPEAT(307),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 7, .production_id = 3),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 5, .production_id = 12),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 1),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(416),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_group_repeat1, 2),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_group_repeat1, 2), SHIFT_REPEAT(552),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 3, .production_id = 9),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_arm, 5),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 12, .production_id = 3),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 11, .production_id = 3),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_arm, 3),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 10, .production_id = 12),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 10, .production_id = 3),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 9, .production_id = 12),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 9, .production_id = 3),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 8, .production_id = 12),
  [1030] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(607),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 8, .production_id = 3),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 8),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_let, 4),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 7, .production_id = 12),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 7),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixity, 1),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 4),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 1, .production_id = 4),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 3, .production_id = 8),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 2),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 5, .production_id = 3),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 5, .production_id = 7),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__infix, 5),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_group, 4),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 4, .production_id = 13),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 4, .production_id = 3),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_group, 2),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 4, .production_id = 3),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 4, .production_id = 3),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__postfix, 4),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix, 4),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_item, 1),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_group, 3),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 3),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 7),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exports, 4),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 7),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 3),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 8, .production_id = 3),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 8, .production_id = 7),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exports, 3),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 9, .production_id = 7),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 3),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exports, 2),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1281] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
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
