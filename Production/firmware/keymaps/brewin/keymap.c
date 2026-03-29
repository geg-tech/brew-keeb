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
        KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9, //Row 0
        KC_F10,   KC_F11,   KC_F12,   KC_DELETE,   KC_GRAVE,   KC_1,   KC_2,   KC_3,   KC_4,   KC_KB_MUTE, //Row 1
        KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_BACKSPACE,   KC_TAB,   KC_Q,   KC_KB_POWER, //Row 2
        KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   null, //Row 3
        KC_LEFT_BRACKET,   KC_RIGHT_BRACKET,   KC_BACKSLASH,   KC_CAPS_LOCK,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   null, //Row 4
        KC_H,   KC_J,   KC_K,   KC_L,   KC_SEMICOLON,   KC_QUOTE,   KC_ENTER,   KC_LEFT_SHIFT,   KC_Z,   null, //Row 5
        KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMMA,   KC_DOT,   KC_SLASH,   null, //Row 6
        KC_RIGHT_SHIFT,   KC_LEFT_CONTROL,   KC_LEFT_GUI,   KC_LEFT ALT,   KC_SPACE,   KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_RIGHT_CTRL,   KC_LEFT,   null, //Row 7
        KC_DOWN,   KC_RIGHT,   KC_UP,   KC_PRINT_SCREEN,   KC_SPACE,   null,   null,   null,   null,   null //Row 8
    )
};

// funky encoder stuff
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // First encoder
        if (clockwise) {
            tap_code(KC_KB_VOLUME_UP);
        } else {
            tap_code(KC_KB_VOLUME_DOWN);
        }
    } else if (index == 1) { // Second encoder
        if (clockwise) {
            tap_code(KC_BRIGHTNESS_UP);
        } else {
            tap_code(KC_BRIGHTNESS_DOWN);
        }
    }
    return false;
}

// logo function, mess around in QMK to make a custom logo!
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };
    oled_set_cursor(0,1);
    oled_write_P(qmk_logo, false);
}

// print the deets
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("ay wasup hello"), false);
    render_logo();
    break;
    return false;
}

#endif