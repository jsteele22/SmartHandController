This is a fork of github.com/hjd1964/SmartHandController.

The main focus is to port the SHC to new ESP32 hardware, namely the
the Sparkfun ESP32-S2 ThingPlus, which is based on a ESP32-S2-WROOM
module.

The hope is that this specific port can provide an example of how to
port the code to the ever-expanding variety of ESP32 modules and
boards out there.

Changes in the top-level directory are mostly relevant to my
particular setup and need not be copied.  Note, however, the file
platformio.ini which completely configures the project for building
with PlatfomIO, an alternative to the Arduino IDE.


Changes so far:
  * add custom pinmap for Thing Plus board
  src/pinmaps/Model.h 
  src/pinmaps/Pins.Esp32_S2_Thing_Plus.h
