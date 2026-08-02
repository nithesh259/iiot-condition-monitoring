#include "sensors/sensor_manager.h"

void SensorManager::begin()
{
    temperatureSensor.begin();
    currentSensor.begin();
    vibrationSensor.begin();
}

SensorData SensorManager::readSensors()
{
    SensorData data;

    data.temperature = temperatureSensor.readTemperature();
    data.current = currentSensor.readCurrent();
    data.vibration = vibrationSensor.readVibration();

    return data;
}