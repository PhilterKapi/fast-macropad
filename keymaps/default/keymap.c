// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* LAYER 0
 * ,-------------------------------.
 * |  L1   | Prev  | Next  | Play  |
 * |-------+-------+-------+-------|
 * |       |       |       |       |
 * |-------+-------+-------+-------|
 * |       |       |       |       |
 * |-------+-------+-------+-------|
 * |       |       |       |       |
 * `-------------------------------'
 */
    [0] = LAYOUT_numpad_4x4(
        KC_P,       KC_A,      KC_B,      KC_C,
        KC_UP,      KC_F,      KC_G,      KC_H,
        KC_DOWN,    KC_RIGHT,  KC_D,      KC_L,
        KC_LEFT,    KC_W,      KC_R,      KC_T
    )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_KB_VOLUME_UP, KC_KB_VOLUME_DOWN), ENCODER_CCW_CW(KC_MNXT, KC_MPRV)  }
};
#endif