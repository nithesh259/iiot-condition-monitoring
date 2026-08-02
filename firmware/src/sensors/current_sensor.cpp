#include <Arduino.h>
#include "sensors/current_sensor.h"

void CurrentSensor::begin()
{
}

float CurrentSensor::readCurrent()
{
    return random(100, 500) / 100.0;
}