/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5972
* mtb-pdl-cat1 2.4.0.13881
* personalities 6.0.0.0
* udd 3.0.0.1974
*
********************************************************************************
* Copyright 2022 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define WCO_IN_ENABLED 1U
#define WCO_IN_PORT GPIO_PRT0
#define WCO_IN_PORT_NUM 0U
#define WCO_IN_PIN 0U
#define WCO_IN_NUM 0U
#define WCO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_0_HSIOM
    #define ioss_0_port_0_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_IN_HSIOM ioss_0_port_0_pin_0_HSIOM
#define WCO_IN_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define WCO_IN_HAL_PORT_PIN P0_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_IN P0_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define WCO_OUT_ENABLED 1U
#define WCO_OUT_PORT GPIO_PRT0
#define WCO_OUT_PORT_NUM 0U
#define WCO_OUT_PIN 1U
#define WCO_OUT_NUM 1U
#define WCO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_1_HSIOM
    #define ioss_0_port_0_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_OUT_HSIOM ioss_0_port_0_pin_1_HSIOM
#define WCO_OUT_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
    #define WCO_OUT_HAL_PORT_PIN P0_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_OUT P0_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define WCO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_SW2 (P0_4)
    #define CYBSP_USER_BTN1 CYBSP_SW2
    #define CYBSP_USER_BTN CYBSP_SW2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_UART_RX (P5_0)
    #define CYBSP_DEBUG_UART_RX CYBSP_UART_RX
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_UART_TX (P5_1)
    #define CYBSP_DEBUG_UART_TX CYBSP_UART_TX
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED3 (P6_3)
    #define CYBSP_USER_LED1 CYBSP_LED3
    #define CYBSP_USER_LED CYBSP_LED3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SCL (P6_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_I2C_SDA (P6_5)
#endif //defined (CY_USING_HAL)
#define SWDIO_ENABLED 1U
#define CYBSP_SWDIO_ENABLED SWDIO_ENABLED
#define SWDIO_PORT GPIO_PRT6
#define CYBSP_SWDIO_PORT SWDIO_PORT
#define SWDIO_PORT_NUM 6U
#define CYBSP_SWDIO_PORT_NUM SWDIO_PORT_NUM
#define SWDIO_PIN 6U
#define CYBSP_SWDIO_PIN SWDIO_PIN
#define SWDIO_NUM 6U
#define CYBSP_SWDIO_NUM SWDIO_NUM
#define SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_SWDIO_DRIVEMODE SWDIO_DRIVEMODE
#define SWDIO_INIT_DRIVESTATE 1
#define CYBSP_SWDIO_INIT_DRIVESTATE SWDIO_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_6_HSIOM
    #define ioss_0_port_6_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define SWDIO_HSIOM ioss_0_port_6_pin_6_HSIOM
#define CYBSP_SWDIO_HSIOM SWDIO_HSIOM
#define SWDIO_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_SWDIO_IRQ SWDIO_IRQ
#if defined (CY_USING_HAL)
    #define SWDIO_HAL_PORT_PIN P6_6
    #define CYBSP_SWDIO_HAL_PORT_PIN SWDIO_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWDIO P6_6
    #define CYBSP_SWDIO SWDIO
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_SWDIO_HAL_IRQ SWDIO_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CYBSP_SWDIO_HAL_DIR SWDIO_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
    #define CYBSP_SWDIO_HAL_DRIVEMODE SWDIO_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define SWCLK_ENABLED 1U
#define CYBSP_SWDCK_ENABLED SWCLK_ENABLED
#define SWCLK_PORT GPIO_PRT6
#define CYBSP_SWDCK_PORT SWCLK_PORT
#define SWCLK_PORT_NUM 6U
#define CYBSP_SWDCK_PORT_NUM SWCLK_PORT_NUM
#define SWCLK_PIN 7U
#define CYBSP_SWDCK_PIN SWCLK_PIN
#define SWCLK_NUM 7U
#define CYBSP_SWDCK_NUM SWCLK_NUM
#define SWCLK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define CYBSP_SWDCK_DRIVEMODE SWCLK_DRIVEMODE
#define SWCLK_INIT_DRIVESTATE 1
#define CYBSP_SWDCK_INIT_DRIVESTATE SWCLK_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_7_HSIOM
    #define ioss_0_port_6_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define SWCLK_HSIOM ioss_0_port_6_pin_7_HSIOM
#define CYBSP_SWDCK_HSIOM SWCLK_HSIOM
#define SWCLK_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_SWDCK_IRQ SWCLK_IRQ
#if defined (CY_USING_HAL)
    #define SWCLK_HAL_PORT_PIN P6_7
    #define CYBSP_SWDCK_HAL_PORT_PIN SWCLK_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWCLK P6_7
    #define CYBSP_SWDCK SWCLK
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWCLK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_SWDCK_HAL_IRQ SWCLK_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWCLK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CYBSP_SWDCK_HAL_DIR SWCLK_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define SWCLK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
    #define CYBSP_SWDCK_HAL_DRIVEMODE SWCLK_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_LED4 (P7_1)
    #define CYBSP_USER_LED2 CYBSP_LED4
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t WCO_IN_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t WCO_IN_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t WCO_OUT_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t WCO_OUT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SWDIO_config;
#define CYBSP_SWDIO_config SWDIO_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SWDIO_obj;
    #define CYBSP_SWDIO_obj SWDIO_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SWCLK_config;
#define CYBSP_SWDCK_config SWCLK_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SWCLK_obj;
    #define CYBSP_SWDCK_obj SWCLK_obj
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
