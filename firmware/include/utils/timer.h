#ifndef TIMER_H
#define TIMER_H

class Timer
{
public:

    Timer(unsigned long interval);

    bool isReady();

    void reset();

private:

    unsigned long interval;

    unsigned long previousMillis;
};

#endif