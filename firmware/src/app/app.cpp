#include "app/app.h"

#include "config/config.h"
#include "config/wifi_config.h"
#include "config/mqtt_config.h"

Application::Application()
    : telemetryService(sensorManager, mqttService),
      telemetryTimer(TELEMETRY_INTERVAL_MS)
{
}

void Application::begin()
{
    // Initialize sensors
    sensorManager.begin();

    // Connect to Wi-Fi
    wifiService.begin(
        WIFI_SSID,
        WIFI_PASSWORD);

    // Initialize MQTT
    mqttService.begin(
        wifiClient,
        MQTT_BROKER,
        MQTT_PORT);

    // Connect to MQTT Broker
    mqttService.connect(
        MQTT_CLIENT_ID,
        MQTT_USERNAME,
        MQTT_PASSWORD);
}

void Application::loop()
{
    // Maintain Wi-Fi connection
    wifiService.loop();

    // Maintain MQTT connection
    mqttService.loop();

    // Publish telemetry periodically
    if (telemetryTimer.isReady())
    {
        telemetryService.publishTelemetry();
    }
}