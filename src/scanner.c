#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdio.h>

enum TokenType {
  CONTENT,
  COMMENT
};

void *tree_sitter_twig_external_scanner_create() { return NULL; }
void tree_sitter_twig_external_scanner_destroy(void *p) {}
void tree_sitter_twig_external_scanner_reset(void *p) {}
unsigned tree_sitter_twig_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_twig_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_twig_content(TSLexer *lexer) {
  lexer->result_symbol = CONTENT;

  bool has_content = false;

  while (lexer->lookahead) {
    switch (lexer->lookahead) {
      case '{':
        advance(lexer);
        if(lexer->lookahead == '{' ||
           lexer->lookahead == '%' ||
           lexer->lookahead == '#') {
          return has_content;
        }
        break;
      default:
        advance(lexer);
    }

    lexer->mark_end(lexer);
    has_content = true;
  }

  return has_content;
}

static bool scan_twig_comment(TSLexer *lexer) {
  lexer->result_symbol = COMMENT;

  if (lexer->lookahead != '{') return false;
  lexer->mark_end(lexer);
  advance(lexer);

  if (lexer->lookahead != '#') return false;
  advance(lexer);

  // Consume characters until we read `#}`
  while (lexer->lookahead) {
    if(lexer->lookahead == '#') {
      advance(lexer);

      if(lexer->lookahead == '}') {
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
      }
    }

    advance(lexer);
  }

  return true;
}

bool tree_sitter_twig_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  // Eat whitespace
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (valid_symbols[COMMENT] && lexer->lookahead == '{') {
    return scan_twig_comment(lexer);
  }

  if (valid_symbols[CONTENT]) {
    return scan_twig_content(lexer);
  }

  return false;
}
