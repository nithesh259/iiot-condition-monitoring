#ifndef MQTT_SERVICE_H
#define MQTT_SERVICE_H

#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>

class MQTTService
{
public:
    MQTTService();

    void begin(
        WiFiClient& wifiClient,
        const char* broker,
        uint16_t port
    );

    void loop();

    bool connect(
        const char* clientID,
        const char* username,
        const char* password
    );

    bool publish(
        const char* topic,
        const char* payload
    );

    bool subscribe(
        const char* topic
    );

    bool isConnected();

private:
    PubSubClient client;
};

#endif