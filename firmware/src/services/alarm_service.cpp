#include "services/alarm_service.h"

bool AlarmService::isTemperatureHigh(float value)
{
    return value > 60.0;
}

bool AlarmService::isCurrentHigh(float value)
{
    return value > 8.0;
}

bool AlarmService::isVibrationHigh(float value)
{
    return value > 2.0;
}