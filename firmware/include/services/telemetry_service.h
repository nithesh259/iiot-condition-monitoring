#ifndef TELEMETRY_SERVICE_H
#define TELEMETRY_SERVICE_H

#include "sensors/sensor_manager.h"
#include "network/mqtt_service.h"

class TelemetryService
{
public:

    TelemetryService(
        SensorManager& sensorManager,
        MQTTService& mqttService);

    void publishTelemetry();

private:

    SensorManager& sensorManager;
    MQTTService& mqttService;
};

#endif