#include "drivers/ads1115_driver.h"

bool ADS1115Driver::begin()
{
    return true;
}

float ADS1115Driver::readVoltage(uint8_t channel)
{
    (void)channel;

    return 2.50f;
}

int16_t ADS1115Driver::readRaw(uint8_t channel)
{
    (void)channel;

    return 16384;
}