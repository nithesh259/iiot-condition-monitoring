# MQTT Topics

## Overview

This document defines the MQTT topic hierarchy used by the IIoT Condition Monitoring System.

---

# Topic Naming Convention

iiot/<site>/<device>/<message_type>

---

# Base Topic

iiot/condition-monitoring

---

# Publish Topics

## Telemetry

iiot/condition-monitoring/telemetry

Published every 2 seconds.

---

## Device Status

iiot/condition-monitoring/status

Published when device connects, disconnects, or changes state.

---

## Diagnostics

iiot/condition-monitoring/diagnostics

Contains firmware diagnostics and health information.

---

## Alerts

iiot/condition-monitoring/alerts

Published when thresholds are exceeded.

---

# Subscribe Topics

## Configuration

iiot/condition-monitoring/config

Cloud-to-device configuration.

---

## Commands

iiot/condition-monitoring/commands

Used for remote control.

Examples

- restart
- reset
- update
- calibrate

---

# QoS

Telemetry

QoS 1

Status

QoS 1

Diagnostics

QoS 1

Alerts

QoS 1

Commands

QoS 1

---

# Retained Messages

Status Topic

Retained

Configuration Topic

Retained

Telemetry

Not Retained

Alerts

Not Retained

---

# Future Topic Structure

iiot/

├── factory1/

│   ├── machine1/

│   ├── machine2/

│   └── machine3/

└── factory2/

    ├── machine1/

    └── machine2/

---

# Example Publish

Topic

iiot/condition-monitoring/telemetry

Payload

See payload_examples.json