#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 10

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
  anon_sym_set = 36,
  anon_sym_EQ = 37,
  sym_template = 38,
  sym_content = 39,
  sym_statement_directive = 40,
  sym_output_directive = 41,
  sym_comment = 42,
  sym__literal = 43,
  sym_array_literal = 44,
  sym_object_literal = 45,
  sym_property = 46,
  sym_property_name = 47,
  sym_arrow_function = 48,
  sym_interpolated_string = 49,
  sym__expression = 50,
  sym__parenthesized_expression = 51,
  sym__statement = 52,
  sym_assignment_statement = 53,
  aux_sym_template_repeat1 = 54,
  aux_sym_content_repeat1 = 55,
  aux_sym_array_literal_repeat1 = 56,
  aux_sym_object_literal_repeat1 = 57,
  aux_sym_arrow_function_repeat1 = 58,
  aux_sym_interpolated_string_repeat1 = 59,
  aux_sym_assignment_statement_repeat1 = 60,
  aux_sym_assignment_statement_repeat2 = 61,
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
  field_value = 1,
  field_variable = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 1},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_variable, 1},
  [1] =
    {field_variable, 1},
    {field_variable, 2, .inherited = true},
  [3] =
    {field_value, 3},
    {field_variable, 1},
  [5] =
    {field_variable, 0, .inherited = true},
    {field_variable, 1, .inherited = true},
  [7] =
    {field_value, 3},
    {field_value, 4, .inherited = true},
    {field_variable, 1},
  [10] =
    {field_value, 4},
    {field_variable, 1},
    {field_variable, 2, .inherited = true},
  [13] =
    {field_value, 1},
  [14] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [16] =
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
  [13] = 13,
  [14] = 11,
  [15] = 13,
  [16] = 9,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 22,
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
  [47] = 45,
  [48] = 48,
  [49] = 44,
  [50] = 46,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 67,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 76,
  [79] = 75,
  [80] = 80,
  [81] = 25,
  [82] = 77,
  [83] = 29,
  [84] = 30,
  [85] = 85,
  [86] = 28,
  [87] = 87,
  [88] = 88,
  [89] = 39,
  [90] = 90,
  [91] = 38,
  [92] = 43,
  [93] = 41,
  [94] = 42,
  [95] = 32,
  [96] = 37,
  [97] = 36,
  [98] = 34,
  [99] = 33,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 109,
  [111] = 108,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 103,
  [116] = 104,
  [117] = 117,
  [118] = 118,
  [119] = 119,
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
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(96);
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
      if (lookahead == '=') ADVANCE(95);
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
      if (lookahead == '=') ADVANCE(14);
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
      if (lookahead == 't') ADVANCE(94);
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
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 96:
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
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 13},
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
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
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
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(119),
    [sym_content] = STATE(21),
    [sym_statement_directive] = STATE(21),
    [sym_output_directive] = STATE(21),
    [sym_comment] = STATE(21),
    [aux_sym_template_repeat1] = STATE(21),
    [aux_sym_content_repeat1] = STATE(24),
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
    STATE(73), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [38] = 9,
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
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    ACTIONS(29), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(31), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(79), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [74] = 9,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(39), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(108), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [110] = 9,
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
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(43), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(45), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(75), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [146] = 9,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(53), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(111), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [182] = 8,
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
    STATE(65), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [215] = 8,
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
    STATE(61), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [248] = 8,
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
    STATE(30), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [281] = 8,
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
    ACTIONS(69), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(71), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(58), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [314] = 8,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(77), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(95), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [347] = 8,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(89), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(100), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [380] = 8,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(93), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(92), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [413] = 8,
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
    STATE(32), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [446] = 8,
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
    STATE(43), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [479] = 8,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(105), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(84), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [512] = 8,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(109), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(86), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [545] = 8,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(113), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(90), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [578] = 8,
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
    ACTIONS(115), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(117), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(28), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [611] = 8,
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
    ACTIONS(119), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(121), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(87), 7,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_arrow_function,
      sym_interpolated_string,
      sym__expression,
      sym__parenthesized_expression,
  [644] = 7,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym_content_repeat1,
    ACTIONS(7), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(9), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(22), 5,
      sym_content,
      sym_statement_directive,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [674] = 7,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      aux_sym_content_token1,
    ACTIONS(136), 1,
      anon_sym_LBRACE_POUND,
    STATE(24), 1,
      aux_sym_content_repeat1,
    ACTIONS(130), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(133), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(22), 5,
      sym_content,
      sym_statement_directive,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [704] = 4,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      aux_sym_content_token1,
    STATE(23), 1,
      aux_sym_content_repeat1,
    ACTIONS(144), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [723] = 4,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      aux_sym_content_token1,
    STATE(23), 1,
      aux_sym_content_repeat1,
    ACTIONS(150), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [742] = 2,
    ACTIONS(154), 1,
      anon_sym_EQ_GT,
    ACTIONS(152), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [757] = 2,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [771] = 2,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [785] = 1,
    ACTIONS(164), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [797] = 1,
    ACTIONS(166), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [809] = 1,
    ACTIONS(168), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [821] = 2,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [835] = 1,
    ACTIONS(174), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [847] = 1,
    ACTIONS(176), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [859] = 1,
    ACTIONS(178), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [871] = 2,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [885] = 1,
    ACTIONS(184), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [897] = 1,
    ACTIONS(186), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [909] = 1,
    ACTIONS(188), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [921] = 1,
    ACTIONS(190), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [933] = 2,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [947] = 1,
    ACTIONS(196), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [959] = 1,
    ACTIONS(198), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [971] = 1,
    ACTIONS(200), 9,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [983] = 5,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(208), 1,
      anon_sym_POUND_LBRACE,
    STATE(50), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(204), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [1001] = 6,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_property,
    STATE(112), 1,
      sym_property_name,
    ACTIONS(214), 2,
      sym_number_literal,
      sym_string_literal,
  [1021] = 5,
    ACTIONS(208), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_interpolated_string_token1,
    STATE(48), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(220), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [1039] = 6,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_property,
    STATE(112), 1,
      sym_property_name,
    ACTIONS(214), 2,
      sym_number_literal,
      sym_string_literal,
  [1059] = 5,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(234), 1,
      anon_sym_POUND_LBRACE,
    STATE(48), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(228), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [1077] = 5,
    ACTIONS(208), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_interpolated_string_token1,
    STATE(46), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(239), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [1095] = 5,
    ACTIONS(208), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(222), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(220), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [1113] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(245), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_EQ,
  [1126] = 4,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_EQ,
    STATE(51), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(250), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1141] = 5,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_property,
    STATE(112), 1,
      sym_property_name,
    ACTIONS(214), 2,
      sym_number_literal,
      sym_string_literal,
  [1158] = 4,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_EQ,
    STATE(52), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(256), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1173] = 3,
    ACTIONS(262), 1,
      anon_sym_set,
    STATE(69), 2,
      sym__statement,
      sym_assignment_statement,
    ACTIONS(260), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1186] = 2,
    ACTIONS(266), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(264), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
      anon_sym_POUND_LBRACE,
  [1197] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(268), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1209] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(272), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1221] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(274), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1233] = 1,
    ACTIONS(276), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
  [1241] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(278), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1253] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(280), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1265] = 4,
    ACTIONS(154), 1,
      anon_sym_EQ_GT,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_arrow_function_repeat1,
  [1278] = 4,
    ACTIONS(154), 1,
      anon_sym_EQ_GT,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_arrow_function_repeat1,
  [1291] = 1,
    ACTIONS(291), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_COMMA,
  [1298] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_array_literal_repeat1,
  [1308] = 3,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_object_literal_repeat1,
  [1318] = 3,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_object_literal_repeat1,
  [1328] = 1,
    ACTIONS(307), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [1334] = 3,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_arrow_function_repeat1,
  [1344] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_object_literal_repeat1,
  [1354] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_object_literal_repeat1,
  [1364] = 1,
    ACTIONS(318), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
  [1370] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_object_literal_repeat1,
  [1380] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_array_literal_repeat1,
  [1390] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_array_literal_repeat1,
  [1400] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_arrow_function_repeat1,
  [1410] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_array_literal_repeat1,
  [1420] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_array_literal_repeat1,
  [1430] = 2,
    ACTIONS(336), 1,
      anon_sym_COLON,
    ACTIONS(334), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1438] = 2,
    ACTIONS(338), 1,
      anon_sym_EQ_GT,
    ACTIONS(152), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1446] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_arrow_function_repeat1,
  [1456] = 1,
    ACTIONS(166), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1461] = 1,
    ACTIONS(168), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1466] = 1,
    ACTIONS(302), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1471] = 1,
    ACTIONS(164), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1476] = 1,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1481] = 1,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1486] = 1,
    ACTIONS(190), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1491] = 1,
    ACTIONS(342), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1496] = 1,
    ACTIONS(188), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1501] = 1,
    ACTIONS(200), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1506] = 1,
    ACTIONS(196), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1511] = 1,
    ACTIONS(198), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1516] = 1,
    ACTIONS(174), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1521] = 1,
    ACTIONS(186), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1526] = 1,
    ACTIONS(184), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1531] = 1,
    ACTIONS(178), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1536] = 1,
    ACTIONS(176), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1541] = 1,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
  [1545] = 1,
    ACTIONS(346), 1,
      aux_sym_comment_token1,
  [1549] = 1,
    ACTIONS(348), 1,
      anon_sym_COLON,
  [1553] = 1,
    ACTIONS(350), 1,
      anon_sym_EQ_GT,
  [1557] = 1,
    ACTIONS(352), 1,
      anon_sym_EQ_GT,
  [1561] = 1,
    ACTIONS(354), 1,
      sym_identifier,
  [1565] = 1,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
  [1569] = 1,
    ACTIONS(358), 1,
      sym_identifier,
  [1573] = 1,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
  [1577] = 1,
    ACTIONS(362), 1,
      anon_sym_EQ_GT,
  [1581] = 1,
    ACTIONS(364), 1,
      anon_sym_EQ_GT,
  [1585] = 1,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
  [1589] = 1,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [1593] = 1,
    ACTIONS(370), 1,
      sym_identifier,
  [1597] = 1,
    ACTIONS(336), 1,
      anon_sym_COLON,
  [1601] = 1,
    ACTIONS(372), 1,
      anon_sym_EQ_GT,
  [1605] = 1,
    ACTIONS(374), 1,
      anon_sym_EQ_GT,
  [1609] = 1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
  [1613] = 1,
    ACTIONS(378), 1,
      sym_identifier,
  [1617] = 1,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 215,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 281,
  [SMALL_STATE(11)] = 314,
  [SMALL_STATE(12)] = 347,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 413,
  [SMALL_STATE(15)] = 446,
  [SMALL_STATE(16)] = 479,
  [SMALL_STATE(17)] = 512,
  [SMALL_STATE(18)] = 545,
  [SMALL_STATE(19)] = 578,
  [SMALL_STATE(20)] = 611,
  [SMALL_STATE(21)] = 644,
  [SMALL_STATE(22)] = 674,
  [SMALL_STATE(23)] = 704,
  [SMALL_STATE(24)] = 723,
  [SMALL_STATE(25)] = 742,
  [SMALL_STATE(26)] = 757,
  [SMALL_STATE(27)] = 771,
  [SMALL_STATE(28)] = 785,
  [SMALL_STATE(29)] = 797,
  [SMALL_STATE(30)] = 809,
  [SMALL_STATE(31)] = 821,
  [SMALL_STATE(32)] = 835,
  [SMALL_STATE(33)] = 847,
  [SMALL_STATE(34)] = 859,
  [SMALL_STATE(35)] = 871,
  [SMALL_STATE(36)] = 885,
  [SMALL_STATE(37)] = 897,
  [SMALL_STATE(38)] = 909,
  [SMALL_STATE(39)] = 921,
  [SMALL_STATE(40)] = 933,
  [SMALL_STATE(41)] = 947,
  [SMALL_STATE(42)] = 959,
  [SMALL_STATE(43)] = 971,
  [SMALL_STATE(44)] = 983,
  [SMALL_STATE(45)] = 1001,
  [SMALL_STATE(46)] = 1021,
  [SMALL_STATE(47)] = 1039,
  [SMALL_STATE(48)] = 1059,
  [SMALL_STATE(49)] = 1077,
  [SMALL_STATE(50)] = 1095,
  [SMALL_STATE(51)] = 1113,
  [SMALL_STATE(52)] = 1126,
  [SMALL_STATE(53)] = 1141,
  [SMALL_STATE(54)] = 1158,
  [SMALL_STATE(55)] = 1173,
  [SMALL_STATE(56)] = 1186,
  [SMALL_STATE(57)] = 1197,
  [SMALL_STATE(58)] = 1209,
  [SMALL_STATE(59)] = 1221,
  [SMALL_STATE(60)] = 1233,
  [SMALL_STATE(61)] = 1241,
  [SMALL_STATE(62)] = 1253,
  [SMALL_STATE(63)] = 1265,
  [SMALL_STATE(64)] = 1278,
  [SMALL_STATE(65)] = 1291,
  [SMALL_STATE(66)] = 1298,
  [SMALL_STATE(67)] = 1308,
  [SMALL_STATE(68)] = 1318,
  [SMALL_STATE(69)] = 1328,
  [SMALL_STATE(70)] = 1334,
  [SMALL_STATE(71)] = 1344,
  [SMALL_STATE(72)] = 1354,
  [SMALL_STATE(73)] = 1364,
  [SMALL_STATE(74)] = 1370,
  [SMALL_STATE(75)] = 1380,
  [SMALL_STATE(76)] = 1390,
  [SMALL_STATE(77)] = 1400,
  [SMALL_STATE(78)] = 1410,
  [SMALL_STATE(79)] = 1420,
  [SMALL_STATE(80)] = 1430,
  [SMALL_STATE(81)] = 1438,
  [SMALL_STATE(82)] = 1446,
  [SMALL_STATE(83)] = 1456,
  [SMALL_STATE(84)] = 1461,
  [SMALL_STATE(85)] = 1466,
  [SMALL_STATE(86)] = 1471,
  [SMALL_STATE(87)] = 1476,
  [SMALL_STATE(88)] = 1481,
  [SMALL_STATE(89)] = 1486,
  [SMALL_STATE(90)] = 1491,
  [SMALL_STATE(91)] = 1496,
  [SMALL_STATE(92)] = 1501,
  [SMALL_STATE(93)] = 1506,
  [SMALL_STATE(94)] = 1511,
  [SMALL_STATE(95)] = 1516,
  [SMALL_STATE(96)] = 1521,
  [SMALL_STATE(97)] = 1526,
  [SMALL_STATE(98)] = 1531,
  [SMALL_STATE(99)] = 1536,
  [SMALL_STATE(100)] = 1541,
  [SMALL_STATE(101)] = 1545,
  [SMALL_STATE(102)] = 1549,
  [SMALL_STATE(103)] = 1553,
  [SMALL_STATE(104)] = 1557,
  [SMALL_STATE(105)] = 1561,
  [SMALL_STATE(106)] = 1565,
  [SMALL_STATE(107)] = 1569,
  [SMALL_STATE(108)] = 1573,
  [SMALL_STATE(109)] = 1577,
  [SMALL_STATE(110)] = 1581,
  [SMALL_STATE(111)] = 1585,
  [SMALL_STATE(112)] = 1589,
  [SMALL_STATE(113)] = 1593,
  [SMALL_STATE(114)] = 1597,
  [SMALL_STATE(115)] = 1601,
  [SMALL_STATE(116)] = 1605,
  [SMALL_STATE(117)] = 1609,
  [SMALL_STATE(118)] = 1613,
  [SMALL_STATE(119)] = 1617,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(24),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(55),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(101),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(23),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_directive, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_directive, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_directive, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_directive, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_expression, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(48),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(48),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(12),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 4),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 4), SHIFT_REPEAT(107),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 2, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 5, .production_id = 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 5, .production_id = 6),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 6, .production_id = 9),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 8),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 8), SHIFT_REPEAT(7),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 7),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(20),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_literal_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_literal_repeat1, 2), SHIFT_REPEAT(53),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_function_repeat1, 2), SHIFT_REPEAT(105),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_function_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [380] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
