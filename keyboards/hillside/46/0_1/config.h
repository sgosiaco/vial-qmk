// Copyright 2022 Michael McCoyd (@mmccoyd)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* sea picro */
// #define RP2040_FLASH_GD25Q64CS
// #define RP2040_FLASH_W25X10CL
//  mine comes with W25Q128 so default W25Q080 driver is fine

//  need to specify larger size though
// semingly pointless to do so?
// NEED TO RECHECK SINCE SPLIT NOW WORKING AGAIN
// #define WEAR_LEVELING_RP2040_FLASH_SIZE (16 * 1024 * 1024) // 128Mbit or 16MByte

/* Split */
// DOESN"T WORK B?C JUMPER NOT SOLDERED
// #define SPLIT_HAND_MATRIX_GRID GP9, GP27
// #define SPLIT_HAND_MATRIX_GRID_LOW_IS_LEFT
// #define MATRIX_MASKED

#undef RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define SERIAL_USART_TX_PIN GP1
#define WS2812_PIO_USE_PIO1

#undef SPLIT_USB_DETECT
#define USB_VBUS_PIN GP19

// EE_HANDS SEEMINGLY POINTLESS WITH VBUS
// USE MASTER_RIGHT INSTEAD FOR ONLY RIGHT SIDE
// #define EE_HANDS

// ONLY FLASH RIGHT SIDE WITH THIS
// SINCE DEFAULT MASTER_LEFT, NO NEED FOR LEFT SIDE
// #define MASTER_RIGHT
