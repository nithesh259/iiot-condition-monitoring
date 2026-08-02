#ifndef RS485_DRIVER_H
#define RS485_DRIVER_H

#include <Arduino.h>

class RS485Driver
{
public:

    bool begin(uint32_t baudRate);

    bool writeFrame(const uint8_t* data,
                    uint16_t length);

    bool readFrame(uint8_t* buffer,
                   uint16_t& length);
};

#endif