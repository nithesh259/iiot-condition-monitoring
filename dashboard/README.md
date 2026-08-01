# Dashboard

This directory contains all files related to monitoring and visualization for the Industrial IoT Condition Monitoring System.

## Structure

- **node-red/** – Node-RED flow files (`flows.json`)
- **grafana/** – Grafana dashboards (optional)
- **mqtt/** – MQTT topic documentation and payload examples
- **screenshots/** – Dashboard screenshots for documentation
- **exports/** – Exported dashboard configurations

## Dashboard Workflow

ESP32
↓
Wi-Fi
↓
MQTT Broker (HiveMQ Cloud)
↓
Node-RED
↓
Dashboard
↓
Alerts & Monitoring