#ifndef ALARM_SERVICE_H
#define ALARM_SERVICE_H

#include "sensors/sensor_manager.h"

class AlarmService
{
public:

    bool isTemperatureHigh(float value);

    bool isCurrentHigh(float value);

    bool isVibrationHigh(float value);
};

#endif