#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum {
  sym_identifier = 1,
  aux_sym_content_token1 = 2,
  anon_sym_LBRACE_LBRACE = 3,
  anon_sym_LBRACE_LBRACE_DASH = 4,
  anon_sym_LBRACE_LBRACE_TILDE = 5,
  anon_sym_RBRACE_RBRACE = 6,
  anon_sym_DASH_RBRACE_RBRACE = 7,
  anon_sym_TILDE_RBRACE_RBRACE = 8,
  anon_sym_LBRACE_POUND = 9,
  aux_sym_comment_token1 = 10,
  anon_sym_RBRACE = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_null = 14,
  anon_sym_none = 15,
  sym_number = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  sym_string = 19,
  anon_sym_DQUOTE = 20,
  anon_sym_BSLASH_DQUOTE = 21,
  anon_sym_BSLASH_POUND = 22,
  anon_sym_BSLASH_BSLASH = 23,
  aux_sym_interpolated_string_token1 = 24,
  anon_sym_POUND_LBRACE = 25,
  anon_sym_LBRACK = 26,
  anon_sym_COMMA = 27,
  anon_sym_RBRACK = 28,
  anon_sym_LBRACE = 29,
  anon_sym_COLON = 30,
  anon_sym_EQ_GT = 31,
  sym_template = 32,
  sym__source_element = 33,
  sym_content = 34,
  sym_output_directive = 35,
  sym_comment = 36,
  sym_expression = 37,
  sym_primary_expression = 38,
  sym_parenthesized_expression = 39,
  sym_null = 40,
  sym_boolean = 41,
  sym_interpolated_string = 42,
  sym_array = 43,
  sym_object = 44,
  sym_pair = 45,
  sym__property_name = 46,
  sym_computed_property_name = 47,
  sym_arrow_function = 48,
  sym_formal_parameters = 49,
  sym_pattern = 50,
  aux_sym_template_repeat1 = 51,
  aux_sym_content_repeat1 = 52,
  aux_sym_interpolated_string_repeat1 = 53,
  aux_sym_array_repeat1 = 54,
  aux_sym_object_repeat1 = 55,
  aux_sym_formal_parameters_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_LBRACE_LBRACE_TILDE] = "{{~",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [anon_sym_TILDE_RBRACE_RBRACE] = "~}}",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_null] = "null",
  [anon_sym_none] = "none",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_string] = "string",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_POUND] = "\\#",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_interpolated_string_token1] = "interpolated_string_token1",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ_GT] = "=>",
  [sym_template] = "template",
  [sym__source_element] = "_source_element",
  [sym_content] = "content",
  [sym_output_directive] = "output_directive",
  [sym_comment] = "comment",
  [sym_expression] = "expression",
  [sym_primary_expression] = "primary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_null] = "null",
  [sym_boolean] = "boolean",
  [sym_interpolated_string] = "interpolated_string",
  [sym_array] = "array",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym__property_name] = "_property_name",
  [sym_computed_property_name] = "computed_property_name",
  [sym_arrow_function] = "arrow_function",
  [sym_formal_parameters] = "formal_parameters",
  [sym_pattern] = "pattern",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_interpolated_string_repeat1] = "interpolated_string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_LBRACE_LBRACE_TILDE] = anon_sym_LBRACE_LBRACE_TILDE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [anon_sym_TILDE_RBRACE_RBRACE] = anon_sym_TILDE_RBRACE_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_none] = anon_sym_none,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_string] = sym_string,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_POUND] = anon_sym_BSLASH_POUND,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_interpolated_string_token1] = aux_sym_interpolated_string_token1,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_template] = sym_template,
  [sym__source_element] = sym__source_element,
  [sym_content] = sym_content,
  [sym_output_directive] = sym_output_directive,
  [sym_comment] = sym_comment,
  [sym_expression] = sym_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_null] = sym_null,
  [sym_boolean] = sym_boolean,
  [sym_interpolated_string] = sym_interpolated_string,
  [sym_array] = sym_array,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym__property_name] = sym__property_name,
  [sym_computed_property_name] = sym_computed_property_name,
  [sym_arrow_function] = sym_arrow_function,
  [sym_formal_parameters] = sym_formal_parameters,
  [sym_pattern] = sym_pattern,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_interpolated_string_repeat1] = aux_sym_interpolated_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
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
  [aux_sym_content_token1] = {
    .visible = false,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__source_element] = {
    .visible = false,
    .named = true,
  },
  [sym_content] = {
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
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_primary_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__property_name] = {
    .visible = false,
    .named = true,
  },
  [sym_computed_property_name] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow_function] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_key = 2,
  field_parameter = 3,
  field_parameters = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_key] = "key",
  [field_parameter] = "parameter",
  [field_parameters] = "parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_parameter, 0},
  [2] =
    {field_body, 2},
    {field_parameters, 0},
  [4] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_string,
  },
  [3] = {
    [1] = sym_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 21,
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
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 52,
  [56] = 56,
  [57] = 50,
  [58] = 51,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 54,
  [63] = 25,
  [64] = 64,
  [65] = 65,
  [66] = 53,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 46,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 45,
  [75] = 44,
  [76] = 29,
  [77] = 36,
  [78] = 78,
  [79] = 34,
  [80] = 35,
  [81] = 37,
  [82] = 82,
  [83] = 43,
  [84] = 47,
  [85] = 38,
  [86] = 39,
  [87] = 28,
  [88] = 31,
  [89] = 40,
  [90] = 32,
  [91] = 30,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 94,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 97,
  [105] = 105,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '{') ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '~') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_TILDE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_TILDE_RBRACE_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(6);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '{') ADVANCE(25);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
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
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
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
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
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
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
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
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_TILDE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_POUND] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(105),
    [sym__source_element] = STATE(16),
    [sym_content] = STATE(16),
    [sym_output_directive] = STATE(16),
    [sym_comment] = STATE(16),
    [aux_sym_template_repeat1] = STATE(16),
    [aux_sym_content_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE_TILDE] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_primary_expression,
    STATE(64), 1,
      sym_pattern,
    STATE(94), 1,
      sym_formal_parameters,
    STATE(104), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [52] = 14,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_primary_expression,
    STATE(64), 1,
      sym_pattern,
    STATE(94), 1,
      sym_formal_parameters,
    STATE(97), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [104] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_primary_expression,
    STATE(54), 1,
      sym_expression,
    STATE(94), 1,
      sym_formal_parameters,
    ACTIONS(17), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [153] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_primary_expression,
    STATE(62), 1,
      sym_expression,
    STATE(94), 1,
      sym_formal_parameters,
    ACTIONS(17), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [202] = 12,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_primary_expression,
    STATE(96), 1,
      sym_formal_parameters,
    STATE(100), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(41), 2,
      sym_number,
      sym_string,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [248] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(82), 1,
      sym_expression,
    STATE(94), 1,
      sym_formal_parameters,
    ACTIONS(17), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [294] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(47), 1,
      sym_expression,
    STATE(94), 1,
      sym_formal_parameters,
    ACTIONS(17), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [340] = 12,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_primary_expression,
    STATE(89), 1,
      sym_expression,
    STATE(96), 1,
      sym_formal_parameters,
    ACTIONS(39), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(41), 2,
      sym_number,
      sym_string,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [386] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(94), 1,
      sym_formal_parameters,
    STATE(99), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [432] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(40), 1,
      sym_expression,
    STATE(94), 1,
      sym_formal_parameters,
    ACTIONS(17), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [478] = 12,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    STATE(59), 1,
      sym_expression,
    STATE(94), 1,
      sym_formal_parameters,
    ACTIONS(17), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [524] = 12,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_primary_expression,
    STATE(84), 1,
      sym_expression,
    STATE(96), 1,
      sym_formal_parameters,
    ACTIONS(39), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(41), 2,
      sym_number,
      sym_string,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [570] = 12,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_expression,
    STATE(77), 1,
      sym_primary_expression,
    STATE(96), 1,
      sym_formal_parameters,
    ACTIONS(39), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(41), 2,
      sym_number,
      sym_string,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 7,
      sym_parenthesized_expression,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [616] = 6,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_content_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE_POUND,
    STATE(27), 1,
      aux_sym_content_repeat1,
    ACTIONS(56), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(15), 5,
      sym__source_element,
      sym_content,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [641] = 6,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      aux_sym_content_repeat1,
    ACTIONS(7), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(15), 5,
      sym__source_element,
      sym_content,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [666] = 6,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_pair,
    ACTIONS(70), 2,
      sym_number,
      sym_string,
    STATE(103), 2,
      sym__property_name,
      sym_computed_property_name,
  [687] = 6,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_pair,
    ACTIONS(70), 2,
      sym_number,
      sym_string,
    STATE(103), 2,
      sym__property_name,
      sym_computed_property_name,
  [708] = 5,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(69), 1,
      sym_pair,
    ACTIONS(70), 2,
      sym_number,
      sym_string,
    STATE(103), 2,
      sym__property_name,
      sym_computed_property_name,
  [726] = 4,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      aux_sym_content_token1,
    STATE(20), 1,
      aux_sym_content_repeat1,
    ACTIONS(83), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [742] = 5,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(91), 1,
      anon_sym_POUND_LBRACE,
    STATE(22), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(87), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [760] = 5,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(101), 1,
      anon_sym_POUND_LBRACE,
    STATE(22), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(95), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [778] = 5,
    ACTIONS(91), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      aux_sym_interpolated_string_token1,
    STATE(26), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(106), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [796] = 5,
    ACTIONS(91), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      aux_sym_interpolated_string_token1,
    STATE(21), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(112), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [814] = 2,
    ACTIONS(118), 1,
      anon_sym_EQ_GT,
    ACTIONS(116), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [826] = 5,
    ACTIONS(89), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(91), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(87), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [844] = 4,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      aux_sym_content_token1,
    STATE(20), 1,
      aux_sym_content_repeat1,
    ACTIONS(126), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [860] = 1,
    ACTIONS(128), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [869] = 1,
    ACTIONS(130), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [878] = 1,
    ACTIONS(132), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [887] = 1,
    ACTIONS(134), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [896] = 1,
    ACTIONS(136), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [905] = 2,
    ACTIONS(140), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(138), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
      anon_sym_POUND_LBRACE,
  [916] = 1,
    ACTIONS(142), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [925] = 1,
    ACTIONS(144), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [934] = 1,
    ACTIONS(146), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [943] = 1,
    ACTIONS(148), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [952] = 1,
    ACTIONS(150), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [961] = 1,
    ACTIONS(152), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [970] = 1,
    ACTIONS(154), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [979] = 2,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 5,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [990] = 2,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 5,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [1001] = 1,
    ACTIONS(164), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1010] = 1,
    ACTIONS(116), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1019] = 1,
    ACTIONS(166), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1028] = 1,
    ACTIONS(168), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1037] = 1,
    ACTIONS(170), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1046] = 4,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_COLON,
    STATE(66), 1,
      aux_sym_object_repeat1,
  [1059] = 4,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_COLON,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_object_repeat1,
  [1072] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_object_repeat1,
  [1082] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_array_repeat1,
  [1092] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_object_repeat1,
  [1102] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_object_repeat1,
  [1112] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_array_repeat1,
  [1122] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_object_repeat1,
  [1132] = 3,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_formal_parameters_repeat1,
  [1142] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_object_repeat1,
  [1152] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_array_repeat1,
  [1162] = 1,
    ACTIONS(202), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
  [1168] = 3,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_object_repeat1,
  [1178] = 3,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_formal_parameters_repeat1,
  [1188] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_array_repeat1,
  [1198] = 2,
    ACTIONS(216), 1,
      anon_sym_EQ_GT,
    ACTIONS(116), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1206] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_formal_parameters_repeat1,
  [1216] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_array_repeat1,
  [1226] = 3,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_object_repeat1,
  [1236] = 2,
    ACTIONS(176), 1,
      anon_sym_COLON,
    ACTIONS(227), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1244] = 3,
    ACTIONS(118), 1,
      anon_sym_EQ_GT,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(232), 1,
      anon_sym_COMMA,
  [1254] = 1,
    ACTIONS(204), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1259] = 1,
    ACTIONS(168), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1264] = 2,
    ACTIONS(234), 1,
      sym_identifier,
    STATE(78), 1,
      sym_pattern,
  [1271] = 1,
    ACTIONS(236), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1276] = 1,
    ACTIONS(232), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1281] = 1,
    ACTIONS(166), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1286] = 1,
    ACTIONS(116), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1291] = 1,
    ACTIONS(130), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1296] = 1,
    ACTIONS(146), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1301] = 1,
    ACTIONS(209), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1306] = 1,
    ACTIONS(142), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1311] = 1,
    ACTIONS(144), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1316] = 1,
    ACTIONS(148), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1321] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1326] = 1,
    ACTIONS(164), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1331] = 1,
    ACTIONS(170), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1336] = 1,
    ACTIONS(150), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1341] = 1,
    ACTIONS(152), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1346] = 1,
    ACTIONS(128), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1351] = 1,
    ACTIONS(134), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1356] = 1,
    ACTIONS(154), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1361] = 1,
    ACTIONS(136), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1366] = 1,
    ACTIONS(132), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1371] = 1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
  [1375] = 1,
    ACTIONS(240), 1,
      anon_sym_EQ_GT,
  [1379] = 1,
    ACTIONS(242), 1,
      anon_sym_EQ_GT,
  [1383] = 1,
    ACTIONS(244), 1,
      anon_sym_COLON,
  [1387] = 1,
    ACTIONS(246), 1,
      anon_sym_EQ_GT,
  [1391] = 1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
  [1395] = 1,
    ACTIONS(250), 1,
      aux_sym_comment_token1,
  [1399] = 1,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
  [1403] = 1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
  [1407] = 1,
    ACTIONS(256), 1,
      anon_sym_EQ_GT,
  [1411] = 1,
    ACTIONS(258), 1,
      anon_sym_EQ_GT,
  [1415] = 1,
    ACTIONS(260), 1,
      anon_sym_COLON,
  [1419] = 1,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
  [1423] = 1,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 202,
  [SMALL_STATE(7)] = 248,
  [SMALL_STATE(8)] = 294,
  [SMALL_STATE(9)] = 340,
  [SMALL_STATE(10)] = 386,
  [SMALL_STATE(11)] = 432,
  [SMALL_STATE(12)] = 478,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 570,
  [SMALL_STATE(15)] = 616,
  [SMALL_STATE(16)] = 641,
  [SMALL_STATE(17)] = 666,
  [SMALL_STATE(18)] = 687,
  [SMALL_STATE(19)] = 708,
  [SMALL_STATE(20)] = 726,
  [SMALL_STATE(21)] = 742,
  [SMALL_STATE(22)] = 760,
  [SMALL_STATE(23)] = 778,
  [SMALL_STATE(24)] = 796,
  [SMALL_STATE(25)] = 814,
  [SMALL_STATE(26)] = 826,
  [SMALL_STATE(27)] = 844,
  [SMALL_STATE(28)] = 860,
  [SMALL_STATE(29)] = 869,
  [SMALL_STATE(30)] = 878,
  [SMALL_STATE(31)] = 887,
  [SMALL_STATE(32)] = 896,
  [SMALL_STATE(33)] = 905,
  [SMALL_STATE(34)] = 916,
  [SMALL_STATE(35)] = 925,
  [SMALL_STATE(36)] = 934,
  [SMALL_STATE(37)] = 943,
  [SMALL_STATE(38)] = 952,
  [SMALL_STATE(39)] = 961,
  [SMALL_STATE(40)] = 970,
  [SMALL_STATE(41)] = 979,
  [SMALL_STATE(42)] = 990,
  [SMALL_STATE(43)] = 1001,
  [SMALL_STATE(44)] = 1010,
  [SMALL_STATE(45)] = 1019,
  [SMALL_STATE(46)] = 1028,
  [SMALL_STATE(47)] = 1037,
  [SMALL_STATE(48)] = 1046,
  [SMALL_STATE(49)] = 1059,
  [SMALL_STATE(50)] = 1072,
  [SMALL_STATE(51)] = 1082,
  [SMALL_STATE(52)] = 1092,
  [SMALL_STATE(53)] = 1102,
  [SMALL_STATE(54)] = 1112,
  [SMALL_STATE(55)] = 1122,
  [SMALL_STATE(56)] = 1132,
  [SMALL_STATE(57)] = 1142,
  [SMALL_STATE(58)] = 1152,
  [SMALL_STATE(59)] = 1162,
  [SMALL_STATE(60)] = 1168,
  [SMALL_STATE(61)] = 1178,
  [SMALL_STATE(62)] = 1188,
  [SMALL_STATE(63)] = 1198,
  [SMALL_STATE(64)] = 1206,
  [SMALL_STATE(65)] = 1216,
  [SMALL_STATE(66)] = 1226,
  [SMALL_STATE(67)] = 1236,
  [SMALL_STATE(68)] = 1244,
  [SMALL_STATE(69)] = 1254,
  [SMALL_STATE(70)] = 1259,
  [SMALL_STATE(71)] = 1264,
  [SMALL_STATE(72)] = 1271,
  [SMALL_STATE(73)] = 1276,
  [SMALL_STATE(74)] = 1281,
  [SMALL_STATE(75)] = 1286,
  [SMALL_STATE(76)] = 1291,
  [SMALL_STATE(77)] = 1296,
  [SMALL_STATE(78)] = 1301,
  [SMALL_STATE(79)] = 1306,
  [SMALL_STATE(80)] = 1311,
  [SMALL_STATE(81)] = 1316,
  [SMALL_STATE(82)] = 1321,
  [SMALL_STATE(83)] = 1326,
  [SMALL_STATE(84)] = 1331,
  [SMALL_STATE(85)] = 1336,
  [SMALL_STATE(86)] = 1341,
  [SMALL_STATE(87)] = 1346,
  [SMALL_STATE(88)] = 1351,
  [SMALL_STATE(89)] = 1356,
  [SMALL_STATE(90)] = 1361,
  [SMALL_STATE(91)] = 1366,
  [SMALL_STATE(92)] = 1371,
  [SMALL_STATE(93)] = 1375,
  [SMALL_STATE(94)] = 1379,
  [SMALL_STATE(95)] = 1383,
  [SMALL_STATE(96)] = 1387,
  [SMALL_STATE(97)] = 1391,
  [SMALL_STATE(98)] = 1395,
  [SMALL_STATE(99)] = 1399,
  [SMALL_STATE(100)] = 1403,
  [SMALL_STATE(101)] = 1407,
  [SMALL_STATE(102)] = 1411,
  [SMALL_STATE(103)] = 1415,
  [SMALL_STATE(104)] = 1419,
  [SMALL_STATE(105)] = 1423,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(27),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(12),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(98),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(20),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(22),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(22),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, .production_id = 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 3, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 3, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_name, 1, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(19),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(71),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(7),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, .production_id = 3),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_primary_expression, 1), REDUCE(sym_pattern, 1, .dynamic_precedence = -1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .dynamic_precedence = -1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_property_name, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [264] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
