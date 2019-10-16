# CY8CPROTO-063-BLE BSP

## Overview

The PSoC 6 BLE Prototyping Kit (CY8CPROTO-063-BLE) is a low-cost hardware platform that enables design and debug of PSoC 6 MCUs. This kit is designed with a snap-away form-factor, allowing users to separate the KitProg (on-board programmer and debugger) from the target board and use independently.
![](docs/html/board.png)

To use code from the BSP, simply include a reference to `cybsp.h`.

## Features

### Kit Features:

* BLE 5.0 certified Cypress CYBLE-416045-02 EZ-BLE module with onboard crystal oscillators, trace antenna, passive components and PSoC 63 MCU
* Up to 36 GPIOs in a 14x18.5x2 mm package
* Supports digital programmable logic, capacitive-sensing with CapSense, a PDM-PCM digital microphone interface, a Quad-SPI interface, high-performance analog-to-digital converter (ADC), low-power comparators, and standard communication and timing peripherals.

### Kit Contents:

* PSoC 6 BLE Prototyping Board
* USB Type-A to Micro-B cable
* Quick Start Guide

## BSP Configuration

### Clock Configuration

| Clock    | Source    | Output Frequency |
|----------|-----------|------------------|
| CLK_HF0  | CLK_PATH0 | 100 MHz          |

### Power Configuration

* System Active Power Mode: LP
* System Idle Power Mode: Deep Sleep
* VDDA Voltage: 3300 mV
* VDDD Voltage: 3300 mV

## API Reference Manual

The CY8CPROTO-063-BLE Board Support Package provides a set of APIs to configure, initialize and use the board resources.

See the [BSP API Reference Manual][api] for the complete list of the provided interfaces.

## More information
* [CY8CPROTO-063-BLE BSP API Reference Manual][api]
* [CY8CPROTO-063-BLE Documentation](http://www.cypress.com/CY8CPROTO-063-BLE)
* [Cypress Semiconductor](http://www.cypress.com)
* [Cypress Semiconductor GitHub](https://github.com/cypresssemiconductorco)
* [ModusToolbox](https://www.cypress.com/products/modustoolbox-software-environment)

[api]: https://cypresssemiconductorco.github.io/TARGET_CY8CPROTO-063-BLE/html/modules.html

---
© Cypress Semiconductor Corporation, 2019.