#pragma once

// Load default values, then change the ones we want to.

#include "Extended.config.h.default"

#undef DEBUG 
#define DEBUG VERBOSE

#undef SERIAL_DEBUG_BAUD
#define SERIAL_DEBUG_BAUD 115200

#undef SERIAL_IP_MODE
#define SERIAL_IP_MODE                STATION

#undef ONSTEP1_HOST_NAME
#undef ONSTEP1_SSID
#undef ONSTEP1_PASSWORD
#undef ONSTEP1_IP_ADDR

#define ONSTEP1_HOST_NAME	"OnStep Celestron"
#define ONSTEP1_SSID            "ONSTEP Celestron"
#define ONSTEP1_PASSWORD        "password"
#define ONSTEP1_IP_ADDR         {192,168,0,1}

#undef ONSTEP2_HOST_NAME
#undef ONSTEP2_SSID
#undef ONSTEP2_PASSWORD
#undef ONSTEP2_IP_ADDR

#define ONSTEP2_HOST_NAME       "OnStep Losmandy"
#define ONSTEP2_SSID            "ONSTEP Losmandy"
#define ONSTEP2_PASSWORD        "password"
#define ONSTEP2_IP_ADDR         {192,168,0,1}

