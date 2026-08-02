#ifndef HELPERS_H
#define HELPERS_H

#include <Arduino.h>

class Helpers
{
public:

    static float celsiusToFahrenheit(float celsius);

    static float roundValue(float value, uint8_t decimalPlaces);

    static String generateDeviceID();
};

#endif