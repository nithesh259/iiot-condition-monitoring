#include <Arduino.h>
#include "utils/logger.h"

void Logger::begin(unsigned long baudRate)
{
    Serial.begin(baudRate);
}

void Logger::info(const char* message)
{
    Serial.print("[INFO] ");
    Serial.println(message);
}

void Logger::warning(const char* message)
{
    Serial.print("[WARNING] ");
    Serial.println(message);
}

void Logger::error(const char* message)
{
    Serial.print("[ERROR] ");
    Serial.println(message);
}

void Logger::debug(const char* message)
{
    Serial.print("[DEBUG] ");
    Serial.println(message);
}