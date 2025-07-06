/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#if __has_include("leag37.h")
#    include "leag37.h"
#endif

#if __has_include("g/keymap_combo.h")
#    include "g/keymap_combo.h"
#endif

// clang-format off
#define LEAG37_BUILD_LAYER( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, \
         K29, K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K40, \
                        K41, K42, K43, K44, K45, K46 \
    ) \
    LAYOUT_split_3x6_3_ex2(\
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, \
         K29, K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K40, \
                        K41, K42, K43, K44, K45, K46)

#define LEAG37_DEFINE_LAYER(__layer, ...) [__layer] = LEAG37_BUILD_LAYER(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LEAG37_DEFINE_LAYER(BASE_QWERTY,
    __LEAG37_3x6_3_ex2_QWERTY_R3_LEFT__, __LEAG37_3x6_3_ex2_QWERTY_R3_RIGHT__,
    __LEAG37_3x6_3_ex2_QWERTY_R2_LEFT__, __LEAG37_3x6_3_ex2_QWERTY_R2_RIGHT__,
    __LEAG37_3x6_3_ex2_QWERTY_R1_LEFT__, __LEAG37_3x6_3_ex2_QWERTY_R1_RIGHT__,
    __LEAG37_3x6_3_ex2_QWERTY_THUMB_LEFT__, __LEAG37_3x6_3_ex2_QWERTY_THUMB_RIGHT__
    ),
    LEAG37_DEFINE_LAYER(NUMBER,
    __LEAG37_3x6_3_ex2_NUMBER_R3_LEFT__, __LEAG37_3x6_3_ex2_NUMBER_R3_RIGHT__,
    __LEAG37_3x6_3_ex2_NUMBER_R2_LEFT__, __LEAG37_3x6_3_ex2_NUMBER_R2_RIGHT__,
    __LEAG37_3x6_3_ex2_NUMBER_R1_LEFT__, __LEAG37_3x6_3_ex2_NUMBER_R1_RIGHT__,
    __LEAG37_3x6_3_ex2_NUMBER_THUMB_LEFT__, __LEAG37_3x6_3_ex2_NUMBER_THUMB_RIGHT__
    ),
    LEAG37_DEFINE_LAYER(FUNCTION,
    __LEAG37_3x6_3_ex2_FUNCTION_R3_LEFT__, __LEAG37_3x6_3_ex2_FUNCTION_R3_RIGHT__,
    __LEAG37_3x6_3_ex2_FUNCTION_R2_LEFT__, __LEAG37_3x6_3_ex2_FUNCTION_R2_RIGHT__,
    __LEAG37_3x6_3_ex2_FUNCTION_R1_LEFT__, __LEAG37_3x6_3_ex2_FUNCTION_R1_RIGHT__,
    __LEAG37_3x6_3_ex2_FUNCTION_THUMB_LEFT__, __LEAG37_3x6_3_ex2_FUNCTION_THUMB_RIGHT__
    ),
    LEAG37_DEFINE_LAYER(SYMBOL,
    __LEAG37_3x6_3_ex2_SYMBOL_R3_LEFT__, __LEAG37_3x6_3_ex2_SYMBOL_R3_RIGHT__,
    __LEAG37_3x6_3_ex2_SYMBOL_R2_LEFT__, __LEAG37_3x6_3_ex2_SYMBOL_R2_RIGHT__,
    __LEAG37_3x6_3_ex2_SYMBOL_R1_LEFT__, __LEAG37_3x6_3_ex2_SYMBOL_R1_RIGHT__,
    __LEAG37_3x6_3_ex2_SYMBOL_THUMB_LEFT__, __LEAG37_3x6_3_ex2_SYMBOL_THUMB_RIGHT__
    ),
    LEAG37_DEFINE_LAYER(MEDIA,
    __LEAG37_3x6_3_ex2_MEDIA_R3_LEFT__, __LEAG37_3x6_3_ex2_MEDIA_R3_RIGHT__,
    __LEAG37_3x6_3_ex2_MEDIA_R2_LEFT__, __LEAG37_3x6_3_ex2_MEDIA_R2_RIGHT__,
    __LEAG37_3x6_3_ex2_MEDIA_R1_LEFT__, __LEAG37_3x6_3_ex2_MEDIA_R1_RIGHT__,
    __LEAG37_3x6_3_ex2_MEDIA_THUMB_LEFT__, __LEAG37_3x6_3_ex2_MEDIA_THUMB_RIGHT__
    ),
    LEAG37_DEFINE_LAYER(MOUSE,
    __LEAG37_3x6_3_ex2_MOUSE_R3_LEFT__, __LEAG37_3x6_3_ex2_MOUSE_R3_RIGHT__,
    __LEAG37_3x6_3_ex2_MOUSE_R2_LEFT__, __LEAG37_3x6_3_ex2_MOUSE_R2_RIGHT__,
    __LEAG37_3x6_3_ex2_MOUSE_R1_LEFT__, __LEAG37_3x6_3_ex2_MOUSE_R1_RIGHT__,
    __LEAG37_3x6_3_ex2_MOUSE_THUMB_LEFT__, __LEAG37_3x6_3_ex2_MOUSE_THUMB_RIGHT__
    ),
    LEAG37_DEFINE_LAYER(NAV,
    __LEAG37_3x6_3_ex2_NAV_R3_LEFT__, __LEAG37_3x6_3_ex2_NAV_R3_RIGHT__,
    __LEAG37_3x6_3_ex2_NAV_R2_LEFT__, __LEAG37_3x6_3_ex2_NAV_R2_RIGHT__,
    __LEAG37_3x6_3_ex2_NAV_R1_LEFT__, __LEAG37_3x6_3_ex2_NAV_R1_RIGHT__,
    __LEAG37_3x6_3_ex2_NAV_THUMB_LEFT__, __LEAG37_3x6_3_ex2_NAV_THUMB_RIGHT__
    )
};

LEAG37_3x6_3_ex2_CHORDAL_HOLD_LAYOUT()
LEAG37_KEY_OVERRIDES
// clang-format on

#ifdef ENCODER_MAP_ENABLE
    const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
        [0] =
            {
                ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
                ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
                ENCODER_CCW_CW(RM_VALD, RM_VALU),
                ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
            },
        [1] =
            {
                ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
                ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
                ENCODER_CCW_CW(RM_VALD, RM_VALU),
                ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
            },
        [2] =
            {
                ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
                ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
                ENCODER_CCW_CW(RM_VALD, RM_VALU),
                ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
            },
        [3] =
            {
                ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
                ENCODER_CCW_CW(KC_MPRV, KC_MNXT),
                ENCODER_CCW_CW(RM_VALD, RM_VALU),
                ENCODER_CCW_CW(KC_RGHT, KC_LEFT),
            },
};
#endif
