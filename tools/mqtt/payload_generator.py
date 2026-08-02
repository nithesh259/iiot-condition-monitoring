import random
from datetime import datetime


def generate_payload():
    return {
        "device_id": "ESP32_001",
        "temperature": round(random.uniform(25.0, 40.0), 2),
        "current": round(random.uniform(0.5, 5.0), 2),
        "vibration": round(random.uniform(0.01, 0.50), 3),
        "timestamp": datetime.utcnow().isoformat() + "Z"
    }


if __name__ == "__main__":
    print(generate_payload())