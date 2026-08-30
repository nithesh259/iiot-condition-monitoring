#include "services/telemetry_service.h"
#include "telemetry/json_builder.h"
#include "config/config.h"
#include "config/mqtt_config.h"

TelemetryService::TelemetryService(
    SensorManager& sensorManager,
    MQTTService& mqttService)
    : sensorManager(sensorManager),
      mqttService(mqttService)
{
}

void TelemetryService::publishTelemetry()
{
    SensorData data = sensorManager.readSensors();

    String payload =
        JsonBuilder::createTelemetryPayload(
            DEVICE_ID,
            data.distance,
            "NORMAL");

    mqttService.publish(
        MQTT_PUBLISH_TOPIC,
        payload.c_str());
}