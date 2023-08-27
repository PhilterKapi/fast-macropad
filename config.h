// Copyright 2023 Glen (@PhilterKapi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

//Key matrix size
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

//Define encoders
#define ENCODERS_PAD_A { B2, B1 }
#define ENCODERS_PAD_B { B6, B3 }
#define ENCODER_RESOLUTION 4

//PCB default pin-out
#define MATRIX_ROW_PINS { D4, C6, F4, F7 }
#define MATRIX_COL_PINS { D7, E6, B4, B5 }
#define UNUSED_PINS