#include "Listener.h"

Listener::Listener(Button *modeButton, Button *powerButton, Controller *control, ClockCheck *clock)
{
    this->modeButton = modeButton;
    this->powerButton = powerButton;
    this->controller = control;
    this->clockCheck = clock;
}

Listener::~Listener()
{
}

void Listener::checkEvent()
{
    if (modeButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("modeButton");
    }

    if (powerButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("powerButton");
    }

    if (clockCheck->isUpdate())
    {
        controller->updateEvent("clockUpdate");
    }
}