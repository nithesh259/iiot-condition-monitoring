#ifndef JSON_BUILDER_H
#define JSON_BUILDER_H

#include <Arduino.h>

class JsonBuilder
{
public:

    static String createTelemetryPayload(
        const String& deviceID,
        float distance,
        const String& status
    );

};

#endif