#ifndef CONFIG_H
#define CONFIG_H

/*==================================================
 Project Information
==================================================*/

#define PROJECT_NAME        "IIoT Condition Monitoring"
#define PROJECT_VERSION     "1.0.0"

#define DEVICE_ID           "ESP32-001"

#define FIRMWARE_VERSION    "1.0.0"

/*==================================================
 Telemetry
==================================================*/

#define TELEMETRY_INTERVAL_MS   2000

/*==================================================
 JSON
==================================================*/

#define JSON_BUFFER_SIZE    512

/*==================================================
 Debug
==================================================*/

#define ENABLE_SERIAL_DEBUG true

#endif