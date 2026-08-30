#include "telemetry/json_builder.h"
#include <ArduinoJson.h>

String JsonBuilder::createTelemetryPayload(
    const String& deviceID,
    float distance,
    const String& status)
{
    StaticJsonDocument<512> document;

    document["deviceId"] = deviceID;
    document["distance"] = distance;
    document["status"] = status;
    document["timestamp"] = millis();

    String payload;

    serializeJson(document, payload);

    return payload;
}