/* ANSI-C code produced by gperf version 2.7.2 */
/* Command-line: gperf -a -L ANSI-C -E -C -c -o -t -k '*' -NfindProp -Hhash_prop -Wwordlist_prop -D -s 2 cssproperties.gperf  */
/* This file is automatically generated from cssproperties.in by makeprop, do not edit */
/* Copyright 1999 W. Bastian */
#include "cssproperties.h"
struct props {
    const char *name;
    int id;
};
/* maximum key range = 1178, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash_prop (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185,    0, 1185, 1185, 1185, 1185,
      1185,    0, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185,   15,   10,    0,
         0,    0,  228,   35,    0,    0,    0,    0,  160,   40,
         0,    0,   40,    5,    0,   45,    0,  250,   20,  180,
       120,  210,   20, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185, 1185,
      1185, 1185, 1185, 1185, 1185, 1185
    };
  register int hval = len;

  switch (hval)
    {
      default:
      case 32:
        hval += asso_values[(unsigned char)str[31]];
      case 31:
        hval += asso_values[(unsigned char)str[30]];
      case 30:
        hval += asso_values[(unsigned char)str[29]];
      case 29:
        hval += asso_values[(unsigned char)str[28]];
      case 28:
        hval += asso_values[(unsigned char)str[27]];
      case 27:
        hval += asso_values[(unsigned char)str[26]];
      case 26:
        hval += asso_values[(unsigned char)str[25]];
      case 25:
        hval += asso_values[(unsigned char)str[24]];
      case 24:
        hval += asso_values[(unsigned char)str[23]];
      case 23:
        hval += asso_values[(unsigned char)str[22]];
      case 22:
        hval += asso_values[(unsigned char)str[21]];
      case 21:
        hval += asso_values[(unsigned char)str[20]];
      case 20:
        hval += asso_values[(unsigned char)str[19]];
      case 19:
        hval += asso_values[(unsigned char)str[18]];
      case 18:
        hval += asso_values[(unsigned char)str[17]];
      case 17:
        hval += asso_values[(unsigned char)str[16]];
      case 16:
        hval += asso_values[(unsigned char)str[15]];
      case 15:
        hval += asso_values[(unsigned char)str[14]];
      case 14:
        hval += asso_values[(unsigned char)str[13]];
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      case 12:
        hval += asso_values[(unsigned char)str[11]];
      case 11:
        hval += asso_values[(unsigned char)str[10]];
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

#ifdef __GNUC__
__inline
#endif
const struct props *
findProp (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 123,
      MIN_WORD_LENGTH = 3,
      MAX_WORD_LENGTH = 32,
      MIN_HASH_VALUE = 7,
      MAX_HASH_VALUE = 1184
    };

  static const struct props wordlist_prop[] =
    {
      {"content", CSS_PROP_CONTENT},
      {"direction", CSS_PROP_DIRECTION},
      {"border", CSS_PROP_BORDER},
      {"right", CSS_PROP_RIGHT},
      {"height", CSS_PROP_HEIGHT},
      {"top", CSS_PROP_TOP},
      {"bottom", CSS_PROP_BOTTOM},
      {"border-right", CSS_PROP_BORDER_RIGHT},
      {"border-top", CSS_PROP_BORDER_TOP},
      {"size", CSS_PROP_SIZE},
      {"border-bottom", CSS_PROP_BORDER_BOTTOM},
      {"min-height", CSS_PROP_MIN_HEIGHT},
      {"position", CSS_PROP_POSITION},
      {"page", CSS_PROP_PAGE},
      {"margin", CSS_PROP_MARGIN},
      {"padding", CSS_PROP_PADDING},
      {"orphans", CSS_PROP_ORPHANS},
      {"caption-side", CSS_PROP_CAPTION_SIDE},
      {"text-indent", CSS_PROP_TEXT_INDENT},
      {"margin-right", CSS_PROP_MARGIN_RIGHT},
      {"padding-right", CSS_PROP_PADDING_RIGHT},
      {"margin-top", CSS_PROP_MARGIN_TOP},
      {"padding-top", CSS_PROP_PADDING_TOP},
      {"z-index", CSS_PROP_Z_INDEX},
      {"text-decoration", CSS_PROP_TEXT_DECORATION},
      {"margin-bottom", CSS_PROP_MARGIN_BOTTOM},
      {"padding-bottom", CSS_PROP_PADDING_BOTTOM},
      {"border-spacing", CSS_PROP_BORDER_SPACING},
      {"color", CSS_PROP_COLOR},
      {"page-break-inside", CSS_PROP_PAGE_BREAK_INSIDE},
      {"clear", CSS_PROP_CLEAR},
      {"border-color", CSS_PROP_BORDER_COLOR},
      {"width", CSS_PROP_WIDTH},
      {"border-width", CSS_PROP_BORDER_WIDTH},
      {"clip", CSS_PROP_CLIP},
      {"line-height", CSS_PROP_LINE_HEIGHT},
      {"max-height", CSS_PROP_MAX_HEIGHT},
      {"border-right-color", CSS_PROP_BORDER_RIGHT_COLOR},
      {"border-top-color", CSS_PROP_BORDER_TOP_COLOR},
      {"min-width", CSS_PROP_MIN_WIDTH},
      {"font", CSS_PROP_FONT},
      {"border-bottom-color", CSS_PROP_BORDER_BOTTOM_COLOR},
      {"border-right-width", CSS_PROP_BORDER_RIGHT_WIDTH},
      {"border-top-width", CSS_PROP_BORDER_TOP_WIDTH},
      {"border-bottom-width", CSS_PROP_BORDER_BOTTOM_WIDTH},
      {"unicode-bidi", CSS_PROP_UNICODE_BIDI},
      {"font-stretch", CSS_PROP_FONT_STRETCH},
      {"font-variant", CSS_PROP_FONT_VARIANT},
      {"white-space", CSS_PROP_WHITE_SPACE},
      {"cursor", CSS_PROP_CURSOR},
      {"font-size", CSS_PROP_FONT_SIZE},
      {"quotes", CSS_PROP_QUOTES},
      {"counter-increment", CSS_PROP_COUNTER_INCREMENT},
      {"counter-reset", CSS_PROP_COUNTER_RESET},
      {"letter-spacing", CSS_PROP_LETTER_SPACING},
      {"text-decoration-color", CSS_PROP_TEXT_DECORATION_COLOR},
      {"background", CSS_PROP_BACKGROUND},
      {"word-spacing", CSS_PROP_WORD_SPACING},
      {"text-align", CSS_PROP_TEXT_ALIGN},
      {"-khtml-box-orient", CSS_PROP__KHTML_BOX_ORIENT},
      {"-khtml-box-direction", CSS_PROP__KHTML_BOX_DIRECTION},
      {"max-width", CSS_PROP_MAX_WIDTH},
      {"page-break-before", CSS_PROP_PAGE_BREAK_BEFORE},
      {"text-shadow", CSS_PROP_TEXT_SHADOW},
      {"page-break-after", CSS_PROP_PAGE_BREAK_AFTER},
      {"background-repeat", CSS_PROP_BACKGROUND_REPEAT},
      {"left", CSS_PROP_LEFT},
      {"-khtml-box-pack", CSS_PROP__KHTML_BOX_PACK},
      {"background-attachment", CSS_PROP_BACKGROUND_ATTACHMENT},
      {"float", CSS_PROP_FLOAT},
      {"border-left", CSS_PROP_BORDER_LEFT},
      {"widows", CSS_PROP_WIDOWS},
      {"background-position", CSS_PROP_BACKGROUND_POSITION},
      {"background-image", CSS_PROP_BACKGROUND_IMAGE},
      {"outline", CSS_PROP_OUTLINE},
      {"vertical-align", CSS_PROP_VERTICAL_ALIGN},
      {"border-style", CSS_PROP_BORDER_STYLE},
      {"border-collapse", CSS_PROP_BORDER_COLLAPSE},
      {"font-weight", CSS_PROP_FONT_WEIGHT},
      {"visibility", CSS_PROP_VISIBILITY},
      {"text-transform", CSS_PROP_TEXT_TRANSFORM},
      {"display", CSS_PROP_DISPLAY},
      {"border-right-style", CSS_PROP_BORDER_RIGHT_STYLE},
      {"-khtml-opacity", CSS_PROP__KHTML_OPACITY},
      {"border-top-style", CSS_PROP_BORDER_TOP_STYLE},
      {"background-color", CSS_PROP_BACKGROUND_COLOR},
      {"margin-left", CSS_PROP_MARGIN_LEFT},
      {"padding-left", CSS_PROP_PADDING_LEFT},
      {"border-bottom-style", CSS_PROP_BORDER_BOTTOM_STYLE},
      {"background-position-x", CSS_PROP_BACKGROUND_POSITION_X},
      {"-khtml-box-lines", CSS_PROP__KHTML_BOX_LINES},
      {"-khtml-box-align", CSS_PROP__KHTML_BOX_ALIGN},
      {"marker-offset", CSS_PROP_MARKER_OFFSET},
      {"-khtml-border-vertical-spacing", CSS_PROP__KHTML_BORDER_VERTICAL_SPACING},
      {"-khtml-border-horizontal-spacing", CSS_PROP__KHTML_BORDER_HORIZONTAL_SPACING},
      {"border-left-color", CSS_PROP_BORDER_LEFT_COLOR},
      {"outline-color", CSS_PROP_OUTLINE_COLOR},
      {"scrollbar-track-color", CSS_PROP_SCROLLBAR_TRACK_COLOR},
      {"border-left-width", CSS_PROP_BORDER_LEFT_WIDTH},
      {"overflow", CSS_PROP_OVERFLOW},
      {"outline-width", CSS_PROP_OUTLINE_WIDTH},
      {"font-size-adjust", CSS_PROP_FONT_SIZE_ADJUST},
      {"background-position-y", CSS_PROP_BACKGROUND_POSITION_Y},
      {"list-style", CSS_PROP_LIST_STYLE},
      {"font-style", CSS_PROP_FONT_STYLE},
      {"empty-cells", CSS_PROP_EMPTY_CELLS},
      {"list-style-position", CSS_PROP_LIST_STYLE_POSITION},
      {"list-style-image", CSS_PROP_LIST_STYLE_IMAGE},
      {"scrollbar-arrow-color", CSS_PROP_SCROLLBAR_ARROW_COLOR},
      {"scrollbar-3dlight-color", CSS_PROP_SCROLLBAR_3DLIGHT_COLOR},
      {"scrollbar-highlight-color", CSS_PROP_SCROLLBAR_HIGHLIGHT_COLOR},
      {"scrollbar-shadow-color", CSS_PROP_SCROLLBAR_SHADOW_COLOR},
      {"scrollbar-face-color", CSS_PROP_SCROLLBAR_FACE_COLOR},
      {"-khtml-flow-mode", CSS_PROP__KHTML_FLOW_MODE},
      {"border-left-style", CSS_PROP_BORDER_LEFT_STYLE},
      {"scrollbar-darkshadow-color", CSS_PROP_SCROLLBAR_DARKSHADOW_COLOR},
      {"table-layout", CSS_PROP_TABLE_LAYOUT},
      {"outline-style", CSS_PROP_OUTLINE_STYLE},
      {"-khtml-box-flex", CSS_PROP__KHTML_BOX_FLEX},
      {"-khtml-box-ordinal-group", CSS_PROP__KHTML_BOX_ORDINAL_GROUP},
      {"list-style-type", CSS_PROP_LIST_STYLE_TYPE},
      {"font-family", CSS_PROP_FONT_FAMILY},
      {"-khtml-box-flex-group", CSS_PROP__KHTML_BOX_FLEX_GROUP}
    };

  static const signed char lookup[] =
    {
       -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,  -1,   1,
       -1,  -1,  -1,  -1,  -1,  -1,   2,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
        3,   4,  -1,   5,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,   6,   7,  -1,  -1,
        8,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   9,
       -1,  -1,  -1,  10,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  11,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  12,  13,  -1,  14,  15,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  16,  -1,  -1,
       -1,  -1,  17,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  18,  -1,  -1,  -1,  -1,  -1,  19,  20,  -1,
       21,  22,  -1,  -1,  -1,  -1,  -1,  23,  -1,  -1,
       24,  -1,  -1,  25,  26,  -1,  -1,  -1,  -1,  27,
       -1,  -1,  -1,  -1,  -1,  28,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  29,  -1,  -1,
       30,  -1,  31,  -1,  -1,  32,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  33,  -1,  34,  -1,  35,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       36,  -1,  -1,  37,  -1,  -1,  38,  -1,  -1,  39,
       -1,  -1,  40,  -1,  -1,  -1,  -1,  -1,  -1,  41,
       -1,  -1,  -1,  42,  -1,  -1,  43,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  44,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  45,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  46,  -1,  -1,  -1,  -1,
       47,  48,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  49,  50,  -1,  -1,  -1,  51,  52,  53,  54,
       -1,  -1,  -1,  -1,  -1,  -1,  55,  -1,  -1,  -1,
       56,  -1,  -1,  -1,  -1,  -1,  -1,  57,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       58,  -1,  -1,  -1,  -1,  -1,  -1,  59,  -1,  -1,
       60,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  61,  -1,  -1,  -1,  -1,  -1,
       62,  63,  -1,  -1,  64,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  65,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  66,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       67,  68,  -1,  -1,  -1,  -1,  -1,  -1,  69,  70,
       -1,  71,  -1,  -1,  72,  -1,  73,  74,  -1,  75,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  76,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  77,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  78,  79,  -1,  -1,  -1,  -1,
       -1,  -1,  80,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  81,  82,  83,
       -1,  84,  -1,  -1,  -1,  -1,  85,  -1,  -1,  86,
       87,  -1,  -1,  -1,  88,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  89,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  90,  -1,  -1,  -1,  -1,  91,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  92,
       93,  -1,  94,  -1,  -1,  95,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  96,  -1,  -1,  97,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  98,  99,  -1,  -1,  -1,
       -1,  -1,  -1, 100,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 101,
       -1,  -1,  -1,  -1,  -1,  -1, 102,  -1,  -1,  -1,
      103,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 104,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 105,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 106,  -1, 107,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1, 108,  -1, 109,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 110,  -1,  -1,  -1,  -1,
       -1,  -1, 111, 112,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 113,  -1,  -1,  -1,  -1,  -1,
      114, 115, 116,  -1,  -1,  -1,  -1,  -1, 117,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1, 118, 119,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1, 120,  -1,  -1,  -1,  -1,
       -1,  -1, 121,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
       -1,  -1,  -1,  -1, 122
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash_prop (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist_prop[index].name;

              if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
                return &wordlist_prop[index];
            }
        }
    }
  return 0;
}
static const char * const propertyList[] = {
"",
"background-color", 
"background-image", 
"background-repeat", 
"background-attachment", 
"background-position", 
"background-position-x", 
"background-position-y", 
"border-collapse", 
"border-spacing", 
"-khtml-border-horizontal-spacing", 
"-khtml-border-vertical-spacing", 
"border-top-color", 
"border-right-color", 
"border-bottom-color", 
"border-left-color", 
"border-top-style", 
"border-right-style", 
"border-bottom-style", 
"border-left-style", 
"border-top-width", 
"border-right-width", 
"border-bottom-width", 
"border-left-width", 
"bottom", 
"-khtml-box-align", 
"-khtml-box-direction", 
"-khtml-box-flex", 
"-khtml-box-flex-group", 
"-khtml-box-lines", 
"-khtml-box-ordinal-group", 
"-khtml-box-orient", 
"-khtml-box-pack", 
"caption-side", 
"clear", 
"clip", 
"color", 
"content", 
"counter-increment", 
"counter-reset", 
"cursor", 
"direction", 
"display", 
"empty-cells", 
"float", 
"font-family", 
"font-size", 
"font-size-adjust", 
"font-stretch", 
"font-style", 
"font-variant", 
"font-weight", 
"height", 
"left", 
"letter-spacing", 
"line-height", 
"list-style-image", 
"list-style-position", 
"list-style-type", 
"margin-top", 
"margin-right", 
"margin-bottom", 
"margin-left", 
"marker-offset", 
"max-height", 
"max-width", 
"min-height", 
"min-width", 
"-khtml-opacity", 
"orphans", 
"outline-color", 
"outline-style", 
"outline-width", 
"overflow", 
"padding-top", 
"padding-right", 
"padding-bottom", 
"padding-left", 
"page", 
"page-break-after", 
"page-break-before", 
"page-break-inside", 
"position", 
"quotes", 
"right", 
"size", 
"table-layout", 
"text-align", 
"text-decoration", 
"text-decoration-color", 
"text-indent", 
"text-shadow", 
"text-transform", 
"top", 
"unicode-bidi", 
"vertical-align", 
"visibility", 
"white-space", 
"widows", 
"width", 
"word-spacing", 
"z-index", 
"background", 
"border", 
"border-color", 
"border-style", 
"border-top", 
"border-right", 
"border-bottom", 
"border-left", 
"border-width", 
"font", 
"list-style", 
"margin", 
"outline", 
"padding", 
"scrollbar-face-color", 
"scrollbar-shadow-color", 
"scrollbar-highlight-color", 
"scrollbar-3dlight-color", 
"scrollbar-darkshadow-color", 
"scrollbar-track-color", 
"scrollbar-arrow-color", 
"-khtml-flow-mode", 
    0
};
DOMString getPropertyName(unsigned short id)
{
    if(id >= CSS_PROP_TOTAL || id == 0)
      return DOMString();
    else
      return DOMString(propertyList[id]);
};

