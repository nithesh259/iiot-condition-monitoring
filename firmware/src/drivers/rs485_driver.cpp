#include "drivers/rs485_driver.h"

bool RS485Driver::begin(uint32_t baudRate)
{
    (void)baudRate;

    return true;
}

bool RS485Driver::writeFrame(
    const uint8_t* data,
    uint16_t length)
{
    (void)data;
    (void)length;

    return true;
}

bool RS485Driver::readFrame(
    uint8_t* buffer,
    uint16_t& length)
{
    (void)buffer;

    length = 0;

    return true;
}