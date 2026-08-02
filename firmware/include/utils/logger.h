#ifndef LOGGER_H
#define LOGGER_H

class Logger
{
public:
    static void begin(unsigned long baudRate);

    static void info(const char* message);

    static void warning(const char* message);

    static void error(const char* message);

    static void debug(const char* message);
};

#endif