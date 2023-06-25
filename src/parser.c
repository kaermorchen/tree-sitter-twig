#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
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
  anon_sym_DQUOTE = 25,
  anon_sym_BSLASH_DQUOTE = 26,
  anon_sym_BSLASH_POUND = 27,
  anon_sym_BSLASH_BSLASH = 28,
  aux_sym_interpolated_string_token1 = 29,
  anon_sym_POUND_LBRACE = 30,
  anon_sym_set = 31,
  anon_sym_EQ = 32,
  sym_template = 33,
  sym_content = 34,
  sym_statement_directive = 35,
  sym_output_directive = 36,
  sym_comment = 37,
  sym__literal = 38,
  sym_array_literal = 39,
  sym_interpolated_string = 40,
  sym__expression = 41,
  sym__statement = 42,
  sym_assignment_statement = 43,
  aux_sym_template_repeat1 = 44,
  aux_sym_content_repeat1 = 45,
  aux_sym_array_literal_repeat1 = 46,
  aux_sym_interpolated_string_repeat1 = 47,
  aux_sym_assignment_statement_repeat1 = 48,
  aux_sym_assignment_statement_repeat2 = 49,
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
  [sym_interpolated_string] = "interpolated_string",
  [sym__expression] = "_expression",
  [sym__statement] = "_statement",
  [sym_assignment_statement] = "assignment_statement",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
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
  [sym_interpolated_string] = sym_interpolated_string,
  [sym__expression] = sym__expression,
  [sym__statement] = sym__statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
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
  [5] = 5,
  [6] = 5,
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 27,
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
  [47] = 41,
  [48] = 44,
  [49] = 46,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 20,
  [55] = 23,
  [56] = 22,
  [57] = 21,
  [58] = 19,
  [59] = 59,
  [60] = 60,
  [61] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '~') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 't') ADVANCE(63);
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
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(80);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '{') ADVANCE(47);
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
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(83);
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
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_POUND] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(60),
    [sym_content] = STATE(2),
    [sym_statement_directive] = STATE(2),
    [sym_output_directive] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(12),
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
  [0] = 7,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_content_repeat1,
    ACTIONS(7), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(9), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(3), 5,
      sym_content,
      sym_statement_directive,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [30] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_content_token1,
    ACTIONS(26), 1,
      anon_sym_LBRACE_POUND,
    STATE(12), 1,
      aux_sym_content_repeat1,
    ACTIONS(20), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(23), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(3), 5,
      sym_content,
      sym_statement_directive,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [60] = 6,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
    ACTIONS(31), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(42), 4,
      sym__literal,
      sym_array_literal,
      sym_interpolated_string,
      sym__expression,
  [87] = 8,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(41), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(39), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(47), 4,
      sym__literal,
      sym_array_literal,
      sym_interpolated_string,
      sym__expression,
  [118] = 8,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(49), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(47), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(41), 4,
      sym__literal,
      sym_array_literal,
      sym_interpolated_string,
      sym__expression,
  [149] = 6,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(53), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(50), 4,
      sym__literal,
      sym_array_literal,
      sym_interpolated_string,
      sym__expression,
  [175] = 5,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(59), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(40), 4,
      sym__literal,
      sym_array_literal,
      sym_interpolated_string,
      sym__expression,
  [197] = 5,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(53), 4,
      sym__literal,
      sym_array_literal,
      sym_interpolated_string,
      sym__expression,
  [219] = 5,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(71), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(39), 4,
      sym__literal,
      sym_array_literal,
      sym_interpolated_string,
      sym__expression,
  [241] = 5,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(75), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(36), 4,
      sym__literal,
      sym_array_literal,
      sym_interpolated_string,
      sym__expression,
  [263] = 4,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym_content_token1,
    STATE(13), 1,
      aux_sym_content_repeat1,
    ACTIONS(83), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [282] = 4,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      aux_sym_content_token1,
    STATE(13), 1,
      aux_sym_content_repeat1,
    ACTIONS(90), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [301] = 2,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [315] = 2,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [329] = 2,
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
  [343] = 2,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [357] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [371] = 1,
    ACTIONS(112), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [382] = 1,
    ACTIONS(114), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [393] = 1,
    ACTIONS(116), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [404] = 1,
    ACTIONS(118), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [415] = 1,
    ACTIONS(120), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [426] = 5,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(130), 1,
      anon_sym_POUND_LBRACE,
    STATE(24), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(124), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [444] = 5,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(139), 1,
      anon_sym_POUND_LBRACE,
    STATE(24), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(135), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [462] = 5,
    ACTIONS(137), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(139), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(135), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [480] = 5,
    ACTIONS(139), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      aux_sym_interpolated_string_token1,
    STATE(26), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(145), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [498] = 5,
    ACTIONS(139), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym_interpolated_string_token1,
    STATE(25), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(151), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [516] = 2,
    ACTIONS(157), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(155), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
      anon_sym_POUND_LBRACE,
  [527] = 4,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_EQ,
    STATE(31), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(159), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [542] = 4,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_EQ,
    STATE(33), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(165), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [557] = 3,
    ACTIONS(171), 1,
      anon_sym_set,
    STATE(43), 2,
      sym__statement,
      sym_assignment_statement,
    ACTIONS(169), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [570] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(173), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_EQ,
  [583] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(178), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [595] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(182), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [607] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(187), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [619] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(189), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [631] = 1,
    ACTIONS(191), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
  [639] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(193), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [651] = 1,
    ACTIONS(195), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_COMMA,
  [658] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_array_literal_repeat1,
  [668] = 1,
    ACTIONS(199), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
  [674] = 1,
    ACTIONS(201), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [680] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_array_literal_repeat1,
  [690] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_array_literal_repeat1,
  [700] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_array_literal_repeat1,
  [710] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_array_literal_repeat1,
  [720] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_array_literal_repeat1,
  [730] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_array_literal_repeat1,
  [740] = 1,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [745] = 1,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
  [749] = 1,
    ACTIONS(216), 1,
      sym_identifier,
  [753] = 1,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
  [757] = 1,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
  [761] = 1,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
  [765] = 1,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
  [769] = 1,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
  [773] = 1,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
  [777] = 1,
    ACTIONS(220), 1,
      sym_identifier,
  [781] = 1,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
  [785] = 1,
    ACTIONS(224), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 149,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 197,
  [SMALL_STATE(10)] = 219,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 263,
  [SMALL_STATE(13)] = 282,
  [SMALL_STATE(14)] = 301,
  [SMALL_STATE(15)] = 315,
  [SMALL_STATE(16)] = 329,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 357,
  [SMALL_STATE(19)] = 371,
  [SMALL_STATE(20)] = 382,
  [SMALL_STATE(21)] = 393,
  [SMALL_STATE(22)] = 404,
  [SMALL_STATE(23)] = 415,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 444,
  [SMALL_STATE(26)] = 462,
  [SMALL_STATE(27)] = 480,
  [SMALL_STATE(28)] = 498,
  [SMALL_STATE(29)] = 516,
  [SMALL_STATE(30)] = 527,
  [SMALL_STATE(31)] = 542,
  [SMALL_STATE(32)] = 557,
  [SMALL_STATE(33)] = 570,
  [SMALL_STATE(34)] = 583,
  [SMALL_STATE(35)] = 595,
  [SMALL_STATE(36)] = 607,
  [SMALL_STATE(37)] = 619,
  [SMALL_STATE(38)] = 631,
  [SMALL_STATE(39)] = 639,
  [SMALL_STATE(40)] = 651,
  [SMALL_STATE(41)] = 658,
  [SMALL_STATE(42)] = 668,
  [SMALL_STATE(43)] = 674,
  [SMALL_STATE(44)] = 680,
  [SMALL_STATE(45)] = 690,
  [SMALL_STATE(46)] = 700,
  [SMALL_STATE(47)] = 710,
  [SMALL_STATE(48)] = 720,
  [SMALL_STATE(49)] = 730,
  [SMALL_STATE(50)] = 740,
  [SMALL_STATE(51)] = 745,
  [SMALL_STATE(52)] = 749,
  [SMALL_STATE(53)] = 753,
  [SMALL_STATE(54)] = 757,
  [SMALL_STATE(55)] = 761,
  [SMALL_STATE(56)] = 765,
  [SMALL_STATE(57)] = 769,
  [SMALL_STATE(58)] = 773,
  [SMALL_STATE(59)] = 777,
  [SMALL_STATE(60)] = 781,
  [SMALL_STATE(61)] = 785,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(12),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(32),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(61),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(13),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_directive, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_directive, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_directive, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_directive, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(24),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(24),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(9),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 2, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 4),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 4), SHIFT_REPEAT(52),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 6, .production_id = 9),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 8),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 8), SHIFT_REPEAT(8),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 5, .production_id = 6),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 5, .production_id = 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 7),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [222] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
