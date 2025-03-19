# RaspberryPi-Arduino-I2C-Comm
Contains Raspberry Pi and Arduino applications. The purpose of the applications is to perform data transfers between Raspberry Pi and Arduino using I2C communication.

RaspberryPiI2CComm:

Programming Language: C++ Programming Language

Framework: Qt5 - Qt 5.11.3

IDE: Qt Creator 4.8.2

Device: Raspberry Pi-3, Raspberry Pi-4

Library:

- Raspberry Pi WiringPi: The WiringPi library is included to use I2C communication on Raspberry Pi. To install the WiringPi library on Raspberry Pi:

Check if the system is up to date.

- sudo apt update

- sudo apt upgrade

Install the library.

- sudo apt install wiringpi

Verify that the WiringPi library is correctly installed.

- gpio -v

An alternative method to install the WiringPi library on Raspberry Pi:

Download the source code.

- git clone https://github.com/WiringPi/WiringPi.git

Compile and install the source code:

- cd WiringPi

- sudo ./build

After installing the WiringPi library on Raspberry Pi, the I2C option should be enabled from the Raspberry Pi interface.

Raspberry Pi Connection Diagram: The Raspberry Pi's I2C pins are connected to the Arduino's I2C pins.

ArduinoI2CComm:

Programming Language: C/C++ Programming Language

IDE: Arduino IDE Version - 2.2.0

Arduino Used: Arduino Uno, Arduino Mega

Arduino Connection Diagram: The Arduino's I2C pins are connected to the Raspberry Pi's I2C pins.