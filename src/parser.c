#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 1
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_if = 1,
  anon_sym_unless = 2,
  anon_sym_class = 3,
  anon_sym_LT = 4,
  anon_sym_static = 5,
  anon_sym_export = 6,
  sym_identifier = 7,
  sym_true = 8,
  sym_false = 9,
  sym_yes = 10,
  sym_no = 11,
  sym_null = 12,
  sym_this = 13,
  sym_super = 14,
  sym_import = 15,
  sym_undefined = 16,
  aux_sym_comment_token1 = 17,
  sym__newline = 18,
  sym__indent = 19,
  sym__dedent = 20,
  sym_program = 21,
  sym_if_statement = 22,
  sym_expression = 23,
  sym_primary_expression = 24,
  sym_declaration = 25,
  sym_class_declaration = 26,
  sym_class_heritage = 27,
  sym_class_body = 28,
  sym_field_definition = 29,
  sym__property_name = 30,
  sym__suite = 31,
  sym_block = 32,
  sym_comment = 33,
  aux_sym_program_repeat1 = 34,
  aux_sym_class_body_repeat1 = 35,
  alias_sym_property_identifier = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_unless] = "unless",
  [anon_sym_class] = "class",
  [anon_sym_LT] = "<",
  [anon_sym_static] = "static",
  [anon_sym_export] = "export",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_yes] = "yes",
  [sym_no] = "no",
  [sym_null] = "null",
  [sym_this] = "this",
  [sym_super] = "super",
  [sym_import] = "import",
  [sym_undefined] = "undefined",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_program] = "program",
  [sym_if_statement] = "if_statement",
  [sym_expression] = "expression",
  [sym_primary_expression] = "primary_expression",
  [sym_declaration] = "declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_class_heritage] = "class_heritage",
  [sym_class_body] = "class_body",
  [sym_field_definition] = "field_definition",
  [sym__property_name] = "_property_name",
  [sym__suite] = "_suite",
  [sym_block] = "block",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
  [alias_sym_property_identifier] = "property_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_export] = anon_sym_export,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_yes] = sym_yes,
  [sym_no] = sym_no,
  [sym_null] = sym_null,
  [sym_this] = sym_this,
  [sym_super] = sym_super,
  [sym_import] = sym_import,
  [sym_undefined] = sym_undefined,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_program] = sym_program,
  [sym_if_statement] = sym_if_statement,
  [sym_expression] = sym_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_declaration] = sym_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_class_heritage] = sym_class_heritage,
  [sym_class_body] = sym_class_body,
  [sym_field_definition] = sym_field_definition,
  [sym__property_name] = sym__property_name,
  [sym__suite] = sym__suite,
  [sym_block] = sym_block,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
  [alias_sym_property_identifier] = alias_sym_property_identifier,
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
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_this] = {
    .visible = true,
    .named = true,
  },
  [sym_super] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_undefined] = {
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
  [sym_declaration] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_heritage] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__property_name] = {
    .visible = false,
    .named = true,
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
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_property_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_condition = 2,
  field_consequence = 3,
  field_extends = 4,
  field_member = 5,
  field_name = 6,
  field_property = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_extends] = "extends",
  [field_member] = "member",
  [field_name] = "name",
  [field_property] = "property",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 1},
  [7] = {.index = 5, .length = 1},
  [8] = {.index = 6, .length = 2},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 11, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 1},
    {field_consequence, 2},
  [2] =
    {field_member, 0},
  [3] =
    {field_property, 0},
  [4] =
    {field_member, 1, .inherited = true},
  [5] =
    {field_extends, 0},
  [6] =
    {field_body, 2},
    {field_name, 1},
  [8] =
    {field_property, 1},
  [9] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
  [11] =
    {field_body, 3},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [3] = {
    [0] = alias_sym_property_identifier,
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
  [6] = 5,
  [7] = 7,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 10,
  [19] = 19,
  [20] = 20,
  [21] = 16,
  [22] = 9,
  [23] = 17,
  [24] = 14,
  [25] = 12,
  [26] = 15,
  [27] = 19,
  [28] = 20,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 35,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 42,
  [46] = 15,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 52,
  [53] = 11,
  [54] = 52,
  [55] = 16,
  [56] = 50,
  [57] = 57,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8239
      ? (c < 8192
        ? c == 5760
        : c <= 8202)
      : (c <= 8239 || (c < 12288
        ? c == 8287
        : c <= 12288)))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 160
    ? (c < ':'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '{') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'y') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(81);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(57);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(77);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(33);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(96);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(48);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(44);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(72);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(88);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(50);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(89);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(39);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(69);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(78);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(68);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(53);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(85);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(38);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(62);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(73);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(92);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(37);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(76);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(55);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(68);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(40);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(41);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(46);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(58);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(70);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(71);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(64);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(47);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(65);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(94);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(79);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(80);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(90);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(93);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(31);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(30);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(45);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(74);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 's') ADVANCE(75);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(34);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(95);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(52);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(67);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 't') ADVANCE(35);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(67);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(43);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(66);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_yes);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_no);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_this);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_super);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_import);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_undefined);
      if (lookahead == '\\') ADVANCE(20);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27, .external_lex_state = 2},
  [3] = {.lex_state = 27, .external_lex_state = 2},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27, .external_lex_state = 2},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27, .external_lex_state = 2},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27, .external_lex_state = 2},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27, .external_lex_state = 2},
  [16] = {.lex_state = 27, .external_lex_state = 2},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27, .external_lex_state = 2},
  [19] = {.lex_state = 27, .external_lex_state = 2},
  [20] = {.lex_state = 27, .external_lex_state = 2},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27, .external_lex_state = 2},
  [24] = {.lex_state = 27, .external_lex_state = 2},
  [25] = {.lex_state = 27, .external_lex_state = 2},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 17, .external_lex_state = 2},
  [33] = {.lex_state = 17, .external_lex_state = 2},
  [34] = {.lex_state = 17, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 17, .external_lex_state = 2},
  [37] = {.lex_state = 17, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 17, .external_lex_state = 2},
  [40] = {.lex_state = 17, .external_lex_state = 2},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 19},
  [57] = {(TSStateId)(-1)},
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
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_yes] = ACTIONS(1),
    [sym_no] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_this] = ACTIONS(1),
    [sym_super] = ACTIONS(1),
    [sym_import] = ACTIONS(1),
    [sym_undefined] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(48),
    [sym_if_statement] = STATE(12),
    [sym_expression] = STATE(12),
    [sym_primary_expression] = STATE(13),
    [sym_declaration] = STATE(12),
    [sym_class_declaration] = STATE(14),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_unless] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_yes] = ACTIONS(13),
    [sym_no] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_this] = ACTIONS(13),
    [sym_super] = ACTIONS(13),
    [sym_import] = ACTIONS(13),
    [sym_undefined] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_if_statement] = STATE(25),
    [sym_expression] = STATE(25),
    [sym_primary_expression] = STATE(11),
    [sym_declaration] = STATE(25),
    [sym_class_declaration] = STATE(24),
    [sym_comment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_unless] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_export] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_yes] = ACTIONS(21),
    [sym_no] = ACTIONS(21),
    [sym_null] = ACTIONS(21),
    [sym_this] = ACTIONS(21),
    [sym_super] = ACTIONS(21),
    [sym_import] = ACTIONS(21),
    [sym_undefined] = ACTIONS(21),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__dedent] = ACTIONS(23),
  },
  [3] = {
    [sym_if_statement] = STATE(25),
    [sym_expression] = STATE(25),
    [sym_primary_expression] = STATE(11),
    [sym_declaration] = STATE(25),
    [sym_class_declaration] = STATE(24),
    [sym_comment] = STATE(3),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_unless] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_export] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_yes] = ACTIONS(21),
    [sym_no] = ACTIONS(21),
    [sym_null] = ACTIONS(21),
    [sym_this] = ACTIONS(21),
    [sym_super] = ACTIONS(21),
    [sym_import] = ACTIONS(21),
    [sym_undefined] = ACTIONS(21),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__dedent] = ACTIONS(25),
  },
  [4] = {
    [sym_if_statement] = STATE(25),
    [sym_expression] = STATE(25),
    [sym_primary_expression] = STATE(11),
    [sym_declaration] = STATE(25),
    [sym_class_declaration] = STATE(24),
    [sym_block] = STATE(9),
    [sym_comment] = STATE(4),
    [aux_sym_program_repeat1] = STATE(3),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_unless] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_export] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_yes] = ACTIONS(21),
    [sym_no] = ACTIONS(21),
    [sym_null] = ACTIONS(21),
    [sym_this] = ACTIONS(21),
    [sym_super] = ACTIONS(21),
    [sym_import] = ACTIONS(21),
    [sym_undefined] = ACTIONS(21),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_if_statement] = STATE(25),
    [sym_expression] = STATE(25),
    [sym_primary_expression] = STATE(11),
    [sym_declaration] = STATE(25),
    [sym_class_declaration] = STATE(24),
    [sym_comment] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_if] = ACTIONS(27),
    [anon_sym_unless] = ACTIONS(27),
    [anon_sym_class] = ACTIONS(30),
    [anon_sym_export] = ACTIONS(33),
    [sym_identifier] = ACTIONS(36),
    [sym_true] = ACTIONS(36),
    [sym_false] = ACTIONS(36),
    [sym_yes] = ACTIONS(36),
    [sym_no] = ACTIONS(36),
    [sym_null] = ACTIONS(36),
    [sym_this] = ACTIONS(36),
    [sym_super] = ACTIONS(36),
    [sym_import] = ACTIONS(36),
    [sym_undefined] = ACTIONS(36),
    [aux_sym_comment_token1] = ACTIONS(3),
    [sym__dedent] = ACTIONS(39),
  },
  [6] = {
    [sym_if_statement] = STATE(12),
    [sym_expression] = STATE(12),
    [sym_primary_expression] = STATE(13),
    [sym_declaration] = STATE(12),
    [sym_class_declaration] = STATE(14),
    [sym_comment] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_unless] = ACTIONS(41),
    [anon_sym_class] = ACTIONS(44),
    [anon_sym_export] = ACTIONS(47),
    [sym_identifier] = ACTIONS(50),
    [sym_true] = ACTIONS(50),
    [sym_false] = ACTIONS(50),
    [sym_yes] = ACTIONS(50),
    [sym_no] = ACTIONS(50),
    [sym_null] = ACTIONS(50),
    [sym_this] = ACTIONS(50),
    [sym_super] = ACTIONS(50),
    [sym_import] = ACTIONS(50),
    [sym_undefined] = ACTIONS(50),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_if_statement] = STATE(12),
    [sym_expression] = STATE(12),
    [sym_primary_expression] = STATE(13),
    [sym_declaration] = STATE(12),
    [sym_class_declaration] = STATE(14),
    [sym_comment] = STATE(7),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_unless] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_yes] = ACTIONS(13),
    [sym_no] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_this] = ACTIONS(13),
    [sym_super] = ACTIONS(13),
    [sym_import] = ACTIONS(13),
    [sym_undefined] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
    [sym_if_statement] = STATE(25),
    [sym_expression] = STATE(25),
    [sym_primary_expression] = STATE(11),
    [sym_declaration] = STATE(25),
    [sym_class_declaration] = STATE(24),
    [sym_block] = STATE(22),
    [sym_comment] = STATE(8),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_unless] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_export] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_yes] = ACTIONS(21),
    [sym_no] = ACTIONS(21),
    [sym_null] = ACTIONS(21),
    [sym_this] = ACTIONS(21),
    [sym_super] = ACTIONS(21),
    [sym_import] = ACTIONS(21),
    [sym_undefined] = ACTIONS(21),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(57), 1,
      sym__dedent,
    STATE(9), 1,
      sym_comment,
    ACTIONS(55), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [26] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    ACTIONS(61), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [52] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(65), 1,
      sym__dedent,
    STATE(11), 1,
      sym_comment,
    ACTIONS(63), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [78] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_comment,
    ACTIONS(69), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [104] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_comment,
    ACTIONS(63), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [130] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_comment,
    ACTIONS(73), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [156] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(77), 1,
      sym__dedent,
    STATE(15), 1,
      sym_comment,
    ACTIONS(75), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [182] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(81), 1,
      sym__dedent,
    STATE(16), 1,
      sym_comment,
    ACTIONS(79), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [208] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_comment,
    ACTIONS(85), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [234] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(59), 1,
      sym__dedent,
    STATE(18), 1,
      sym_comment,
    ACTIONS(61), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [260] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(89), 1,
      sym__dedent,
    STATE(19), 1,
      sym_comment,
    ACTIONS(87), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [286] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(93), 1,
      sym__dedent,
    STATE(20), 1,
      sym_comment,
    ACTIONS(91), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [312] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_comment,
    ACTIONS(79), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [338] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_comment,
    ACTIONS(55), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [364] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      sym__dedent,
    STATE(23), 1,
      sym_comment,
    ACTIONS(85), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [390] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(71), 1,
      sym__dedent,
    STATE(24), 1,
      sym_comment,
    ACTIONS(73), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [416] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(67), 1,
      sym__dedent,
    STATE(25), 1,
      sym_comment,
    ACTIONS(69), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [442] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_comment,
    ACTIONS(75), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [468] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_comment,
    ACTIONS(87), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [494] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_comment,
    ACTIONS(91), 14,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_class,
      anon_sym_export,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [520] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(95), 1,
      anon_sym_export,
    STATE(29), 1,
      sym_comment,
    STATE(43), 1,
      sym_expression,
    STATE(53), 1,
      sym_primary_expression,
    ACTIONS(97), 10,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [548] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(95), 1,
      anon_sym_export,
    STATE(30), 1,
      sym_comment,
    STATE(44), 1,
      sym_expression,
    STATE(53), 1,
      sym_primary_expression,
    ACTIONS(97), 10,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [576] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(95), 1,
      anon_sym_export,
    STATE(31), 1,
      sym_comment,
    STATE(47), 1,
      sym_expression,
    STATE(53), 1,
      sym_primary_expression,
    ACTIONS(97), 10,
      sym_identifier,
      sym_true,
      sym_false,
      sym_yes,
      sym_no,
      sym_null,
      sym_this,
      sym_super,
      sym_import,
      sym_undefined,
  [604] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(99), 1,
      anon_sym_static,
    ACTIONS(103), 1,
      sym__dedent,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_class_body_repeat1,
    STATE(37), 1,
      sym__property_name,
    STATE(39), 1,
      sym_field_definition,
    ACTIONS(101), 2,
      anon_sym_export,
      sym_identifier,
  [630] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(105), 1,
      anon_sym_static,
    ACTIONS(111), 1,
      sym__dedent,
    STATE(37), 1,
      sym__property_name,
    STATE(39), 1,
      sym_field_definition,
    ACTIONS(108), 2,
      anon_sym_export,
      sym_identifier,
    STATE(33), 2,
      sym_comment,
      aux_sym_class_body_repeat1,
  [654] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(99), 1,
      anon_sym_static,
    ACTIONS(113), 1,
      sym__dedent,
    STATE(32), 1,
      aux_sym_class_body_repeat1,
    STATE(34), 1,
      sym_comment,
    STATE(37), 1,
      sym__property_name,
    STATE(39), 1,
      sym_field_definition,
    ACTIONS(101), 2,
      anon_sym_export,
      sym_identifier,
  [680] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      sym__indent,
    STATE(35), 1,
      sym_comment,
    STATE(45), 1,
      sym_class_heritage,
    STATE(49), 1,
      sym_class_body,
  [699] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      sym__dedent,
    STATE(36), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_static,
      anon_sym_export,
      sym_identifier,
  [714] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(125), 1,
      sym__dedent,
    STATE(37), 1,
      sym_comment,
    ACTIONS(123), 3,
      anon_sym_static,
      anon_sym_export,
      sym_identifier,
  [729] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(117), 1,
      sym__indent,
    STATE(38), 1,
      sym_comment,
    STATE(42), 1,
      sym_class_heritage,
    STATE(51), 1,
      sym_class_body,
  [748] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(129), 1,
      sym__dedent,
    STATE(39), 1,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_static,
      anon_sym_export,
      sym_identifier,
  [763] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(133), 1,
      sym__dedent,
    STATE(40), 1,
      sym_comment,
    ACTIONS(131), 3,
      anon_sym_static,
      anon_sym_export,
      sym_identifier,
  [778] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym__property_name,
    STATE(41), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_export,
      sym_identifier,
  [792] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(117), 1,
      sym__indent,
    STATE(42), 1,
      sym_comment,
    STATE(52), 1,
      sym_class_body,
  [805] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(135), 1,
      sym__indent,
    STATE(23), 1,
      sym__suite,
    STATE(43), 1,
      sym_comment,
  [818] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(137), 1,
      sym__indent,
    STATE(17), 1,
      sym__suite,
    STATE(44), 1,
      sym_comment,
  [831] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(117), 1,
      sym__indent,
    STATE(45), 1,
      sym_comment,
    STATE(54), 1,
      sym_class_body,
  [844] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(77), 1,
      sym__indent,
    STATE(46), 1,
      sym_comment,
  [854] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(139), 1,
      sym__indent,
    STATE(47), 1,
      sym_comment,
  [864] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_comment,
  [874] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(143), 1,
      sym__dedent,
    STATE(49), 1,
      sym_comment,
  [884] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(50), 1,
      sym_comment,
  [894] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      sym__dedent,
    STATE(51), 1,
      sym_comment,
  [904] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(149), 1,
      sym__dedent,
    STATE(52), 1,
      sym_comment,
  [914] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(65), 1,
      sym__indent,
    STATE(53), 1,
      sym_comment,
  [924] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(151), 1,
      sym__dedent,
    STATE(54), 1,
      sym_comment,
  [934] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(81), 1,
      sym__indent,
    STATE(55), 1,
      sym_comment,
  [944] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(56), 1,
      sym_comment,
  [954] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 26,
  [SMALL_STATE(11)] = 52,
  [SMALL_STATE(12)] = 78,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 208,
  [SMALL_STATE(18)] = 234,
  [SMALL_STATE(19)] = 260,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 312,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 364,
  [SMALL_STATE(24)] = 390,
  [SMALL_STATE(25)] = 416,
  [SMALL_STATE(26)] = 442,
  [SMALL_STATE(27)] = 468,
  [SMALL_STATE(28)] = 494,
  [SMALL_STATE(29)] = 520,
  [SMALL_STATE(30)] = 548,
  [SMALL_STATE(31)] = 576,
  [SMALL_STATE(32)] = 604,
  [SMALL_STATE(33)] = 630,
  [SMALL_STATE(34)] = 654,
  [SMALL_STATE(35)] = 680,
  [SMALL_STATE(36)] = 699,
  [SMALL_STATE(37)] = 714,
  [SMALL_STATE(38)] = 729,
  [SMALL_STATE(39)] = 748,
  [SMALL_STATE(40)] = 763,
  [SMALL_STATE(41)] = 778,
  [SMALL_STATE(42)] = 792,
  [SMALL_STATE(43)] = 805,
  [SMALL_STATE(44)] = 818,
  [SMALL_STATE(45)] = 831,
  [SMALL_STATE(46)] = 844,
  [SMALL_STATE(47)] = 854,
  [SMALL_STATE(48)] = 864,
  [SMALL_STATE(49)] = 874,
  [SMALL_STATE(50)] = 884,
  [SMALL_STATE(51)] = 894,
  [SMALL_STATE(52)] = 904,
  [SMALL_STATE(53)] = 914,
  [SMALL_STATE(54)] = 924,
  [SMALL_STATE(55)] = 934,
  [SMALL_STATE(56)] = 944,
  [SMALL_STATE(57)] = 954,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suite, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suite, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 11),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, .production_id = 11),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 8),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2, .production_id = 6),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, .production_id = 10), SHIFT_REPEAT(41),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, .production_id = 10), SHIFT_REPEAT(40),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, .production_id = 10),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 2, .production_id = 9),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 9),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_definition, 1, .production_id = 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 1, .production_id = 5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 1, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 1, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__property_name, 1, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_name, 1, .production_id = 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_heritage, 2, .production_id = 7),
  [141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
