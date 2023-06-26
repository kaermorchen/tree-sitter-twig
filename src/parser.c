#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 12

enum {
  aux_sym_content_token1 = 1,
  anon_sym_LBRACE_PERCENT = 2,
  anon_sym_LBRACE_PERCENT_DASH = 3,
  anon_sym_LBRACE_PERCENT_TILDE = 4,
  anon_sym_PERCENT_RBRACE = 5,
  anon_sym_DASH_PERCENT_RBRACE = 6,
  anon_sym_TILDE_PERCENT_RBRACE = 7,
  anon_sym_LBRACE_LBRACE = 8,
  anon_sym_LBRACE_LBRACE_DASH = 9,
  anon_sym_LBRACE_LBRACE_TILDE = 10,
  anon_sym_RBRACE_RBRACE = 11,
  anon_sym_DASH_RBRACE_RBRACE = 12,
  anon_sym_TILDE_RBRACE_RBRACE = 13,
  anon_sym_LBRACE_POUND = 14,
  aux_sym_comment_token1 = 15,
  anon_sym_RBRACE = 16,
  sym_identifier = 17,
  sym_null_literal = 18,
  sym_number_literal = 19,
  sym_boolean_literal = 20,
  sym_string_literal = 21,
  anon_sym_LBRACK = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACK = 24,
  anon_sym_LBRACE = 25,
  anon_sym_COLON = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_EQ_GT = 29,
  anon_sym_DQUOTE = 30,
  anon_sym_BSLASH_DQUOTE = 31,
  anon_sym_BSLASH_POUND = 32,
  anon_sym_BSLASH_BSLASH = 33,
  aux_sym_interpolated_string_token1 = 34,
  anon_sym_POUND_LBRACE = 35,
  anon_sym_DOT = 36,
  anon_sym_set = 37,
  anon_sym_EQ = 38,
  sym_template = 39,
  sym_content = 40,
  sym_statement_directive = 41,
  sym_output_directive = 42,
  sym_comment = 43,
  sym__literal = 44,
  sym_array_literal = 45,
  sym_object_literal = 46,
  sym_property = 47,
  sym_property_name = 48,
  sym_arrow_function = 49,
  sym_interpolated_string = 50,
  sym__expression = 51,
  sym__parenthesized_expression = 52,
  sym_member_expression = 53,
  sym_subscript_expression = 54,
  sym__statement = 55,
  sym_assignment_statement = 56,
  aux_sym_template_repeat1 = 57,
  aux_sym_content_repeat1 = 58,
  aux_sym_array_literal_repeat1 = 59,
  aux_sym_object_literal_repeat1 = 60,
  aux_sym_arrow_function_repeat1 = 61,
  aux_sym_interpolated_string_repeat1 = 62,
  aux_sym_assignment_statement_repeat1 = 63,
  aux_sym_assignment_statement_repeat2 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_DASH] = "{%-",
  [anon_sym_LBRACE_PERCENT_TILDE] = "{%~",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_DASH_PERCENT_RBRACE] = "-%}",
  [anon_sym_TILDE_PERCENT_RBRACE] = "~%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_LBRACE_LBRACE_TILDE] = "{{~",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [anon_sym_TILDE_RBRACE_RBRACE] = "~}}",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_null_literal] = "null_literal",
  [sym_number_literal] = "number_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_POUND] = "\\#",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_interpolated_string_token1] = "interpolated_string_token1",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_DOT] = ".",
  [anon_sym_set] = "set",
  [anon_sym_EQ] = "=",
  [sym_template] = "template",
  [sym_content] = "content",
  [sym_statement_directive] = "statement_directive",
  [sym_output_directive] = "output_directive",
  [sym_comment] = "comment",
  [sym__literal] = "_literal",
  [sym_array_literal] = "array_literal",
  [sym_object_literal] = "object_literal",
  [sym_property] = "property",
  [sym_property_name] = "property_name",
  [sym_arrow_function] = "arrow_function",
  [sym_interpolated_string] = "interpolated_string",
  [sym__expression] = "_expression",
  [sym__parenthesized_expression] = "_parenthesized_expression",
  [sym_member_expression] = "member_expression",
  [sym_subscript_expression] = "subscript_expression",
  [sym__statement] = "_statement",
  [sym_assignment_statement] = "assignment_statement",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym_object_literal_repeat1] = "object_literal_repeat1",
  [aux_sym_arrow_function_repeat1] = "arrow_function_repeat1",
  [aux_sym_interpolated_string_repeat1] = "interpolated_string_repeat1",
  [aux_sym_assignment_statement_repeat1] = "assignment_statement_repeat1",
  [aux_sym_assignment_statement_repeat2] = "assignment_statement_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_DASH] = anon_sym_LBRACE_PERCENT_DASH,
  [anon_sym_LBRACE_PERCENT_TILDE] = anon_sym_LBRACE_PERCENT_TILDE,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_DASH_PERCENT_RBRACE] = anon_sym_DASH_PERCENT_RBRACE,
  [anon_sym_TILDE_PERCENT_RBRACE] = anon_sym_TILDE_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_LBRACE_LBRACE_TILDE] = anon_sym_LBRACE_LBRACE_TILDE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [anon_sym_TILDE_RBRACE_RBRACE] = anon_sym_TILDE_RBRACE_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_null_literal] = sym_null_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_POUND] = anon_sym_BSLASH_POUND,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_interpolated_string_token1] = aux_sym_interpolated_string_token1,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_template] = sym_template,
  [sym_content] = sym_content,
  [sym_statement_directive] = sym_statement_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_comment] = sym_comment,
  [sym__literal] = sym__literal,
  [sym_array_literal] = sym_array_literal,
  [sym_object_literal] = sym_object_literal,
  [sym_property] = sym_property,
  [sym_property_name] = sym_property_name,
  [sym_arrow_function] = sym_arrow_function,
  [sym_interpolated_string] = sym_interpolated_string,
  [sym__expression] = sym__expression,
  [sym__parenthesized_expression] = sym__parenthesized_expression,
  [sym_member_expression] = sym_member_expression,
  [sym_subscript_expression] = sym_subscript_expression,
  [sym__statement] = sym__statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [aux_sym_object_literal_repeat1] = aux_sym_object_literal_repeat1,
  [aux_sym_arrow_function_repeat1] = aux_sym_arrow_function_repeat1,
  [aux_sym_interpolated_string_repeat1] = aux_sym_interpolated_string_repeat1,
  [aux_sym_assignment_statement_repeat1] = aux_sym_assignment_statement_repeat1,
  [aux_sym_assignment_statement_repeat2] = aux_sym_assignment_statement_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpolated_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_output_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_array_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_object_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow_function] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_string] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__parenthesized_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrow_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolated_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_statement_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_index = 1,
  field_object = 2,
  field_property = 3,
  field_value = 4,
  field_variable = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_index] = "index",
  [field_object] = "object",
  [field_property] = "property",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 3},
  [9] = {.index = 17, .length = 1},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_variable, 1},
  [1] =
    {field_variable, 1},
    {field_variable, 2, .inherited = true},
  [3] =
    {field_object, 0},
    {field_property, 2},
  [5] =
    {field_value, 3},
    {field_variable, 1},
  [7] =
    {field_variable, 0, .inherited = true},
    {field_variable, 1, .inherited = true},
  [9] =
    {field_index, 2},
    {field_object, 0},
  [11] =
    {field_value, 3},
    {field_value, 4, .inherited = true},
    {field_variable, 1},
  [14] =
    {field_value, 4},
    {field_variable, 1},
    {field_variable, 2, .inherited = true},
  [17] =
    {field_value, 1},
  [18] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [20] =
    {field_value, 4},
    {field_value, 5, .inherited = true},
    {field_variable, 1},
    {field_variable, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 3,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 8,
  [20] = 9,
  [21] = 17,
  [22] = 16,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 61,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 25,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 66,
  [74] = 26,
  [75] = 30,
  [76] = 38,
  [77] = 37,
  [78] = 28,
  [79] = 29,
  [80] = 31,
  [81] = 33,
  [82] = 82,
  [83] = 34,
  [84] = 35,
  [85] = 36,
  [86] = 40,
  [87] = 27,
  [88] = 88,
  [89] = 39,
  [90] = 32,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 95,
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 93,
  [100] = 100,
  [101] = 91,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 98,
  [107] = 107,
  [108] = 95,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 115,
  [118] = 118,
  [119] = 119,
  [120] = 118,
  [121] = 121,
  [122] = 122,
  [123] = 111,
  [124] = 124,
  [125] = 116,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == '{') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == '}') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '{') ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '~') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_TILDE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_TILDE_PERCENT_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '~') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_TILDE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_TILDE_RBRACE_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '{') ADVANCE(51);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_TILDE] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_TILDE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_boolean_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_POUND] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(128),
    [sym_content] = STATE(23),
    [sym_statement_directive] = STATE(23),
    [sym_output_directive] = STATE(23),
    [sym_comment] = STATE(23),
    [aux_sym_template_repeat1] = STATE(23),
    [aux_sym_content_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT_DASH] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT_TILDE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_TILDE] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(13), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
    STATE(71), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [40] = 9,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(33), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(93), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [78] = 9,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(37), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(39), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(66), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [116] = 9,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(47), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(99), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [154] = 9,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(53), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(73), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [192] = 8,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(59), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(56), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [227] = 8,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(63), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(29), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [262] = 8,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(67), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(38), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [297] = 8,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(73), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(88), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [332] = 8,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(85), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(82), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [367] = 8,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(89), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(77), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [402] = 8,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(93), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(37), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [437] = 8,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(97), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(52), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [472] = 8,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(101), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(59), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [507] = 8,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(105), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(89), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [542] = 8,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(109), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(101), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [577] = 8,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(113), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(100), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [612] = 8,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(117), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(79), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [647] = 8,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(121), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(76), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [682] = 8,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(125), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(91), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [717] = 8,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(129), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(39), 9,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
      sym_member_expression,
      sym_subscript_expression,
  [752] = 7,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      aux_sym_content_repeat1,
    ACTIONS(7), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(9), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(24), 5,
      sym_content,
      sym_statement_directive,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [782] = 7,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      aux_sym_content_token1,
    ACTIONS(144), 1,
      anon_sym_LBRACE_POUND,
    STATE(41), 1,
      aux_sym_content_repeat1,
    ACTIONS(138), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(141), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(24), 5,
      sym_content,
      sym_statement_directive,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [812] = 2,
    ACTIONS(149), 1,
      anon_sym_EQ_GT,
    ACTIONS(147), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [829] = 1,
    ACTIONS(151), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [843] = 1,
    ACTIONS(153), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [857] = 1,
    ACTIONS(155), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [871] = 1,
    ACTIONS(157), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [885] = 1,
    ACTIONS(159), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [899] = 1,
    ACTIONS(161), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [913] = 1,
    ACTIONS(163), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [927] = 1,
    ACTIONS(165), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [941] = 1,
    ACTIONS(167), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [955] = 1,
    ACTIONS(169), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [969] = 1,
    ACTIONS(171), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [983] = 1,
    ACTIONS(173), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [997] = 1,
    ACTIONS(175), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1011] = 1,
    ACTIONS(177), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1025] = 1,
    ACTIONS(179), 11,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1039] = 4,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      aux_sym_content_token1,
    STATE(42), 1,
      aux_sym_content_repeat1,
    ACTIONS(185), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [1058] = 4,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      aux_sym_content_token1,
    STATE(42), 1,
      aux_sym_content_repeat1,
    ACTIONS(192), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [1077] = 2,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [1091] = 2,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [1105] = 2,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [1119] = 2,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [1133] = 2,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [1147] = 5,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(220), 1,
      anon_sym_POUND_LBRACE,
    STATE(54), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(216), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [1165] = 5,
    ACTIONS(220), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      aux_sym_interpolated_string_token1,
    STATE(55), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(224), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [1183] = 6,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_property,
    STATE(112), 1,
      sym_property_name,
    ACTIONS(232), 2,
      sym_number_literal,
      sym_string_literal,
  [1203] = 6,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_property,
    STATE(112), 1,
      sym_property_name,
    ACTIONS(232), 2,
      sym_number_literal,
      sym_string_literal,
  [1223] = 5,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(238), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1241] = 5,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(254), 1,
      anon_sym_POUND_LBRACE,
    STATE(53), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(248), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [1259] = 5,
    ACTIONS(220), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      aux_sym_interpolated_string_token1,
    STATE(53), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(259), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [1277] = 5,
    ACTIONS(220), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(261), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(259), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [1295] = 5,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(265), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1313] = 5,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_property,
    STATE(112), 1,
      sym_property_name,
    ACTIONS(232), 2,
      sym_number_literal,
      sym_string_literal,
  [1330] = 4,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_EQ,
    STATE(65), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(267), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1345] = 3,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(273), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_COMMA,
  [1358] = 3,
    ACTIONS(277), 1,
      anon_sym_set,
    STATE(104), 2,
      sym__statement,
      sym_assignment_statement,
    ACTIONS(275), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1371] = 5,
    ACTIONS(149), 1,
      anon_sym_EQ_GT,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_arrow_function_repeat1,
    ACTIONS(147), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [1388] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(283), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_EQ,
  [1401] = 5,
    ACTIONS(149), 1,
      anon_sym_EQ_GT,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_arrow_function_repeat1,
    ACTIONS(147), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [1418] = 2,
    ACTIONS(292), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(290), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
      anon_sym_POUND_LBRACE,
  [1429] = 4,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_EQ,
    STATE(62), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(294), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1444] = 5,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym_array_literal_repeat1,
  [1460] = 2,
    ACTIONS(302), 1,
      anon_sym_EQ_GT,
    ACTIONS(147), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1470] = 3,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(304), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1482] = 1,
    ACTIONS(306), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
  [1490] = 3,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(308), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1502] = 3,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(313), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
  [1514] = 3,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(315), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1526] = 5,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_array_literal_repeat1,
  [1542] = 1,
    ACTIONS(151), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1549] = 1,
    ACTIONS(159), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1556] = 1,
    ACTIONS(175), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1563] = 1,
    ACTIONS(173), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1570] = 1,
    ACTIONS(155), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1577] = 1,
    ACTIONS(157), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1584] = 1,
    ACTIONS(161), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1591] = 1,
    ACTIONS(165), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1598] = 3,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1609] = 1,
    ACTIONS(167), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1616] = 1,
    ACTIONS(169), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1623] = 1,
    ACTIONS(171), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1630] = 1,
    ACTIONS(179), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1637] = 1,
    ACTIONS(153), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1644] = 3,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(321), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1655] = 1,
    ACTIONS(177), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1662] = 1,
    ACTIONS(163), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1669] = 3,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
  [1679] = 3,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_array_literal_repeat1,
  [1689] = 3,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
  [1699] = 3,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_array_literal_repeat1,
  [1709] = 3,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_object_literal_repeat1,
  [1719] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_object_literal_repeat1,
  [1729] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_object_literal_repeat1,
  [1739] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_arrow_function_repeat1,
  [1749] = 3,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
  [1759] = 3,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
  [1769] = 3,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
  [1779] = 2,
    ACTIONS(353), 1,
      anon_sym_COLON,
    ACTIONS(351), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1787] = 3,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_object_literal_repeat1,
  [1797] = 1,
    ACTIONS(360), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1803] = 3,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_arrow_function_repeat1,
  [1813] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_arrow_function_repeat1,
  [1823] = 3,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_array_literal_repeat1,
  [1833] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_object_literal_repeat1,
  [1843] = 1,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1848] = 1,
    ACTIONS(355), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1853] = 1,
    ACTIONS(374), 1,
      anon_sym_EQ_GT,
  [1857] = 1,
    ACTIONS(376), 1,
      anon_sym_COLON,
  [1861] = 1,
    ACTIONS(378), 1,
      sym_identifier,
  [1865] = 1,
    ACTIONS(353), 1,
      anon_sym_COLON,
  [1869] = 1,
    ACTIONS(380), 1,
      anon_sym_EQ_GT,
  [1873] = 1,
    ACTIONS(382), 1,
      anon_sym_EQ_GT,
  [1877] = 1,
    ACTIONS(384), 1,
      anon_sym_EQ_GT,
  [1881] = 1,
    ACTIONS(386), 1,
      sym_identifier,
  [1885] = 1,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
  [1889] = 1,
    ACTIONS(390), 1,
      sym_identifier,
  [1893] = 1,
    ACTIONS(392), 1,
      sym_identifier,
  [1897] = 1,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
  [1901] = 1,
    ACTIONS(396), 1,
      anon_sym_EQ_GT,
  [1905] = 1,
    ACTIONS(398), 1,
      sym_identifier,
  [1909] = 1,
    ACTIONS(400), 1,
      anon_sym_EQ_GT,
  [1913] = 1,
    ACTIONS(402), 1,
      aux_sym_comment_token1,
  [1917] = 1,
    ACTIONS(404), 1,
      sym_identifier,
  [1921] = 1,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
  [1925] = 1,
    ACTIONS(408), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 227,
  [SMALL_STATE(9)] = 262,
  [SMALL_STATE(10)] = 297,
  [SMALL_STATE(11)] = 332,
  [SMALL_STATE(12)] = 367,
  [SMALL_STATE(13)] = 402,
  [SMALL_STATE(14)] = 437,
  [SMALL_STATE(15)] = 472,
  [SMALL_STATE(16)] = 507,
  [SMALL_STATE(17)] = 542,
  [SMALL_STATE(18)] = 577,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 647,
  [SMALL_STATE(21)] = 682,
  [SMALL_STATE(22)] = 717,
  [SMALL_STATE(23)] = 752,
  [SMALL_STATE(24)] = 782,
  [SMALL_STATE(25)] = 812,
  [SMALL_STATE(26)] = 829,
  [SMALL_STATE(27)] = 843,
  [SMALL_STATE(28)] = 857,
  [SMALL_STATE(29)] = 871,
  [SMALL_STATE(30)] = 885,
  [SMALL_STATE(31)] = 899,
  [SMALL_STATE(32)] = 913,
  [SMALL_STATE(33)] = 927,
  [SMALL_STATE(34)] = 941,
  [SMALL_STATE(35)] = 955,
  [SMALL_STATE(36)] = 969,
  [SMALL_STATE(37)] = 983,
  [SMALL_STATE(38)] = 997,
  [SMALL_STATE(39)] = 1011,
  [SMALL_STATE(40)] = 1025,
  [SMALL_STATE(41)] = 1039,
  [SMALL_STATE(42)] = 1058,
  [SMALL_STATE(43)] = 1077,
  [SMALL_STATE(44)] = 1091,
  [SMALL_STATE(45)] = 1105,
  [SMALL_STATE(46)] = 1119,
  [SMALL_STATE(47)] = 1133,
  [SMALL_STATE(48)] = 1147,
  [SMALL_STATE(49)] = 1165,
  [SMALL_STATE(50)] = 1183,
  [SMALL_STATE(51)] = 1203,
  [SMALL_STATE(52)] = 1223,
  [SMALL_STATE(53)] = 1241,
  [SMALL_STATE(54)] = 1259,
  [SMALL_STATE(55)] = 1277,
  [SMALL_STATE(56)] = 1295,
  [SMALL_STATE(57)] = 1313,
  [SMALL_STATE(58)] = 1330,
  [SMALL_STATE(59)] = 1345,
  [SMALL_STATE(60)] = 1358,
  [SMALL_STATE(61)] = 1371,
  [SMALL_STATE(62)] = 1388,
  [SMALL_STATE(63)] = 1401,
  [SMALL_STATE(64)] = 1418,
  [SMALL_STATE(65)] = 1429,
  [SMALL_STATE(66)] = 1444,
  [SMALL_STATE(67)] = 1460,
  [SMALL_STATE(68)] = 1470,
  [SMALL_STATE(69)] = 1482,
  [SMALL_STATE(70)] = 1490,
  [SMALL_STATE(71)] = 1502,
  [SMALL_STATE(72)] = 1514,
  [SMALL_STATE(73)] = 1526,
  [SMALL_STATE(74)] = 1542,
  [SMALL_STATE(75)] = 1549,
  [SMALL_STATE(76)] = 1556,
  [SMALL_STATE(77)] = 1563,
  [SMALL_STATE(78)] = 1570,
  [SMALL_STATE(79)] = 1577,
  [SMALL_STATE(80)] = 1584,
  [SMALL_STATE(81)] = 1591,
  [SMALL_STATE(82)] = 1598,
  [SMALL_STATE(83)] = 1609,
  [SMALL_STATE(84)] = 1616,
  [SMALL_STATE(85)] = 1623,
  [SMALL_STATE(86)] = 1630,
  [SMALL_STATE(87)] = 1637,
  [SMALL_STATE(88)] = 1644,
  [SMALL_STATE(89)] = 1655,
  [SMALL_STATE(90)] = 1662,
  [SMALL_STATE(91)] = 1669,
  [SMALL_STATE(92)] = 1679,
  [SMALL_STATE(93)] = 1689,
  [SMALL_STATE(94)] = 1699,
  [SMALL_STATE(95)] = 1709,
  [SMALL_STATE(96)] = 1719,
  [SMALL_STATE(97)] = 1729,
  [SMALL_STATE(98)] = 1739,
  [SMALL_STATE(99)] = 1749,
  [SMALL_STATE(100)] = 1759,
  [SMALL_STATE(101)] = 1769,
  [SMALL_STATE(102)] = 1779,
  [SMALL_STATE(103)] = 1787,
  [SMALL_STATE(104)] = 1797,
  [SMALL_STATE(105)] = 1803,
  [SMALL_STATE(106)] = 1813,
  [SMALL_STATE(107)] = 1823,
  [SMALL_STATE(108)] = 1833,
  [SMALL_STATE(109)] = 1843,
  [SMALL_STATE(110)] = 1848,
  [SMALL_STATE(111)] = 1853,
  [SMALL_STATE(112)] = 1857,
  [SMALL_STATE(113)] = 1861,
  [SMALL_STATE(114)] = 1865,
  [SMALL_STATE(115)] = 1869,
  [SMALL_STATE(116)] = 1873,
  [SMALL_STATE(117)] = 1877,
  [SMALL_STATE(118)] = 1881,
  [SMALL_STATE(119)] = 1885,
  [SMALL_STATE(120)] = 1889,
  [SMALL_STATE(121)] = 1893,
  [SMALL_STATE(122)] = 1897,
  [SMALL_STATE(123)] = 1901,
  [SMALL_STATE(124)] = 1905,
  [SMALL_STATE(125)] = 1909,
  [SMALL_STATE(126)] = 1913,
  [SMALL_STATE(127)] = 1917,
  [SMALL_STATE(128)] = 1921,
  [SMALL_STATE(129)] = 1925,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(41),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(60),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(126),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 4, .production_id = 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3, .production_id = 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(42),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_directive, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_directive, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_directive, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_directive, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(53),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(53),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(18),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 5, .production_id = 8),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 2, .production_id = 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 9),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 5),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 5), SHIFT_REPEAT(121),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 5, .production_id = 7),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 10),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 10), SHIFT_REPEAT(15),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 6, .production_id = 11),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_literal_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_literal_repeat1, 2), SHIFT_REPEAT(57),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_function_repeat1, 2), SHIFT_REPEAT(124),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_function_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(11),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [406] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_twig(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
