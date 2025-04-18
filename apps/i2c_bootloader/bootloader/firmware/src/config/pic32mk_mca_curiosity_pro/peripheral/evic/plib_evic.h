/*******************************************************************************
  EVIC PLIB Header

  Company:
    Microchip Technology Inc.

  File Name:
    plib_evic.h

  Summary:
    PIC32MZ Interrupt Module PLIB Header File

  Description:
    None

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
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

#ifndef PLIB_EVIC_H
#define PLIB_EVIC_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include <device.h>
#include <stddef.h>
#include <stdbool.h>
#include <device.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END



// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************

typedef enum
{
    INT_SOURCE_CORE_TIMER = _CORE_TIMER_VECTOR,

    INT_SOURCE_CORE_SOFTWARE_0 = _CORE_SOFTWARE_0_VECTOR,

    INT_SOURCE_CORE_SOFTWARE_1 = _CORE_SOFTWARE_1_VECTOR,

    INT_SOURCE_EXTERNAL_0 = _EXTERNAL_0_VECTOR,

    INT_SOURCE_TIMER_1 = _TIMER_1_VECTOR,

    INT_SOURCE_INPUT_CAPTURE_1_ERROR = _INPUT_CAPTURE_1_ERROR_VECTOR,

    INT_SOURCE_INPUT_CAPTURE_1 = _INPUT_CAPTURE_1_VECTOR,

    INT_SOURCE_OUTPUT_COMPARE_1 = _OUTPUT_COMPARE_1_VECTOR,

    INT_SOURCE_EXTERNAL_1 = _EXTERNAL_1_VECTOR,

    INT_SOURCE_TIMER_2 = _TIMER_2_VECTOR,

    INT_SOURCE_INPUT_CAPTURE_2_ERROR = _INPUT_CAPTURE_2_ERROR_VECTOR,

    INT_SOURCE_INPUT_CAPTURE_2 = _INPUT_CAPTURE_2_VECTOR,

    INT_SOURCE_OUTPUT_COMPARE_2 = _OUTPUT_COMPARE_2_VECTOR,

    INT_SOURCE_EXTERNAL_2 = _EXTERNAL_2_VECTOR,

    INT_SOURCE_TIMER_3 = _TIMER_3_VECTOR,

    INT_SOURCE_INPUT_CAPTURE_3_ERROR = _INPUT_CAPTURE_3_ERROR_VECTOR,

    INT_SOURCE_INPUT_CAPTURE_3 = _INPUT_CAPTURE_3_VECTOR,

    INT_SOURCE_OUTPUT_COMPARE_3 = _OUTPUT_COMPARE_3_VECTOR,

    INT_SOURCE_EXTERNAL_3 = _EXTERNAL_3_VECTOR,

    INT_SOURCE_TIMER_4 = _TIMER_4_VECTOR,

    INT_SOURCE_INPUT_CAPTURE_4_ERROR = _INPUT_CAPTURE_4_ERROR_VECTOR,

    INT_SOURCE_INPUT_CAPTURE_4 = _INPUT_CAPTURE_4_VECTOR,

    INT_SOURCE_OUTPUT_COMPARE_4 = _OUTPUT_COMPARE_4_VECTOR,

    INT_SOURCE_EXTERNAL_4 = _EXTERNAL_4_VECTOR,

    INT_SOURCE_TIMER_5 = _TIMER_5_VECTOR,

    INT_SOURCE_RTCC = _RTCC_VECTOR,

    INT_SOURCE_FLASH_CONTROL = _FLASH_CONTROL_VECTOR,

    INT_SOURCE_COMPARATOR_1 = _COMPARATOR_1_VECTOR,

    INT_SOURCE_COMPARATOR_2 = _COMPARATOR_2_VECTOR,

    INT_SOURCE_SPI1_FAULT = _SPI1_FAULT_VECTOR,

    INT_SOURCE_SPI1_RX = _SPI1_RX_VECTOR,

    INT_SOURCE_SPI1_TX = _SPI1_TX_VECTOR,

    INT_SOURCE_UART1_FAULT = _UART1_FAULT_VECTOR,

    INT_SOURCE_UART1_RX = _UART1_RX_VECTOR,

    INT_SOURCE_UART1_TX = _UART1_TX_VECTOR,

    INT_SOURCE_I2C1_BUS = _I2C1_BUS_VECTOR,

    INT_SOURCE_I2C1_SLAVE = _I2C1_SLAVE_VECTOR,

    INT_SOURCE_I2C1_MASTER = _I2C1_MASTER_VECTOR,

    INT_SOURCE_CHANGE_NOTICE_A = _CHANGE_NOTICE_A_VECTOR,

    INT_SOURCE_CHANGE_NOTICE_B = _CHANGE_NOTICE_B_VECTOR,

    INT_SOURCE_CHANGE_NOTICE_C = _CHANGE_NOTICE_C_VECTOR,

    INT_SOURCE_CHANGE_NOTICE_D = _CHANGE_NOTICE_D_VECTOR,

    INT_SOURCE_SPI2_FAULT = _SPI2_FAULT_VECTOR,

    INT_SOURCE_SPI2_RX = _SPI2_RX_VECTOR,

    INT_SOURCE_SPI2_TX = _SPI2_TX_VECTOR,

    INT_SOURCE_UART2_FAULT = _UART2_FAULT_VECTOR,

    INT_SOURCE_UART2_RX = _UART2_RX_VECTOR,

    INT_SOURCE_UART2_TX = _UART2_TX_VECTOR,

    INT_SOURCE_I2C2_BUS = _I2C2_BUS_VECTOR,

    INT_SOURCE_I2C2_SLAVE = _I2C2_SLAVE_VECTOR,

    INT_SOURCE_I2C2_MASTER = _I2C2_MASTER_VECTOR,

    INT_SOURCE_CTMU = _CTMU_VECTOR,

    INT_SOURCE_DMA0 = _DMA0_VECTOR,

    INT_SOURCE_DMA1 = _DMA1_VECTOR,

    INT_SOURCE_DMA2 = _DMA2_VECTOR,

    INT_SOURCE_DMA3 = _DMA3_VECTOR,

    INT_SOURCE_ADC = _ADC_VECTOR,

    INT_SOURCE_ADC_DC1 = _ADC_DC1_VECTOR,

    INT_SOURCE_ADC_DC2 = _ADC_DC2_VECTOR,

    INT_SOURCE_ADC_DF1 = _ADC_DF1_VECTOR,

    INT_SOURCE_ADC_DF2 = _ADC_DF2_VECTOR,

    INT_SOURCE_ADC_FAULT = _ADC_FAULT_VECTOR,

    INT_SOURCE_ADC_EOS = _ADC_EOS_VECTOR,

    INT_SOURCE_ADC_ARDY = _ADC_ARDY_VECTOR,

    INT_SOURCE_ADC_URDY = _ADC_URDY_VECTOR,

    INT_SOURCE_ADC_DMA = _ADC_DMA_VECTOR,

    INT_SOURCE_ADC_EARLY = _ADC_EARLY_VECTOR,

    INT_SOURCE_ADC_DATA0 = _ADC_DATA0_VECTOR,

    INT_SOURCE_ADC_DATA1 = _ADC_DATA1_VECTOR,

    INT_SOURCE_ADC_DATA2 = _ADC_DATA2_VECTOR,

    INT_SOURCE_ADC_DATA3 = _ADC_DATA3_VECTOR,

    INT_SOURCE_ADC_DATA4 = _ADC_DATA4_VECTOR,

    INT_SOURCE_ADC_DATA5 = _ADC_DATA5_VECTOR,

    INT_SOURCE_ADC_DATA6 = _ADC_DATA6_VECTOR,

    INT_SOURCE_ADC_DATA7 = _ADC_DATA7_VECTOR,

    INT_SOURCE_ADC_DATA8 = _ADC_DATA8_VECTOR,

    INT_SOURCE_ADC_DATA9 = _ADC_DATA9_VECTOR,

    INT_SOURCE_ADC_DATA10 = _ADC_DATA10_VECTOR,

    INT_SOURCE_ADC_DATA11 = _ADC_DATA11_VECTOR,

    INT_SOURCE_ADC_DATA12 = _ADC_DATA12_VECTOR,

    INT_SOURCE_ADC_DATA13 = _ADC_DATA13_VECTOR,

    INT_SOURCE_ADC_DATA14 = _ADC_DATA14_VECTOR,

    INT_SOURCE_ADC_DATA15 = _ADC_DATA15_VECTOR,

    INT_SOURCE_ADC_DATA16 = _ADC_DATA16_VECTOR,

    INT_SOURCE_ADC_DATA17 = _ADC_DATA17_VECTOR,

    INT_SOURCE_ADC_DATA50 = _ADC_DATA50_VECTOR,

    INT_SOURCE_ADC_DATA53 = _ADC_DATA53_VECTOR,

    INT_SOURCE_COMPARATOR_3 = _COMPARATOR_3_VECTOR,

    INT_SOURCE_QEI1 = _QEI1_VECTOR,

    INT_SOURCE_QEI2 = _QEI2_VECTOR,

    INT_SOURCE_PWM_PRI = _PWM_PRI_VECTOR,

    INT_SOURCE_PWM_SEC = _PWM_SEC_VECTOR,

    INT_SOURCE_PWM1 = _PWM1_VECTOR,

    INT_SOURCE_PWM2 = _PWM2_VECTOR,

    INT_SOURCE_PWM3 = _PWM3_VECTOR,

    INT_SOURCE_PWM4 = _PWM4_VECTOR,

    INT_SOURCE_DMA4 = _DMA4_VECTOR,

    INT_SOURCE_DMA5 = _DMA5_VECTOR,

    INT_SOURCE_DMA6 = _DMA6_VECTOR,

    INT_SOURCE_DMA7 = _DMA7_VECTOR,

    INT_SOURCE_SYSTEM_BUS_PROTECTION = _SYSTEM_BUS_PROTECTION_VECTOR,

    INT_SOURCE_PCACHE = _PCACHE_VECTOR,

    INT_SOURCE_CLC1 = _CLC1_VECTOR,

    INT_SOURCE_CORE_PERF_COUNT = _CORE_PERF_COUNT_VECTOR,

    INT_SOURCE_CORE_FAST_DEBUG_CHAN = _CORE_FAST_DEBUG_CHAN_VECTOR,

} INT_SOURCE;


// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

void EVIC_Initialize ( void );

void EVIC_SourceEnable( INT_SOURCE source );

void EVIC_SourceDisable( INT_SOURCE source );

bool EVIC_SourceIsEnabled( INT_SOURCE source );

bool EVIC_SourceStatusGet( INT_SOURCE source );

void EVIC_SourceStatusSet( INT_SOURCE source );

void EVIC_SourceStatusClear( INT_SOURCE source );

void EVIC_INT_Enable( void );

bool EVIC_INT_Disable( void );

void EVIC_INT_Restore( bool state );


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif
// DOM-IGNORE-END

#endif // PLIB_EVIC_H
