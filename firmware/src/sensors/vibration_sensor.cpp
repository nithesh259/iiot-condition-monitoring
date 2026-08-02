#include <Arduino.h>
#include "sensors/vibration_sensor.h"

void VibrationSensor::begin()
{
}

float VibrationSensor::readVibration()
{
    return random(0, 100) / 1000.0;
}