#include <Arduino.h>
#include "utils/timer.h"

Timer::Timer(unsigned long interval)
{
    this->interval = interval;
    previousMillis = 0;
}

bool Timer::isReady()
{
    unsigned long currentMillis = millis();

    if (currentMillis - previousMillis >= interval)
    {
        previousMillis = currentMillis;
        return true;
    }

    return false;
}

void Timer::reset()
{
    previousMillis = millis();
}