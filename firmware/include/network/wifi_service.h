#ifndef WIFI_SERVICE_H
#define WIFI_SERVICE_H

#include <Arduino.h>
#include <WiFi.h>

class WiFiService
{
public:
    WiFiService();

    void begin(const char* ssid, const char* password);

    void loop();

    bool isConnected();

    String getIPAddress();

    int getRSSI();

    void disconnect();

private:
    const char* wifiSSID;
    const char* wifiPassword;

    unsigned long previousReconnectAttempt;

    void reconnect();
};

#endif