#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include "sensors/ultrasonic_sensor.h"

struct SensorData
{
    float distance;
};

class SensorManager
{
public:
    void begin();

    SensorData readSensors();

private:
    UltrasonicSensor ultrasonicSensor;
};

#endif