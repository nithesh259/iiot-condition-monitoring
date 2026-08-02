#ifndef CURRENT_SENSOR_H
#define CURRENT_SENSOR_H

class CurrentSensor
{
public:
    void begin();

    float readCurrent();
};

#endif