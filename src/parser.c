#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_null = 12,
  anon_sym_none = 13,
  sym_number = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  sym_string = 17,
  anon_sym_DQUOTE = 18,
  anon_sym_BSLASH_DQUOTE = 19,
  anon_sym_BSLASH_POUND = 20,
  anon_sym_BSLASH_BSLASH = 21,
  aux_sym_interpolated_string_token1 = 22,
  anon_sym_POUND_LBRACE = 23,
  anon_sym_LBRACK = 24,
  anon_sym_COMMA = 25,
  anon_sym_RBRACK = 26,
  anon_sym_LBRACE = 27,
  anon_sym_COLON = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_EQ_GT = 31,
  sym_template = 32,
  sym__source_element = 33,
  sym_content = 34,
  sym_output_directive = 35,
  sym_comment = 36,
  sym_expression = 37,
  sym_primary_expression = 38,
  sym_null = 39,
  sym_boolean = 40,
  sym_interpolated_string = 41,
  sym_array = 42,
  sym_object = 43,
  sym_pair = 44,
  sym__property_name = 45,
  sym_computed_property_name = 46,
  sym_arrow_function = 47,
  sym__call_signature = 48,
  sym__formal_parameter = 49,
  sym_formal_parameters = 50,
  sym_pattern = 51,
  sym__lhs_expression = 52,
  aux_sym_template_repeat1 = 53,
  aux_sym_content_repeat1 = 54,
  aux_sym_interpolated_string_repeat1 = 55,
  aux_sym_array_repeat1 = 56,
  aux_sym_object_repeat1 = 57,
  aux_sym_formal_parameters_repeat1 = 58,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_GT] = "=>",
  [sym_template] = "template",
  [sym__source_element] = "_source_element",
  [sym_content] = "content",
  [sym_output_directive] = "output_directive",
  [sym_comment] = "comment",
  [sym_expression] = "expression",
  [sym_primary_expression] = "primary_expression",
  [sym_null] = "null",
  [sym_boolean] = "boolean",
  [sym_interpolated_string] = "interpolated_string",
  [sym_array] = "array",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym__property_name] = "_property_name",
  [sym_computed_property_name] = "computed_property_name",
  [sym_arrow_function] = "arrow_function",
  [sym__call_signature] = "_call_signature",
  [sym__formal_parameter] = "_formal_parameter",
  [sym_formal_parameters] = "formal_parameters",
  [sym_pattern] = "pattern",
  [sym__lhs_expression] = "_lhs_expression",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_template] = sym_template,
  [sym__source_element] = sym__source_element,
  [sym_content] = sym_content,
  [sym_output_directive] = sym_output_directive,
  [sym_comment] = sym_comment,
  [sym_expression] = sym_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_null] = sym_null,
  [sym_boolean] = sym_boolean,
  [sym_interpolated_string] = sym_interpolated_string,
  [sym_array] = sym_array,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym__property_name] = sym__property_name,
  [sym_computed_property_name] = sym_computed_property_name,
  [sym_arrow_function] = sym_arrow_function,
  [sym__call_signature] = sym__call_signature,
  [sym__formal_parameter] = sym__formal_parameter,
  [sym_formal_parameters] = sym_formal_parameters,
  [sym_pattern] = sym_pattern,
  [sym__lhs_expression] = sym__lhs_expression,
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
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
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
  [sym__call_signature] = {
    .visible = false,
    .named = true,
  },
  [sym__formal_parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_formal_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__lhs_expression] = {
    .visible = false,
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
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_parameters, 0},
  [1] =
    {field_body, 2},
    {field_parameter, 0},
  [3] =
    {field_body, 2},
    {field_parameters, 0, .inherited = true},
  [5] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_string,
  },
  [4] = {
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 5,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
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
  [48] = 47,
  [49] = 49,
  [50] = 20,
  [51] = 49,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 55,
  [56] = 53,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 58,
  [64] = 64,
  [65] = 57,
  [66] = 66,
  [67] = 31,
  [68] = 26,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 43,
  [73] = 27,
  [74] = 74,
  [75] = 29,
  [76] = 76,
  [77] = 42,
  [78] = 28,
  [79] = 30,
  [80] = 32,
  [81] = 39,
  [82] = 41,
  [83] = 44,
  [84] = 40,
  [85] = 37,
  [86] = 35,
  [87] = 33,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 92,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
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
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(46);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
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
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (127 <= lookahead && lookahead <= 255)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_interpolated_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '{') ADVANCE(25);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(96),
    [sym__source_element] = STATE(13),
    [sym_content] = STATE(13),
    [sym_output_directive] = STATE(13),
    [sym_comment] = STATE(13),
    [aux_sym_template_repeat1] = STATE(13),
    [aux_sym_content_repeat1] = STATE(18),
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
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_primary_expression,
    STATE(63), 1,
      sym_expression,
    STATE(91), 1,
      sym_formal_parameters,
    STATE(92), 1,
      sym__call_signature,
    ACTIONS(13), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 6,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [51] = 14,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_primary_expression,
    STATE(58), 1,
      sym_expression,
    STATE(91), 1,
      sym_formal_parameters,
    STATE(92), 1,
      sym__call_signature,
    ACTIONS(13), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 6,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [102] = 13,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_primary_expression,
    STATE(91), 1,
      sym_formal_parameters,
    STATE(93), 1,
      sym__call_signature,
    STATE(99), 1,
      sym_expression,
    ACTIONS(33), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(35), 2,
      sym_number,
      sym_string,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 6,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [150] = 13,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_primary_expression,
    STATE(39), 1,
      sym_expression,
    STATE(91), 1,
      sym_formal_parameters,
    STATE(92), 1,
      sym__call_signature,
    ACTIONS(13), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 6,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [198] = 13,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_primary_expression,
    STATE(62), 1,
      sym_expression,
    STATE(91), 1,
      sym_formal_parameters,
    STATE(92), 1,
      sym__call_signature,
    ACTIONS(13), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 6,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [246] = 13,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_expression,
    STATE(75), 1,
      sym_primary_expression,
    STATE(91), 1,
      sym_formal_parameters,
    STATE(93), 1,
      sym__call_signature,
    ACTIONS(33), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(35), 2,
      sym_number,
      sym_string,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 6,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [294] = 13,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_primary_expression,
    STATE(74), 1,
      sym_expression,
    STATE(91), 1,
      sym_formal_parameters,
    STATE(92), 1,
      sym__call_signature,
    ACTIONS(13), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 6,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [342] = 13,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_primary_expression,
    STATE(35), 1,
      sym_expression,
    STATE(91), 1,
      sym_formal_parameters,
    STATE(92), 1,
      sym__call_signature,
    ACTIONS(13), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 6,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [390] = 13,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_primary_expression,
    STATE(88), 1,
      sym_expression,
    STATE(91), 1,
      sym_formal_parameters,
    STATE(92), 1,
      sym__call_signature,
    ACTIONS(13), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(15), 2,
      sym_number,
      sym_string,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 6,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [438] = 13,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_primary_expression,
    STATE(86), 1,
      sym_expression,
    STATE(91), 1,
      sym_formal_parameters,
    STATE(93), 1,
      sym__call_signature,
    ACTIONS(33), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(35), 2,
      sym_number,
      sym_string,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 6,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [486] = 13,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_primary_expression,
    STATE(81), 1,
      sym_expression,
    STATE(91), 1,
      sym_formal_parameters,
    STATE(93), 1,
      sym__call_signature,
    ACTIONS(33), 2,
      anon_sym_null,
      anon_sym_none,
    ACTIONS(35), 2,
      sym_number,
      sym_string,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 6,
      sym_null,
      sym_boolean,
      sym_interpolated_string,
      sym_array,
      sym_object,
      sym_arrow_function,
  [534] = 6,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_content_repeat1,
    ACTIONS(7), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(14), 5,
      sym__source_element,
      sym_content,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [559] = 6,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_content_token1,
    ACTIONS(55), 1,
      anon_sym_LBRACE_POUND,
    STATE(18), 1,
      aux_sym_content_repeat1,
    ACTIONS(52), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
    STATE(14), 5,
      sym__source_element,
      sym_content,
      sym_output_directive,
      sym_comment,
      aux_sym_template_repeat1,
  [584] = 6,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_pair,
    ACTIONS(62), 2,
      sym_number,
      sym_string,
    STATE(97), 2,
      sym__property_name,
      sym_computed_property_name,
  [605] = 6,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_pair,
    ACTIONS(62), 2,
      sym_number,
      sym_string,
    STATE(97), 2,
      sym__property_name,
      sym_computed_property_name,
  [626] = 5,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(76), 1,
      anon_sym_POUND_LBRACE,
    STATE(25), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(72), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [644] = 4,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      aux_sym_content_token1,
    STATE(22), 1,
      aux_sym_content_repeat1,
    ACTIONS(82), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [660] = 5,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_identifier,
    STATE(76), 1,
      sym_pair,
    ACTIONS(62), 2,
      sym_number,
      sym_string,
    STATE(97), 2,
      sym__property_name,
      sym_computed_property_name,
  [678] = 2,
    ACTIONS(88), 1,
      anon_sym_EQ_GT,
    ACTIONS(86), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [690] = 5,
    ACTIONS(76), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      aux_sym_interpolated_string_token1,
    STATE(24), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(92), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [708] = 4,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      aux_sym_content_token1,
    STATE(22), 1,
      aux_sym_content_repeat1,
    ACTIONS(101), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [724] = 5,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(111), 1,
      anon_sym_POUND_LBRACE,
    STATE(23), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(105), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [742] = 5,
    ACTIONS(76), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      aux_sym_interpolated_string_token1,
    STATE(23), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(116), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [760] = 5,
    ACTIONS(76), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(118), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_interpolated_string_repeat1,
    ACTIONS(116), 3,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
  [778] = 1,
    ACTIONS(122), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [787] = 1,
    ACTIONS(86), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [796] = 1,
    ACTIONS(124), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [805] = 1,
    ACTIONS(126), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [814] = 1,
    ACTIONS(128), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [823] = 1,
    ACTIONS(130), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [832] = 1,
    ACTIONS(132), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [841] = 1,
    ACTIONS(134), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [850] = 2,
    ACTIONS(138), 1,
      aux_sym_interpolated_string_token1,
    ACTIONS(136), 5,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_POUND,
      anon_sym_BSLASH_BSLASH,
      anon_sym_POUND_LBRACE,
  [861] = 1,
    ACTIONS(140), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [870] = 2,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 5,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [881] = 1,
    ACTIONS(146), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [890] = 2,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 5,
      aux_sym_content_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
      anon_sym_LBRACE_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
  [901] = 1,
    ACTIONS(152), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [910] = 1,
    ACTIONS(154), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [919] = 1,
    ACTIONS(156), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [928] = 1,
    ACTIONS(158), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [937] = 1,
    ACTIONS(160), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [946] = 1,
    ACTIONS(162), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [955] = 4,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym__lhs_expression,
    STATE(59), 2,
      sym__formal_parameter,
      sym_pattern,
  [969] = 3,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(71), 1,
      sym__lhs_expression,
    STATE(70), 2,
      sym__formal_parameter,
      sym_pattern,
  [980] = 4,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_COLON,
    STATE(52), 1,
      aux_sym_object_repeat1,
  [993] = 4,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_object_repeat1,
  [1006] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_object_repeat1,
  [1016] = 2,
    ACTIONS(178), 1,
      anon_sym_EQ_GT,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1024] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_object_repeat1,
  [1034] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_object_repeat1,
  [1044] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_array_repeat1,
  [1054] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_object_repeat1,
  [1064] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_formal_parameters_repeat1,
  [1074] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_array_repeat1,
  [1084] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_object_repeat1,
  [1094] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_array_repeat1,
  [1104] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_formal_parameters_repeat1,
  [1114] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_array_repeat1,
  [1124] = 2,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(207), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1132] = 1,
    ACTIONS(209), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
      anon_sym_TILDE_RBRACE_RBRACE,
  [1138] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_array_repeat1,
  [1148] = 3,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_object_repeat1,
  [1158] = 3,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_object_repeat1,
  [1168] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_formal_parameters_repeat1,
  [1178] = 1,
    ACTIONS(130), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1183] = 1,
    ACTIONS(122), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1188] = 1,
    ACTIONS(225), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1193] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1198] = 1,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1203] = 1,
    ACTIONS(160), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1208] = 1,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1213] = 1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1218] = 1,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1223] = 1,
    ACTIONS(213), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1228] = 1,
    ACTIONS(158), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1233] = 1,
    ACTIONS(124), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1238] = 1,
    ACTIONS(128), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1243] = 1,
    ACTIONS(132), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1248] = 1,
    ACTIONS(152), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1253] = 1,
    ACTIONS(156), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1258] = 1,
    ACTIONS(162), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1263] = 1,
    ACTIONS(154), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1268] = 1,
    ACTIONS(146), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1273] = 1,
    ACTIONS(140), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1278] = 1,
    ACTIONS(134), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1283] = 1,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
  [1287] = 1,
    ACTIONS(231), 1,
      anon_sym_EQ_GT,
  [1291] = 1,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
  [1295] = 1,
    ACTIONS(235), 1,
      anon_sym_EQ_GT,
  [1299] = 1,
    ACTIONS(237), 1,
      anon_sym_EQ_GT,
  [1303] = 1,
    ACTIONS(239), 1,
      anon_sym_EQ_GT,
  [1307] = 1,
    ACTIONS(241), 1,
      anon_sym_EQ_GT,
  [1311] = 1,
    ACTIONS(243), 1,
      anon_sym_COLON,
  [1315] = 1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
  [1319] = 1,
    ACTIONS(247), 1,
      anon_sym_COLON,
  [1323] = 1,
    ACTIONS(249), 1,
      aux_sym_comment_token1,
  [1327] = 1,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
  [1331] = 1,
    ACTIONS(253), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 198,
  [SMALL_STATE(7)] = 246,
  [SMALL_STATE(8)] = 294,
  [SMALL_STATE(9)] = 342,
  [SMALL_STATE(10)] = 390,
  [SMALL_STATE(11)] = 438,
  [SMALL_STATE(12)] = 486,
  [SMALL_STATE(13)] = 534,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 584,
  [SMALL_STATE(16)] = 605,
  [SMALL_STATE(17)] = 626,
  [SMALL_STATE(18)] = 644,
  [SMALL_STATE(19)] = 660,
  [SMALL_STATE(20)] = 678,
  [SMALL_STATE(21)] = 690,
  [SMALL_STATE(22)] = 708,
  [SMALL_STATE(23)] = 724,
  [SMALL_STATE(24)] = 742,
  [SMALL_STATE(25)] = 760,
  [SMALL_STATE(26)] = 778,
  [SMALL_STATE(27)] = 787,
  [SMALL_STATE(28)] = 796,
  [SMALL_STATE(29)] = 805,
  [SMALL_STATE(30)] = 814,
  [SMALL_STATE(31)] = 823,
  [SMALL_STATE(32)] = 832,
  [SMALL_STATE(33)] = 841,
  [SMALL_STATE(34)] = 850,
  [SMALL_STATE(35)] = 861,
  [SMALL_STATE(36)] = 870,
  [SMALL_STATE(37)] = 881,
  [SMALL_STATE(38)] = 890,
  [SMALL_STATE(39)] = 901,
  [SMALL_STATE(40)] = 910,
  [SMALL_STATE(41)] = 919,
  [SMALL_STATE(42)] = 928,
  [SMALL_STATE(43)] = 937,
  [SMALL_STATE(44)] = 946,
  [SMALL_STATE(45)] = 955,
  [SMALL_STATE(46)] = 969,
  [SMALL_STATE(47)] = 980,
  [SMALL_STATE(48)] = 993,
  [SMALL_STATE(49)] = 1006,
  [SMALL_STATE(50)] = 1016,
  [SMALL_STATE(51)] = 1024,
  [SMALL_STATE(52)] = 1034,
  [SMALL_STATE(53)] = 1044,
  [SMALL_STATE(54)] = 1054,
  [SMALL_STATE(55)] = 1064,
  [SMALL_STATE(56)] = 1074,
  [SMALL_STATE(57)] = 1084,
  [SMALL_STATE(58)] = 1094,
  [SMALL_STATE(59)] = 1104,
  [SMALL_STATE(60)] = 1114,
  [SMALL_STATE(61)] = 1124,
  [SMALL_STATE(62)] = 1132,
  [SMALL_STATE(63)] = 1138,
  [SMALL_STATE(64)] = 1148,
  [SMALL_STATE(65)] = 1158,
  [SMALL_STATE(66)] = 1168,
  [SMALL_STATE(67)] = 1178,
  [SMALL_STATE(68)] = 1183,
  [SMALL_STATE(69)] = 1188,
  [SMALL_STATE(70)] = 1193,
  [SMALL_STATE(71)] = 1198,
  [SMALL_STATE(72)] = 1203,
  [SMALL_STATE(73)] = 1208,
  [SMALL_STATE(74)] = 1213,
  [SMALL_STATE(75)] = 1218,
  [SMALL_STATE(76)] = 1223,
  [SMALL_STATE(77)] = 1228,
  [SMALL_STATE(78)] = 1233,
  [SMALL_STATE(79)] = 1238,
  [SMALL_STATE(80)] = 1243,
  [SMALL_STATE(81)] = 1248,
  [SMALL_STATE(82)] = 1253,
  [SMALL_STATE(83)] = 1258,
  [SMALL_STATE(84)] = 1263,
  [SMALL_STATE(85)] = 1268,
  [SMALL_STATE(86)] = 1273,
  [SMALL_STATE(87)] = 1278,
  [SMALL_STATE(88)] = 1283,
  [SMALL_STATE(89)] = 1287,
  [SMALL_STATE(90)] = 1291,
  [SMALL_STATE(91)] = 1295,
  [SMALL_STATE(92)] = 1299,
  [SMALL_STATE(93)] = 1303,
  [SMALL_STATE(94)] = 1307,
  [SMALL_STATE(95)] = 1311,
  [SMALL_STATE(96)] = 1315,
  [SMALL_STATE(97)] = 1319,
  [SMALL_STATE(98)] = 1323,
  [SMALL_STATE(99)] = 1327,
  [SMALL_STATE(100)] = 1331,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(18),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(6),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(98),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(22),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(23),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(23),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 2), SHIFT_REPEAT(4),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolated_string_repeat1, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 3, .production_id = 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow_function, 3, .production_id = 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_name, 1, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(8),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, .production_id = 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(19),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(46),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .dynamic_precedence = -1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_signature, 1, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_property_name, 3),
  [245] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
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
