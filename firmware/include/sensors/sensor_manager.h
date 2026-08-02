#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include "sensors/temperature_sensor.h"
#include "sensors/current_sensor.h"
#include "sensors/vibration_sensor.h"

struct SensorData
{
    float temperature;
    float current;
    float vibration;
};

class SensorManager
{
public:
    void begin();

    SensorData readSensors();

private:
    TemperatureSensor temperatureSensor;
    CurrentSensor currentSensor;
    VibrationSensor vibrationSensor;
};

#endif