#include <Arduino.h>
#include "app/app.h"

Application app;

void setup()
{
    app.begin();
}

void loop()
{
    app.loop();
}