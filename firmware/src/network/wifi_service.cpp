#include "network/wifi_service.h"

WiFiService::WiFiService()
{
    wifiSSID = nullptr;
    wifiPassword = nullptr;
    previousReconnectAttempt = 0;
}

void WiFiService::begin(const char* ssid, const char* password)
{
    wifiSSID = ssid;
    wifiPassword = password;

    WiFi.mode(WIFI_STA);
    WiFi.begin(wifiSSID, wifiPassword);
}

void WiFiService::loop()
{
    if (!isConnected())
    {
        if (millis() - previousReconnectAttempt >= 5000)
        {
            previousReconnectAttempt = millis();
            reconnect();
        }
    }
}

bool WiFiService::isConnected()
{
    return WiFi.status() == WL_CONNECTED;
}

void WiFiService::reconnect()
{
    WiFi.disconnect();
    delay(500);
    WiFi.begin(wifiSSID, wifiPassword);
}

String WiFiService::getIPAddress()
{
    return WiFi.localIP().toString();
}

int WiFiService::getRSSI()
{
    return WiFi.RSSI();
}

void WiFiService::disconnect()
{
    WiFi.disconnect(true);
}