#pragma once

#include "leag37.h"

enum ELeag37_Layers {
    BASE_QWERTY     = 0,
    BASE_COLEMAK_DH = 1,
    FPS             = 2,
    NUMBER          = 3,
    FUNC            = 4,
    NAV             = 5,
    SYMBOL          = 6,
    MOUSE           = 7,
    MEDIA           = 8,
    SYSTEM          = 9,
};

// Base qwerty layout
#define __LEAG37_QWERTY_TOP_LEFT__ KC_Q, KC_W, KC_E, KC_R, KC_T
#define __LEAG37_QWERTY_TOP_RIGHT__ KC_Y, KC_U, KC_I, KC_O, KC_P
#define __LEAG37_QWERTY_MID_LEFT__ KC_A, KC_S, KC_D, KC_F, KC_G
#define __LEAG37_QWERTY_MID_RIGHT__ KC_H, KC_J, KC_K, KC_L, KC_QUOT
#define __LEAG37_QWERTY_BOT_LEFT__ KC_Z, KC_X, KC_C, KC_V, KC_B
#define __LEAG37_QWERTY_BOT_RIGHT__ KC_N, KC_M, KC_COMM, KC_DOT, KC_UNDS

// Base Colemak DH layout

// Extra column keys for 3x6 keyboards
#define __LEAG37_TOP_LEFT_3x6_EXT__ KC_LCBR
#define __LEAG37_TOP_RIGHT_3x6_EXT__ KC_RCBR

#define __LEAG37_BASE_33THUMB_LEFT__
#define __LEAG37_BASE_33THUMB_RIGHT__
