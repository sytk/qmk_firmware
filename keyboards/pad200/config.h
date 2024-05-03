// Copyright 2024 Takehiro Izumi (@sytk)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// #define MATRIX_ROWS 5     // 行数 右手側と左手側があるので、*2
// #define MATRIX_COLS 5 * 2 // 列数 Duplex-Matrix法により、*2

// #define MATRIX_ROW_PINS \
//     { GP4, GP3, GP2, GP1, GP0 } // 各行に割り当てるピン番号
// #define MATRIX_COL_PINS \
//     { GP5, GP6, GP7, GP8, GP9 } // 各列に割り当てるピン番号
// #define DIODE_DIRECTION CUSTOM_MATRIX

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
