// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┤ + │
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┴───┼───┤Ent│
     * │   0   │ . │   │
     * └───────┴───┴───┘
     */
    [0] = LAYOUT_numpad_4x4(
        TG(1),       KC_MPRV,    KC_MNXT,    KC_MPLY,
        KC_NO,       KC_NO,      KC_NO,      KC_NO,
        KC_NO,       KC_NO,      KC_NO,      KC_NO,
        KC_LEFT,     KC_DOWN,    KC_RIGHT,   KC_UP
    ),
    [1] = LAYOUT_numpad_4x4(
        KC_A,       KC_B,      KC_C,      KC_D,
        KC_E,       KC_F,      KC_G,      KC_H,
        KC_I,       KC_J,      KC_K,      KC_L,
        KC_M,       KC_N,      KC_O,      KC_P
),
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_KB_VOLUME_UP, KC_KB_VOLUME_DOWN), ENCODER_CCW_CW(KC_MNXT, KC_MPRV)  }
};
#endif