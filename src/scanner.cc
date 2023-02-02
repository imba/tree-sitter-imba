#include <tree_sitter/parser.h>
#include <vector>
#include <stdarg.h>

void print(const char *format, ...){
	va_list args;
	va_start(args, format);
	// printf(format, args);
}
namespace {

using std::vector;

enum TokenType {
  NEWLINE,
  INDENT,
  DEDENT,
};

struct Scanner {
  Scanner() {
    deserialize(NULL, 0);
  }

  unsigned serialize(char *buffer) {
    size_t i = 0;
    vector<uint16_t>::iterator
      iter = indent_length_stack.begin() + 1,
      end = indent_length_stack.end();
    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
      buffer[i++] = *iter;
    }
    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    indent_length_stack.clear();
    indent_length_stack.push_back(0);
    size_t i = 0;
    while (i < length) indent_length_stack.push_back(buffer[i++]);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    lexer->mark_end(lexer);
    print("\n\n---------------- lookahead %d \n\n", lexer->lookahead);
    while (lexer->lookahead == '\t') {
      print("\n\n ------- advancing in tab ----- \n\n");
      lexer->advance(lexer, true);
    }

    if (lexer->eof && lexer->lookahead == 0) {
      if (valid_symbols[DEDENT] && indent_length_stack.size() > 1) {
        print("\n\n---------------- dedenting \n\n");
        indent_length_stack.pop_back();
        lexer->result_symbol = DEDENT;
        return true;
      }

			// if (valid_symbols[INDENT] && lexer->lookahead != '\n') {
   //      print("\n\n---------------- indent \n\n");
   //      lexer->result_symbol = INDENT;
   //      // indent_length_stack.push_back(8);
   //      return true;
   //    }
     

      if (valid_symbols[NEWLINE]) {
        print("\n\n---------------- newline \n\n");
        lexer->result_symbol = NEWLINE;
        return true;
      }

      print("\n\n ---- eof line (%d) --- \n\n", lexer->lookahead);
      return false;
    }

    uint32_t indent_length = 0;
    if (lexer->lookahead != '\n') {
      print("\n\n ---- lexer is not new line (%d) --- \n\n", lexer->lookahead);
			if (valid_symbols[INDENT]) {
					print("\n\n --inside lexer isn't new line---------------- indent \n\n");
				return false;
					// indent_length += 8;
					// advance(lexer);
					// indent_length_stack.push_back(8);
					// indent_length_stack.push_back(indent_length);
					// lexer->result_symbol = INDENT;
					// return true;
				} else {
					return false;
			}
    }
    advance(lexer);

    for (;;) {
      print("in for loop");
      if (lexer->lookahead == '\n') {
        print("\n\n---------------- ind 0 \n\n");
        indent_length = 0;
        advance(lexer);
      // } else if (lexer->lookahead == ' ') {
    //   //   print("\n\n---------------- ind space \n\n");
      //   indent_length++;
      //   advance(lexer);
      // } else if (lexer->lookahead == '\r') {
      //   indent_length = 0;
      //   advance(lexer);
      } else if (lexer->lookahead == '\t') {
        print("\n\n---------------- tab indent \n\n");
        indent_length += 8;
        advance(lexer);
      // } else if (lexer->lookahead == '#') {
      //   while (lexer->lookahead && lexer->lookahead != '\n') advance(lexer);
    //   //   print("\n\n---------------- in comment \n\n");
      //   advance(lexer);
      //   indent_length = 0;
      } else {
        break;
      }
    }

    if (indent_length > indent_length_stack.back()) {
      indent_length_stack.push_back(indent_length);
      print("\n\n---------------- this is indent \n\n");
      lexer->result_symbol = INDENT;
      return true;
    }

    if (indent_length < indent_length_stack.back() && valid_symbols[DEDENT]) {
      indent_length_stack.pop_back();
      print("\n\n---------------- this is dedent \n\n");
      lexer->result_symbol = DEDENT;
      return true;
    }

    if (valid_symbols[NEWLINE]) {
      lexer->result_symbol = NEWLINE;
      print("\n\n---------------- this is newline \n\n");
      return true;
    }

    return false;
  }

  vector<uint16_t> indent_length_stack;
};

}

extern "C" {

  void *tree_sitter_imba_external_scanner_create() {
    return new Scanner();
  }

  bool tree_sitter_imba_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
  }

  unsigned tree_sitter_imba_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(buffer);
  }

  void tree_sitter_imba_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(buffer, length);
  }

  void tree_sitter_imba_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }

}
