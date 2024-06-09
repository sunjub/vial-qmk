// Copyright 2022 sunjub (@sunjub)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// #define SPLIT_HAND_PIN GP9
// #define USB_VBUS_PIN GP4
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP12
#define SERIAL_USART_RX_PIN GP13
#define SERIAL_USART_PIN_SWAP
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
// #define HAL_USE_I2C TRUE
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7
#define OLED_UPDATE_INTERVAL 50

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define QUICK_TAP_TERM 0
#define TAPPING_LAYER_TERM 90

// #ifdef OLED_ENABLE
//     #ifndef OLED_FONT_H
//         #define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
//     #endif
// #endif


// #undef OLED_UPDATE_INTERVAL
// #ifdef DEBUG_MATRIX_SCAN_RATE
// #    define OLED_UPDATE_INTERVAL 500
// #else
// #    define OLED_UPDATE_INTERVAL 50
// #endif