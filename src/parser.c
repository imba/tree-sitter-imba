#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_if = 1,
  anon_sym_unless = 2,
  sym_true = 3,
  sym_false = 4,
  sym_yes = 5,
  sym_no = 6,
  sym_null = 7,
  aux_sym_comment_token1 = 8,
  sym__newline = 9,
  sym__indent = 10,
  sym__dedent = 11,
  sym_program = 12,
  sym_statement = 13,
  sym_if_statement = 14,
  sym_expression = 15,
  sym_primary_expression = 16,
  sym__suite = 17,
  sym_block = 18,
  sym_comment = 19,
  aux_sym_program_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_unless] = "unless",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_yes] = "yes",
  [sym_no] = "no",
  [sym_null] = "null",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_if_statement] = "if_statement",
  [sym_expression] = "expression",
  [sym_primary_expression] = "primary_expression",
  [sym__suite] = "_suite",
  [sym_block] = "block",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_unless] = anon_sym_unless,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_yes] = sym_yes,
  [sym_no] = sym_no,
  [sym_null] = sym_null,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_expression] = sym_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym__suite] = sym__suite,
  [sym_block] = sym_block,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
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
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
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
  [sym_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_if_statement] = {
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
  [sym__suite] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_condition = 1,
  field_consequence = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_consequence] = "consequence",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 1},
    {field_consequence, 2},
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
  [6] = 3,
  [7] = 5,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 12,
  [18] = 11,
  [19] = 9,
  [20] = 16,
  [21] = 15,
  [22] = 14,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 25,
  [27] = 12,
  [28] = 28,
  [29] = 10,
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_yes);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_no);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {(TSStateId)(-1)},
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

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_yes] = ACTIONS(1),
    [sym_no] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(28),
    [sym_statement] = STATE(11),
    [sym_if_statement] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_primary_expression] = STATE(12),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_unless] = ACTIONS(7),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_yes] = ACTIONS(9),
    [sym_no] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_statement] = STATE(11),
    [sym_if_statement] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_primary_expression] = STATE(12),
    [sym_comment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_unless] = ACTIONS(7),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_yes] = ACTIONS(9),
    [sym_no] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_statement] = STATE(18),
    [sym_if_statement] = STATE(19),
    [sym_expression] = STATE(19),
    [sym_primary_expression] = STATE(17),
    [sym_comment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_unless] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_yes] = ACTIONS(15),
    [sym_no] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__dedent] = ACTIONS(17),
  },
  [4] = {
    [sym_statement] = STATE(18),
    [sym_if_statement] = STATE(19),
    [sym_expression] = STATE(19),
    [sym_primary_expression] = STATE(17),
    [sym_block] = STATE(21),
    [sym_comment] = STATE(4),
    [aux_sym_program_repeat1] = STATE(3),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_unless] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_yes] = ACTIONS(15),
    [sym_no] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_statement] = STATE(18),
    [sym_if_statement] = STATE(19),
    [sym_expression] = STATE(19),
    [sym_primary_expression] = STATE(17),
    [sym_comment] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_unless] = ACTIONS(19),
    [sym_true] = ACTIONS(22),
    [sym_false] = ACTIONS(22),
    [sym_yes] = ACTIONS(22),
    [sym_no] = ACTIONS(22),
    [sym_null] = ACTIONS(22),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__dedent] = ACTIONS(25),
  },
  [6] = {
    [sym_statement] = STATE(18),
    [sym_if_statement] = STATE(19),
    [sym_expression] = STATE(19),
    [sym_primary_expression] = STATE(17),
    [sym_comment] = STATE(6),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_unless] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_yes] = ACTIONS(15),
    [sym_no] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__dedent] = ACTIONS(27),
  },
  [7] = {
    [sym_statement] = STATE(11),
    [sym_if_statement] = STATE(9),
    [sym_expression] = STATE(9),
    [sym_primary_expression] = STATE(12),
    [sym_comment] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_unless] = ACTIONS(29),
    [sym_true] = ACTIONS(32),
    [sym_false] = ACTIONS(32),
    [sym_yes] = ACTIONS(32),
    [sym_no] = ACTIONS(32),
    [sym_null] = ACTIONS(32),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_statement] = STATE(18),
    [sym_if_statement] = STATE(19),
    [sym_expression] = STATE(19),
    [sym_primary_expression] = STATE(17),
    [sym_block] = STATE(15),
    [sym_comment] = STATE(8),
    [aux_sym_program_repeat1] = STATE(6),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_unless] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_yes] = ACTIONS(15),
    [sym_no] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [17] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(37), 8,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [34] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [51] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [68] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [85] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [102] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [119] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [136] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(41), 8,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [153] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(39), 8,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [170] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(35), 8,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [187] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(47), 8,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [204] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(45), 8,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [221] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(43), 8,
      sym__dedent,
      anon_sym_if,
      anon_sym_unless,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [238] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_comment,
    STATE(26), 1,
      sym_expression,
    STATE(27), 1,
      sym_primary_expression,
    ACTIONS(49), 5,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [258] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    STATE(25), 1,
      sym_expression,
    STATE(27), 1,
      sym_primary_expression,
    ACTIONS(49), 5,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
  [278] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(51), 1,
      sym__indent,
    STATE(22), 1,
      sym__suite,
    STATE(25), 1,
      sym_comment,
  [291] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(53), 1,
      sym__indent,
    STATE(14), 1,
      sym__suite,
    STATE(26), 1,
      sym_comment,
  [304] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      sym__indent,
    STATE(27), 1,
      sym_comment,
  [314] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_comment,
  [324] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      sym__indent,
    STATE(29), 1,
      sym_comment,
  [334] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 17,
  [SMALL_STATE(11)] = 34,
  [SMALL_STATE(12)] = 51,
  [SMALL_STATE(13)] = 68,
  [SMALL_STATE(14)] = 85,
  [SMALL_STATE(15)] = 102,
  [SMALL_STATE(16)] = 119,
  [SMALL_STATE(17)] = 136,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 170,
  [SMALL_STATE(20)] = 187,
  [SMALL_STATE(21)] = 204,
  [SMALL_STATE(22)] = 221,
  [SMALL_STATE(23)] = 238,
  [SMALL_STATE(24)] = 258,
  [SMALL_STATE(25)] = 278,
  [SMALL_STATE(26)] = 291,
  [SMALL_STATE(27)] = 304,
  [SMALL_STATE(28)] = 314,
  [SMALL_STATE(29)] = 324,
  [SMALL_STATE(30)] = 334,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suite, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
