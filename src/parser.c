#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_true = 1,
  sym_yes = 2,
  sym_no = 3,
  sym_false = 4,
  sym_undefined = 5,
  sym_null = 6,
  anon_sym_SEMI = 7,
  sym__expression = 8,
  anon_sym_if = 9,
  anon_sym_unless = 10,
  sym_continue_statement = 11,
  sym_comment = 12,
  sym__newline = 13,
  sym__indent = 14,
  sym__dedent = 15,
  sym_program = 16,
  sym__statement = 17,
  sym__compound_statement = 18,
  sym_if_statement = 19,
  sym__suite = 20,
  sym__simple_statement = 21,
  sym__simple_statements = 22,
  aux_sym_program_repeat1 = 23,
  aux_sym__simple_statements_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_true] = "true",
  [sym_yes] = "yes",
  [sym_no] = "no",
  [sym_false] = "false",
  [sym_undefined] = "undefined",
  [sym_null] = "null",
  [anon_sym_SEMI] = ";",
  [sym__expression] = "_expression",
  [anon_sym_if] = "if",
  [anon_sym_unless] = "unless",
  [sym_continue_statement] = "continue_statement",
  [sym_comment] = "comment",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym_if_statement] = "if_statement",
  [sym__suite] = "_suite",
  [sym__simple_statement] = "_simple_statement",
  [sym__simple_statements] = "_simple_statements",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__simple_statements_repeat1] = "_simple_statements_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_true] = sym_true,
  [sym_yes] = sym_yes,
  [sym_no] = sym_no,
  [sym_false] = sym_false,
  [sym_undefined] = sym_undefined,
  [sym_null] = sym_null,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__expression] = sym__expression,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_unless] = anon_sym_unless,
  [sym_continue_statement] = sym_continue_statement,
  [sym_comment] = sym_comment,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym_if_statement] = sym_if_statement,
  [sym__suite] = sym__suite,
  [sym__simple_statement] = sym__simple_statement,
  [sym__simple_statements] = sym__simple_statements,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__simple_statements_repeat1] = aux_sym__simple_statements_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_yes] = {
    .visible = true,
    .named = true,
  },
  [sym_no] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_undefined] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__suite] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statements] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__simple_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [5] = 4,
  [6] = 2,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 14,
  [17] = 12,
  [18] = 11,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 27,
  [30] = 24,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'y') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 40:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_yes);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_no);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_undefined);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__expression);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 4},
  [33] = {.lex_state = 0, .external_lex_state = 4},
  [34] = {.lex_state = 0},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_yes] = ACTIONS(1),
    [sym_no] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_undefined] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__expression] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [sym_continue_statement] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(34),
    [sym__statement] = STATE(3),
    [sym__compound_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym__simple_statement] = STATE(29),
    [sym__simple_statements] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(5),
    [anon_sym_unless] = ACTIONS(5),
    [sym_continue_statement] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      sym__dedent,
    STATE(27), 1,
      sym__simple_statement,
    ACTIONS(9), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(11), 2,
      sym_continue_statement,
      sym_comment,
    STATE(5), 5,
      sym__statement,
      sym__compound_statement,
      sym_if_statement,
      sym__simple_statements,
      aux_sym_program_repeat1,
  [22] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__simple_statement,
    ACTIONS(5), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(7), 2,
      sym_continue_statement,
      sym_comment,
    STATE(4), 5,
      sym__statement,
      sym__compound_statement,
      sym_if_statement,
      sym__simple_statements,
      aux_sym_program_repeat1,
  [44] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__simple_statement,
    ACTIONS(19), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(22), 2,
      sym_continue_statement,
      sym_comment,
    STATE(4), 5,
      sym__statement,
      sym__compound_statement,
      sym_if_statement,
      sym__simple_statements,
      aux_sym_program_repeat1,
  [66] = 5,
    ACTIONS(17), 1,
      sym__dedent,
    STATE(27), 1,
      sym__simple_statement,
    ACTIONS(25), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(28), 2,
      sym_continue_statement,
      sym_comment,
    STATE(5), 5,
      sym__statement,
      sym__compound_statement,
      sym_if_statement,
      sym__simple_statements,
      aux_sym_program_repeat1,
  [88] = 5,
    ACTIONS(31), 1,
      sym__dedent,
    STATE(27), 1,
      sym__simple_statement,
    ACTIONS(9), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(11), 2,
      sym_continue_statement,
      sym_comment,
    STATE(5), 5,
      sym__statement,
      sym__compound_statement,
      sym_if_statement,
      sym__simple_statements,
      aux_sym_program_repeat1,
  [110] = 4,
    STATE(27), 1,
      sym__simple_statement,
    ACTIONS(9), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(11), 2,
      sym_continue_statement,
      sym_comment,
    STATE(2), 5,
      sym__statement,
      sym__compound_statement,
      sym_if_statement,
      sym__simple_statements,
      aux_sym_program_repeat1,
  [129] = 4,
    STATE(27), 1,
      sym__simple_statement,
    ACTIONS(9), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(11), 2,
      sym_continue_statement,
      sym_comment,
    STATE(6), 5,
      sym__statement,
      sym__compound_statement,
      sym_if_statement,
      sym__simple_statements,
      aux_sym_program_repeat1,
  [148] = 1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_continue_statement,
      sym_comment,
  [156] = 1,
    ACTIONS(33), 5,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_continue_statement,
      sym_comment,
  [164] = 1,
    ACTIONS(35), 5,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_continue_statement,
      sym_comment,
  [172] = 1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_continue_statement,
      sym_comment,
  [180] = 1,
    ACTIONS(39), 5,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_continue_statement,
      sym_comment,
  [188] = 1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_continue_statement,
      sym_comment,
  [196] = 1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_continue_statement,
      sym_comment,
  [204] = 1,
    ACTIONS(41), 5,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_continue_statement,
      sym_comment,
  [212] = 1,
    ACTIONS(37), 5,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_continue_statement,
      sym_comment,
  [220] = 1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_continue_statement,
      sym_comment,
  [228] = 3,
    ACTIONS(45), 1,
      sym__newline,
    STATE(31), 1,
      sym__simple_statement,
    ACTIONS(43), 2,
      sym_continue_statement,
      sym_comment,
  [239] = 3,
    ACTIONS(47), 1,
      sym__newline,
    STATE(31), 1,
      sym__simple_statement,
    ACTIONS(43), 2,
      sym_continue_statement,
      sym_comment,
  [250] = 3,
    ACTIONS(49), 1,
      sym__newline,
    STATE(31), 1,
      sym__simple_statement,
    ACTIONS(43), 2,
      sym_continue_statement,
      sym_comment,
  [261] = 3,
    ACTIONS(51), 1,
      sym__newline,
    STATE(31), 1,
      sym__simple_statement,
    ACTIONS(43), 2,
      sym_continue_statement,
      sym_comment,
  [272] = 2,
    STATE(31), 1,
      sym__simple_statement,
    ACTIONS(43), 2,
      sym_continue_statement,
      sym_comment,
  [280] = 2,
    STATE(32), 1,
      sym__simple_statement,
    ACTIONS(53), 2,
      sym_continue_statement,
      sym_comment,
  [288] = 3,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      sym__newline,
    STATE(25), 1,
      aux_sym__simple_statements_repeat1,
  [298] = 3,
    ACTIONS(45), 1,
      sym__newline,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      aux_sym__simple_statements_repeat1,
  [308] = 3,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      sym__newline,
    STATE(28), 1,
      aux_sym__simple_statements_repeat1,
  [318] = 3,
    ACTIONS(49), 1,
      sym__newline,
    ACTIONS(66), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      aux_sym__simple_statements_repeat1,
  [328] = 3,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      sym__newline,
    STATE(26), 1,
      aux_sym__simple_statements_repeat1,
  [338] = 2,
    STATE(33), 1,
      sym__simple_statement,
    ACTIONS(72), 2,
      sym_continue_statement,
      sym_comment,
  [346] = 1,
    ACTIONS(58), 2,
      sym__newline,
      anon_sym_SEMI,
  [351] = 2,
    ACTIONS(74), 1,
      sym__indent,
    STATE(14), 1,
      sym__suite,
  [358] = 2,
    ACTIONS(76), 1,
      sym__indent,
    STATE(16), 1,
      sym__suite,
  [365] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 164,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 180,
  [SMALL_STATE(14)] = 188,
  [SMALL_STATE(15)] = 196,
  [SMALL_STATE(16)] = 204,
  [SMALL_STATE(17)] = 212,
  [SMALL_STATE(18)] = 220,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 239,
  [SMALL_STATE(21)] = 250,
  [SMALL_STATE(22)] = 261,
  [SMALL_STATE(23)] = 272,
  [SMALL_STATE(24)] = 280,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 298,
  [SMALL_STATE(27)] = 308,
  [SMALL_STATE(28)] = 318,
  [SMALL_STATE(29)] = 328,
  [SMALL_STATE(30)] = 338,
  [SMALL_STATE(31)] = 346,
  [SMALL_STATE(32)] = 351,
  [SMALL_STATE(33)] = 358,
  [SMALL_STATE(34)] = 365,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suite, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simple_statements_repeat1, 2), SHIFT_REPEAT(23),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__simple_statements_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_imba_external_scanner_create(void);
void tree_sitter_imba_external_scanner_destroy(void *);
bool tree_sitter_imba_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_imba_external_scanner_serialize(void *, char *);
void tree_sitter_imba_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_imba(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_imba_external_scanner_create,
      tree_sitter_imba_external_scanner_destroy,
      tree_sitter_imba_external_scanner_scan,
      tree_sitter_imba_external_scanner_serialize,
      tree_sitter_imba_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
