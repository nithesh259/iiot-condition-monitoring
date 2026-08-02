#ifndef MQTT_CONFIG_H
#define MQTT_CONFIG_H

#define MQTT_BROKER     "broker.hivemq.com"

#define MQTT_PORT       1883

#define MQTT_CLIENT_ID  "ESP32-001"

#define MQTT_USERNAME   ""

#define MQTT_PASSWORD   ""

#define MQTT_PUBLISH_TOPIC \
"iiot/condition-monitoring/telemetry"

#define MQTT_SUBSCRIBE_TOPIC \
"iiot/condition-monitoring/commands"

#endif