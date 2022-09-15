#ifndef __LISTENER_H__
#define __LISTENER_H__

#include <wiringPi.h>
#include "Button.h"
#include "Controller.h"
#include "ClockCheck.h"
#include "DHT11.h"
#include "DHT_Data.h"

class Listener
{
private :
    Button *modeButton;
    Button *powerButton;
    Controller *controller;
    ClockCheck *clockCheck;
    DHT11 *dht11;

public:
    Listener(Button *modeButton, Button *powerButton, Controller *control, ClockCheck *clock, DHT11 *dht11);
    ~Listener();
    void checkEvent();
};

#endif /* __LISTENER_H__ */
