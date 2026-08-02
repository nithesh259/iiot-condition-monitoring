#include <Arduino.h>
#include "sensors/temperature_sensor.h"

void TemperatureSensor::begin()
{
}

float TemperatureSensor::readTemperature()
{
    return random(250, 350) / 10.0;
}