# Industrial IoT Condition Monitoring System

An Industrial IoT (IIoT) Condition Monitoring System built using the ESP32, MQTT, Node-RED, and PlatformIO. The system acquires sensor data from industrial equipment, publishes telemetry securely over MQTT, and visualizes real-time data on a dashboard for monitoring and analysis.

---

## Project Overview

This project demonstrates a complete Industrial IoT pipeline, including:

- ESP32 firmware development using PlatformIO
- Industrial sensor integration
- MQTT communication
- JSON telemetry generation
- Cloud MQTT Broker
- Node-RED Dashboard
- Real-time monitoring
- Modular embedded software architecture
- Professional GitHub project organization

---

## System Architecture

```text
Industrial Sensor(s)
        │
        ▼
+--------------------+
|       ESP32        |
| PlatformIO Firmware|
+--------------------+
        │
        │ Wi-Fi
        ▼
+--------------------+
|    MQTT Broker     |
|    HiveMQ Cloud    |
+--------------------+
        │
        ▼
+--------------------+
|     Node-RED       |
| Real-Time Dashboard|
+--------------------+
        │
        ▼
Monitoring • Analytics • Alerts
```

---

## Technologies Used

| Category | Technology |
|----------|------------|
| Microcontroller | ESP32 DevKit V1 |
| Language | C / C++ |
| IDE | PlatformIO |
| Protocol | MQTT |
| Data Format | JSON |
| Dashboard | Node-RED |
| Cloud Broker | HiveMQ Cloud |
| Version Control | Git |
| Repository | GitHub |

---

## Project Structure

```text
iiot-condition-monitoring/
│
├── dashboard/
├── docs/
├── firmware/
├── hardware/
├── tools/
│
├── LICENSE
├── README.md
└── .gitignore
```

---

## Features

- Modular firmware architecture
- Wi-Fi connectivity
- MQTT communication
- JSON telemetry
- Industrial sensor interface
- Node-RED dashboard
- Real-time visualization
- GitHub documentation
- Scalable project structure

---

## Development Roadmap

### Phase 1
- Project setup
- Repository structure
- Firmware architecture

### Phase 2
- ESP32 firmware
- Wi-Fi connection
- MQTT communication

### Phase 3
- Sensor integration
- JSON telemetry
- Cloud communication

### Phase 4
- Node-RED dashboard
- Real-time monitoring
- Alert system

### Phase 5
- Testing
- Documentation
- Performance optimization

---

## Repository Overview

| Directory | Description |
|-----------|-------------|
| firmware | ESP32 firmware source code |
| hardware | Wiring diagrams, schematics, BOM |
| dashboard | Node-RED, MQTT and Grafana files |
| docs | Architecture, diagrams and reports |
| tools | Development and testing utilities |

---

## Current Status

Project is currently under active development.

Current milestone:

- Repository architecture completed
- Firmware architecture designed
- Hardware documentation prepared
- Dashboard structure prepared

Next milestone:

- ESP32 firmware implementation

---

## License

This project is licensed under the MIT License.

See the LICENSE file for details.

---

## Author

**Nithesh**

Electronics and Communication Engineering (ECE)

Embedded Systems | Industrial IoT | Edge AI | Open Source