#include "sensors/sensor_manager.h"

void SensorManager::begin()
{
    ultrasonicSensor.begin();
}

SensorData SensorManager::readSensors()
{
    SensorData data;

    data.distance = ultrasonicSensor.readDistance();

    return data;
}