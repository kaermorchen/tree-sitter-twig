#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdio.h>

enum TokenType {
  COMMENT
};

void *tree_sitter_twig_external_scanner_create() { return NULL; }
void tree_sitter_twig_external_scanner_destroy(void *p) {}
void tree_sitter_twig_external_scanner_reset(void *p) {}
unsigned tree_sitter_twig_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_twig_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_twig_comment(TSLexer *lexer) {
  // Ensure the next character is `#`
  if (lexer->lookahead != '#') return false;
  advance(lexer);

  // Consume characters until we read `#}`
  while (lexer->lookahead) {
    if(lexer->lookahead == '#') {
      advance(lexer);

      if(lexer->lookahead == '}') {
        lexer->result_symbol = COMMENT;
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
      }
    }

    advance(lexer);
  }

  return false;
}

bool tree_sitter_twig_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  // Eat whitespace
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (valid_symbols[COMMENT]) {
    if (lexer->lookahead == '{') {
      lexer->mark_end(lexer);
      advance(lexer);
      return scan_twig_comment(lexer);
    }
  }

  return false;
}
