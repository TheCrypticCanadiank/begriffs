/*******************************************************************************
  User Configuration Header

  File Name:
    user.h

  Summary:
    Build-time configuration header for the user defined by this project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    It only provides macro definitions for build-time configuration options

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef USER_H
#define USER_H

#include "bsp/bsp.h"
#include "toolchain_specifics.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: User Configuration macros
// *****************************************************************************
// *****************************************************************************
#define LED_ON()                            LED_On()
#define LED_OFF()                           LED_Off()
#define LED_TOGGLE()                        LED_Toggle()
#define SWITCH_GET()                        SWITCH_Get()
#define SWITCH_STATUS_PRESSED               SWITCH_STATE_PRESSED
#define BUFFER_ATTRIBUTES

/* Include the Hex header file of the application to be programmed by the
 * I2C host bootloader application.
 * Specify the I2C slave address, Erase page size and Program Page size.
 * and the start address of the application being programmed.
 * For SAM D20, SAM D21, SAM C21N, SAM D11, SAM DA1, SAM L10, SAM L11, SAM L21, SAM L22,
 * the Erase Page Size is 256 bytes and Program Page Size can be specified as 64 bytes
 * or equal to the erase page size (256)
 * #define APP_ERASE_PAGE_SIZE         (256L)
 * In case the embedded host has limited RAM, the APP_PROGRAM_PAGE_SIZE macro
 * can be set to the actual program page size (64 or 512) to reduce the RAM used
 * to hold the program data.
 * #define APP_PROGRAM_PAGE_SIZE       (64L)
 * Specify the user application start address. The application start address must
 * be aligned to erase page unit. If the bootloader itself is being upgraded then
 * the APP_IMAGE_START_ADDR must be set to 0x00 (start of bootloader). Ensure the
 * bootloader and application is also configured with the same value of application
 * start address.
 * #define APP_IMAGE_START_ADDR        0x800UL
 * For SAM E54, the Erase Page Size is 8192 bytes and Program Page Size is 512 bytes.
 * #define APP_ERASE_PAGE_SIZE         (8192L)
 * #define APP_PROGRAM_PAGE_SIZE       (512L)
 * #define APP_IMAGE_START_ADDR        0x2000UL
 */


#define SAM_C21N_XPRO    1
#define SAM_D11_XPRO     2
#define SAM_D20_XPRO     3
#define SAM_D21_XPRO     4
#define SAM_DA1_XPRO     5
#define SAM_E54_XPRO     6
#define SAM_HA1_XPRO     7
#define SAM_L10_XPRO     8
#define SAM_L21_XPRO     9
#define SAM_L22_XPRO     10


/* Select the device being upgraded by the I2C bootloader host.
 * This macro takes one of the following values:
 * SAM_C21N_XPRO, SAM_D11_XPRO, SAM_D20_XPRO, SAM_D21_XPRO, SAM_DA1_XPRO,
 * SAM_E54_XPRO, SAM_HA1_XPRO, SAM_L10_XPRO, SAM_L21_XPRO, SAM_L22_XPRO
 */
#define APP_I2C_BOOTLOADER_TARGET_DEVICE        SAM_E54_XPRO

#if APP_I2C_BOOTLOADER_TARGET_DEVICE == SAM_C21N_XPRO
#define APP_HEX_HEADER_FILE         "test_app_images/image_pattern_hex_sam_c21n_xpro.h"
#define APP_I2C_SLAVE_ADDR          0x0054
#define APP_ERASE_PAGE_SIZE         (256L)
#define APP_PROGRAM_PAGE_SIZE       (256L)
#define APP_IMAGE_START_ADDR        0x800UL


#elif APP_I2C_BOOTLOADER_TARGET_DEVICE == SAM_D11_XPRO
#define APP_HEX_HEADER_FILE         "sam_d11_xpro.X.production.bin"
#define APP_I2C_SLAVE_ADDR          0x0054
#define APP_ERASE_PAGE_SIZE         (256L)
#define APP_PROGRAM_PAGE_SIZE       (256L)
#define APP_IMAGE_START_ADDR        0x800UL

#elif APP_I2C_BOOTLOADER_TARGET_DEVICE == SAM_D20_XPRO
#define APP_HEX_HEADER_FILE         "sam_d20_xpro.X.production.bin"
#define APP_I2C_SLAVE_ADDR          0x0054
#define APP_ERASE_PAGE_SIZE         (256L)
#define APP_PROGRAM_PAGE_SIZE       (256L)
#define APP_IMAGE_START_ADDR        0x800UL

#elif APP_I2C_BOOTLOADER_TARGET_DEVICE == SAM_D21_XPRO
#define APP_HEX_HEADER_FILE         "sam_d21_xpro.X.production.bin"
#define APP_I2C_SLAVE_ADDR          0x0054
#define APP_ERASE_PAGE_SIZE         (256L)
#define APP_PROGRAM_PAGE_SIZE       (256L)
#define APP_IMAGE_START_ADDR        0x800UL

#elif APP_I2C_BOOTLOADER_TARGET_DEVICE == SAM_DA1_XPRO
#define APP_HEX_HEADER_FILE         "sam_da1_xpro.X.production.bin"
#define APP_I2C_SLAVE_ADDR          0x0054
#define APP_ERASE_PAGE_SIZE         (256L)
#define APP_PROGRAM_PAGE_SIZE       (256L)
#define APP_IMAGE_START_ADDR        0x800UL

#elif APP_I2C_BOOTLOADER_TARGET_DEVICE == SAM_E54_XPRO
#define APP_HEX_HEADER_FILE         "sam_e54_xpro.X.production.bin"
#define APP_I2C_SLAVE_ADDR          0x0054
#define APP_ERASE_PAGE_SIZE         (8192L)
#define APP_PROGRAM_PAGE_SIZE       (8192L)
#define APP_IMAGE_START_ADDR        0x2000UL

#elif APP_I2C_BOOTLOADER_TARGET_DEVICE == SAM_HA1_XPRO
#define APP_HEX_HEADER_FILE         "sam_ha1_xpro.X.production.bin"
#define APP_I2C_SLAVE_ADDR          0x0054
#define APP_ERASE_PAGE_SIZE         (256L)
#define APP_PROGRAM_PAGE_SIZE       (256L)
#define APP_IMAGE_START_ADDR        0x800UL

#elif APP_I2C_BOOTLOADER_TARGET_DEVICE == SAM_L10_XPRO
#define APP_HEX_HEADER_FILE         "sam_l10_xpro.X.production.bin"
#define APP_I2C_SLAVE_ADDR          0x0054
#define APP_ERASE_PAGE_SIZE         (256L)
#define APP_PROGRAM_PAGE_SIZE       (256L)
#define APP_IMAGE_START_ADDR        0x800UL

#elif APP_I2C_BOOTLOADER_TARGET_DEVICE == SAM_L21_XPRO
#define APP_HEX_HEADER_FILE         "sam_l21_xpro.X.production.bin"
#define APP_I2C_SLAVE_ADDR          0x0054
#define APP_ERASE_PAGE_SIZE         (256L)
#define APP_PROGRAM_PAGE_SIZE       (256L)
#define APP_IMAGE_START_ADDR        0x800UL

#elif APP_I2C_BOOTLOADER_TARGET_DEVICE == SAM_L22_XPRO
#define APP_HEX_HEADER_FILE         "sam_l22_xpro.X.production.bin"
#define APP_I2C_SLAVE_ADDR          0x0054
#define APP_ERASE_PAGE_SIZE         (256L)
#define APP_PROGRAM_PAGE_SIZE       (256L)
#define APP_IMAGE_START_ADDR        0x800UL

#endif
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // USER_H
/*******************************************************************************
 End of File
*/
