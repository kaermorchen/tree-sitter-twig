#include <tree_sitter/parser.h>
#include <wctype.h>

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
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

bool tree_sitter_twig_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  // 1. Обработка COMMENT (обычно имеет приоритет)
  if (valid_symbols[COMMENT]) {
    // Пропускаем пробелы перед комментарием, если это допустимо
    while (iswspace(lexer->lookahead)) skip(lexer);

    if (lexer->lookahead == '{') {
      advance(lexer);
      if (lexer->lookahead == '#') {
        advance(lexer);

        while (lexer->lookahead) {
          if (lexer->lookahead == '#') {
            advance(lexer);
            if (lexer->lookahead == '}') {
              advance(lexer);
              lexer->result_symbol = COMMENT;
              return true;
            }
          } else {
            advance(lexer);
          }
        }
      }
      return false; // Если это не {#, парсер может ожидать CONTENT
    }
  }

  // 2. Обработка CONTENT
  if (valid_symbols[CONTENT]) {
    bool has_content = false;

    while (lexer->lookahead) {
      if (lexer->lookahead == '{') {
        lexer->mark_end(lexer); // Фиксируем контент ПЕРЕД открывающей скобкой
        advance(lexer);

        // Если встретили начало спец. конструкции — отдаем накопленный контент
        if (lexer->lookahead == '{' || lexer->lookahead == '%' || lexer->lookahead == '#') {
          return has_content;
        }
      } else {
        advance(lexer);
      }

      has_content = true;
      lexer->mark_end(lexer);
    }

    if (has_content) {
      lexer->result_symbol = CONTENT;
      return true;
    }
  }

  return false;
}
