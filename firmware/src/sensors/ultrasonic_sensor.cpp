#include <Arduino.h>

#include "sensors/ultrasonic_sensor.h"
#include "config/pin_config.h"

void UltrasonicSensor::begin()
{
    pinMode(ULTRASONIC_TRIG_PIN, OUTPUT);
    pinMode(ULTRASONIC_ECHO_PIN, INPUT);

    digitalWrite(ULTRASONIC_TRIG_PIN, LOW);
}

float UltrasonicSensor::readDistance()
{
    digitalWrite(ULTRASONIC_TRIG_PIN, LOW);
    delayMicroseconds(2);

    digitalWrite(ULTRASONIC_TRIG_PIN, HIGH);
    delayMicroseconds(10);

    digitalWrite(ULTRASONIC_TRIG_PIN, LOW);

    long duration = pulseIn(
        ULTRASONIC_ECHO_PIN,
        HIGH,
        30000
    );

    if (duration == 0)
    {
        return -1.0;
    }

    float distance = duration * 0.0343 / 2.0;

    return distance;
}