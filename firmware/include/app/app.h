#ifndef APP_H
#define APP_H

#include <WiFi.h>

#include "network/wifi_service.h"
#include "network/mqtt_service.h"

#include "sensors/sensor_manager.h"

#include "services/telemetry_service.h"

#include "utils/timer.h"

class Application
{
public:

    Application();          // <-- ADD THIS LINE

    void begin();

    void loop();

private:

    WiFiClient wifiClient;

    WiFiService wifiService;

    MQTTService mqttService;

    SensorManager sensorManager;

    TelemetryService telemetryService;

    Timer telemetryTimer;
};

#endif