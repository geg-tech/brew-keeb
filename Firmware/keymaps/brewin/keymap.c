// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#ifdef OLED_ENABLE


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * le awesome matrix
     */
    [0] = LAYOUT( // 9x10 matrix but the keyboard is not 9x9 :peeface:
        // tweak later w/ PCB layout
        KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A, //Row 1
        KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A, //Row 2
        KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A, //Row 3
        KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A, //Row 4
        KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A, //Row 5
        KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A, //Row 6
        KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A, //Row 8
        KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A,   KC_A //Row 9

    )
};
