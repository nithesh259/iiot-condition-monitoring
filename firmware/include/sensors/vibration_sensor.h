#ifndef VIBRATION_SENSOR_H
#define VIBRATION_SENSOR_H

class VibrationSensor
{
public:
    void begin();

    float readVibration();
};

#endif