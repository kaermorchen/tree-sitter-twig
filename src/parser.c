#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  anon_sym_DQUOTE = 22,
  anon_sym_BSLASH_DQUOTE = 23,
  anon_sym_BSLASH_POUND = 24,
  anon_sym_BSLASH_BSLASH = 25,
  aux_sym_interpolated_string_token1 = 26,
  anon_sym_POUND_LBRACE = 27,
  anon_sym_set = 28,
  anon_sym_COMMA = 29,
  anon_sym_EQ = 30,
  sym_template = 31,
  sym_content = 32,
  sym_statement_directive = 33,
  sym_output_directive = 34,
  sym_comment = 35,
  sym__literal = 36,
  sym_interpolated_string = 37,
  sym__expression = 38,
  sym__statement = 39,
  sym_assignment_statement = 40,
  aux_sym_template_repeat1 = 41,
  aux_sym_content_repeat1 = 42,
  aux_sym_interpolated_string_repeat1 = 43,
  aux_sym_assignment_statement_repeat1 = 44,
  aux_sym_assignment_statement_repeat2 = 45,
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
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_POUND] = "\\#",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_interpolated_string_token1] = "interpolated_string_token1",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_set] = "set",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [sym_template] = "template",
  [sym_content] = "content",
  [sym_statement_directive] = "statement_directive",
  [sym_output_directive] = "output_directive",
  [sym_comment] = "comment",
  [sym__literal] = "_literal",
  [sym_interpolated_string] = "interpolated_string",
  [sym__expression] = "_expression",
  [sym__statement] = "_statement",
  [sym_assignment_statement] = "assignment_statement",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_POUND] = anon_sym_BSLASH_POUND,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_interpolated_string_token1] = aux_sym_interpolated_string_token1,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_template] = sym_template,
  [sym_content] = sym_content,
  [sym_statement_directive] = sym_statement_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_comment] = sym_comment,
  [sym__literal] = sym__literal,
  [sym_interpolated_string] = sym_interpolated_string,
  [sym__expression] = sym__expression,
  [sym__statement] = sym__statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
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
  [anon_sym_COMMA] = {
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
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
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
  [43] = 21,
  [44] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(3);
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
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(8);
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
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
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
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(80);
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
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
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
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_POUND] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(37),
    [sym_content] = STATE(3),
    [sym_statement_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(5),
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
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym_content_token1,
    ACTIONS(24), 1,
      anon_sym_LBRACE_POUND,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(18), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(21), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(2), 5,
      sym_content,
      sym_statement_directive,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [30] = 7,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(7), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
    ACTIONS(9), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(2), 5,
      sym_content,
      sym_statement_directive,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [60] = 5,
    ACTIONS(35), 1,
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
    STATE(35), 3,
      sym__literal,
      sym_interpolated_string,
      sym__expression,
  [83] = 4,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      aux_sym_content_token1,
    STATE(6), 1,
      aux_sym_content_repeat1,
    ACTIONS(41), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [102] = 4,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_content_token1,
    STATE(6), 1,
      aux_sym_content_repeat1,
    ACTIONS(48), 7,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [121] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [135] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [149] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [163] = 4,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(62), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(34), 3,
      sym__literal,
      sym_interpolated_string,
      sym__expression,
  [181] = 4,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(66), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(32), 3,
      sym__literal,
      sym_interpolated_string,
      sym__expression,
  [199] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [213] = 2,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 8,
      aux_sym_content_token1,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_PERCENT_DASH,
      anon_sym_LBRACE_PERCENT_TILDE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [227] = 4,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(78), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(40), 3,
      sym__literal,
      sym_interpolated_string,
      sym__expression,
  [245] = 4,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 2,
      sym_null_literal,
      sym_boolean_literal,
    ACTIONS(84), 3,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
    STATE(30), 3,
      sym__literal,
      sym_interpolated_string,
      sym__expression,
  [263] = 5,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(94), 1,
      anon_sym_POUND_LBRACE,
    STATE(19), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(90), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [281] = 5,
    ACTIONS(94), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      aux_sym_interpolated_string_token1,
    STATE(16), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(98), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [299] = 5,
    ACTIONS(94), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      aux_sym_interpolated_string_token1,
    STATE(22), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(104), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [317] = 5,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(116), 1,
      anon_sym_POUND_LBRACE,
    STATE(19), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(110), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [335] = 1,
    ACTIONS(119), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
  [345] = 1,
    ACTIONS(121), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
  [355] = 5,
    ACTIONS(92), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(94), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(90), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [373] = 4,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_EQ,
    STATE(26), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(125), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [388] = 3,
    ACTIONS(133), 1,
      anon_sym_set,
    STATE(36), 2,
      sym__statement,
      sym_assignment_statement,
    ACTIONS(131), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [401] = 2,
    ACTIONS(137), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(135), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
      anon_sym_POUND_LBRACE,
  [412] = 4,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_EQ,
    STATE(27), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(139), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [427] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_assignment_statement_repeat1,
    ACTIONS(143), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_EQ,
  [440] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(148), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [452] = 1,
    ACTIONS(153), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
  [460] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(155), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [472] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(159), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [484] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(161), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [496] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_assignment_statement_repeat2,
    ACTIONS(163), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [508] = 1,
    ACTIONS(165), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
      anon_sym_COMMA,
  [515] = 1,
    ACTIONS(167), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
  [521] = 1,
    ACTIONS(169), 3,
      anon_sym_PERCENT_RBRACE,
      anon_sym_DASH_PERCENT_RBRACE,
      anon_sym_TILDE_PERCENT_RBRACE,
  [527] = 1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
  [531] = 1,
    ACTIONS(173), 1,
      sym_identifier,
  [535] = 1,
    ACTIONS(175), 1,
      sym_identifier,
  [539] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
  [543] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
  [547] = 1,
    ACTIONS(181), 1,
      aux_sym_comment_token1,
  [551] = 1,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
  [555] = 1,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 181,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 227,
  [SMALL_STATE(15)] = 245,
  [SMALL_STATE(16)] = 263,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 299,
  [SMALL_STATE(19)] = 317,
  [SMALL_STATE(20)] = 335,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 355,
  [SMALL_STATE(23)] = 373,
  [SMALL_STATE(24)] = 388,
  [SMALL_STATE(25)] = 401,
  [SMALL_STATE(26)] = 412,
  [SMALL_STATE(27)] = 427,
  [SMALL_STATE(28)] = 440,
  [SMALL_STATE(29)] = 452,
  [SMALL_STATE(30)] = 460,
  [SMALL_STATE(31)] = 472,
  [SMALL_STATE(32)] = 484,
  [SMALL_STATE(33)] = 496,
  [SMALL_STATE(34)] = 508,
  [SMALL_STATE(35)] = 515,
  [SMALL_STATE(36)] = 521,
  [SMALL_STATE(37)] = 527,
  [SMALL_STATE(38)] = 531,
  [SMALL_STATE(39)] = 535,
  [SMALL_STATE(40)] = 539,
  [SMALL_STATE(41)] = 543,
  [SMALL_STATE(42)] = 547,
  [SMALL_STATE(43)] = 551,
  [SMALL_STATE(44)] = 555,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(5),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(24),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_directive, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_directive, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_directive, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_directive, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(19),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(19),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(14),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 4),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 4), SHIFT_REPEAT(38),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 8),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 8), SHIFT_REPEAT(10),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat1, 2, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 5, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 5, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 6, .production_id = 9),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_statement_repeat2, 2, .production_id = 7),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
