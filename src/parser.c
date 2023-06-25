#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_DQUOTE = 29,
  anon_sym_BSLASH_DQUOTE = 30,
  anon_sym_BSLASH_POUND = 31,
  anon_sym_BSLASH_BSLASH = 32,
  aux_sym_interpolated_string_token1 = 33,
  anon_sym_POUND_LBRACE = 34,
  anon_sym_set = 35,
  anon_sym_EQ = 36,
  sym_template = 37,
  sym_content = 38,
  sym_statement_directive = 39,
  sym_output_directive = 40,
  sym_comment = 41,
  sym__literal = 42,
  sym_array_literal = 43,
  sym_object_literal = 44,
  sym_property = 45,
  sym_property_name = 46,
  sym_interpolated_string = 47,
  sym__expression = 48,
  sym__statement = 49,
  sym_assignment_statement = 50,
  aux_sym_template_repeat1 = 51,
  aux_sym_content_repeat1 = 52,
  aux_sym_array_literal_repeat1 = 53,
  aux_sym_object_literal_repeat1 = 54,
  aux_sym_interpolated_string_repeat1 = 55,
  aux_sym_assignment_statement_repeat1 = 56,
  aux_sym_assignment_statement_repeat2 = 57,
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
  [sym_interpolated_string] = "interpolated_string",
  [sym__expression] = "_expression",
  [sym__statement] = "_statement",
  [sym_assignment_statement] = "assignment_statement",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym_object_literal_repeat1] = "object_literal_repeat1",
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
  [sym_interpolated_string] = sym_interpolated_string,
  [sym__expression] = sym__expression,
  [sym__statement] = sym__statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [aux_sym_object_literal_repeat1] = aux_sym_object_literal_repeat1,
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
  [sym_interpolated_string] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 16,
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
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 34,
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
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 57,
  [58] = 49,
  [59] = 59,
  [60] = 60,
  [61] = 55,
  [62] = 62,
  [63] = 59,
  [64] = 60,
  [65] = 65,
  [66] = 22,
  [67] = 67,
  [68] = 68,
  [69] = 24,
  [70] = 25,
  [71] = 30,
  [72] = 29,
  [73] = 28,
  [74] = 26,
  [75] = 23,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '~') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '~') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(54);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '{') ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '~') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_TILDE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_TILDE_PERCENT_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_TILDE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_TILDE_RBRACE_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '{') ADVANCE(47);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_POUND] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(79),
    [sym_content] = STATE(7),
    [sym_statement_directive] = STATE(7),
    [sym_output_directive] = STATE(7),
    [sym_comment] = STATE(7),
    [aux_sym_template_repeat1] = STATE(7),
    [aux_sym_content_repeat1] = STATE(13),
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
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(15), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(49), 5,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_interpolated_string,
      sym__expression,
  [35] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(27), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
    ACTIONS(29), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(62), 5,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_interpolated_string,
      sym__expression,
  [66] = 9,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(35), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(33), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(58), 5,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_interpolated_string,
      sym__expression,
  [101] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(43), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(39), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(67), 5,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_interpolated_string,
      sym__expression,
  [131] = 7,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_content_token1,
    ACTIONS(56), 1,
      anon_sym_LBRACE_POUND,
    STATE(13), 1,
      aux_sym_content_repeat1,
    ACTIONS(50), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(53), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(6), 5,
      sym_content,
      sym_statement_directive,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [161] = 7,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_content_repeat1,
    ACTIONS(7), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(9), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(6), 5,
      sym_content,
      sym_statement_directive,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [191] = 6,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(61), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(65), 5,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_interpolated_string,
      sym__expression,
  [217] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(71), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(47), 5,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_interpolated_string,
      sym__expression,
  [243] = 6,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(75), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(80), 5,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_interpolated_string,
      sym__expression,
  [269] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(79), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(44), 5,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_interpolated_string,
      sym__expression,
  [295] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(83), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(41), 5,
      sym__literal,
      sym_array_literal,
      sym_object_literal,
      sym_interpolated_string,
      sym__expression,
  [321] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_content_token1,
    STATE(14), 1,
      aux_sym_content_repeat1,
    ACTIONS(91), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [340] = 4,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      aux_sym_content_token1,
    STATE(14), 1,
      aux_sym_content_repeat1,
    ACTIONS(98), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [359] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [373] = 8,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_property,
    STATE(60), 1,
      aux_sym_object_literal_repeat1,
    STATE(85), 1,
      sym_property_name,
    ACTIONS(108), 2,
      sym_number_literal,
      sym_string_literal,
  [399] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [413] = 2,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [427] = 2,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [441] = 2,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [455] = 8,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_property,
    STATE(64), 1,
      aux_sym_object_literal_repeat1,
    STATE(85), 1,
      sym_property_name,
    ACTIONS(108), 2,
      sym_number_literal,
      sym_string_literal,
  [481] = 1,
    ACTIONS(132), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [492] = 1,
    ACTIONS(134), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [503] = 1,
    ACTIONS(136), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [514] = 1,
    ACTIONS(138), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [525] = 1,
    ACTIONS(140), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [536] = 6,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_property,
    STATE(85), 1,
      sym_property_name,
    ACTIONS(108), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(142), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [557] = 1,
    ACTIONS(144), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [568] = 1,
    ACTIONS(146), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [579] = 1,
    ACTIONS(148), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [590] = 5,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(156), 1,
      anon_sym_POUND_LBRACE,
    STATE(35), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(152), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [608] = 5,
    ACTIONS(156), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      aux_sym_interpolated_string_token1,
    STATE(34), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(160), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [626] = 5,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(172), 1,
      anon_sym_POUND_LBRACE,
    STATE(33), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(166), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [644] = 5,
    ACTIONS(156), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      aux_sym_interpolated_string_token1,
    STATE(33), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(177), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [662] = 5,
    ACTIONS(156), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(179), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(177), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [680] = 2,
    ACTIONS(185), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(183), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
      anon_sym_POUND_LBRACE,
  [691] = 4,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_EQ,
    STATE(38), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(187), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [706] = 4,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_EQ,
    STATE(39), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(193), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [721] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(197), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_EQ,
  [734] = 3,
    ACTIONS(204), 1,
      anon_sym_set,
    STATE(48), 2,
      sym__statement,
      sym_assignment_statement,
    ACTIONS(202), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [747] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(206), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [759] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(210), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [771] = 3,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(212), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [783] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(217), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [795] = 1,
    ACTIONS(219), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
  [803] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(221), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [815] = 1,
    ACTIONS(223), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_COMMA,
  [822] = 1,
    ACTIONS(225), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [828] = 3,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_array_literal_repeat1,
  [838] = 3,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_object_literal_repeat1,
  [848] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_object_literal_repeat1,
  [858] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_object_literal_repeat1,
  [868] = 2,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(238), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [876] = 3,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_array_literal_repeat1,
  [886] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_object_literal_repeat1,
  [896] = 3,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_array_literal_repeat1,
  [906] = 3,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_array_literal_repeat1,
  [916] = 3,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_array_literal_repeat1,
  [926] = 3,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_array_literal_repeat1,
  [936] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_object_literal_repeat1,
  [946] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_literal_repeat1,
  [956] = 1,
    ACTIONS(255), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
  [962] = 3,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_array_literal_repeat1,
  [972] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_object_literal_repeat1,
  [982] = 1,
    ACTIONS(259), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [987] = 1,
    ACTIONS(132), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [992] = 1,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [997] = 1,
    ACTIONS(229), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1002] = 1,
    ACTIONS(136), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1007] = 1,
    ACTIONS(138), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1012] = 1,
    ACTIONS(148), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1017] = 1,
    ACTIONS(146), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1022] = 1,
    ACTIONS(144), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1027] = 1,
    ACTIONS(140), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1032] = 1,
    ACTIONS(134), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1037] = 1,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
  [1041] = 1,
    ACTIONS(240), 1,
      anon_sym_COLON,
  [1045] = 1,
    ACTIONS(263), 1,
      sym_identifier,
  [1049] = 1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
  [1053] = 1,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
  [1057] = 1,
    ACTIONS(269), 1,
      sym_identifier,
  [1061] = 1,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
  [1065] = 1,
    ACTIONS(273), 1,
      anon_sym_COLON,
  [1069] = 1,
    ACTIONS(275), 1,
      aux_sym_comment_token1,
  [1073] = 1,
    ACTIONS(277), 1,
      anon_sym_COLON,
  [1077] = 1,
    ACTIONS(279), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 101,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 217,
  [SMALL_STATE(10)] = 243,
  [SMALL_STATE(11)] = 269,
  [SMALL_STATE(12)] = 295,
  [SMALL_STATE(13)] = 321,
  [SMALL_STATE(14)] = 340,
  [SMALL_STATE(15)] = 359,
  [SMALL_STATE(16)] = 373,
  [SMALL_STATE(17)] = 399,
  [SMALL_STATE(18)] = 413,
  [SMALL_STATE(19)] = 427,
  [SMALL_STATE(20)] = 441,
  [SMALL_STATE(21)] = 455,
  [SMALL_STATE(22)] = 481,
  [SMALL_STATE(23)] = 492,
  [SMALL_STATE(24)] = 503,
  [SMALL_STATE(25)] = 514,
  [SMALL_STATE(26)] = 525,
  [SMALL_STATE(27)] = 536,
  [SMALL_STATE(28)] = 557,
  [SMALL_STATE(29)] = 568,
  [SMALL_STATE(30)] = 579,
  [SMALL_STATE(31)] = 590,
  [SMALL_STATE(32)] = 608,
  [SMALL_STATE(33)] = 626,
  [SMALL_STATE(34)] = 644,
  [SMALL_STATE(35)] = 662,
  [SMALL_STATE(36)] = 680,
  [SMALL_STATE(37)] = 691,
  [SMALL_STATE(38)] = 706,
  [SMALL_STATE(39)] = 721,
  [SMALL_STATE(40)] = 734,
  [SMALL_STATE(41)] = 747,
  [SMALL_STATE(42)] = 759,
  [SMALL_STATE(43)] = 771,
  [SMALL_STATE(44)] = 783,
  [SMALL_STATE(45)] = 795,
  [SMALL_STATE(46)] = 803,
  [SMALL_STATE(47)] = 815,
  [SMALL_STATE(48)] = 822,
  [SMALL_STATE(49)] = 828,
  [SMALL_STATE(50)] = 838,
  [SMALL_STATE(51)] = 848,
  [SMALL_STATE(52)] = 858,
  [SMALL_STATE(53)] = 868,
  [SMALL_STATE(54)] = 876,
  [SMALL_STATE(55)] = 886,
  [SMALL_STATE(56)] = 896,
  [SMALL_STATE(57)] = 906,
  [SMALL_STATE(58)] = 916,
  [SMALL_STATE(59)] = 926,
  [SMALL_STATE(60)] = 936,
  [SMALL_STATE(61)] = 946,
  [SMALL_STATE(62)] = 956,
  [SMALL_STATE(63)] = 962,
  [SMALL_STATE(64)] = 972,
  [SMALL_STATE(65)] = 982,
  [SMALL_STATE(66)] = 987,
  [SMALL_STATE(67)] = 992,
  [SMALL_STATE(68)] = 997,
  [SMALL_STATE(69)] = 1002,
  [SMALL_STATE(70)] = 1007,
  [SMALL_STATE(71)] = 1012,
  [SMALL_STATE(72)] = 1017,
  [SMALL_STATE(73)] = 1022,
  [SMALL_STATE(74)] = 1027,
  [SMALL_STATE(75)] = 1032,
  [SMALL_STATE(76)] = 1037,
  [SMALL_STATE(77)] = 1041,
  [SMALL_STATE(78)] = 1045,
  [SMALL_STATE(79)] = 1049,
  [SMALL_STATE(80)] = 1053,
  [SMALL_STATE(81)] = 1057,
  [SMALL_STATE(82)] = 1061,
  [SMALL_STATE(83)] = 1065,
  [SMALL_STATE(84)] = 1069,
  [SMALL_STATE(85)] = 1073,
  [SMALL_STATE(86)] = 1077,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(13),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(40),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(84),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(14),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_directive, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_directive, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_directive, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_directive, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_literal_repeat1, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(33),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(33),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(10),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 2, .production_id = 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 4),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 4), SHIFT_REPEAT(86),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 5, .production_id = 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 5, .production_id = 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 8),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 8), SHIFT_REPEAT(9),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 6, .production_id = 9),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 7),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_literal_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_literal_repeat1, 2), SHIFT_REPEAT(27),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [265] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
