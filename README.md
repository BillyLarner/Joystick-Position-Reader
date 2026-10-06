# Joystick Position Reader

An Arduino-based embedded systems project that reads the position of a two-axis joystick and the state of its integrated push-button, then outputs the measurements through the serial monitor.

## Overview

This project was developed using an Arduino Uno and a joystick module as an introduction to analogue and digital input handling in embedded systems.

The joystick provides two analogue signals representing its X and Y positions, while the integrated push-button provides a digital input. The Arduino continuously reads these inputs and transmits the results over a serial connection.

## Hardware

- Arduino Uno
- Joystick module
- 5 × male/female jumper cables
- USB cable

## Pin Configuration

| Function | Arduino Pin | Input Type |

| X-axis | A0 | Analogue |
| Y-axis | A1 | Analogue |
| Z-axis / Push-button | D8 | Digital |

The push-button input uses the Arduino's internal pull-up resistor.

## How It Works

The Arduino periodically samples the joystick:

1. The X-axis voltage is read using `analogRead()`.
2. The Y-axis voltage is read using `analogRead()`.
3. The push-button state is read using `digitalRead()`.
4. The measured values are transmitted through the serial interface.
5. The process repeats every 200 ms.

The analogue inputs are returned as the Arduino's ADC reading, allowing the joystick position to be represented numerically.

## Serial Output

The system communicates using a baud rate of **9600**.
