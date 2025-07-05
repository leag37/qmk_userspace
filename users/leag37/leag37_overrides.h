#pragma once

#include QMK_KEYBOARD_H

#ifdef KEY_OVERRIDE_ENABLE
#    define LEAG37_DECLARE_OVERRIDES                                                                \
        const key_override_t key_override_lparen = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_LBRC); \
        const key_override_t key_override_rparen = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_RBRC); \
        const key_override_t key_override_comma  = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_SCLN); \
        const key_override_t key_override_period = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLN);  \
        const key_override_t key_override_unds   = ko_make_basic(MOD_MASK_SHIFT, KC_UNDS, KC_PIPE); \
        const key_override_t key_override_enter  = ko_make_basic(MOD_MASK_SHIFT, KC_ENT, KC_ESC);   \
        const key_override_t key_override_slash  = ko_make_basic(MOD_MASK_SHIFT, KC_PSLS, KC_BSLS);

#    define LEAG37_DEFINE_OVERRIDES const key_override_t *key_overrides[] = {&key_override_lparen, &key_override_rparen, &key_override_comma, &key_override_period, &key_override_unds, &key_override_enter, &key_override_slash};

#    define LEAG37_KEY_OVERRIDES \
        LEAG37_DECLARE_OVERRIDES \
        LEAG37_DEFINE_OVERRIDES

#elif
#    define LEAG37_KEY_OVERRIDES

#endif
