#pragma once

#include "leag37.h"

// clang-format off
#define LEAG37_3x6_3_ex2_CHORDAL_HOLD_LAYOUT() \
    const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = \
        LAYOUT_split_3x6_3_ex2( \
            'L', 'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 'R', \
            'L', 'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 'R', \
            'L', 'L', 'L', 'L', 'L', 'L',            'R', 'R', 'R', 'R', 'R', 'R', \
                                '*', '*', '*',  '*', '*', '*' \
        );
// clang-format on

// QWERTY
#define __LEAG37_3x6_3_ex2_QWERTY_R3_LEFT__ __LEAG37_R3_LEFT_3x6_EXT__, __LEAG37_QWERTY_R3_LEFT__, KC_TRNS
#define __LEAG37_3x6_3_ex2_QWERTY_R3_RIGHT__ KC_TRNS, __LEAG37_QWERTY_R3_RIGHT__, __LEAG37_R3_RIGHT_3x6_EXT__
#define __LEAG37_3x6_3_ex2_QWERTY_R2_LEFT__ __LEAG37_R2_LEFT_3x6_EXT__, __LEAG37_QWERTY_R2_LEFT__, KC_TRNS
#define __LEAG37_3x6_3_ex2_QWERTY_R2_RIGHT__ KC_TRNS, __LEAG37_QWERTY_R2_RIGHT__, __LEAG37_R2_RIGHT_3x6_EXT__
#define __LEAG37_3x6_3_ex2_QWERTY_R1_LEFT__ __LEAG37_R1_LEFT_3x6_EXT__, __LEAG37_QWERTY_R1_LEFT__
#define __LEAG37_3x6_3_ex2_QWERTY_R1_RIGHT__ __LEAG37_QWERTY_R1_RIGHT__, __LEAG37_R1_RIGHT_3x6_EXT__
#define __LEAG37_3x6_3_ex2_QWERTY_THUMB_LEFT__ __LEAG37_QWERTY_33THUMB_LEFT__
#define __LEAG37_3x6_3_ex2_QWERTY_THUMB_RIGHT__ __LEAG37_QWERTY_33THUMB_RIGHT__

// Number
#define __LEAG37_3x6_3_ex2_NUMBER_R3_LEFT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_NUMBER_R3_RIGHT__ KC_TRNS, __LEAG37_NUM_R3__, KC_TRNS
#define __LEAG37_3x6_3_ex2_NUMBER_R2_LEFT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_NUMBER_R2_RIGHT__ KC_TRNS, __LEAG37_NUM_R2__, KC_TRNS
#define __LEAG37_3x6_3_ex2_NUMBER_R1_LEFT__ __LEAG37_TRANS_6__
#define __LEAG37_3x6_3_ex2_NUMBER_R1_RIGHT__ __LEAG37_NUM_R1__, KC_TRNS
#define __LEAG37_3x6_3_ex2_NUMBER_THUMB_LEFT__ __LEAG37_TRANS_3__
#define __LEAG37_3x6_3_ex2_NUMBER_THUMB_RIGHT__ __LEAG37_NUM_THUMB32_RIGHT__, KC_TRNS

// Function
#define __LEAG37_3x6_3_ex2_FUNCTION_R3_LEFT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_FUNCTION_R3_RIGHT__ KC_TRNS, __LEAG37_FUNCTION_R3__, KC_TRNS
#define __LEAG37_3x6_3_ex2_FUNCTION_R2_LEFT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_FUNCTION_R2_RIGHT__ KC_TRNS, __LEAG37_FUNCTION_R2__, KC_TRNS
#define __LEAG37_3x6_3_ex2_FUNCTION_R1_LEFT__ __LEAG37_TRANS_6__
#define __LEAG37_3x6_3_ex2_FUNCTION_R1_RIGHT__ __LEAG37_FUNCTION_R1__, KC_TRNS
#define __LEAG37_3x6_3_ex2_FUNCTION_THUMB_LEFT__ __LEAG37_TRANS_3__
#define __LEAG37_3x6_3_ex2_FUNCTION_THUMB_RIGHT__ __LEAG37_TRANS_3__

// Symbol
#define __LEAG37_3x6_3_ex2_SYMBOL_R3_LEFT__ KC_TRNS, __LEAG37_SYMBOL_R3__, KC_TRNS
#define __LEAG37_3x6_3_ex2_SYMBOL_R3_RIGHT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_SYMBOL_R2_LEFT__ KC_TRNS, __LEAG37_SYMBOL_R2__, KC_TRNS
#define __LEAG37_3x6_3_ex2_SYMBOL_R2_RIGHT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_SYMBOL_R1_LEFT__ KC_TRNS, __LEAG37_SYMBOL_R1__
#define __LEAG37_3x6_3_ex2_SYMBOL_R1_RIGHT__ __LEAG37_TRANS_6__
#define __LEAG37_3x6_3_ex2_SYMBOL_THUMB_LEFT__ __LEAG37_TRANS_3__
#define __LEAG37_3x6_3_ex2_SYMBOL_THUMB_RIGHT__ __LEAG37_TRANS_3__

// Mouse
#define __LEAG37_3x6_3_ex2_MOUSE_R3_LEFT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_MOUSE_R3_RIGHT__ KC_TRNS, __LEAG37_MOUSE_R3__, KC_TRNS
#define __LEAG37_3x6_3_ex2_MOUSE_R2_LEFT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_MOUSE_R2_RIGHT__ KC_TRNS, __LEAG37_MOUSE_R2__, KC_TRNS
#define __LEAG37_3x6_3_ex2_MOUSE_R1_LEFT__ __LEAG37_TRANS_6__
#define __LEAG37_3x6_3_ex2_MOUSE_R1_RIGHT__ __LEAG37_MOUSE_R1__, KC_TRNS
#define __LEAG37_3x6_3_ex2_MOUSE_THUMB_LEFT__ __LEAG37_TRANS_3__
#define __LEAG37_3x6_3_ex2_MOUSE_THUMB_RIGHT__ __LEAG37_MOUSE_THUMB32_RIGHT__, MS_BTN3

// Media
#define __LEAG37_3x6_3_ex2_MEDIA_R3_LEFT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_MEDIA_R3_RIGHT__ KC_TRNS, __LEAG37_MEDIA_R3__, KC_TRNS
#define __LEAG37_3x6_3_ex2_MEDIA_R2_LEFT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_MEDIA_R2_RIGHT__ KC_TRNS, __LEAG37_MEDIA_R2__, KC_TRNS
#define __LEAG37_3x6_3_ex2_MEDIA_R1_LEFT__ __LEAG37_TRANS_6__
#define __LEAG37_3x6_3_ex2_MEDIA_R1_RIGHT__ __LEAG37_MEDIA_R1__, KC_TRNS
#define __LEAG37_3x6_3_ex2_MEDIA_THUMB_LEFT__ __LEAG37_TRANS_3__
#define __LEAG37_3x6_3_ex2_MEDIA_THUMB_RIGHT__ __LEAG37_MEDIA_THUMB32_RIGHT__, KC_MUTE

// Nav
#define __LEAG37_3x6_3_ex2_NAV_R3_LEFT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_NAV_R3_RIGHT__ KC_TRNS, __LEAG37_NAV_R3__, KC_TRNS
#define __LEAG37_3x6_3_ex2_NAV_R2_LEFT__ __LEAG37_TRANS_7__
#define __LEAG37_3x6_3_ex2_NAV_R2_RIGHT__ KC_TRNS, __LEAG37_NAV_R2__, KC_TRNS
#define __LEAG37_3x6_3_ex2_NAV_R1_LEFT__ __LEAG37_TRANS_6__
#define __LEAG37_3x6_3_ex2_NAV_R1_RIGHT__ __LEAG37_NAV_R1__, KC_TRNS
#define __LEAG37_3x6_3_ex2_NAV_THUMB_LEFT__ __LEAG37_TRANS_3__
#define __LEAG37_3x6_3_ex2_NAV_THUMB_RIGHT__ __LEAG37_TRANS_3__
