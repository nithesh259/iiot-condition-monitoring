#include "app/app.h"

#include "config/config.h"
#include "config/wifi_config.h"
#include "config/mqtt_config.h"

Application::Application()
    :
    telemetryService(sensorManager, mqttService),
    telemetryTimer(TELEMETRY_INTERVAL_MS)
{
}

void Application::begin()
{
    sensorManager.begin();

    wifiService.begin(
        WIFI_SSID,
        WIFI_PASSWORD);

    mqttService.begin(
        wifiClient,
        MQTT_BROKER,
        MQTT_PORT);

    mqttService.connect(
        MQTT_CLIENT_ID,
        MQTT_USERNAME,
        MQTT_PASSWORD);
}

void Application::loop()
{
    wifiService.loop();

    mqttService.loop();

    if (telemetryTimer.isReady())
    {
        telemetryService.publishTelemetry();
    }
}