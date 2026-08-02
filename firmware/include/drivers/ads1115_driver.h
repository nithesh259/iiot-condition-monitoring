#ifndef ADS1115_DRIVER_H
#define ADS1115_DRIVER_H

#include <Arduino.h>

class ADS1115Driver
{
public:

    bool begin();

    float readVoltage(uint8_t channel);

    int16_t readRaw(uint8_t channel);

};

#endif