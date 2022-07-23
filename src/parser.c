#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 317
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 11

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
  anon_sym_BQUOTE = 24,
  anon_sym_do = 25,
  anon_sym_if = 26,
  anon_sym_then = 27,
  anon_sym_else = 28,
  anon_sym_let = 29,
  aux_sym_int_literal_token1 = 30,
  aux_sym_int_literal_token2 = 31,
  aux_sym_int_literal_token3 = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_string_literal_token1 = 34,
  anon_sym_DQUOTE2 = 35,
  sym_operator = 36,
  anon_sym_RPAREN2 = 37,
  anon_sym_SLASH = 38,
  sym_comment = 39,
  sym_recur = 40,
  aux_sym__token1 = 41,
  sym__layout_semicolon = 42,
  sym__layout_start = 43,
  sym__layout_end = 44,
  sym__slash = 45,
  sym_empty_file = 46,
  sym_source_file = 47,
  sym_attribute = 48,
  sym__attr_body = 49,
  sym__attr_value = 50,
  sym_module = 51,
  sym_item = 52,
  sym_import = 53,
  sym_fixity = 54,
  sym__prefix = 55,
  sym__infix = 56,
  sym__postfix = 57,
  sym_type = 58,
  sym__type_kind = 59,
  sym__type_alias = 60,
  sym__type_ctor = 61,
  sym_ctor = 62,
  sym_typevar = 63,
  sym_func = 64,
  sym__func_type = 65,
  sym__func_body = 66,
  sym_class = 67,
  sym_fundep = 68,
  sym_member = 69,
  sym__ty = 70,
  sym_ty_app = 71,
  sym_ty_infix = 72,
  sym__ty_atom = 73,
  sym__pat_atom = 74,
  sym__expression = 75,
  sym_expr_app = 76,
  sym_expr_infix = 77,
  sym__expr_atom = 78,
  sym_expr_parens = 79,
  sym_expr_do = 80,
  sym_expr_lambda = 81,
  sym_expr_if = 82,
  sym__expr_block = 83,
  sym__stmt = 84,
  sym_stmt_let = 85,
  sym__literal = 86,
  sym_int_literal = 87,
  sym_string_literal = 88,
  sym_symbol = 89,
  sym_path = 90,
  sym_ty_path = 91,
  aux_sym__attr_value_repeat1 = 92,
  aux_sym_module_repeat1 = 93,
  aux_sym_module_repeat2 = 94,
  aux_sym__type_alias_repeat1 = 95,
  aux_sym__type_ctor_repeat1 = 96,
  aux_sym_ctor_repeat1 = 97,
  aux_sym__func_body_repeat1 = 98,
  aux_sym_class_repeat1 = 99,
  aux_sym_class_repeat2 = 100,
  aux_sym_fundep_repeat1 = 101,
  aux_sym_ty_infix_repeat1 = 102,
  aux_sym_expr_app_repeat1 = 103,
  aux_sym_expr_infix_repeat1 = 104,
  aux_sym__expr_block_repeat1 = 105,
  aux_sym_string_literal_repeat1 = 106,
  aux_sym_path_repeat1 = 107,
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
  [sym__ty] = "_ty",
  [sym_ty_app] = "ty_app",
  [sym_ty_infix] = "ty_infix",
  [sym__ty_atom] = "_ty_atom",
  [sym__pat_atom] = "_pat_atom",
  [sym__expression] = "_expression",
  [sym_expr_app] = "expr_app",
  [sym_expr_infix] = "expr_infix",
  [sym__expr_atom] = "_expr_atom",
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
  [sym_symbol] = "symbol",
  [sym_path] = "path",
  [sym_ty_path] = "ty_path",
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
  [aux_sym_ty_infix_repeat1] = "ty_infix_repeat1",
  [aux_sym_expr_app_repeat1] = "expr_app_repeat1",
  [aux_sym_expr_infix_repeat1] = "expr_infix_repeat1",
  [aux_sym__expr_block_repeat1] = "_expr_block_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
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
  [sym__ty] = sym__ty,
  [sym_ty_app] = sym_ty_app,
  [sym_ty_infix] = sym_ty_infix,
  [sym__ty_atom] = sym__ty_atom,
  [sym__pat_atom] = sym__pat_atom,
  [sym__expression] = sym__expression,
  [sym_expr_app] = sym_expr_app,
  [sym_expr_infix] = sym_expr_infix,
  [sym__expr_atom] = sym__expr_atom,
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
  [sym_symbol] = sym_symbol,
  [sym_path] = sym_path,
  [sym_ty_path] = sym_ty_path,
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
  [aux_sym_ty_infix_repeat1] = aux_sym_ty_infix_repeat1,
  [aux_sym_expr_app_repeat1] = aux_sym_expr_app_repeat1,
  [aux_sym_expr_infix_repeat1] = aux_sym_expr_infix_repeat1,
  [aux_sym__expr_block_repeat1] = aux_sym__expr_block_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
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
  [sym__ty] = {
    .visible = false,
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
  [sym__pat_atom] = {
    .visible = false,
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
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_ty_path] = {
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
  [aux_sym_ty_infix_repeat1] = {
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
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 5, .length = 1},
  [8] = {.index = 6, .length = 1},
  [9] = {.index = 7, .length = 1},
  [10] = {.index = 2, .length = 1},
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
    {field_first, 0},
  [6] =
    {field_class, 3},
  [7] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [3] = sym_expr_do,
  },
  [10] = {
    [4] = sym_expr_do,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__expr_block, 2,
    sym__expr_block,
    sym_expr_do,
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
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(11)
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == '|') ADVANCE(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(2)
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '`') ADVANCE(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '.') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(31);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(2)
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '`') ADVANCE(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(31);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(3)
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '@') ADVANCE(13);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(5)
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ';') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(5)
      if (lookahead == ';') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(28);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(25);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(11)
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '`') ADVANCE(21);
      if (lookahead == '|') ADVANCE(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_int_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_int_literal_token3);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(28);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(31);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(35);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
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
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'x') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_recur);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_infixl);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_infixr);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_member);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_prefix);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 74:
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
  [5] = {.lex_state = 0, .external_lex_state = 4},
  [6] = {.lex_state = 2, .external_lex_state = 3},
  [7] = {.lex_state = 2, .external_lex_state = 3},
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
  [22] = {.lex_state = 2, .external_lex_state = 5},
  [23] = {.lex_state = 2, .external_lex_state = 4},
  [24] = {.lex_state = 2, .external_lex_state = 4},
  [25] = {.lex_state = 2, .external_lex_state = 4},
  [26] = {.lex_state = 2, .external_lex_state = 5},
  [27] = {.lex_state = 2, .external_lex_state = 5},
  [28] = {.lex_state = 2, .external_lex_state = 5},
  [29] = {.lex_state = 2, .external_lex_state = 5},
  [30] = {.lex_state = 3, .external_lex_state = 4},
  [31] = {.lex_state = 3, .external_lex_state = 4},
  [32] = {.lex_state = 3, .external_lex_state = 4},
  [33] = {.lex_state = 2, .external_lex_state = 4},
  [34] = {.lex_state = 3, .external_lex_state = 4},
  [35] = {.lex_state = 2, .external_lex_state = 4},
  [36] = {.lex_state = 3, .external_lex_state = 4},
  [37] = {.lex_state = 2, .external_lex_state = 4},
  [38] = {.lex_state = 0, .external_lex_state = 4},
  [39] = {.lex_state = 2, .external_lex_state = 4},
  [40] = {.lex_state = 3, .external_lex_state = 4},
  [41] = {.lex_state = 1, .external_lex_state = 4},
  [42] = {.lex_state = 1, .external_lex_state = 4},
  [43] = {.lex_state = 0, .external_lex_state = 4},
  [44] = {.lex_state = 2, .external_lex_state = 4},
  [45] = {.lex_state = 2, .external_lex_state = 4},
  [46] = {.lex_state = 1, .external_lex_state = 5},
  [47] = {.lex_state = 1, .external_lex_state = 5},
  [48] = {.lex_state = 2, .external_lex_state = 4},
  [49] = {.lex_state = 2, .external_lex_state = 4},
  [50] = {.lex_state = 2, .external_lex_state = 5},
  [51] = {.lex_state = 2, .external_lex_state = 5},
  [52] = {.lex_state = 0, .external_lex_state = 4},
  [53] = {.lex_state = 2, .external_lex_state = 5},
  [54] = {.lex_state = 2, .external_lex_state = 5},
  [55] = {.lex_state = 0, .external_lex_state = 4},
  [56] = {.lex_state = 2, .external_lex_state = 5},
  [57] = {.lex_state = 2, .external_lex_state = 5},
  [58] = {.lex_state = 2, .external_lex_state = 5},
  [59] = {.lex_state = 0, .external_lex_state = 5},
  [60] = {.lex_state = 0, .external_lex_state = 5},
  [61] = {.lex_state = 2, .external_lex_state = 5},
  [62] = {.lex_state = 2, .external_lex_state = 4},
  [63] = {.lex_state = 0, .external_lex_state = 5},
  [64] = {.lex_state = 0, .external_lex_state = 4},
  [65] = {.lex_state = 0, .external_lex_state = 4},
  [66] = {.lex_state = 2, .external_lex_state = 4},
  [67] = {.lex_state = 0, .external_lex_state = 4},
  [68] = {.lex_state = 2, .external_lex_state = 4},
  [69] = {.lex_state = 0, .external_lex_state = 4},
  [70] = {.lex_state = 2, .external_lex_state = 4},
  [71] = {.lex_state = 0, .external_lex_state = 4},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 4},
  [76] = {.lex_state = 0, .external_lex_state = 4},
  [77] = {.lex_state = 0, .external_lex_state = 5},
  [78] = {.lex_state = 0, .external_lex_state = 5},
  [79] = {.lex_state = 0, .external_lex_state = 5},
  [80] = {.lex_state = 0, .external_lex_state = 4},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 0, .external_lex_state = 4},
  [83] = {.lex_state = 0, .external_lex_state = 4},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 2, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 5},
  [87] = {.lex_state = 0, .external_lex_state = 4},
  [88] = {.lex_state = 0, .external_lex_state = 5},
  [89] = {.lex_state = 2, .external_lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 2, .external_lex_state = 4},
  [92] = {.lex_state = 0, .external_lex_state = 5},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 2, .external_lex_state = 4},
  [96] = {.lex_state = 0, .external_lex_state = 5},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 5},
  [101] = {.lex_state = 0, .external_lex_state = 5},
  [102] = {.lex_state = 0, .external_lex_state = 5},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 4},
  [106] = {.lex_state = 0, .external_lex_state = 5},
  [107] = {.lex_state = 0, .external_lex_state = 5},
  [108] = {.lex_state = 0, .external_lex_state = 5},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 2, .external_lex_state = 4},
  [111] = {.lex_state = 2, .external_lex_state = 5},
  [112] = {.lex_state = 2, .external_lex_state = 5},
  [113] = {.lex_state = 2, .external_lex_state = 5},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 2, .external_lex_state = 4},
  [116] = {.lex_state = 2, .external_lex_state = 4},
  [117] = {.lex_state = 2, .external_lex_state = 5},
  [118] = {.lex_state = 2, .external_lex_state = 5},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 4},
  [121] = {.lex_state = 0, .external_lex_state = 5},
  [122] = {.lex_state = 0, .external_lex_state = 5},
  [123] = {.lex_state = 2, .external_lex_state = 4},
  [124] = {.lex_state = 0, .external_lex_state = 5},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 5},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 2, .external_lex_state = 5},
  [132] = {.lex_state = 2, .external_lex_state = 5},
  [133] = {.lex_state = 2, .external_lex_state = 5},
  [134] = {.lex_state = 2, .external_lex_state = 5},
  [135] = {.lex_state = 0, .external_lex_state = 5},
  [136] = {.lex_state = 0, .external_lex_state = 4},
  [137] = {.lex_state = 2, .external_lex_state = 5},
  [138] = {.lex_state = 0, .external_lex_state = 5},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 3, .external_lex_state = 4},
  [145] = {.lex_state = 2, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 2, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 6, .external_lex_state = 4},
  [153] = {.lex_state = 6, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 5},
  [155] = {.lex_state = 0, .external_lex_state = 5},
  [156] = {.lex_state = 0, .external_lex_state = 5},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 0, .external_lex_state = 4},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 6, .external_lex_state = 4},
  [161] = {.lex_state = 0, .external_lex_state = 5},
  [162] = {.lex_state = 6, .external_lex_state = 4},
  [163] = {.lex_state = 6, .external_lex_state = 4},
  [164] = {.lex_state = 3, .external_lex_state = 4},
  [165] = {.lex_state = 6, .external_lex_state = 4},
  [166] = {.lex_state = 0, .external_lex_state = 4},
  [167] = {.lex_state = 0, .external_lex_state = 5},
  [168] = {.lex_state = 0, .external_lex_state = 4},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 2, .external_lex_state = 4},
  [171] = {.lex_state = 2, .external_lex_state = 4},
  [172] = {.lex_state = 2, .external_lex_state = 4},
  [173] = {.lex_state = 0, .external_lex_state = 4},
  [174] = {.lex_state = 0, .external_lex_state = 5},
  [175] = {.lex_state = 2, .external_lex_state = 4},
  [176] = {.lex_state = 2, .external_lex_state = 4},
  [177] = {.lex_state = 2, .external_lex_state = 5},
  [178] = {.lex_state = 2, .external_lex_state = 4},
  [179] = {.lex_state = 6, .external_lex_state = 4},
  [180] = {.lex_state = 0, .external_lex_state = 4},
  [181] = {.lex_state = 3, .external_lex_state = 4},
  [182] = {.lex_state = 0, .external_lex_state = 5},
  [183] = {.lex_state = 0, .external_lex_state = 4},
  [184] = {.lex_state = 0, .external_lex_state = 5},
  [185] = {.lex_state = 0, .external_lex_state = 5},
  [186] = {.lex_state = 0, .external_lex_state = 5},
  [187] = {.lex_state = 0, .external_lex_state = 5},
  [188] = {.lex_state = 2, .external_lex_state = 4},
  [189] = {.lex_state = 0, .external_lex_state = 5},
  [190] = {.lex_state = 0, .external_lex_state = 4},
  [191] = {.lex_state = 0, .external_lex_state = 5},
  [192] = {.lex_state = 0, .external_lex_state = 5},
  [193] = {.lex_state = 0, .external_lex_state = 5},
  [194] = {.lex_state = 0, .external_lex_state = 5},
  [195] = {.lex_state = 0, .external_lex_state = 5},
  [196] = {.lex_state = 0, .external_lex_state = 5},
  [197] = {.lex_state = 0, .external_lex_state = 5},
  [198] = {.lex_state = 0, .external_lex_state = 4},
  [199] = {.lex_state = 0, .external_lex_state = 5},
  [200] = {.lex_state = 0, .external_lex_state = 5},
  [201] = {.lex_state = 0, .external_lex_state = 5},
  [202] = {.lex_state = 0, .external_lex_state = 5},
  [203] = {.lex_state = 0, .external_lex_state = 5},
  [204] = {.lex_state = 0, .external_lex_state = 5},
  [205] = {.lex_state = 0, .external_lex_state = 4},
  [206] = {.lex_state = 0, .external_lex_state = 5},
  [207] = {.lex_state = 0, .external_lex_state = 5},
  [208] = {.lex_state = 0, .external_lex_state = 4},
  [209] = {.lex_state = 0, .external_lex_state = 5},
  [210] = {.lex_state = 0, .external_lex_state = 4},
  [211] = {.lex_state = 0, .external_lex_state = 5},
  [212] = {.lex_state = 0, .external_lex_state = 5},
  [213] = {.lex_state = 0, .external_lex_state = 5},
  [214] = {.lex_state = 0, .external_lex_state = 6},
  [215] = {.lex_state = 0, .external_lex_state = 5},
  [216] = {.lex_state = 0, .external_lex_state = 6},
  [217] = {.lex_state = 0, .external_lex_state = 5},
  [218] = {.lex_state = 0, .external_lex_state = 4},
  [219] = {.lex_state = 0, .external_lex_state = 5},
  [220] = {.lex_state = 0, .external_lex_state = 4},
  [221] = {.lex_state = 0, .external_lex_state = 6},
  [222] = {.lex_state = 0, .external_lex_state = 4},
  [223] = {.lex_state = 0, .external_lex_state = 5},
  [224] = {.lex_state = 0, .external_lex_state = 5},
  [225] = {.lex_state = 0, .external_lex_state = 4},
  [226] = {.lex_state = 0, .external_lex_state = 4},
  [227] = {.lex_state = 0, .external_lex_state = 5},
  [228] = {.lex_state = 0, .external_lex_state = 5},
  [229] = {.lex_state = 0, .external_lex_state = 5},
  [230] = {.lex_state = 0, .external_lex_state = 4},
  [231] = {.lex_state = 0, .external_lex_state = 5},
  [232] = {.lex_state = 0, .external_lex_state = 5},
  [233] = {.lex_state = 0, .external_lex_state = 5},
  [234] = {.lex_state = 0, .external_lex_state = 5},
  [235] = {.lex_state = 0, .external_lex_state = 4},
  [236] = {.lex_state = 0, .external_lex_state = 5},
  [237] = {.lex_state = 0, .external_lex_state = 5},
  [238] = {.lex_state = 0, .external_lex_state = 6},
  [239] = {.lex_state = 0, .external_lex_state = 5},
  [240] = {.lex_state = 0, .external_lex_state = 5},
  [241] = {.lex_state = 0, .external_lex_state = 4},
  [242] = {.lex_state = 0, .external_lex_state = 5},
  [243] = {.lex_state = 0, .external_lex_state = 5},
  [244] = {.lex_state = 0, .external_lex_state = 5},
  [245] = {.lex_state = 0, .external_lex_state = 5},
  [246] = {.lex_state = 0, .external_lex_state = 5},
  [247] = {.lex_state = 3, .external_lex_state = 4},
  [248] = {.lex_state = 0, .external_lex_state = 5},
  [249] = {.lex_state = 0, .external_lex_state = 4},
  [250] = {.lex_state = 0, .external_lex_state = 4},
  [251] = {.lex_state = 0, .external_lex_state = 5},
  [252] = {.lex_state = 0, .external_lex_state = 5},
  [253] = {.lex_state = 0, .external_lex_state = 5},
  [254] = {.lex_state = 0, .external_lex_state = 5},
  [255] = {.lex_state = 0, .external_lex_state = 5},
  [256] = {.lex_state = 0, .external_lex_state = 5},
  [257] = {.lex_state = 0, .external_lex_state = 5},
  [258] = {.lex_state = 0, .external_lex_state = 5},
  [259] = {.lex_state = 0, .external_lex_state = 5},
  [260] = {.lex_state = 2, .external_lex_state = 4},
  [261] = {.lex_state = 0, .external_lex_state = 5},
  [262] = {.lex_state = 0, .external_lex_state = 4},
  [263] = {.lex_state = 0, .external_lex_state = 5},
  [264] = {.lex_state = 0, .external_lex_state = 4},
  [265] = {.lex_state = 0, .external_lex_state = 4},
  [266] = {.lex_state = 2, .external_lex_state = 4},
  [267] = {.lex_state = 0, .external_lex_state = 4},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 0, .external_lex_state = 6},
  [270] = {.lex_state = 0, .external_lex_state = 4},
  [271] = {.lex_state = 0, .external_lex_state = 4},
  [272] = {.lex_state = 0, .external_lex_state = 4},
  [273] = {.lex_state = 0, .external_lex_state = 4},
  [274] = {.lex_state = 0, .external_lex_state = 4},
  [275] = {.lex_state = 2, .external_lex_state = 4},
  [276] = {.lex_state = 4, .external_lex_state = 4},
  [277] = {.lex_state = 0, .external_lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 6},
  [279] = {.lex_state = 0, .external_lex_state = 4},
  [280] = {.lex_state = 2, .external_lex_state = 4},
  [281] = {.lex_state = 0, .external_lex_state = 4},
  [282] = {.lex_state = 0, .external_lex_state = 6},
  [283] = {.lex_state = 0, .external_lex_state = 4},
  [284] = {.lex_state = 2, .external_lex_state = 4},
  [285] = {.lex_state = 0, .external_lex_state = 6},
  [286] = {.lex_state = 0, .external_lex_state = 4},
  [287] = {.lex_state = 0, .external_lex_state = 4},
  [288] = {.lex_state = 0, .external_lex_state = 4},
  [289] = {.lex_state = 0, .external_lex_state = 4},
  [290] = {.lex_state = 2, .external_lex_state = 4},
  [291] = {.lex_state = 0, .external_lex_state = 4},
  [292] = {.lex_state = 0, .external_lex_state = 4},
  [293] = {.lex_state = 0, .external_lex_state = 4},
  [294] = {.lex_state = 0, .external_lex_state = 4},
  [295] = {.lex_state = 2, .external_lex_state = 4},
  [296] = {.lex_state = 2, .external_lex_state = 4},
  [297] = {.lex_state = 0, .external_lex_state = 4},
  [298] = {.lex_state = 0, .external_lex_state = 4},
  [299] = {.lex_state = 0, .external_lex_state = 4},
  [300] = {.lex_state = 0, .external_lex_state = 4},
  [301] = {.lex_state = 0, .external_lex_state = 6},
  [302] = {.lex_state = 0, .external_lex_state = 6},
  [303] = {.lex_state = 0, .external_lex_state = 4},
  [304] = {.lex_state = 2, .external_lex_state = 4},
  [305] = {.lex_state = 2, .external_lex_state = 4},
  [306] = {.lex_state = 0, .external_lex_state = 6},
  [307] = {.lex_state = 0, .external_lex_state = 4},
  [308] = {.lex_state = 0, .external_lex_state = 4},
  [309] = {.lex_state = 0, .external_lex_state = 4},
  [310] = {.lex_state = 0, .external_lex_state = 6},
  [311] = {.lex_state = 0, .external_lex_state = 4},
  [312] = {.lex_state = 0, .external_lex_state = 4},
  [313] = {.lex_state = 0, .external_lex_state = 4},
  [314] = {.lex_state = 0, .external_lex_state = 4},
  [315] = {.lex_state = 0, .external_lex_state = 4},
  [316] = {.lex_state = 0, .external_lex_state = 4},
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
    [sym_source_file] = STATE(311),
    [sym_attribute] = STATE(127),
    [sym_module] = STATE(303),
    [aux_sym_module_repeat1] = STATE(127),
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
    STATE(174), 1,
      sym_item,
    STATE(251), 1,
      sym__func_body,
    STATE(252), 1,
      sym__func_type,
    STATE(253), 1,
      sym__type_ctor,
    STATE(255), 1,
      sym__type_alias,
    STATE(261), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(17), 2,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(5), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    STATE(244), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(211), 6,
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
    STATE(191), 1,
      sym_item,
    STATE(251), 1,
      sym__func_body,
    STATE(252), 1,
      sym__func_type,
    STATE(253), 1,
      sym__type_ctor,
    STATE(255), 1,
      sym__type_alias,
    STATE(261), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(17), 2,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(5), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    STATE(244), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(211), 6,
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
    STATE(229), 1,
      sym_item,
    STATE(251), 1,
      sym__func_body,
    STATE(252), 1,
      sym__func_type,
    STATE(253), 1,
      sym__type_ctor,
    STATE(255), 1,
      sym__type_alias,
    STATE(261), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(17), 2,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(5), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    STATE(244), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(211), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [228] = 20,
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
    STATE(251), 1,
      sym__func_body,
    STATE(252), 1,
      sym__func_type,
    STATE(253), 1,
      sym__type_ctor,
    STATE(255), 1,
      sym__type_alias,
    STATE(261), 1,
      sym__type_kind,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(17), 2,
      anon_sym_infixl,
      anon_sym_infixr,
    STATE(38), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    STATE(244), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(236), 6,
      sym_import,
      sym_fixity,
      sym_type,
      sym_func,
      sym_class,
      sym_member,
  [299] = 16,
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
    STATE(112), 1,
      sym_expr_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(22), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(157), 7,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym__stmt,
      sym_stmt_let,
  [361] = 16,
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
    STATE(112), 1,
      sym_expr_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(22), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(156), 7,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym__stmt,
      sym_stmt_let,
  [423] = 15,
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
    STATE(112), 1,
      sym_expr_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(22), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(259), 7,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
      sym__stmt,
      sym_stmt_let,
  [482] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(95), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(296), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [536] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(95), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(277), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [590] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(95), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(314), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [644] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(95), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(300), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [698] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(95), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(170), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [752] = 14,
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
    STATE(112), 1,
      sym_expr_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(232), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(22), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [806] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(95), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(275), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [860] = 14,
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
    STATE(112), 1,
      sym_expr_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(215), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(22), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [914] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(95), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(309), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [968] = 14,
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
    STATE(112), 1,
      sym_expr_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(217), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(22), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1022] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_if,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_recur,
    STATE(95), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(188), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(20), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1076] = 14,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym_operator,
    ACTIONS(85), 1,
      sym_recur,
    STATE(89), 1,
      aux_sym_expr_infix_repeat1,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(81), 2,
      anon_sym_then,
      anon_sym_else,
    STATE(23), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1128] = 11,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      aux_sym_int_literal_token1,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      sym_recur,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(95), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(100), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(93), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(21), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1173] = 13,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym_operator,
    ACTIONS(113), 1,
      sym_recur,
    STATE(117), 1,
      aux_sym_expr_infix_repeat1,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(77), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(28), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1222] = 11,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym_recur,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(117), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(115), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(21), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1267] = 11,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_recur,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(123), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(121), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(23), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1312] = 11,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_recur,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(127), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(125), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(23), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1357] = 10,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      aux_sym_int_literal_token1,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      sym_recur,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(138), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(93), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(26), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1399] = 10,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_recur,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(125), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(28), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1441] = 10,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_recur,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(115), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(26), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1483] = 10,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_recur,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(121), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(28), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1525] = 5,
    ACTIONS(151), 1,
      anon_sym_EQ,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(149), 14,
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
  [1555] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(159), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(157), 13,
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
  [1580] = 3,
    ACTIONS(163), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(161), 14,
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
  [1604] = 10,
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
    STATE(134), 1,
      sym_expr_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(27), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1642] = 3,
    ACTIONS(169), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(167), 14,
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
  [1666] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      sym_recur,
    STATE(116), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(25), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1704] = 3,
    ACTIONS(175), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(173), 14,
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
  [1728] = 10,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_recur,
    STATE(137), 1,
      sym_expr_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(29), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1766] = 5,
    ACTIONS(179), 1,
      anon_sym_AT,
    ACTIONS(184), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(38), 2,
      sym_attribute,
      aux_sym_module_repeat1,
    ACTIONS(182), 11,
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
  [1794] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      sym_recur,
    STATE(115), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(24), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1832] = 3,
    ACTIONS(190), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(188), 14,
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
  [1856] = 4,
    ACTIONS(196), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(192), 6,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(194), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [1880] = 4,
    ACTIONS(196), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(198), 6,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(200), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [1904] = 3,
    ACTIONS(204), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(202), 12,
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
  [1926] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(157), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(159), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [1947] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(206), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(208), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [1968] = 4,
    ACTIONS(196), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(192), 4,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(194), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [1991] = 4,
    ACTIONS(196), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(198), 4,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(200), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [2014] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(163), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(161), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [2035] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(190), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(188), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [2056] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(163), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(161), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [2076] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(190), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(188), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [2096] = 10,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    STATE(113), 1,
      sym_path,
    STATE(126), 1,
      aux_sym__type_ctor_repeat1,
    STATE(133), 1,
      sym_ty_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(54), 2,
      sym__ty_atom,
      sym_ty_path,
    STATE(246), 2,
      sym__ty,
      sym_ty_infix,
  [2130] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(206), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(208), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [2150] = 9,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      sym_operator,
    STATE(113), 1,
      sym_path,
    STATE(132), 1,
      aux_sym_ty_infix_repeat1,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(218), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(58), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2182] = 10,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    STATE(113), 1,
      sym_path,
    STATE(133), 1,
      sym_ty_app,
    STATE(141), 1,
      aux_sym__type_ctor_repeat1,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(54), 2,
      sym__ty_atom,
      sym_ty_path,
    STATE(209), 2,
      sym__ty,
      sym_ty_infix,
  [2216] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(157), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(159), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [2236] = 7,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(220), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(58), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2263] = 7,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(222), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(61), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2290] = 7,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_path,
    STATE(220), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(228), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(60), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2317] = 7,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_path,
    STATE(220), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(236), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(60), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2344] = 7,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(236), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(61), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2371] = 9,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      sym_operator,
    STATE(110), 1,
      sym_path,
    STATE(150), 1,
      aux_sym_ty_infix_repeat1,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(68), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2402] = 7,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_path,
    STATE(220), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(250), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(59), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2429] = 8,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_path,
    STATE(145), 1,
      sym_ty_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(62), 2,
      sym__ty_atom,
      sym_ty_path,
    STATE(295), 2,
      sym__ty,
      sym_ty_infix,
  [2457] = 8,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_path,
    STATE(145), 1,
      sym_ty_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(62), 2,
      sym__ty_atom,
      sym_ty_path,
    STATE(290), 2,
      sym__ty,
      sym_ty_infix,
  [2485] = 7,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_path,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(236), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(66), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2511] = 8,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(133), 1,
      sym_ty_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(54), 2,
      sym__ty_atom,
      sym_ty_path,
    STATE(257), 2,
      sym__ty,
      sym_ty_infix,
  [2539] = 7,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_path,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(66), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2565] = 8,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(133), 1,
      sym_ty_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(54), 2,
      sym__ty_atom,
      sym_ty_path,
    STATE(243), 2,
      sym__ty,
      sym_ty_infix,
  [2593] = 7,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_path,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(220), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(68), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2619] = 8,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_path,
    STATE(145), 1,
      sym_ty_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(62), 2,
      sym__ty_atom,
      sym_ty_path,
    STATE(305), 2,
      sym__ty,
      sym_ty_infix,
  [2647] = 8,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_path,
    STATE(145), 1,
      sym_ty_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(62), 2,
      sym__ty_atom,
      sym_ty_path,
    STATE(304), 2,
      sym__ty,
      sym_ty_infix,
  [2675] = 8,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(133), 1,
      sym_ty_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(54), 2,
      sym__ty_atom,
      sym_ty_path,
    STATE(224), 2,
      sym__ty,
      sym_ty_infix,
  [2703] = 8,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(133), 1,
      sym_ty_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(54), 2,
      sym__ty_atom,
      sym_ty_path,
    STATE(242), 2,
      sym__ty,
      sym_ty_infix,
  [2731] = 8,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_path,
    STATE(145), 1,
      sym_ty_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(62), 2,
      sym__ty_atom,
      sym_ty_path,
    STATE(266), 2,
      sym__ty,
      sym_ty_infix,
  [2759] = 7,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_of,
    STATE(110), 1,
      sym_path,
    STATE(218), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(80), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2784] = 5,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(77), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
    ACTIONS(265), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_PIPE,
  [2805] = 7,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(272), 1,
      anon_sym_EQ,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(278), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(79), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [2830] = 7,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(284), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(77), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [2855] = 7,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_of,
    STATE(110), 1,
      sym_path,
    STATE(218), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(80), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2880] = 6,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(110), 1,
      sym_path,
    STATE(218), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(76), 3,
      sym__ty_atom,
      sym_ty_path,
      aux_sym_ctor_repeat1,
  [2902] = 7,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_path,
    STATE(225), 1,
      aux_sym_path_repeat1,
    STATE(260), 1,
      sym_ty_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(70), 2,
      sym__ty_atom,
      sym_ty_path,
  [2926] = 4,
    ACTIONS(293), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(192), 3,
      anon_sym_as,
      anon_sym_of,
      sym_identifier,
    ACTIONS(194), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
  [2944] = 7,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(177), 1,
      sym_ty_app,
    STATE(241), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(57), 2,
      sym__ty_atom,
      sym_ty_path,
  [2968] = 5,
    ACTIONS(295), 1,
      aux_sym_int_literal_token1,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(297), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(36), 3,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
  [2988] = 3,
    ACTIONS(293), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(194), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [3004] = 4,
    ACTIONS(293), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(198), 3,
      anon_sym_as,
      anon_sym_of,
      sym_identifier,
    ACTIONS(200), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
  [3022] = 3,
    ACTIONS(293), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(200), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [3038] = 5,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym_operator,
    STATE(91), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(301), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [3057] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(303), 1,
      anon_sym_foreign,
    ACTIONS(305), 1,
      sym__layout_end,
    STATE(193), 1,
      sym_func,
    STATE(251), 1,
      sym__func_body,
    STATE(252), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3080] = 5,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(310), 1,
      sym_operator,
    STATE(91), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(121), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [3099] = 4,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(92), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(316), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3116] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(318), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [3129] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(303), 1,
      anon_sym_foreign,
    ACTIONS(320), 1,
      sym__layout_end,
    STATE(197), 1,
      sym_func,
    STATE(251), 1,
      sym__func_body,
    STATE(252), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3152] = 5,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym_operator,
    STATE(89), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(77), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [3171] = 4,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(92), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(324), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3188] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(303), 1,
      anon_sym_foreign,
    ACTIONS(326), 1,
      sym__layout_end,
    STATE(161), 1,
      sym_func,
    STATE(251), 1,
      sym__func_body,
    STATE(252), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3211] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(303), 1,
      anon_sym_foreign,
    ACTIONS(328), 1,
      sym__layout_end,
    STATE(200), 1,
      sym_func,
    STATE(251), 1,
      sym__func_body,
    STATE(252), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3234] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(303), 1,
      anon_sym_foreign,
    ACTIONS(330), 1,
      sym__layout_end,
    STATE(194), 1,
      sym_func,
    STATE(251), 1,
      sym__func_body,
    STATE(252), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3257] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(332), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [3270] = 4,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(92), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(334), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3287] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(336), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [3300] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(303), 1,
      anon_sym_foreign,
    ACTIONS(338), 1,
      sym__layout_end,
    STATE(167), 1,
      sym_func,
    STATE(251), 1,
      sym__func_body,
    STATE(252), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3323] = 6,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_EQ,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(109), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [3344] = 5,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      anon_sym_EQ,
    ACTIONS(352), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(142), 2,
      sym__pat_atom,
      aux_sym__func_body_repeat1,
  [3362] = 5,
    ACTIONS(354), 1,
      anon_sym_EQ,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(358), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3380] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(360), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [3392] = 5,
    ACTIONS(354), 1,
      anon_sym_EQ,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(358), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3410] = 5,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(114), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [3428] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(364), 2,
      anon_sym_of,
      sym_identifier,
    ACTIONS(336), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
  [3442] = 5,
    ACTIONS(366), 1,
      anon_sym_BQUOTE,
    ACTIONS(369), 1,
      sym_operator,
    STATE(111), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(121), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3460] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym_operator,
    STATE(117), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(77), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3478] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(336), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
      sym_identifier,
  [3490] = 5,
    ACTIONS(265), 1,
      anon_sym_EQ,
    ACTIONS(372), 1,
      sym_identifier,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(114), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [3508] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(121), 5,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [3520] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(125), 5,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [3532] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym_operator,
    STATE(111), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(301), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3550] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(360), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
      sym_identifier,
  [3562] = 4,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(381), 2,
      anon_sym_EQ,
      anon_sym_DASH_GT,
    STATE(119), 2,
      sym__pat_atom,
      aux_sym__func_body_repeat1,
  [3578] = 6,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(303), 1,
      anon_sym_foreign,
    STATE(206), 1,
      sym_func,
    STATE(251), 1,
      sym__func_body,
    STATE(252), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3598] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(383), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [3614] = 5,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_EQ,
    STATE(108), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(390), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3632] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(392), 2,
      anon_sym_of,
      sym_identifier,
    ACTIONS(360), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
  [3646] = 5,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_EQ,
    STATE(121), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(396), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3664] = 5,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_DASH_GT,
    STATE(135), 1,
      sym_fundep,
    STATE(173), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3681] = 4,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    STATE(138), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(402), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3696] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(38), 2,
      sym_attribute,
      aux_sym_module_repeat1,
  [3711] = 5,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_DASH_GT,
    STATE(106), 1,
      sym_fundep,
    STATE(173), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3728] = 4,
    ACTIONS(406), 1,
      sym_identifier,
    ACTIONS(408), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(119), 2,
      sym__pat_atom,
      aux_sym__func_body_repeat1,
  [3743] = 4,
    ACTIONS(295), 1,
      aux_sym_int_literal_token1,
    STATE(183), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(297), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
  [3758] = 4,
    ACTIONS(410), 1,
      sym_operator,
    STATE(131), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(220), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3773] = 4,
    ACTIONS(216), 1,
      sym_operator,
    STATE(131), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(413), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3788] = 4,
    ACTIONS(216), 1,
      sym_operator,
    STATE(132), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(218), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3803] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(125), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
  [3814] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(383), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3825] = 4,
    ACTIONS(406), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(119), 2,
      sym__pat_atom,
      aux_sym__func_body_repeat1,
  [3840] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(121), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
  [3851] = 4,
    ACTIONS(417), 1,
      anon_sym_PIPE,
    STATE(138), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(420), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3866] = 5,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(102), 1,
      sym_path,
    STATE(155), 1,
      sym_ty_path,
    STATE(220), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3883] = 5,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_DASH_GT,
    STATE(122), 1,
      sym_fundep,
    STATE(173), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3900] = 4,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    STATE(138), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(422), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3915] = 4,
    ACTIONS(406), 1,
      sym_identifier,
    ACTIONS(424), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(119), 2,
      sym__pat_atom,
      aux_sym__func_body_repeat1,
  [3930] = 4,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(218), 1,
      aux_sym_path_repeat1,
    STATE(291), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3944] = 4,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3958] = 4,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    ACTIONS(248), 1,
      sym_operator,
    STATE(150), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3972] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(420), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
  [3982] = 4,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(218), 1,
      aux_sym_path_repeat1,
    STATE(307), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3996] = 4,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(218), 1,
      aux_sym_path_repeat1,
    STATE(299), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4010] = 3,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(129), 2,
      sym__pat_atom,
      aux_sym__func_body_repeat1,
  [4022] = 4,
    ACTIONS(248), 1,
      sym_operator,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4036] = 3,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(136), 2,
      sym__pat_atom,
      aux_sym__func_body_repeat1,
  [4048] = 4,
    ACTIONS(434), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      anon_sym_DQUOTE2,
    STATE(179), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(438), 2,
      sym_comment,
      aux_sym__token1,
  [4062] = 4,
    ACTIONS(440), 1,
      aux_sym_string_literal_token1,
    ACTIONS(442), 1,
      anon_sym_DQUOTE2,
    STATE(152), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(438), 2,
      sym_comment,
      aux_sym__token1,
  [4076] = 4,
    ACTIONS(444), 1,
      sym__layout_semicolon,
    ACTIONS(446), 1,
      sym__layout_end,
    STATE(202), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4090] = 3,
    ACTIONS(448), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(450), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4102] = 4,
    ACTIONS(444), 1,
      sym__layout_semicolon,
    ACTIONS(452), 1,
      sym__layout_end,
    STATE(154), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4116] = 4,
    ACTIONS(444), 1,
      sym__layout_semicolon,
    ACTIONS(454), 1,
      sym__layout_end,
    STATE(186), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4130] = 4,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(218), 1,
      aux_sym_path_repeat1,
    STATE(283), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4144] = 4,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(164), 1,
      sym__attr_body,
    STATE(280), 1,
      sym__attr_value,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4158] = 4,
    ACTIONS(434), 1,
      aux_sym_string_literal_token1,
    ACTIONS(458), 1,
      anon_sym_DQUOTE2,
    STATE(179), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(438), 2,
      sym_comment,
      aux_sym__token1,
  [4172] = 4,
    ACTIONS(305), 1,
      sym__layout_end,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    STATE(189), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4186] = 4,
    ACTIONS(462), 1,
      aux_sym_string_literal_token1,
    ACTIONS(464), 1,
      anon_sym_DQUOTE2,
    STATE(160), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(438), 2,
      sym_comment,
      aux_sym__token1,
  [4200] = 4,
    ACTIONS(466), 1,
      aux_sym_string_literal_token1,
    ACTIONS(468), 1,
      anon_sym_DQUOTE2,
    STATE(165), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(438), 2,
      sym_comment,
      aux_sym__token1,
  [4214] = 4,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4228] = 4,
    ACTIONS(434), 1,
      aux_sym_string_literal_token1,
    ACTIONS(472), 1,
      anon_sym_DQUOTE2,
    STATE(179), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(438), 2,
      sym_comment,
      aux_sym__token1,
  [4242] = 4,
    ACTIONS(316), 1,
      anon_sym_DASH_GT,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(166), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4256] = 4,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    ACTIONS(477), 1,
      sym__layout_end,
    STATE(187), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4270] = 4,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(241), 1,
      aux_sym_path_repeat1,
    STATE(245), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4284] = 4,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(218), 1,
      aux_sym_path_repeat1,
    STATE(265), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4298] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(479), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4308] = 4,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    ACTIONS(481), 1,
      sym_operator,
    STATE(171), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4322] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(484), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4332] = 4,
    ACTIONS(486), 1,
      sym_identifier,
    ACTIONS(488), 1,
      anon_sym_DASH_GT,
    STATE(166), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4346] = 4,
    ACTIONS(490), 1,
      sym__layout_semicolon,
    ACTIONS(492), 1,
      sym__layout_end,
    STATE(185), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4360] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(494), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4370] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(496), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4380] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(220), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
  [4390] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(498), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4400] = 4,
    ACTIONS(500), 1,
      aux_sym_string_literal_token1,
    ACTIONS(503), 1,
      anon_sym_DQUOTE2,
    STATE(179), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(438), 2,
      sym_comment,
      aux_sym__token1,
  [4414] = 4,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(218), 1,
      aux_sym_path_repeat1,
    STATE(274), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4428] = 4,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4442] = 4,
    ACTIONS(490), 1,
      sym__layout_semicolon,
    ACTIONS(510), 1,
      sym__layout_end,
    STATE(184), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4456] = 4,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(218), 1,
      aux_sym_path_repeat1,
    STATE(308), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4470] = 4,
    ACTIONS(512), 1,
      sym__layout_semicolon,
    ACTIONS(515), 1,
      sym__layout_end,
    STATE(184), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4484] = 4,
    ACTIONS(490), 1,
      sym__layout_semicolon,
    ACTIONS(517), 1,
      sym__layout_end,
    STATE(184), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4498] = 4,
    ACTIONS(444), 1,
      sym__layout_semicolon,
    ACTIONS(519), 1,
      sym__layout_end,
    STATE(202), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4512] = 4,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    ACTIONS(521), 1,
      sym__layout_end,
    STATE(201), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4526] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(523), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4536] = 4,
    ACTIONS(328), 1,
      sym__layout_end,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    STATE(201), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4550] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(318), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [4560] = 4,
    ACTIONS(490), 1,
      sym__layout_semicolon,
    ACTIONS(525), 1,
      sym__layout_end,
    STATE(182), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4574] = 4,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    ACTIONS(527), 1,
      sym__layout_end,
    STATE(201), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4588] = 4,
    ACTIONS(328), 1,
      sym__layout_end,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    STATE(199), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4602] = 4,
    ACTIONS(338), 1,
      sym__layout_end,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    STATE(195), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4616] = 4,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    ACTIONS(477), 1,
      sym__layout_end,
    STATE(201), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4630] = 4,
    ACTIONS(338), 1,
      sym__layout_end,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    STATE(201), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4644] = 4,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    ACTIONS(529), 1,
      sym__layout_end,
    STATE(192), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4658] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(332), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [4668] = 4,
    ACTIONS(330), 1,
      sym__layout_end,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    STATE(201), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4682] = 4,
    ACTIONS(330), 1,
      sym__layout_end,
    ACTIONS(460), 1,
      sym__layout_semicolon,
    STATE(196), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4696] = 4,
    ACTIONS(531), 1,
      sym__layout_semicolon,
    ACTIONS(534), 1,
      sym__layout_end,
    STATE(201), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4710] = 4,
    ACTIONS(536), 1,
      sym__layout_semicolon,
    ACTIONS(539), 1,
      sym__layout_end,
    STATE(202), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4724] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(541), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4733] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(543), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4742] = 3,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(43), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4753] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(534), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4762] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(545), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4771] = 3,
    ACTIONS(547), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4782] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(549), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4791] = 3,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4802] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(553), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4811] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(498), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4820] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(555), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4829] = 3,
    ACTIONS(557), 1,
      sym__layout_start,
    STATE(227), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4840] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(479), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4849] = 3,
    ACTIONS(557), 1,
      sym__layout_start,
    STATE(239), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4860] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(559), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4869] = 3,
    ACTIONS(561), 1,
      sym_identifier,
    STATE(235), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4880] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(563), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4889] = 3,
    ACTIONS(565), 1,
      sym_identifier,
    STATE(235), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4900] = 3,
    ACTIONS(557), 1,
      sym__layout_start,
    STATE(254), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4911] = 3,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    STATE(258), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4922] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(567), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4931] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(569), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4940] = 3,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(235), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4951] = 3,
    ACTIONS(573), 1,
      sym_identifier,
    STATE(281), 1,
      sym__pat_atom,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4962] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(575), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4971] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(577), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4980] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(515), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4989] = 3,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(146), 1,
      sym_ctor,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5000] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(396), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5009] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(523), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5018] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(581), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5027] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(484), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5036] = 3,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(235), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5047] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(586), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5056] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(494), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5065] = 3,
    ACTIONS(588), 1,
      sym__layout_start,
    STATE(176), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5076] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(590), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5085] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(358), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5094] = 3,
    ACTIONS(592), 1,
      sym_identifier,
    STATE(235), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5105] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(594), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5114] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(596), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5123] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(598), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5132] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(600), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5141] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(602), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5150] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(505), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5159] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(604), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5168] = 3,
    ACTIONS(606), 1,
      sym_identifier,
    STATE(96), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5179] = 3,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(247), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5190] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(608), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5199] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(608), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5208] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(610), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5217] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(496), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5226] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(610), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5235] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(612), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5244] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(614), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5253] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(616), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5262] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(539), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5271] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(220), 2,
      anon_sym_RPAREN,
      sym_operator,
  [5280] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(610), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5289] = 3,
    ACTIONS(618), 1,
      anon_sym_type,
    ACTIONS(620), 1,
      anon_sym_fn,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5300] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(622), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5309] = 3,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    STATE(248), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5320] = 2,
    ACTIONS(624), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5328] = 2,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5336] = 2,
    ACTIONS(628), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5344] = 2,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5352] = 2,
    ACTIONS(632), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5360] = 2,
    ACTIONS(634), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5368] = 2,
    ACTIONS(636), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5376] = 2,
    ACTIONS(638), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5384] = 2,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5392] = 2,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5400] = 2,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5408] = 2,
    ACTIONS(646), 1,
      anon_sym_RPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5416] = 2,
    ACTIONS(648), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5424] = 2,
    ACTIONS(650), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5432] = 2,
    ACTIONS(293), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5440] = 2,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5448] = 2,
    ACTIONS(654), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5456] = 2,
    ACTIONS(656), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5464] = 2,
    ACTIONS(658), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5472] = 2,
    ACTIONS(660), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5480] = 2,
    ACTIONS(662), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5488] = 2,
    ACTIONS(664), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5496] = 2,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5504] = 2,
    ACTIONS(668), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5512] = 2,
    ACTIONS(620), 1,
      anon_sym_fn,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5520] = 2,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5528] = 2,
    ACTIONS(672), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5536] = 2,
    ACTIONS(674), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5544] = 2,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5552] = 2,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5560] = 2,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5568] = 2,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5576] = 2,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5584] = 2,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5592] = 2,
    ACTIONS(688), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5600] = 2,
    ACTIONS(690), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5608] = 2,
    ACTIONS(692), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5616] = 2,
    ACTIONS(694), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5624] = 2,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5632] = 2,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5640] = 2,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5648] = 2,
    ACTIONS(702), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5656] = 2,
    ACTIONS(704), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5664] = 2,
    ACTIONS(706), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5672] = 2,
    ACTIONS(708), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5680] = 2,
    ACTIONS(710), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5688] = 2,
    ACTIONS(712), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5696] = 2,
    ACTIONS(714), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5704] = 2,
    ACTIONS(716), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5712] = 2,
    ACTIONS(718), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5720] = 2,
    ACTIONS(720), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5728] = 2,
    ACTIONS(722), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 228,
  [SMALL_STATE(6)] = 299,
  [SMALL_STATE(7)] = 361,
  [SMALL_STATE(8)] = 423,
  [SMALL_STATE(9)] = 482,
  [SMALL_STATE(10)] = 536,
  [SMALL_STATE(11)] = 590,
  [SMALL_STATE(12)] = 644,
  [SMALL_STATE(13)] = 698,
  [SMALL_STATE(14)] = 752,
  [SMALL_STATE(15)] = 806,
  [SMALL_STATE(16)] = 860,
  [SMALL_STATE(17)] = 914,
  [SMALL_STATE(18)] = 968,
  [SMALL_STATE(19)] = 1022,
  [SMALL_STATE(20)] = 1076,
  [SMALL_STATE(21)] = 1128,
  [SMALL_STATE(22)] = 1173,
  [SMALL_STATE(23)] = 1222,
  [SMALL_STATE(24)] = 1267,
  [SMALL_STATE(25)] = 1312,
  [SMALL_STATE(26)] = 1357,
  [SMALL_STATE(27)] = 1399,
  [SMALL_STATE(28)] = 1441,
  [SMALL_STATE(29)] = 1483,
  [SMALL_STATE(30)] = 1525,
  [SMALL_STATE(31)] = 1555,
  [SMALL_STATE(32)] = 1580,
  [SMALL_STATE(33)] = 1604,
  [SMALL_STATE(34)] = 1642,
  [SMALL_STATE(35)] = 1666,
  [SMALL_STATE(36)] = 1704,
  [SMALL_STATE(37)] = 1728,
  [SMALL_STATE(38)] = 1766,
  [SMALL_STATE(39)] = 1794,
  [SMALL_STATE(40)] = 1832,
  [SMALL_STATE(41)] = 1856,
  [SMALL_STATE(42)] = 1880,
  [SMALL_STATE(43)] = 1904,
  [SMALL_STATE(44)] = 1926,
  [SMALL_STATE(45)] = 1947,
  [SMALL_STATE(46)] = 1968,
  [SMALL_STATE(47)] = 1991,
  [SMALL_STATE(48)] = 2014,
  [SMALL_STATE(49)] = 2035,
  [SMALL_STATE(50)] = 2056,
  [SMALL_STATE(51)] = 2076,
  [SMALL_STATE(52)] = 2096,
  [SMALL_STATE(53)] = 2130,
  [SMALL_STATE(54)] = 2150,
  [SMALL_STATE(55)] = 2182,
  [SMALL_STATE(56)] = 2216,
  [SMALL_STATE(57)] = 2236,
  [SMALL_STATE(58)] = 2263,
  [SMALL_STATE(59)] = 2290,
  [SMALL_STATE(60)] = 2317,
  [SMALL_STATE(61)] = 2344,
  [SMALL_STATE(62)] = 2371,
  [SMALL_STATE(63)] = 2402,
  [SMALL_STATE(64)] = 2429,
  [SMALL_STATE(65)] = 2457,
  [SMALL_STATE(66)] = 2485,
  [SMALL_STATE(67)] = 2511,
  [SMALL_STATE(68)] = 2539,
  [SMALL_STATE(69)] = 2565,
  [SMALL_STATE(70)] = 2593,
  [SMALL_STATE(71)] = 2619,
  [SMALL_STATE(72)] = 2647,
  [SMALL_STATE(73)] = 2675,
  [SMALL_STATE(74)] = 2703,
  [SMALL_STATE(75)] = 2731,
  [SMALL_STATE(76)] = 2759,
  [SMALL_STATE(77)] = 2784,
  [SMALL_STATE(78)] = 2805,
  [SMALL_STATE(79)] = 2830,
  [SMALL_STATE(80)] = 2855,
  [SMALL_STATE(81)] = 2880,
  [SMALL_STATE(82)] = 2902,
  [SMALL_STATE(83)] = 2926,
  [SMALL_STATE(84)] = 2944,
  [SMALL_STATE(85)] = 2968,
  [SMALL_STATE(86)] = 2988,
  [SMALL_STATE(87)] = 3004,
  [SMALL_STATE(88)] = 3022,
  [SMALL_STATE(89)] = 3038,
  [SMALL_STATE(90)] = 3057,
  [SMALL_STATE(91)] = 3080,
  [SMALL_STATE(92)] = 3099,
  [SMALL_STATE(93)] = 3116,
  [SMALL_STATE(94)] = 3129,
  [SMALL_STATE(95)] = 3152,
  [SMALL_STATE(96)] = 3171,
  [SMALL_STATE(97)] = 3188,
  [SMALL_STATE(98)] = 3211,
  [SMALL_STATE(99)] = 3234,
  [SMALL_STATE(100)] = 3257,
  [SMALL_STATE(101)] = 3270,
  [SMALL_STATE(102)] = 3287,
  [SMALL_STATE(103)] = 3300,
  [SMALL_STATE(104)] = 3323,
  [SMALL_STATE(105)] = 3344,
  [SMALL_STATE(106)] = 3362,
  [SMALL_STATE(107)] = 3380,
  [SMALL_STATE(108)] = 3392,
  [SMALL_STATE(109)] = 3410,
  [SMALL_STATE(110)] = 3428,
  [SMALL_STATE(111)] = 3442,
  [SMALL_STATE(112)] = 3460,
  [SMALL_STATE(113)] = 3478,
  [SMALL_STATE(114)] = 3490,
  [SMALL_STATE(115)] = 3508,
  [SMALL_STATE(116)] = 3520,
  [SMALL_STATE(117)] = 3532,
  [SMALL_STATE(118)] = 3550,
  [SMALL_STATE(119)] = 3562,
  [SMALL_STATE(120)] = 3578,
  [SMALL_STATE(121)] = 3598,
  [SMALL_STATE(122)] = 3614,
  [SMALL_STATE(123)] = 3632,
  [SMALL_STATE(124)] = 3646,
  [SMALL_STATE(125)] = 3664,
  [SMALL_STATE(126)] = 3681,
  [SMALL_STATE(127)] = 3696,
  [SMALL_STATE(128)] = 3711,
  [SMALL_STATE(129)] = 3728,
  [SMALL_STATE(130)] = 3743,
  [SMALL_STATE(131)] = 3758,
  [SMALL_STATE(132)] = 3773,
  [SMALL_STATE(133)] = 3788,
  [SMALL_STATE(134)] = 3803,
  [SMALL_STATE(135)] = 3814,
  [SMALL_STATE(136)] = 3825,
  [SMALL_STATE(137)] = 3840,
  [SMALL_STATE(138)] = 3851,
  [SMALL_STATE(139)] = 3866,
  [SMALL_STATE(140)] = 3883,
  [SMALL_STATE(141)] = 3900,
  [SMALL_STATE(142)] = 3915,
  [SMALL_STATE(143)] = 3930,
  [SMALL_STATE(144)] = 3944,
  [SMALL_STATE(145)] = 3958,
  [SMALL_STATE(146)] = 3972,
  [SMALL_STATE(147)] = 3982,
  [SMALL_STATE(148)] = 3996,
  [SMALL_STATE(149)] = 4010,
  [SMALL_STATE(150)] = 4022,
  [SMALL_STATE(151)] = 4036,
  [SMALL_STATE(152)] = 4048,
  [SMALL_STATE(153)] = 4062,
  [SMALL_STATE(154)] = 4076,
  [SMALL_STATE(155)] = 4090,
  [SMALL_STATE(156)] = 4102,
  [SMALL_STATE(157)] = 4116,
  [SMALL_STATE(158)] = 4130,
  [SMALL_STATE(159)] = 4144,
  [SMALL_STATE(160)] = 4158,
  [SMALL_STATE(161)] = 4172,
  [SMALL_STATE(162)] = 4186,
  [SMALL_STATE(163)] = 4200,
  [SMALL_STATE(164)] = 4214,
  [SMALL_STATE(165)] = 4228,
  [SMALL_STATE(166)] = 4242,
  [SMALL_STATE(167)] = 4256,
  [SMALL_STATE(168)] = 4270,
  [SMALL_STATE(169)] = 4284,
  [SMALL_STATE(170)] = 4298,
  [SMALL_STATE(171)] = 4308,
  [SMALL_STATE(172)] = 4322,
  [SMALL_STATE(173)] = 4332,
  [SMALL_STATE(174)] = 4346,
  [SMALL_STATE(175)] = 4360,
  [SMALL_STATE(176)] = 4370,
  [SMALL_STATE(177)] = 4380,
  [SMALL_STATE(178)] = 4390,
  [SMALL_STATE(179)] = 4400,
  [SMALL_STATE(180)] = 4414,
  [SMALL_STATE(181)] = 4428,
  [SMALL_STATE(182)] = 4442,
  [SMALL_STATE(183)] = 4456,
  [SMALL_STATE(184)] = 4470,
  [SMALL_STATE(185)] = 4484,
  [SMALL_STATE(186)] = 4498,
  [SMALL_STATE(187)] = 4512,
  [SMALL_STATE(188)] = 4526,
  [SMALL_STATE(189)] = 4536,
  [SMALL_STATE(190)] = 4550,
  [SMALL_STATE(191)] = 4560,
  [SMALL_STATE(192)] = 4574,
  [SMALL_STATE(193)] = 4588,
  [SMALL_STATE(194)] = 4602,
  [SMALL_STATE(195)] = 4616,
  [SMALL_STATE(196)] = 4630,
  [SMALL_STATE(197)] = 4644,
  [SMALL_STATE(198)] = 4658,
  [SMALL_STATE(199)] = 4668,
  [SMALL_STATE(200)] = 4682,
  [SMALL_STATE(201)] = 4696,
  [SMALL_STATE(202)] = 4710,
  [SMALL_STATE(203)] = 4724,
  [SMALL_STATE(204)] = 4733,
  [SMALL_STATE(205)] = 4742,
  [SMALL_STATE(206)] = 4753,
  [SMALL_STATE(207)] = 4762,
  [SMALL_STATE(208)] = 4771,
  [SMALL_STATE(209)] = 4782,
  [SMALL_STATE(210)] = 4791,
  [SMALL_STATE(211)] = 4802,
  [SMALL_STATE(212)] = 4811,
  [SMALL_STATE(213)] = 4820,
  [SMALL_STATE(214)] = 4829,
  [SMALL_STATE(215)] = 4840,
  [SMALL_STATE(216)] = 4849,
  [SMALL_STATE(217)] = 4860,
  [SMALL_STATE(218)] = 4869,
  [SMALL_STATE(219)] = 4880,
  [SMALL_STATE(220)] = 4889,
  [SMALL_STATE(221)] = 4900,
  [SMALL_STATE(222)] = 4911,
  [SMALL_STATE(223)] = 4922,
  [SMALL_STATE(224)] = 4931,
  [SMALL_STATE(225)] = 4940,
  [SMALL_STATE(226)] = 4951,
  [SMALL_STATE(227)] = 4962,
  [SMALL_STATE(228)] = 4971,
  [SMALL_STATE(229)] = 4980,
  [SMALL_STATE(230)] = 4989,
  [SMALL_STATE(231)] = 5000,
  [SMALL_STATE(232)] = 5009,
  [SMALL_STATE(233)] = 5018,
  [SMALL_STATE(234)] = 5027,
  [SMALL_STATE(235)] = 5036,
  [SMALL_STATE(236)] = 5047,
  [SMALL_STATE(237)] = 5056,
  [SMALL_STATE(238)] = 5065,
  [SMALL_STATE(239)] = 5076,
  [SMALL_STATE(240)] = 5085,
  [SMALL_STATE(241)] = 5094,
  [SMALL_STATE(242)] = 5105,
  [SMALL_STATE(243)] = 5114,
  [SMALL_STATE(244)] = 5123,
  [SMALL_STATE(245)] = 5132,
  [SMALL_STATE(246)] = 5141,
  [SMALL_STATE(247)] = 5150,
  [SMALL_STATE(248)] = 5159,
  [SMALL_STATE(249)] = 5168,
  [SMALL_STATE(250)] = 5179,
  [SMALL_STATE(251)] = 5190,
  [SMALL_STATE(252)] = 5199,
  [SMALL_STATE(253)] = 5208,
  [SMALL_STATE(254)] = 5217,
  [SMALL_STATE(255)] = 5226,
  [SMALL_STATE(256)] = 5235,
  [SMALL_STATE(257)] = 5244,
  [SMALL_STATE(258)] = 5253,
  [SMALL_STATE(259)] = 5262,
  [SMALL_STATE(260)] = 5271,
  [SMALL_STATE(261)] = 5280,
  [SMALL_STATE(262)] = 5289,
  [SMALL_STATE(263)] = 5300,
  [SMALL_STATE(264)] = 5309,
  [SMALL_STATE(265)] = 5320,
  [SMALL_STATE(266)] = 5328,
  [SMALL_STATE(267)] = 5336,
  [SMALL_STATE(268)] = 5344,
  [SMALL_STATE(269)] = 5352,
  [SMALL_STATE(270)] = 5360,
  [SMALL_STATE(271)] = 5368,
  [SMALL_STATE(272)] = 5376,
  [SMALL_STATE(273)] = 5384,
  [SMALL_STATE(274)] = 5392,
  [SMALL_STATE(275)] = 5400,
  [SMALL_STATE(276)] = 5408,
  [SMALL_STATE(277)] = 5416,
  [SMALL_STATE(278)] = 5424,
  [SMALL_STATE(279)] = 5432,
  [SMALL_STATE(280)] = 5440,
  [SMALL_STATE(281)] = 5448,
  [SMALL_STATE(282)] = 5456,
  [SMALL_STATE(283)] = 5464,
  [SMALL_STATE(284)] = 5472,
  [SMALL_STATE(285)] = 5480,
  [SMALL_STATE(286)] = 5488,
  [SMALL_STATE(287)] = 5496,
  [SMALL_STATE(288)] = 5504,
  [SMALL_STATE(289)] = 5512,
  [SMALL_STATE(290)] = 5520,
  [SMALL_STATE(291)] = 5528,
  [SMALL_STATE(292)] = 5536,
  [SMALL_STATE(293)] = 5544,
  [SMALL_STATE(294)] = 5552,
  [SMALL_STATE(295)] = 5560,
  [SMALL_STATE(296)] = 5568,
  [SMALL_STATE(297)] = 5576,
  [SMALL_STATE(298)] = 5584,
  [SMALL_STATE(299)] = 5592,
  [SMALL_STATE(300)] = 5600,
  [SMALL_STATE(301)] = 5608,
  [SMALL_STATE(302)] = 5616,
  [SMALL_STATE(303)] = 5624,
  [SMALL_STATE(304)] = 5632,
  [SMALL_STATE(305)] = 5640,
  [SMALL_STATE(306)] = 5648,
  [SMALL_STATE(307)] = 5656,
  [SMALL_STATE(308)] = 5664,
  [SMALL_STATE(309)] = 5672,
  [SMALL_STATE(310)] = 5680,
  [SMALL_STATE(311)] = 5688,
  [SMALL_STATE(312)] = 5696,
  [SMALL_STATE(313)] = 5704,
  [SMALL_STATE(314)] = 5712,
  [SMALL_STATE(315)] = 5720,
  [SMALL_STATE(316)] = 5728,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(41),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(44),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(44),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(153),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(21),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_app, 2, .production_id = 7),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_app, 2, .production_id = 7),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(46),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(15),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(56),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(56),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(162),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(26),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(205),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_parens, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_parens, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_app, 2, .production_id = 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 2, .production_id = 9),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(86),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(72),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(46),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(65),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1, .production_id = 9),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(41),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(71),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(100),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(315),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 3),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(83),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_infix, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(148),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(39),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(92),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_path, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty_atom, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ty_path, 1),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(180),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(37),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(198),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(312),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(119),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(125),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty_atom, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, .production_id = 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 4, .production_id = 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(84),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_infix, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2), SHIFT_REPEAT(230),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 5, .production_id = 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 8),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(166),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lambda, 4),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(82),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_do, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 2),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(179),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2), SHIFT_REPEAT(250),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 6),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2), SHIFT_REPEAT(120),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2), SHIFT_REPEAT(8),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 10, .production_id = 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 11, .production_id = 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 7, .production_id = 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 5, .production_id = 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 7, .production_id = 8),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_let, 4),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 8, .production_id = 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 8, .production_id = 8),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 4, .production_id = 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 4, .production_id = 6),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 9, .production_id = 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__postfix, 4),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(279),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 5, .production_id = 10),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 4, .production_id = 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 5, .production_id = 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixity, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 4, .production_id = 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__infix, 5),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 1, .production_id = 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 4),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 9, .production_id = 8),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 5, .production_id = 5),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix, 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 8, .production_id = 5),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 5),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 5),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [712] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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
