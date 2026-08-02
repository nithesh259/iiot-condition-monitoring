import json
import time
import paho.mqtt.client as mqtt
from payload_generator import generate_payload

BROKER = "18.158.244.81"
PORT = 1883
TOPIC = "iiot/condition-monitoring/telemetry"

client = mqtt.Client()
client.connect(BROKER, PORT, 60)

print("Publishing telemetry...")

while True:
    payload = generate_payload()

    client.publish(TOPIC, json.dumps(payload), qos=1)

    print(json.dumps(payload, indent=4))

    time.sleep(2)