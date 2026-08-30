#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H

class UltrasonicSensor
{
public:
    void begin();

    float readDistance();
};

#endif