#include "telemetry/json_builder.h"
#include <ArduinoJson.h>

String JsonBuilder::createTelemetryPayload(
    const String& deviceID,
    float temperature,
    float current,
    float vibration,
    const String& status)
{
    StaticJsonDocument<512> document;

    document["deviceId"] = deviceID;
    document["temperature"] = temperature;
    document["current"] = current;
    document["vibration"] = vibration;
    document["status"] = status;
    document["timestamp"] = millis();

    String payload;

    serializeJson(document, payload);

    return payload;
}