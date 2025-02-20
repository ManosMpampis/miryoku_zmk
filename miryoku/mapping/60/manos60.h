// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_MANOS60)

#define XXX &none

#if defined MIRYOKU_MAPPING_EXTENDED_THUMBS

    #if defined MIRYOKU_MAPPING_PINKIE_STAGGER

        #define MIRYOKU_LAYOUTMAPPING_MANOS60(\
        K00, K01, K02, K03, K04, K05,          K06, K07, K08, K09, K10, K11,\
        K12, K13, K14, K15, K16, K17,          K18, K19, K20, K21, K22, K23,\
        K24, K25, K26, K27, K28, K29,          K30, K31, K32, K33, K34, K35,\
        K36, K37, K38, K39, K40, K41,          K42, K43, K44, K45, K46, K47,\
        K48, K49, K50, K51, K52, K53,          K54, K55, K56, K57, K58, K59\
        ) \
        K48, K01, K02, K03, K04, K05,          K06, K07, K08, K09, K10, K59,\
        K00, K13, K14, K15, K16, K17,          K18, K19, K20, K21, K22, K11,\
        K12, K25, K26, K27, K28, K29,          K30, K31, K32, K33, K34, K23,\
        K24, K37, K38, K39, K40, K41,          K42, K43, K44, K45, K46, K35,\
        K36, K49, K50, K51, K52, K53,          K54, K55, K56, K57, K58, K47\

    #else

        #define MIRYOKU_LAYOUTMAPPING_MANOS60(\
        K00, K01, K02, K03, K04, K05,          K06, K07, K08, K09, K10, K11,\
        K12, K13, K14, K15, K16, K17,          K18, K19, K20, K21, K22, K23,\
        K24, K25, K26, K27, K28, K29,          K30, K31, K32, K33, K34, K35,\
        K36, K37, K38, K39, K40, K41,          K42, K43, K44, K45, K46, K47,\
        K48, K49, K50, K51, K52, K53,          K54, K55, K56, K57, K58, K59\
        ) \
        K00, K01, K02, K03, K04, K05,          K06, K07, K08, K09, K10, K11,\
        K12, K13, K14, K15, K16, K17,          K18, K19, K20, K21, K22, K23,\
        K24, K25, K26, K27, K28, K29,          K30, K31, K32, K33, K34, K35,\
        K36, K37, K38, K39, K40, K41,          K42, K43, K44, K45, K46, K47,\
        K48, K49, K50, K51, K52, K53,          K54, K55, K56, K57, K58, K59\

#else
    #if defined MIRYOKU_MAPPING_PINKIE_STAGGER

        #define MIRYOKU_LAYOUTMAPPING_MANOS60(\
        K00, K01, K02, K03, K04, K05,          K06, K07, K08, K09, K10, K11,\
        K12, K13, K14, K15, K16, K17,          K18, K19, K20, K21, K22, K23,\
        K24, K25, K26, K27, K28, K29,          K30, K31, K32, K33, K34, K35,\
        K36, K37, K38, K39, K40, K41,          K42, K43, K44, K45, K46, K47,\
        K48, K49, K50, K51, K52, K53,          K54, K55, K56, K57, K58, K59\
        ) \
        K41, K01, K02, K03, K04, K05,          K06, K07, K08, K09, K10, K42,\
        K00, K13, K14, K15, K16, K17,          K18, K19, K20, K21, K22, K11,\
        K12, K25, K26, K27, K28, K29,          K30, K31, K32, K33, K34, K23,\
        K24, K37, K38, K39, K40, K53,          K54, K43, K44, K45, K46, K35,\
        K36, K48, K49, K50, K51, K52,          K55, K56, K57, K58, K59, K47\


    #else

        #define MIRYOKU_LAYOUTMAPPING_MANOS60(\
        K00, K01, K02, K03, K04, K05,          K06, K07, K08, K09, K10, K11,\
        K12, K13, K14, K15, K16, K17,          K18, K19, K20, K21, K22, K23,\
        K24, K25, K26, K27, K28, K29,          K30, K31, K32, K33, K34, K35,\
        K36, K37, K38, K39, K40, K41,          K42, K43, K44, K45, K46, K47,\
        K48, K49, K50, K51, K52, K53,          K54, K55, K56, K57, K58, K59\
        ) \
        K00, K01, K02, K03, K04, K05,          K06, K07, K08, K09, K10, K11,\
        K12, K13, K14, K15, K16, K17,          K18, K19, K20, K21, K22, K23,\
        K24, K25, K26, K27, K28, K29,          K30, K31, K32, K33, K34, K35,\
        K36, K37, K38, K39, K40, K53,          K54, K43, K44, K45, K46, K47,\
        K41, K48, K49, K50, K51, K52,          K55, K56, K57, K58, K59, K42\


#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_MANOS60

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 1 2
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 8 9
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 9 10
#define MIRYOKU_KLUDGE_TOPROWCOMBOS

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 25 26
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 33 34
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 34 35
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 52 53
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 54 55
#define MIRYOKU_KLUDGE_THUMBCOMBOS