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

bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_kb(index, clockwise)) {
      return false; /* Don't process further events if user function exists and returns false */
    }
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_KB_VOLUME_UP);
        } else {
            tap_code(KC_KB_VOLUME_DOWN);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_MNXT);
        } else {
            tap_code(KC_MPRV);
        }
    }
    return true;
}