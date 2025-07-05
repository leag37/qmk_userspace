#pragma once

#include "leag37.h"

enum ELeag37_Layers {
    BASE_QWERTY     = 0,
    BASE_COLEMAK_DH = 1,
    FPS             = 2,
    NUMBER          = 3, // numbers + function on shift
    FUNCTION        = 4, // function + numbers on shift
    SYMBOL          = 5, // symbols + nav on shift
    NAV             = 6, // nav + symbols on shift
    MOUSE           = 7, // pure mouse layer
    MEDIA           = 8, // pure media layer
    SYSTEM          = 9, // system layer
};

// Base qwerty layout
#define __LEAG37_QWERTY_R3_LEFT__ KC_Q, KC_W, KC_E, KC_R, KC_T
#define __LEAG37_QWERTY_R3_RIGHT__ KC_Y, KC_U, KC_I, KC_O, KC_P
#define __LEAG37_QWERTY_R2_LEFT__ LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G
#define __LEAG37_QWERTY_R2_RIGHT__ KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_QUOT)
#define __LEAG37_QWERTY_R1_LEFT__ KC_Z, KC_X, KC_C, KC_V, KC_B
#define __LEAG37_QWERTY_R1_RIGHT__ KC_N, KC_M, KC_COMM, KC_DOT, KC_UNDS

#define __LEAG37_QWERTY_33THUMB_LEFT__ LT(MEDIA, KC_TAB), LT(NUMBER, KC_BSPC), LT(MOUSE, KC_ENT)
#define __LEAG37_QWERTY_33THUMB_RIGHT__ LT(SYMBOL, KC_ENT), KC_SPC, KC_ESC
#define __LEAG37_QWERTY_32THUMB_LEFT__ LT(MEDIA, KC_TAB), LT(NUMBER, KC_BSPC), LT(MOUSE, KC_ENT)
#define __LEAG37_QWERTY_32THUMB_RIGHT__ LT(SYMBOL, KC_SPC), KC_LSFT

// Base Colemak DH layout

// Extra column keys for 3x6 keyboards
#define __LEAG37_R3_LEFT_3x6_EXT__ KC_LCBR
#define __LEAG37_R3_RIGHT_3x6_EXT__ KC_RCBR
#define __LEAG37_R2_LEFT_3x6_EXT__ KC_LPRN
#define __LEAG37_R2_RIGHT_3x6_EXT__ KC_RPRN
#define __LEAG37_R1_LEFT_3x6_EXT__ KC_LT
#define __LEAG37_R1_RIGHT_3x6_EXT__ KC_GT

// Transparent layr
#define __LEAG37_TRANS_2__ KC_TRNS, KC_TRNS
#define __LEAG37_TRANS_3__ __LEAG37_TRANS_2__, KC_TRNS
#define __LEAG37_TRANS_4__ __LEAG37_TRANS_3__, KC_TRNS
#define __LEAG37_TRANS_5__ __LEAG37_TRANS_4__, KC_TRNS
#define __LEAG37_TRANS_6__ __LEAG37_TRANS_5__, KC_TRNS
#define __LEAG37_TRANS_7__ __LEAG37_TRANS_6__, KC_TRNS

// Number layer
#define __LEAG37_NUM_TOP__ KC_PAST, KC_7, KC_8, KC_9, KC_PLUS
#define __LEAG37_NUM_MID__ KC_0, KC_4, KC_5, KC_6, KC_EQL
#define __LEAG37_NUM_BOT__ KC_PSLS, KC_1, KC_2, KC_3, KC_MINUS

// Function layer
#define __LEAG37_FUNCTION_TOP__ KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR
#define __LEAG37_FUNCTION_MID__ KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL
#define __LEAG37_FUNCTION_BOT__ KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS

// Nav layer
#define __LEAG37_NAV_TOP__ __LEAG37_TRANS_5__
#define __LEAG37_NAV_MID__ KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT
#define __LEAG37_NAV_BOT__ KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END

// Symbol layer
#define __LEAG37_SYMBOL_TOP__ KC_GRV, KC_AMPR, KC_ASTR, S(KC_GRV), KC_PLUS
#define __LEAG37_SYMBOL_MID__ KC_QUES, KC_DLR, KC_PERC, KC_CIRC, KC_EQUAL
#define __LEAG37_SYMBOL_BOT__ KC_PSLS, KC_EXLM, KC_AT, KC_HASH, KC_MINUS

// Mouse layer
#define __LEAG37_MOUSE_TOP__ KC_TRNS, MS_LEFT, MS_DOWN, MS_UP, MS_RIGHT
#define __LEAG37_MOUSE_MID__ KC_TRNS, MS_BTN1, MS_BTN2, MS_BTN3, KC_TRNS
#define __LEAG37_MOUSE_BOT__ KC_TRNS, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR

// Media layer
#define __LEAG37_MEDIA_TOP__ __LEAG37_TRANS_5__
#define __LEAG37_MEDIA_MID__ KC_MUTE, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT
#define __LEAG37_MEDIA_BOT__ __LEAG37_TRANS_5__
#define __LEAG37_MEDIA_THUMB32_RIGHT__ KC_MPLY, KC_MSP

// Layer layouts 3x6_3_ex2
