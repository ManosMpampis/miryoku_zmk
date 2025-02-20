// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

// can be testest without because the pr is for a specific board
#define MIRYOKU_KLUDGE_TAPDELAY

//check if they work because of the split keyobard locality
#define MIRYOKU_KLUDGE_DOUBLETAPBOOT
#define MIRYOKU_KLUDGE_SOFT_OFF

#define MIRYOKU_KLUDGE_GLOBALSHIFTFUNCTIONS






#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_EXTRA  1
#define U_GAME   2
#define U_TAP    3
#define U_BUTTON 4
#define U_NAV    5
#define U_MOUSE  6
#define U_MEDIA  7
#define U_NUM    8
#define U_SYM    9
#define U_FUN    10