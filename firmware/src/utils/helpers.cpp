#include "utils/helpers.h"

float Helpers::celsiusToFahrenheit(float celsius)
{
    return (celsius * 9.0f / 5.0f) + 32.0f;
}

float Helpers::roundValue(float value, uint8_t decimalPlaces)
{
    float multiplier = 1;

    for (uint8_t i = 0; i < decimalPlaces; i++)
    {
        multiplier *= 10;
    }

    return round(value * multiplier) / multiplier;
}

String Helpers::generateDeviceID()
{
    return "ESP32-001";
}