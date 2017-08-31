
# nRF51822-Arduino
===

This branch is to provide BLE concurrent Central and Peripheral using Nordic SoftDevice S130 and also provides support for the Arduino IDE to compile nRF51822 firmware. This aims to provide fast prototyping and learning the IoT development using the Bluetooth Low Engergy (BLE) technology.

This board package add-on also provides BLE API for the nRF51822 SoC to act as BLE Central/Peripheral role designed for SoftDevice S130.

* Note: Unless you know how to do with this repository and want to contribute your code, otherwise, please use Arduino IDE's Boards Manager to install the board support package (e.g. for the RBL_nRF51822 and the BLE Nano boards).


# Features
===

* Adds support for the Arduino IDE enables compiling firmwares for the Kontakt.io's **Smart Beacon**.
* Upload sketches using OpenOCD.
* Provides BLE API for SoftDevice S130 with concurrent BLE Central and Peripheral role support.

# Requirements
===

1. [J-Link](https://www.segger.com/products/debug-probes/j-link/) with [Tag Connect](http://www.tag-connect.com/) Cable 

1. Kontakt.io's **Smart Beacon**

2. PC with one of the following OS:
    - Mac OSX 10.11.x
    - Windows 10
    - Linux

3. Arduino IDE version 1.6.9 (current tested version).

4. Board support package add-on 1.0.0 (current tested version).

# Getting Started
===

## Install Board Package Add-on

1. Get Arduino IDE from Arduino website and install it to your PC
  
  http://arduino.cc/en/Main/Software

2. Start the IDE and from the Menu, click "Preference...", add the following line to "Additional Boards Manager URLs"
 
  https://kontakt-mobile.s3.amazonaws.com/package_kontaktio_index.json
  
3. Install the "Kontakt.io Beacons" add-on via Boards Manager from the Menu: Tools -> Board -> Boards Manager ... 
