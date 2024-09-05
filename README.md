# RaspberryPi-Arduino-I2C-Communication
Applications involving I2C communication between Raspberry Pi and Arduino are available. Data transfers occur using I2C communication between Raspberry Pi and Arduino.

Raspberry Pi WiringPi Library: To enable I2C communication on Raspberry Pi, the WiringPi library is used. To install the WiringPi library on Raspberry Pi:

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

Arduino Used: Arduino Uno, Arduino Mega

Arduino IDE Version: 2.2.0

Raspberry Pi Used: RPI3, RPI4

Raspberry Pi IDE Version: QT IDE

Arduino - Raspberry Pi Connection Diagram: Connections are made through standard I2C pins.