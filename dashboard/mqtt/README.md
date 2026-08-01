# MQTT

This directory documents MQTT communication used in the project.

## Topics

Example

iiot/condition-monitoring/telemetry

## Payload

```json
{
  "device_id": "ESP32_001",
  "temperature": 32.4,
  "current": 1.2,
  "vibration": 0.03,
  "timestamp": "2026-08-01T10:30:00Z"
}
```

## QoS

QoS 1

## Broker

HiveMQ Cloud