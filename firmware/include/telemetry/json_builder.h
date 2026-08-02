#ifndef JSON_BUILDER_H
#define JSON_BUILDER_H

#include <Arduino.h>

class JsonBuilder
{
public:

    static String createTelemetryPayload(
        const String& deviceID,
        float temperature,
        float current,
        float vibration,
        const String& status
    );

};

#endif