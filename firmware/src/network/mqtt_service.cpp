#include "network/mqtt_service.h"

MQTTService::MQTTService()
{
}

void MQTTService::begin(
    WiFiClient& wifiClient,
    const char* broker,
    uint16_t port)
{
    client.setClient(wifiClient);
    client.setServer(broker, port);
}

void MQTTService::loop()
{
    client.loop();
}

bool MQTTService::connect(
    const char* clientID,
    const char* username,
    const char* password)
{
    return client.connect(clientID, username, password);
}

bool MQTTService::publish(
    const char* topic,
    const char* payload)
{
    return client.publish(topic, payload);
}

bool MQTTService::subscribe(
    const char* topic)
{
    return client.subscribe(topic);
}

bool MQTTService::isConnected()
{
    return client.connected();
}