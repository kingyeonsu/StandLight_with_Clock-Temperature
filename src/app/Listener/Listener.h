#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "Button.h"
#include "Controller.h"
#include "ClockCheck.h"

class Listener
{
private :
    Button *modeButton;
    Button *powerButton;
    Controller *controller;
    ClockCheck *clockCheck;

public:
    Listener(Button *modeButton, Button *powerButton, Controller *control, ClockCheck *clock);
    ~Listener();
    void checkEvent();
};

#endif /* __LISTENER_H__ */
