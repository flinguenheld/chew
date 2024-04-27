// Copyright 2024 Florent (@FLinguenheld)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Flash */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET              // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // In ms in which the double tap can occur

#define EE_HANDS
#define SERIAL_USART_TX_PIN GP11
#define SERIAL_PIO_USE_PIO11

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
