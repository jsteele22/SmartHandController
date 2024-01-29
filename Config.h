#pragma once

// Load default values, then change the ones we want to.
#include "Config.h.default"

#undef DISPLAY_OLED
#define DISPLAY_OLED               SSD1309

#undef SERIAL_ONSTEP
#define SERIAL_ONSTEP          SERIAL_IP

#undef SERIAL_ONSTEP_BAUD_DEFAULT
#define SERIAL_ONSTEP_BAUD_DEFAULT 115200


// Continue on to Extended Configuration

#include "Extended.config.h"
