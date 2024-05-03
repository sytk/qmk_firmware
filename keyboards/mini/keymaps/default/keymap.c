// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │Esc│ ( │ ) │ / │ * │ - │
     * ├───┼───┼───┼───┼───┼───┤
     * │ A │ B │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┼───┤ + │
     * │ C │ D │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┼───┤
     * │ E │ F │ 1 │ 2 │ 3 │   │
     * ├───┼───┼───┴───┼───┤Ent│
     * │Ctl│TG1│ 0     │ . │   │
     * └───┴───┴───────┴───┴───┘
     */
    [0] = LAYOUT_numpad_3x5(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B
    )

    /*
     * ┌───┐───┬───┬───┬───┬───┐
     * │Rst│ ( │ ) │ / │ * │ - │
     * └───┘───┌───┬───┬───┬───┐
     * │ A │ B │Hom│ ↑ │PgU│   │
     * ├───┼───├───┼───┼───┤ + │
     * │ C │ D │ ← │   │ → │   │
     * ├───┼───├───┼───┼───┼───┤
     * │ E │ F │End│ ↓ │PgD│   │
     * ├───┼───├───┴───┼───┤Ent│
     * │Ctl│TG1│Insert │Del│   │
     * └───┴───└───────┴───┴───┘
     */
    // [1] = LAYOUT_numpad_5x6(
    //     QK_BOOT,   _______, _______, _______, _______, _______,
    //     _______, _______, KC_HOME, KC_UP,   KC_PGUP,
    //     _______, _______, KC_LEFT, XXXXXXX, KC_RGHT, _______,
    //     _______, _______, KC_END,  KC_DOWN, KC_PGDN,
    //     _______, _______, KC_INS,           KC_DEL,  _______
    // )
};
