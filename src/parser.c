#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 318
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 2
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 13

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
  sym__ty_path = 89,
  sym__pat_ident = 90,
  sym_symbol = 91,
  sym_path = 92,
  aux_sym__attr_value_repeat1 = 93,
  aux_sym_module_repeat1 = 94,
  aux_sym_module_repeat2 = 95,
  aux_sym__type_alias_repeat1 = 96,
  aux_sym__type_ctor_repeat1 = 97,
  aux_sym_ctor_repeat1 = 98,
  aux_sym__func_body_repeat1 = 99,
  aux_sym_class_repeat1 = 100,
  aux_sym_class_repeat2 = 101,
  aux_sym_fundep_repeat1 = 102,
  aux_sym_ty_infix_repeat1 = 103,
  aux_sym_expr_app_repeat1 = 104,
  aux_sym_expr_infix_repeat1 = 105,
  aux_sym__expr_block_repeat1 = 106,
  aux_sym_string_literal_repeat1 = 107,
  aux_sym_path_repeat1 = 108,
  alias_sym_pat_identifier = 109,
  alias_sym_ty_path = 110,
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
  [aux_sym_ty_infix_repeat1] = "ty_infix_repeat1",
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
  [aux_sym_ty_infix_repeat1] = aux_sym_ty_infix_repeat1,
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
  [12] = {.index = 2, .length = 1},
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
  [5] = {
    [0] = alias_sym_ty_path,
  },
  [7] = {
    [0] = alias_sym_pat_identifier,
  },
  [8] = {
    [3] = sym_expr_do,
  },
  [12] = {
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
  [22] = {.lex_state = 2, .external_lex_state = 4},
  [23] = {.lex_state = 2, .external_lex_state = 5},
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
  [36] = {.lex_state = 2, .external_lex_state = 4},
  [37] = {.lex_state = 3, .external_lex_state = 4},
  [38] = {.lex_state = 0, .external_lex_state = 4},
  [39] = {.lex_state = 2, .external_lex_state = 4},
  [40] = {.lex_state = 3, .external_lex_state = 4},
  [41] = {.lex_state = 1, .external_lex_state = 4},
  [42] = {.lex_state = 0, .external_lex_state = 4},
  [43] = {.lex_state = 1, .external_lex_state = 4},
  [44] = {.lex_state = 2, .external_lex_state = 4},
  [45] = {.lex_state = 2, .external_lex_state = 4},
  [46] = {.lex_state = 2, .external_lex_state = 4},
  [47] = {.lex_state = 2, .external_lex_state = 4},
  [48] = {.lex_state = 1, .external_lex_state = 5},
  [49] = {.lex_state = 1, .external_lex_state = 5},
  [50] = {.lex_state = 2, .external_lex_state = 5},
  [51] = {.lex_state = 0, .external_lex_state = 4},
  [52] = {.lex_state = 2, .external_lex_state = 5},
  [53] = {.lex_state = 2, .external_lex_state = 5},
  [54] = {.lex_state = 2, .external_lex_state = 5},
  [55] = {.lex_state = 2, .external_lex_state = 5},
  [56] = {.lex_state = 0, .external_lex_state = 4},
  [57] = {.lex_state = 2, .external_lex_state = 5},
  [58] = {.lex_state = 0, .external_lex_state = 5},
  [59] = {.lex_state = 2, .external_lex_state = 4},
  [60] = {.lex_state = 2, .external_lex_state = 5},
  [61] = {.lex_state = 2, .external_lex_state = 5},
  [62] = {.lex_state = 0, .external_lex_state = 5},
  [63] = {.lex_state = 0, .external_lex_state = 5},
  [64] = {.lex_state = 2, .external_lex_state = 4},
  [65] = {.lex_state = 0, .external_lex_state = 4},
  [66] = {.lex_state = 2, .external_lex_state = 4},
  [67] = {.lex_state = 0, .external_lex_state = 4},
  [68] = {.lex_state = 0, .external_lex_state = 4},
  [69] = {.lex_state = 0, .external_lex_state = 4},
  [70] = {.lex_state = 0, .external_lex_state = 4},
  [71] = {.lex_state = 0, .external_lex_state = 4},
  [72] = {.lex_state = 2, .external_lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 4},
  [76] = {.lex_state = 0, .external_lex_state = 4},
  [77] = {.lex_state = 0, .external_lex_state = 5},
  [78] = {.lex_state = 0, .external_lex_state = 4},
  [79] = {.lex_state = 0, .external_lex_state = 5},
  [80] = {.lex_state = 0, .external_lex_state = 5},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 2, .external_lex_state = 4},
  [83] = {.lex_state = 0, .external_lex_state = 5},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 5},
  [87] = {.lex_state = 0, .external_lex_state = 4},
  [88] = {.lex_state = 0, .external_lex_state = 4},
  [89] = {.lex_state = 0, .external_lex_state = 5},
  [90] = {.lex_state = 0, .external_lex_state = 4},
  [91] = {.lex_state = 0, .external_lex_state = 5},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 5},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 5},
  [100] = {.lex_state = 2, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 5},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 2, .external_lex_state = 4},
  [104] = {.lex_state = 2, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 5},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 2, .external_lex_state = 5},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 5},
  [110] = {.lex_state = 2, .external_lex_state = 5},
  [111] = {.lex_state = 0, .external_lex_state = 5},
  [112] = {.lex_state = 2, .external_lex_state = 4},
  [113] = {.lex_state = 2, .external_lex_state = 4},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 5},
  [117] = {.lex_state = 2, .external_lex_state = 4},
  [118] = {.lex_state = 2, .external_lex_state = 5},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 5},
  [121] = {.lex_state = 2, .external_lex_state = 5},
  [122] = {.lex_state = 0, .external_lex_state = 5},
  [123] = {.lex_state = 0, .external_lex_state = 5},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 2, .external_lex_state = 5},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 2, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 2, .external_lex_state = 5},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 2, .external_lex_state = 5},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 5},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 2, .external_lex_state = 5},
  [139] = {.lex_state = 0, .external_lex_state = 5},
  [140] = {.lex_state = 2, .external_lex_state = 5},
  [141] = {.lex_state = 2, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 5},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 5},
  [145] = {.lex_state = 0, .external_lex_state = 5},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 5},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 6, .external_lex_state = 4},
  [152] = {.lex_state = 6, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 5},
  [154] = {.lex_state = 6, .external_lex_state = 4},
  [155] = {.lex_state = 3, .external_lex_state = 4},
  [156] = {.lex_state = 6, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 3, .external_lex_state = 4},
  [159] = {.lex_state = 2, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 2, .external_lex_state = 4},
  [164] = {.lex_state = 2, .external_lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 4},
  [166] = {.lex_state = 2, .external_lex_state = 4},
  [167] = {.lex_state = 0, .external_lex_state = 5},
  [168] = {.lex_state = 2, .external_lex_state = 4},
  [169] = {.lex_state = 2, .external_lex_state = 4},
  [170] = {.lex_state = 0, .external_lex_state = 5},
  [171] = {.lex_state = 2, .external_lex_state = 5},
  [172] = {.lex_state = 6, .external_lex_state = 4},
  [173] = {.lex_state = 2, .external_lex_state = 4},
  [174] = {.lex_state = 0, .external_lex_state = 4},
  [175] = {.lex_state = 3, .external_lex_state = 4},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 2, .external_lex_state = 4},
  [178] = {.lex_state = 0, .external_lex_state = 4},
  [179] = {.lex_state = 0, .external_lex_state = 5},
  [180] = {.lex_state = 6, .external_lex_state = 4},
  [181] = {.lex_state = 0, .external_lex_state = 5},
  [182] = {.lex_state = 0, .external_lex_state = 5},
  [183] = {.lex_state = 0, .external_lex_state = 5},
  [184] = {.lex_state = 0, .external_lex_state = 5},
  [185] = {.lex_state = 0, .external_lex_state = 5},
  [186] = {.lex_state = 0, .external_lex_state = 5},
  [187] = {.lex_state = 0, .external_lex_state = 5},
  [188] = {.lex_state = 0, .external_lex_state = 5},
  [189] = {.lex_state = 0, .external_lex_state = 5},
  [190] = {.lex_state = 6, .external_lex_state = 4},
  [191] = {.lex_state = 0, .external_lex_state = 5},
  [192] = {.lex_state = 2, .external_lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 5},
  [194] = {.lex_state = 0, .external_lex_state = 4},
  [195] = {.lex_state = 0, .external_lex_state = 4},
  [196] = {.lex_state = 0, .external_lex_state = 5},
  [197] = {.lex_state = 0, .external_lex_state = 4},
  [198] = {.lex_state = 0, .external_lex_state = 5},
  [199] = {.lex_state = 0, .external_lex_state = 5},
  [200] = {.lex_state = 0, .external_lex_state = 4},
  [201] = {.lex_state = 0, .external_lex_state = 4},
  [202] = {.lex_state = 0, .external_lex_state = 5},
  [203] = {.lex_state = 0, .external_lex_state = 5},
  [204] = {.lex_state = 0, .external_lex_state = 5},
  [205] = {.lex_state = 0, .external_lex_state = 5},
  [206] = {.lex_state = 0, .external_lex_state = 5},
  [207] = {.lex_state = 0, .external_lex_state = 6},
  [208] = {.lex_state = 0, .external_lex_state = 4},
  [209] = {.lex_state = 0, .external_lex_state = 5},
  [210] = {.lex_state = 0, .external_lex_state = 5},
  [211] = {.lex_state = 0, .external_lex_state = 5},
  [212] = {.lex_state = 0, .external_lex_state = 5},
  [213] = {.lex_state = 0, .external_lex_state = 5},
  [214] = {.lex_state = 0, .external_lex_state = 5},
  [215] = {.lex_state = 0, .external_lex_state = 5},
  [216] = {.lex_state = 0, .external_lex_state = 4},
  [217] = {.lex_state = 0, .external_lex_state = 5},
  [218] = {.lex_state = 0, .external_lex_state = 5},
  [219] = {.lex_state = 0, .external_lex_state = 4},
  [220] = {.lex_state = 0, .external_lex_state = 5},
  [221] = {.lex_state = 0, .external_lex_state = 4},
  [222] = {.lex_state = 0, .external_lex_state = 5},
  [223] = {.lex_state = 0, .external_lex_state = 5},
  [224] = {.lex_state = 0, .external_lex_state = 5},
  [225] = {.lex_state = 0, .external_lex_state = 4},
  [226] = {.lex_state = 0, .external_lex_state = 4},
  [227] = {.lex_state = 0, .external_lex_state = 5},
  [228] = {.lex_state = 0, .external_lex_state = 6},
  [229] = {.lex_state = 0, .external_lex_state = 5},
  [230] = {.lex_state = 0, .external_lex_state = 5},
  [231] = {.lex_state = 0, .external_lex_state = 4},
  [232] = {.lex_state = 0, .external_lex_state = 5},
  [233] = {.lex_state = 0, .external_lex_state = 5},
  [234] = {.lex_state = 0, .external_lex_state = 5},
  [235] = {.lex_state = 0, .external_lex_state = 6},
  [236] = {.lex_state = 0, .external_lex_state = 5},
  [237] = {.lex_state = 0, .external_lex_state = 6},
  [238] = {.lex_state = 0, .external_lex_state = 5},
  [239] = {.lex_state = 0, .external_lex_state = 5},
  [240] = {.lex_state = 0, .external_lex_state = 5},
  [241] = {.lex_state = 0, .external_lex_state = 5},
  [242] = {.lex_state = 0, .external_lex_state = 4},
  [243] = {.lex_state = 0, .external_lex_state = 4},
  [244] = {.lex_state = 0, .external_lex_state = 5},
  [245] = {.lex_state = 0, .external_lex_state = 5},
  [246] = {.lex_state = 0, .external_lex_state = 5},
  [247] = {.lex_state = 0, .external_lex_state = 5},
  [248] = {.lex_state = 0, .external_lex_state = 4},
  [249] = {.lex_state = 0, .external_lex_state = 5},
  [250] = {.lex_state = 3, .external_lex_state = 4},
  [251] = {.lex_state = 0, .external_lex_state = 4},
  [252] = {.lex_state = 0, .external_lex_state = 5},
  [253] = {.lex_state = 0, .external_lex_state = 5},
  [254] = {.lex_state = 0, .external_lex_state = 5},
  [255] = {.lex_state = 0, .external_lex_state = 4},
  [256] = {.lex_state = 0, .external_lex_state = 5},
  [257] = {.lex_state = 0, .external_lex_state = 5},
  [258] = {.lex_state = 2, .external_lex_state = 4},
  [259] = {.lex_state = 0, .external_lex_state = 5},
  [260] = {.lex_state = 0, .external_lex_state = 5},
  [261] = {.lex_state = 0, .external_lex_state = 5},
  [262] = {.lex_state = 0, .external_lex_state = 4},
  [263] = {.lex_state = 0, .external_lex_state = 5},
  [264] = {.lex_state = 0, .external_lex_state = 5},
  [265] = {.lex_state = 0, .external_lex_state = 4},
  [266] = {.lex_state = 0, .external_lex_state = 4},
  [267] = {.lex_state = 0, .external_lex_state = 4},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 0, .external_lex_state = 6},
  [270] = {.lex_state = 0, .external_lex_state = 4},
  [271] = {.lex_state = 2, .external_lex_state = 4},
  [272] = {.lex_state = 2, .external_lex_state = 4},
  [273] = {.lex_state = 0, .external_lex_state = 4},
  [274] = {.lex_state = 0, .external_lex_state = 4},
  [275] = {.lex_state = 0, .external_lex_state = 4},
  [276] = {.lex_state = 0, .external_lex_state = 4},
  [277] = {.lex_state = 0, .external_lex_state = 6},
  [278] = {.lex_state = 2, .external_lex_state = 4},
  [279] = {.lex_state = 0, .external_lex_state = 4},
  [280] = {.lex_state = 0, .external_lex_state = 6},
  [281] = {.lex_state = 0, .external_lex_state = 4},
  [282] = {.lex_state = 2, .external_lex_state = 4},
  [283] = {.lex_state = 0, .external_lex_state = 4},
  [284] = {.lex_state = 0, .external_lex_state = 4},
  [285] = {.lex_state = 0, .external_lex_state = 4},
  [286] = {.lex_state = 0, .external_lex_state = 4},
  [287] = {.lex_state = 0, .external_lex_state = 6},
  [288] = {.lex_state = 0, .external_lex_state = 4},
  [289] = {.lex_state = 0, .external_lex_state = 4},
  [290] = {.lex_state = 0, .external_lex_state = 6},
  [291] = {.lex_state = 0, .external_lex_state = 4},
  [292] = {.lex_state = 4, .external_lex_state = 4},
  [293] = {.lex_state = 0, .external_lex_state = 4},
  [294] = {.lex_state = 0, .external_lex_state = 4},
  [295] = {.lex_state = 0, .external_lex_state = 6},
  [296] = {.lex_state = 2, .external_lex_state = 4},
  [297] = {.lex_state = 2, .external_lex_state = 4},
  [298] = {.lex_state = 0, .external_lex_state = 4},
  [299] = {.lex_state = 2, .external_lex_state = 4},
  [300] = {.lex_state = 0, .external_lex_state = 4},
  [301] = {.lex_state = 0, .external_lex_state = 4},
  [302] = {.lex_state = 0, .external_lex_state = 4},
  [303] = {.lex_state = 0, .external_lex_state = 4},
  [304] = {.lex_state = 0, .external_lex_state = 6},
  [305] = {.lex_state = 2, .external_lex_state = 4},
  [306] = {.lex_state = 0, .external_lex_state = 4},
  [307] = {.lex_state = 0, .external_lex_state = 6},
  [308] = {.lex_state = 0, .external_lex_state = 4},
  [309] = {.lex_state = 0, .external_lex_state = 4},
  [310] = {.lex_state = 0, .external_lex_state = 4},
  [311] = {.lex_state = 0, .external_lex_state = 4},
  [312] = {.lex_state = 0, .external_lex_state = 4},
  [313] = {.lex_state = 0, .external_lex_state = 4},
  [314] = {.lex_state = 2, .external_lex_state = 4},
  [315] = {.lex_state = 0, .external_lex_state = 4},
  [316] = {.lex_state = 0, .external_lex_state = 4},
  [317] = {.lex_state = 0, .external_lex_state = 4},
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
    [sym_source_file] = STATE(312),
    [sym_attribute] = STATE(135),
    [sym_module] = STATE(298),
    [aux_sym_module_repeat1] = STATE(135),
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
    STATE(145), 1,
      sym_item,
    STATE(253), 1,
      sym__func_body,
    STATE(254), 1,
      sym__func_type,
    STATE(256), 1,
      sym__type_ctor,
    STATE(259), 1,
      sym__type_alias,
    STATE(260), 1,
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
    STATE(261), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(263), 6,
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
    STATE(189), 1,
      sym_item,
    STATE(253), 1,
      sym__func_body,
    STATE(254), 1,
      sym__func_type,
    STATE(256), 1,
      sym__type_ctor,
    STATE(259), 1,
      sym__type_alias,
    STATE(260), 1,
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
    STATE(261), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(263), 6,
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
    STATE(230), 1,
      sym_item,
    STATE(253), 1,
      sym__func_body,
    STATE(254), 1,
      sym__func_type,
    STATE(256), 1,
      sym__type_ctor,
    STATE(259), 1,
      sym__type_alias,
    STATE(260), 1,
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
    STATE(261), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(263), 6,
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
    STATE(253), 1,
      sym__func_body,
    STATE(254), 1,
      sym__func_type,
    STATE(256), 1,
      sym__type_ctor,
    STATE(259), 1,
      sym__type_alias,
    STATE(260), 1,
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
    STATE(261), 3,
      sym__prefix,
      sym__infix,
      sym__postfix,
    STATE(238), 6,
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
    STATE(118), 1,
      sym_expr_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(23), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(148), 7,
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
    STATE(118), 1,
      sym_expr_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(23), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(153), 7,
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
    STATE(118), 1,
      sym_expr_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(23), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
    STATE(211), 7,
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
    STATE(100), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(297), 5,
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
    STATE(118), 1,
      sym_expr_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(220), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(23), 6,
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
    STATE(100), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(306), 5,
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
    STATE(118), 1,
      sym_expr_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(218), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(23), 6,
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
    STATE(100), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(315), 5,
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
    STATE(100), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(272), 5,
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
    STATE(100), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(301), 5,
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
    STATE(100), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(163), 5,
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
    STATE(100), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(273), 5,
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
    STATE(100), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(159), 5,
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
  [1022] = 14,
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
    STATE(118), 1,
      sym_expr_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(233), 5,
      sym__expression,
      sym_expr_infix,
      sym_expr_do,
      sym_expr_lambda,
      sym_expr_if,
    STATE(23), 6,
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
    STATE(103), 1,
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
    STATE(24), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1128] = 11,
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
    ACTIONS(89), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(24), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1173] = 11,
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
    ACTIONS(93), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(91), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(24), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1218] = 13,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym_operator,
    ACTIONS(99), 1,
      sym_recur,
    STATE(110), 1,
      aux_sym_expr_infix_repeat1,
    STATE(242), 1,
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
    STATE(26), 7,
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
    ACTIONS(105), 1,
      sym_recur,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(103), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(101), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(25), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1312] = 11,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      aux_sym_int_literal_token1,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      sym_recur,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(115), 2,
      anon_sym_then,
      anon_sym_else,
    ACTIONS(120), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(113), 3,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(25), 7,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
      aux_sym_expr_app_repeat1,
  [1357] = 10,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_recur,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(101), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(29), 7,
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
    ACTIONS(99), 1,
      sym_recur,
    STATE(242), 1,
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
    STATE(26), 7,
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
    ACTIONS(99), 1,
      sym_recur,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(87), 4,
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
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      aux_sym_int_literal_token1,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      sym_recur,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(140), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(113), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
    STATE(29), 7,
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
    STATE(131), 1,
      sym_expr_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(49), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(28), 6,
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
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_int_literal_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      sym_recur,
    STATE(133), 1,
      sym_expr_app,
    STATE(242), 1,
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
  [1704] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_int_literal_token1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      sym_recur,
    STATE(112), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(22), 6,
      sym__expr_atom,
      sym_expr_parens,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
      sym_path,
  [1742] = 3,
    ACTIONS(177), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(175), 14,
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
    STATE(117), 1,
      sym_expr_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(71), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(21), 6,
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
  [1880] = 3,
    ACTIONS(200), 1,
      anon_sym_infix,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(198), 12,
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
  [1902] = 4,
    ACTIONS(196), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(202), 6,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(204), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [1926] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(177), 5,
      anon_sym_then,
      anon_sym_else,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(175), 7,
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
  [1968] = 3,
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
  [1989] = 3,
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
  [2010] = 4,
    ACTIONS(196), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(202), 4,
      aux_sym_int_literal_token1,
      sym_operator,
      sym_identifier,
      sym_recur,
    ACTIONS(204), 7,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
  [2033] = 4,
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
  [2056] = 3,
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
  [2076] = 10,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    STATE(107), 1,
      sym_path,
    STATE(138), 1,
      sym_ty_app,
    STATE(142), 1,
      aux_sym__type_ctor_repeat1,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(53), 2,
      sym__ty_atom,
      sym__ty_path,
    STATE(223), 2,
      sym__ty,
      sym_ty_infix,
  [2110] = 3,
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
  [2130] = 9,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      sym_operator,
    STATE(107), 1,
      sym_path,
    STATE(140), 1,
      aux_sym_ty_infix_repeat1,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(218), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(60), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2162] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(177), 3,
      aux_sym_int_literal_token1,
      sym_identifier,
      sym_recur,
    ACTIONS(175), 8,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      anon_sym_DQUOTE,
      sym_operator,
  [2182] = 3,
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
  [2202] = 10,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    STATE(107), 1,
      sym_path,
    STATE(138), 1,
      sym_ty_app,
    STATE(144), 1,
      aux_sym__type_ctor_repeat1,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(53), 2,
      sym__ty_atom,
      sym__ty_path,
    STATE(257), 2,
      sym__ty,
      sym_ty_infix,
  [2236] = 7,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_path,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(220), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(60), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2263] = 7,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_path,
    STATE(219), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(226), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(63), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2290] = 9,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_operator,
    STATE(113), 1,
      sym_path,
    STATE(177), 1,
      aux_sym_ty_infix_repeat1,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(66), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2321] = 7,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_path,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(234), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(61), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2348] = 7,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_path,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(242), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
    STATE(61), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2375] = 7,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_path,
    STATE(219), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(242), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(62), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2402] = 7,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_path,
    STATE(219), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(250), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
    STATE(62), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2429] = 7,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(242), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(64), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2455] = 8,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_path,
    STATE(138), 1,
      sym_ty_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(53), 2,
      sym__ty_atom,
      sym__ty_path,
    STATE(240), 2,
      sym__ty,
      sym_ty_infix,
  [2483] = 7,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(234), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(64), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2509] = 8,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(192), 1,
      sym_ty_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(59), 2,
      sym__ty_atom,
      sym__ty_path,
    STATE(271), 2,
      sym__ty,
      sym_ty_infix,
  [2537] = 8,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_path,
    STATE(138), 1,
      sym_ty_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(53), 2,
      sym__ty_atom,
      sym__ty_path,
    STATE(249), 2,
      sym__ty,
      sym_ty_infix,
  [2565] = 8,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(192), 1,
      sym_ty_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(59), 2,
      sym__ty_atom,
      sym__ty_path,
    STATE(314), 2,
      sym__ty,
      sym_ty_infix,
  [2593] = 8,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(192), 1,
      sym_ty_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(59), 2,
      sym__ty_atom,
      sym__ty_path,
    STATE(299), 2,
      sym__ty,
      sym_ty_infix,
  [2621] = 8,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(192), 1,
      sym_ty_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(59), 2,
      sym__ty_atom,
      sym__ty_path,
    STATE(305), 2,
      sym__ty,
      sym_ty_infix,
  [2649] = 7,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(220), 2,
      anon_sym_RPAREN,
      sym_operator,
    STATE(66), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2675] = 8,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(192), 1,
      sym_ty_app,
    STATE(225), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(59), 2,
      sym__ty_atom,
      sym__ty_path,
    STATE(296), 2,
      sym__ty,
      sym_ty_infix,
  [2703] = 8,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_path,
    STATE(138), 1,
      sym_ty_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(53), 2,
      sym__ty_atom,
      sym__ty_path,
    STATE(210), 2,
      sym__ty,
      sym_ty_infix,
  [2731] = 8,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_path,
    STATE(138), 1,
      sym_ty_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(53), 2,
      sym__ty_atom,
      sym__ty_path,
    STATE(215), 2,
      sym__ty,
      sym_ty_infix,
  [2759] = 7,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_of,
    STATE(113), 1,
      sym_path,
    STATE(216), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(76), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2784] = 7,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_EQ,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(271), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(80), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [2809] = 7,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_of,
    STATE(113), 1,
      sym_path,
    STATE(216), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(76), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [2834] = 7,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_EQ,
    ACTIONS(279), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(281), 2,
      sym__layout_semicolon,
      sym__layout_end,
    STATE(77), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [2859] = 5,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(80), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
    ACTIONS(286), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_PIPE,
  [2880] = 7,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_path,
    STATE(171), 1,
      sym_ty_app,
    STATE(242), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(57), 2,
      sym__ty_atom,
      sym__ty_path,
  [2904] = 5,
    ACTIONS(291), 1,
      aux_sym_int_literal_token1,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(293), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    STATE(34), 3,
      sym__literal,
      sym_int_literal,
      sym_string_literal,
  [2924] = 3,
    ACTIONS(297), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(204), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [2940] = 4,
    ACTIONS(297), 1,
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
  [2958] = 4,
    ACTIONS(297), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(202), 3,
      anon_sym_as,
      anon_sym_of,
      sym_identifier,
    ACTIONS(204), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
  [2976] = 3,
    ACTIONS(297), 1,
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
  [2992] = 6,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(113), 1,
      sym_path,
    STATE(216), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(78), 3,
      sym__ty_atom,
      sym__ty_path,
      aux_sym_ctor_repeat1,
  [3014] = 7,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_path,
    STATE(225), 1,
      aux_sym_path_repeat1,
    STATE(258), 1,
      sym_ty_app,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(72), 2,
      sym__ty_atom,
      sym__ty_path,
  [3038] = 4,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(89), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(304), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3055] = 6,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(308), 1,
      anon_sym_EQ,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(119), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [3076] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(314), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [3089] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(316), 1,
      anon_sym_foreign,
    ACTIONS(318), 1,
      sym__layout_end,
    STATE(186), 1,
      sym_func,
    STATE(253), 1,
      sym__func_body,
    STATE(254), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3112] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(316), 1,
      anon_sym_foreign,
    ACTIONS(320), 1,
      sym__layout_end,
    STATE(204), 1,
      sym_func,
    STATE(253), 1,
      sym__func_body,
    STATE(254), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3135] = 5,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(324), 1,
      anon_sym_EQ,
    ACTIONS(326), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(124), 3,
      sym__pat_atom,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [3154] = 4,
    ACTIONS(328), 1,
      sym_identifier,
    STATE(89), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(330), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3171] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(316), 1,
      anon_sym_foreign,
    ACTIONS(332), 1,
      sym__layout_end,
    STATE(157), 1,
      sym_func,
    STATE(253), 1,
      sym__func_body,
    STATE(254), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3194] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(337), 2,
      anon_sym_EQ,
      anon_sym_DASH_GT,
    STATE(97), 3,
      sym__pat_atom,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [3211] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(316), 1,
      anon_sym_foreign,
    ACTIONS(339), 1,
      sym__layout_end,
    STATE(203), 1,
      sym_func,
    STATE(253), 1,
      sym__func_body,
    STATE(254), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3234] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(341), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [3247] = 5,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym_operator,
    STATE(103), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(77), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [3266] = 4,
    ACTIONS(328), 1,
      sym_identifier,
    STATE(89), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(343), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3283] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(316), 1,
      anon_sym_foreign,
    ACTIONS(345), 1,
      sym__layout_end,
    STATE(191), 1,
      sym_func,
    STATE(253), 1,
      sym__func_body,
    STATE(254), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3306] = 5,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym_operator,
    STATE(104), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(347), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [3325] = 5,
    ACTIONS(349), 1,
      anon_sym_BQUOTE,
    ACTIONS(352), 1,
      sym_operator,
    STATE(104), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [3344] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(355), 6,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [3357] = 7,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(316), 1,
      anon_sym_foreign,
    ACTIONS(357), 1,
      sym__layout_end,
    STATE(198), 1,
      sym_func,
    STATE(253), 1,
      sym__func_body,
    STATE(254), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3380] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(341), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
      sym_identifier,
  [3392] = 4,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(97), 3,
      sym__pat_atom,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [3408] = 5,
    ACTIONS(361), 1,
      anon_sym_EQ,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(365), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3426] = 5,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym_operator,
    STATE(125), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(347), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3444] = 5,
    ACTIONS(361), 1,
      anon_sym_EQ,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(365), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3462] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(91), 5,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [3474] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(367), 2,
      anon_sym_of,
      sym_identifier,
    ACTIONS(341), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
  [3488] = 6,
    ACTIONS(25), 1,
      anon_sym_fn,
    ACTIONS(316), 1,
      anon_sym_foreign,
    STATE(213), 1,
      sym_func,
    STATE(253), 1,
      sym__func_body,
    STATE(254), 1,
      sym__func_type,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3508] = 5,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(115), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [3526] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(375), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [3538] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(87), 5,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_then,
      anon_sym_else,
      sym_operator,
  [3550] = 5,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym_operator,
    STATE(110), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(77), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3568] = 5,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(115), 2,
      sym_typevar,
      aux_sym__type_alias_repeat1,
  [3586] = 4,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(379), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
  [3602] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(375), 5,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_LPAREN,
      sym_operator,
      sym_identifier,
  [3614] = 5,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_EQ,
    STATE(120), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(386), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3632] = 5,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_EQ,
    STATE(111), 1,
      aux_sym_class_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(390), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3650] = 4,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(97), 3,
      sym__pat_atom,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [3666] = 5,
    ACTIONS(394), 1,
      anon_sym_BQUOTE,
    ACTIONS(397), 1,
      sym_operator,
    STATE(125), 1,
      aux_sym_expr_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(87), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3684] = 4,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(97), 3,
      sym__pat_atom,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [3700] = 3,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(402), 2,
      anon_sym_of,
      sym_identifier,
    ACTIONS(375), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_operator,
  [3714] = 5,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(406), 1,
      anon_sym_DASH_GT,
    STATE(136), 1,
      sym_fundep,
    STATE(147), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3731] = 3,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(108), 3,
      sym__pat_atom,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [3744] = 5,
    ACTIONS(222), 1,
      sym_identifier,
    STATE(99), 1,
      sym_path,
    STATE(170), 1,
      sym__ty_path,
    STATE(219), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3761] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(87), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
  [3772] = 5,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(406), 1,
      anon_sym_DASH_GT,
    STATE(123), 1,
      sym_fundep,
    STATE(147), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3789] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(91), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_BQUOTE,
      sym_operator,
  [3800] = 3,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(126), 3,
      sym__pat_atom,
      sym__pat_ident,
      aux_sym__func_body_repeat1,
  [3813] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(408), 1,
      anon_sym_module,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(38), 2,
      sym_attribute,
      aux_sym_module_repeat1,
  [3828] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(379), 4,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3839] = 5,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(406), 1,
      anon_sym_DASH_GT,
    STATE(109), 1,
      sym_fundep,
    STATE(147), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3856] = 4,
    ACTIONS(216), 1,
      sym_operator,
    STATE(140), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(218), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3871] = 4,
    ACTIONS(410), 1,
      anon_sym_PIPE,
    STATE(139), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(413), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3886] = 4,
    ACTIONS(216), 1,
      sym_operator,
    STATE(141), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(415), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3901] = 4,
    ACTIONS(417), 1,
      sym_operator,
    STATE(141), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(220), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3916] = 4,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    STATE(139), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(420), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3931] = 4,
    ACTIONS(291), 1,
      aux_sym_int_literal_token1,
    STATE(178), 1,
      sym_int_literal,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(293), 2,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
  [3946] = 4,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    STATE(139), 1,
      aux_sym__type_ctor_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(422), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [3961] = 4,
    ACTIONS(424), 1,
      sym__layout_semicolon,
    ACTIONS(426), 1,
      sym__layout_end,
    STATE(181), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3975] = 4,
    ACTIONS(428), 1,
      sym__layout_semicolon,
    ACTIONS(430), 1,
      sym__layout_end,
    STATE(196), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [3989] = 4,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(434), 1,
      anon_sym_DASH_GT,
    STATE(162), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4003] = 4,
    ACTIONS(428), 1,
      sym__layout_semicolon,
    ACTIONS(436), 1,
      sym__layout_end,
    STATE(146), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4017] = 4,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(155), 1,
      sym__attr_body,
    STATE(282), 1,
      sym__attr_value,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4031] = 3,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    STATE(276), 2,
      sym__pat_atom,
      sym__pat_ident,
  [4043] = 4,
    ACTIONS(440), 1,
      aux_sym_string_literal_token1,
    ACTIONS(442), 1,
      anon_sym_DQUOTE2,
    STATE(172), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(444), 2,
      sym_comment,
      aux_sym__token1,
  [4057] = 4,
    ACTIONS(446), 1,
      aux_sym_string_literal_token1,
    ACTIONS(448), 1,
      anon_sym_DQUOTE2,
    STATE(151), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(444), 2,
      sym_comment,
      aux_sym__token1,
  [4071] = 4,
    ACTIONS(428), 1,
      sym__layout_semicolon,
    ACTIONS(450), 1,
      sym__layout_end,
    STATE(182), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4085] = 4,
    ACTIONS(452), 1,
      aux_sym_string_literal_token1,
    ACTIONS(454), 1,
      anon_sym_DQUOTE2,
    STATE(156), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(444), 2,
      sym_comment,
      aux_sym__token1,
  [4099] = 4,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4113] = 4,
    ACTIONS(440), 1,
      aux_sym_string_literal_token1,
    ACTIONS(460), 1,
      anon_sym_DQUOTE2,
    STATE(172), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(444), 2,
      sym_comment,
      aux_sym__token1,
  [4127] = 4,
    ACTIONS(345), 1,
      sym__layout_end,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    STATE(185), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4141] = 4,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4155] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(466), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4165] = 4,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(242), 1,
      aux_sym_path_repeat1,
    STATE(247), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4179] = 4,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_path_repeat1,
    STATE(279), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4193] = 4,
    ACTIONS(304), 1,
      anon_sym_DASH_GT,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(162), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4207] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(471), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4217] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(473), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4227] = 4,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_path_repeat1,
    STATE(286), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4241] = 4,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      sym_operator,
    STATE(166), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4255] = 4,
    ACTIONS(357), 1,
      sym__layout_end,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    STATE(202), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4269] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(478), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4279] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(480), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4289] = 3,
    ACTIONS(482), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(484), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4301] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(220), 3,
      sym__layout_semicolon,
      sym__layout_end,
      sym_operator,
  [4311] = 4,
    ACTIONS(486), 1,
      aux_sym_string_literal_token1,
    ACTIONS(489), 1,
      anon_sym_DQUOTE2,
    STATE(172), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(444), 2,
      sym_comment,
      aux_sym__token1,
  [4325] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(491), 3,
      anon_sym_RPAREN,
      anon_sym_then,
      anon_sym_else,
  [4335] = 4,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_path_repeat1,
    STATE(285), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4349] = 4,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym__attr_value_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4363] = 4,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_path_repeat1,
    STATE(317), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4377] = 4,
    ACTIONS(232), 1,
      sym_operator,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4391] = 4,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_path_repeat1,
    STATE(303), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4405] = 4,
    ACTIONS(424), 1,
      sym__layout_semicolon,
    ACTIONS(498), 1,
      sym__layout_end,
    STATE(183), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4419] = 4,
    ACTIONS(500), 1,
      aux_sym_string_literal_token1,
    ACTIONS(502), 1,
      anon_sym_DQUOTE2,
    STATE(190), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(444), 2,
      sym_comment,
      aux_sym__token1,
  [4433] = 4,
    ACTIONS(424), 1,
      sym__layout_semicolon,
    ACTIONS(504), 1,
      sym__layout_end,
    STATE(183), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4447] = 4,
    ACTIONS(428), 1,
      sym__layout_semicolon,
    ACTIONS(506), 1,
      sym__layout_end,
    STATE(196), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4461] = 4,
    ACTIONS(508), 1,
      sym__layout_semicolon,
    ACTIONS(511), 1,
      sym__layout_end,
    STATE(183), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4475] = 4,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    ACTIONS(513), 1,
      sym__layout_end,
    STATE(202), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4489] = 4,
    ACTIONS(339), 1,
      sym__layout_end,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    STATE(202), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4503] = 4,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    ACTIONS(515), 1,
      sym__layout_end,
    STATE(184), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4517] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(413), 3,
      sym__layout_semicolon,
      sym__layout_end,
      anon_sym_PIPE,
  [4527] = 4,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    ACTIONS(515), 1,
      sym__layout_end,
    STATE(202), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4541] = 4,
    ACTIONS(424), 1,
      sym__layout_semicolon,
    ACTIONS(517), 1,
      sym__layout_end,
    STATE(179), 1,
      aux_sym_module_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4555] = 4,
    ACTIONS(440), 1,
      aux_sym_string_literal_token1,
    ACTIONS(519), 1,
      anon_sym_DQUOTE2,
    STATE(172), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(444), 2,
      sym_comment,
      aux_sym__token1,
  [4569] = 4,
    ACTIONS(339), 1,
      sym__layout_end,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    STATE(167), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4583] = 4,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    ACTIONS(232), 1,
      sym_operator,
    STATE(177), 1,
      aux_sym_ty_infix_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4597] = 4,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    ACTIONS(521), 1,
      sym__layout_end,
    STATE(202), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4611] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(355), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [4621] = 4,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_path_repeat1,
    STATE(300), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4635] = 4,
    ACTIONS(523), 1,
      sym__layout_semicolon,
    ACTIONS(526), 1,
      sym__layout_end,
    STATE(196), 1,
      aux_sym__expr_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4649] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(528), 3,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      sym_identifier,
  [4659] = 4,
    ACTIONS(318), 1,
      sym__layout_end,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    STATE(188), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4673] = 4,
    ACTIONS(318), 1,
      sym__layout_end,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    STATE(202), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4687] = 4,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_path_repeat1,
    STATE(308), 1,
      sym_path,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4701] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(314), 3,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_identifier,
  [4711] = 4,
    ACTIONS(530), 1,
      sym__layout_semicolon,
    ACTIONS(533), 1,
      sym__layout_end,
    STATE(202), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4725] = 4,
    ACTIONS(357), 1,
      sym__layout_end,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    STATE(199), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4739] = 4,
    ACTIONS(462), 1,
      sym__layout_semicolon,
    ACTIONS(535), 1,
      sym__layout_end,
    STATE(193), 1,
      aux_sym_class_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4753] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(537), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4762] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(539), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4771] = 3,
    ACTIONS(541), 1,
      sym__layout_start,
    STATE(246), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4782] = 3,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(42), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4793] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(543), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4802] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(545), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4811] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(526), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4820] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(473), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4829] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(533), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4838] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(547), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4847] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(549), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4856] = 3,
    ACTIONS(551), 1,
      sym_identifier,
    STATE(243), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4867] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(553), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4876] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(471), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4885] = 3,
    ACTIONS(555), 1,
      sym_identifier,
    STATE(243), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4896] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(557), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4905] = 3,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4916] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(561), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4925] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(563), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4934] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(565), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4943] = 3,
    ACTIONS(567), 1,
      sym_identifier,
    STATE(243), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4954] = 3,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4965] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(491), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4974] = 3,
    ACTIONS(541), 1,
      sym__layout_start,
    STATE(252), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [4985] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(569), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [4994] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(511), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5003] = 3,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5014] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(573), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5023] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(466), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5032] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(575), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5041] = 3,
    ACTIONS(577), 1,
      sym__layout_start,
    STATE(169), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5052] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(579), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5061] = 3,
    ACTIONS(541), 1,
      sym__layout_start,
    STATE(241), 1,
      sym__expr_block,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5072] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(581), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5081] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(386), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5090] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(583), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5099] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(585), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5108] = 3,
    ACTIONS(587), 1,
      sym_identifier,
    STATE(243), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5119] = 3,
    ACTIONS(589), 1,
      sym_identifier,
    STATE(243), 1,
      aux_sym_path_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5130] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(478), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5139] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(365), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5148] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(592), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5157] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(594), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5166] = 3,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(250), 1,
      sym__attr_body,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5177] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(596), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5186] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(493), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5195] = 3,
    ACTIONS(598), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_fundep_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5206] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(480), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5215] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(600), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5224] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(600), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5233] = 3,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5244] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(602), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5253] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(604), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5262] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(220), 2,
      anon_sym_RPAREN,
      sym_operator,
  [5271] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(602), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5280] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(602), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5289] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(606), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5298] = 3,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(187), 1,
      sym_ctor,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5309] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(610), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5318] = 2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
    ACTIONS(612), 2,
      sym__layout_semicolon,
      sym__layout_end,
  [5327] = 3,
    ACTIONS(614), 1,
      anon_sym_type,
    ACTIONS(616), 1,
      anon_sym_fn,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5338] = 2,
    ACTIONS(618), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5346] = 2,
    ACTIONS(620), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5354] = 2,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5362] = 2,
    ACTIONS(624), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5370] = 2,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5378] = 2,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5386] = 2,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5394] = 2,
    ACTIONS(632), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5402] = 2,
    ACTIONS(634), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5410] = 2,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5418] = 2,
    ACTIONS(638), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5426] = 2,
    ACTIONS(640), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5434] = 2,
    ACTIONS(642), 1,
      sym_operator,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5442] = 2,
    ACTIONS(644), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5450] = 2,
    ACTIONS(646), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5458] = 2,
    ACTIONS(297), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5466] = 2,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5474] = 2,
    ACTIONS(616), 1,
      anon_sym_fn,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5482] = 2,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5490] = 2,
    ACTIONS(652), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5498] = 2,
    ACTIONS(654), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5506] = 2,
    ACTIONS(656), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5514] = 2,
    ACTIONS(658), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5522] = 2,
    ACTIONS(660), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5530] = 2,
    ACTIONS(662), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5538] = 2,
    ACTIONS(664), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5546] = 2,
    ACTIONS(666), 1,
      anon_sym_RPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5554] = 2,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5562] = 2,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5570] = 2,
    ACTIONS(672), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5578] = 2,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5586] = 2,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5594] = 2,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5602] = 2,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5610] = 2,
    ACTIONS(682), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5618] = 2,
    ACTIONS(684), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5626] = 2,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5634] = 2,
    ACTIONS(688), 1,
      anon_sym_as,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5642] = 2,
    ACTIONS(690), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5650] = 2,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5658] = 2,
    ACTIONS(694), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5666] = 2,
    ACTIONS(696), 1,
      sym__layout_start,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5674] = 2,
    ACTIONS(698), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5682] = 2,
    ACTIONS(700), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5690] = 2,
    ACTIONS(702), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5698] = 2,
    ACTIONS(704), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5706] = 2,
    ACTIONS(706), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5714] = 2,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5722] = 2,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5730] = 2,
    ACTIONS(712), 1,
      anon_sym_then,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5738] = 2,
    ACTIONS(714), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      aux_sym__token1,
  [5746] = 2,
    ACTIONS(716), 1,
      anon_sym_BQUOTE,
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
  [SMALL_STATE(23)] = 1218,
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
  [SMALL_STATE(37)] = 1742,
  [SMALL_STATE(38)] = 1766,
  [SMALL_STATE(39)] = 1794,
  [SMALL_STATE(40)] = 1832,
  [SMALL_STATE(41)] = 1856,
  [SMALL_STATE(42)] = 1880,
  [SMALL_STATE(43)] = 1902,
  [SMALL_STATE(44)] = 1926,
  [SMALL_STATE(45)] = 1947,
  [SMALL_STATE(46)] = 1968,
  [SMALL_STATE(47)] = 1989,
  [SMALL_STATE(48)] = 2010,
  [SMALL_STATE(49)] = 2033,
  [SMALL_STATE(50)] = 2056,
  [SMALL_STATE(51)] = 2076,
  [SMALL_STATE(52)] = 2110,
  [SMALL_STATE(53)] = 2130,
  [SMALL_STATE(54)] = 2162,
  [SMALL_STATE(55)] = 2182,
  [SMALL_STATE(56)] = 2202,
  [SMALL_STATE(57)] = 2236,
  [SMALL_STATE(58)] = 2263,
  [SMALL_STATE(59)] = 2290,
  [SMALL_STATE(60)] = 2321,
  [SMALL_STATE(61)] = 2348,
  [SMALL_STATE(62)] = 2375,
  [SMALL_STATE(63)] = 2402,
  [SMALL_STATE(64)] = 2429,
  [SMALL_STATE(65)] = 2455,
  [SMALL_STATE(66)] = 2483,
  [SMALL_STATE(67)] = 2509,
  [SMALL_STATE(68)] = 2537,
  [SMALL_STATE(69)] = 2565,
  [SMALL_STATE(70)] = 2593,
  [SMALL_STATE(71)] = 2621,
  [SMALL_STATE(72)] = 2649,
  [SMALL_STATE(73)] = 2675,
  [SMALL_STATE(74)] = 2703,
  [SMALL_STATE(75)] = 2731,
  [SMALL_STATE(76)] = 2759,
  [SMALL_STATE(77)] = 2784,
  [SMALL_STATE(78)] = 2809,
  [SMALL_STATE(79)] = 2834,
  [SMALL_STATE(80)] = 2859,
  [SMALL_STATE(81)] = 2880,
  [SMALL_STATE(82)] = 2904,
  [SMALL_STATE(83)] = 2924,
  [SMALL_STATE(84)] = 2940,
  [SMALL_STATE(85)] = 2958,
  [SMALL_STATE(86)] = 2976,
  [SMALL_STATE(87)] = 2992,
  [SMALL_STATE(88)] = 3014,
  [SMALL_STATE(89)] = 3038,
  [SMALL_STATE(90)] = 3055,
  [SMALL_STATE(91)] = 3076,
  [SMALL_STATE(92)] = 3089,
  [SMALL_STATE(93)] = 3112,
  [SMALL_STATE(94)] = 3135,
  [SMALL_STATE(95)] = 3154,
  [SMALL_STATE(96)] = 3171,
  [SMALL_STATE(97)] = 3194,
  [SMALL_STATE(98)] = 3211,
  [SMALL_STATE(99)] = 3234,
  [SMALL_STATE(100)] = 3247,
  [SMALL_STATE(101)] = 3266,
  [SMALL_STATE(102)] = 3283,
  [SMALL_STATE(103)] = 3306,
  [SMALL_STATE(104)] = 3325,
  [SMALL_STATE(105)] = 3344,
  [SMALL_STATE(106)] = 3357,
  [SMALL_STATE(107)] = 3380,
  [SMALL_STATE(108)] = 3392,
  [SMALL_STATE(109)] = 3408,
  [SMALL_STATE(110)] = 3426,
  [SMALL_STATE(111)] = 3444,
  [SMALL_STATE(112)] = 3462,
  [SMALL_STATE(113)] = 3474,
  [SMALL_STATE(114)] = 3488,
  [SMALL_STATE(115)] = 3508,
  [SMALL_STATE(116)] = 3526,
  [SMALL_STATE(117)] = 3538,
  [SMALL_STATE(118)] = 3550,
  [SMALL_STATE(119)] = 3568,
  [SMALL_STATE(120)] = 3586,
  [SMALL_STATE(121)] = 3602,
  [SMALL_STATE(122)] = 3614,
  [SMALL_STATE(123)] = 3632,
  [SMALL_STATE(124)] = 3650,
  [SMALL_STATE(125)] = 3666,
  [SMALL_STATE(126)] = 3684,
  [SMALL_STATE(127)] = 3700,
  [SMALL_STATE(128)] = 3714,
  [SMALL_STATE(129)] = 3731,
  [SMALL_STATE(130)] = 3744,
  [SMALL_STATE(131)] = 3761,
  [SMALL_STATE(132)] = 3772,
  [SMALL_STATE(133)] = 3789,
  [SMALL_STATE(134)] = 3800,
  [SMALL_STATE(135)] = 3813,
  [SMALL_STATE(136)] = 3828,
  [SMALL_STATE(137)] = 3839,
  [SMALL_STATE(138)] = 3856,
  [SMALL_STATE(139)] = 3871,
  [SMALL_STATE(140)] = 3886,
  [SMALL_STATE(141)] = 3901,
  [SMALL_STATE(142)] = 3916,
  [SMALL_STATE(143)] = 3931,
  [SMALL_STATE(144)] = 3946,
  [SMALL_STATE(145)] = 3961,
  [SMALL_STATE(146)] = 3975,
  [SMALL_STATE(147)] = 3989,
  [SMALL_STATE(148)] = 4003,
  [SMALL_STATE(149)] = 4017,
  [SMALL_STATE(150)] = 4031,
  [SMALL_STATE(151)] = 4043,
  [SMALL_STATE(152)] = 4057,
  [SMALL_STATE(153)] = 4071,
  [SMALL_STATE(154)] = 4085,
  [SMALL_STATE(155)] = 4099,
  [SMALL_STATE(156)] = 4113,
  [SMALL_STATE(157)] = 4127,
  [SMALL_STATE(158)] = 4141,
  [SMALL_STATE(159)] = 4155,
  [SMALL_STATE(160)] = 4165,
  [SMALL_STATE(161)] = 4179,
  [SMALL_STATE(162)] = 4193,
  [SMALL_STATE(163)] = 4207,
  [SMALL_STATE(164)] = 4217,
  [SMALL_STATE(165)] = 4227,
  [SMALL_STATE(166)] = 4241,
  [SMALL_STATE(167)] = 4255,
  [SMALL_STATE(168)] = 4269,
  [SMALL_STATE(169)] = 4279,
  [SMALL_STATE(170)] = 4289,
  [SMALL_STATE(171)] = 4301,
  [SMALL_STATE(172)] = 4311,
  [SMALL_STATE(173)] = 4325,
  [SMALL_STATE(174)] = 4335,
  [SMALL_STATE(175)] = 4349,
  [SMALL_STATE(176)] = 4363,
  [SMALL_STATE(177)] = 4377,
  [SMALL_STATE(178)] = 4391,
  [SMALL_STATE(179)] = 4405,
  [SMALL_STATE(180)] = 4419,
  [SMALL_STATE(181)] = 4433,
  [SMALL_STATE(182)] = 4447,
  [SMALL_STATE(183)] = 4461,
  [SMALL_STATE(184)] = 4475,
  [SMALL_STATE(185)] = 4489,
  [SMALL_STATE(186)] = 4503,
  [SMALL_STATE(187)] = 4517,
  [SMALL_STATE(188)] = 4527,
  [SMALL_STATE(189)] = 4541,
  [SMALL_STATE(190)] = 4555,
  [SMALL_STATE(191)] = 4569,
  [SMALL_STATE(192)] = 4583,
  [SMALL_STATE(193)] = 4597,
  [SMALL_STATE(194)] = 4611,
  [SMALL_STATE(195)] = 4621,
  [SMALL_STATE(196)] = 4635,
  [SMALL_STATE(197)] = 4649,
  [SMALL_STATE(198)] = 4659,
  [SMALL_STATE(199)] = 4673,
  [SMALL_STATE(200)] = 4687,
  [SMALL_STATE(201)] = 4701,
  [SMALL_STATE(202)] = 4711,
  [SMALL_STATE(203)] = 4725,
  [SMALL_STATE(204)] = 4739,
  [SMALL_STATE(205)] = 4753,
  [SMALL_STATE(206)] = 4762,
  [SMALL_STATE(207)] = 4771,
  [SMALL_STATE(208)] = 4782,
  [SMALL_STATE(209)] = 4793,
  [SMALL_STATE(210)] = 4802,
  [SMALL_STATE(211)] = 4811,
  [SMALL_STATE(212)] = 4820,
  [SMALL_STATE(213)] = 4829,
  [SMALL_STATE(214)] = 4838,
  [SMALL_STATE(215)] = 4847,
  [SMALL_STATE(216)] = 4856,
  [SMALL_STATE(217)] = 4867,
  [SMALL_STATE(218)] = 4876,
  [SMALL_STATE(219)] = 4885,
  [SMALL_STATE(220)] = 4896,
  [SMALL_STATE(221)] = 4905,
  [SMALL_STATE(222)] = 4916,
  [SMALL_STATE(223)] = 4925,
  [SMALL_STATE(224)] = 4934,
  [SMALL_STATE(225)] = 4943,
  [SMALL_STATE(226)] = 4954,
  [SMALL_STATE(227)] = 4965,
  [SMALL_STATE(228)] = 4974,
  [SMALL_STATE(229)] = 4985,
  [SMALL_STATE(230)] = 4994,
  [SMALL_STATE(231)] = 5003,
  [SMALL_STATE(232)] = 5014,
  [SMALL_STATE(233)] = 5023,
  [SMALL_STATE(234)] = 5032,
  [SMALL_STATE(235)] = 5041,
  [SMALL_STATE(236)] = 5052,
  [SMALL_STATE(237)] = 5061,
  [SMALL_STATE(238)] = 5072,
  [SMALL_STATE(239)] = 5081,
  [SMALL_STATE(240)] = 5090,
  [SMALL_STATE(241)] = 5099,
  [SMALL_STATE(242)] = 5108,
  [SMALL_STATE(243)] = 5119,
  [SMALL_STATE(244)] = 5130,
  [SMALL_STATE(245)] = 5139,
  [SMALL_STATE(246)] = 5148,
  [SMALL_STATE(247)] = 5157,
  [SMALL_STATE(248)] = 5166,
  [SMALL_STATE(249)] = 5177,
  [SMALL_STATE(250)] = 5186,
  [SMALL_STATE(251)] = 5195,
  [SMALL_STATE(252)] = 5206,
  [SMALL_STATE(253)] = 5215,
  [SMALL_STATE(254)] = 5224,
  [SMALL_STATE(255)] = 5233,
  [SMALL_STATE(256)] = 5244,
  [SMALL_STATE(257)] = 5253,
  [SMALL_STATE(258)] = 5262,
  [SMALL_STATE(259)] = 5271,
  [SMALL_STATE(260)] = 5280,
  [SMALL_STATE(261)] = 5289,
  [SMALL_STATE(262)] = 5298,
  [SMALL_STATE(263)] = 5309,
  [SMALL_STATE(264)] = 5318,
  [SMALL_STATE(265)] = 5327,
  [SMALL_STATE(266)] = 5338,
  [SMALL_STATE(267)] = 5346,
  [SMALL_STATE(268)] = 5354,
  [SMALL_STATE(269)] = 5362,
  [SMALL_STATE(270)] = 5370,
  [SMALL_STATE(271)] = 5378,
  [SMALL_STATE(272)] = 5386,
  [SMALL_STATE(273)] = 5394,
  [SMALL_STATE(274)] = 5402,
  [SMALL_STATE(275)] = 5410,
  [SMALL_STATE(276)] = 5418,
  [SMALL_STATE(277)] = 5426,
  [SMALL_STATE(278)] = 5434,
  [SMALL_STATE(279)] = 5442,
  [SMALL_STATE(280)] = 5450,
  [SMALL_STATE(281)] = 5458,
  [SMALL_STATE(282)] = 5466,
  [SMALL_STATE(283)] = 5474,
  [SMALL_STATE(284)] = 5482,
  [SMALL_STATE(285)] = 5490,
  [SMALL_STATE(286)] = 5498,
  [SMALL_STATE(287)] = 5506,
  [SMALL_STATE(288)] = 5514,
  [SMALL_STATE(289)] = 5522,
  [SMALL_STATE(290)] = 5530,
  [SMALL_STATE(291)] = 5538,
  [SMALL_STATE(292)] = 5546,
  [SMALL_STATE(293)] = 5554,
  [SMALL_STATE(294)] = 5562,
  [SMALL_STATE(295)] = 5570,
  [SMALL_STATE(296)] = 5578,
  [SMALL_STATE(297)] = 5586,
  [SMALL_STATE(298)] = 5594,
  [SMALL_STATE(299)] = 5602,
  [SMALL_STATE(300)] = 5610,
  [SMALL_STATE(301)] = 5618,
  [SMALL_STATE(302)] = 5626,
  [SMALL_STATE(303)] = 5634,
  [SMALL_STATE(304)] = 5642,
  [SMALL_STATE(305)] = 5650,
  [SMALL_STATE(306)] = 5658,
  [SMALL_STATE(307)] = 5666,
  [SMALL_STATE(308)] = 5674,
  [SMALL_STATE(309)] = 5682,
  [SMALL_STATE(310)] = 5690,
  [SMALL_STATE(311)] = 5698,
  [SMALL_STATE(312)] = 5706,
  [SMALL_STATE(313)] = 5714,
  [SMALL_STATE(314)] = 5722,
  [SMALL_STATE(315)] = 5730,
  [SMALL_STATE(316)] = 5738,
  [SMALL_STATE(317)] = 5746,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_infix_repeat1, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_app, 2, .production_id = 9),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_app, 2, .production_id = 9),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(41),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(9),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(46),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(46),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(180),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(25),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(49),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(14),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(50),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(50),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(152),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_app_repeat1, 2), SHIFT_REPEAT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_body, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_body, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(208),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_parens, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_parens, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1, .production_id = 11),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_app, 2, .production_id = 9),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(49),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(69),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(86),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(71),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 2, .production_id = 11),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(41),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(70),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2), SHIFT_REPEAT(84),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ctor_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3, .production_id = 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 3),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(91),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(316),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(89),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2), SHIFT_REPEAT(197),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__func_body_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty_path, 1, .production_id = 5),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fundep, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_infix, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(195),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(39),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typevar, 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, .production_id = 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty_path, 1, .production_id = 5),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(201),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_alias_repeat1, 2), SHIFT_REPEAT(311),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ty_atom, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2), SHIFT_REPEAT(128),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, .production_id = 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, .production_id = 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(176),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_infix_repeat1, 2), SHIFT_REPEAT(33),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ty_atom, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2), SHIFT_REPEAT(262),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_ctor_repeat1, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty_infix, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(81),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 5, .production_id = 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_ctor, 4, .production_id = 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_if, 6),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fundep_repeat1, 2), SHIFT_REPEAT(162),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_lambda, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 4),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ty_infix_repeat1, 2), SHIFT_REPEAT(88),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_do, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, .production_id = 10),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(172),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_block, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_value_repeat1, 2), SHIFT_REPEAT(248),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2), SHIFT_REPEAT(4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat2, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2), SHIFT_REPEAT(8),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_block_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pat_ident, 1, .production_id = 7),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2), SHIFT_REPEAT(114),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__postfix, 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__infix, 5),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 5, .production_id = 6),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 7, .production_id = 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 5, .production_id = 6),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 7, .production_id = 10),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_let, 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 8, .production_id = 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 5, .production_id = 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 8, .production_id = 10),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 9, .production_id = 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 9, .production_id = 10),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 10, .production_id = 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 11, .production_id = 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_type, 4, .production_id = 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 5, .production_id = 12),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(281),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_body, 4, .production_id = 8),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_kind, 4, .production_id = 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 1, .production_id = 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 4),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_alias, 4, .production_id = 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixity, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 6),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, .production_id = 6),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 7, .production_id = 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 8, .production_id = 6),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [706] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
