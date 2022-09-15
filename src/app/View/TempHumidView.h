#ifndef TEMPHUMIDVIEW_H
#define TEMPHUMIDVIEW_H

#pragma once

#include <LCD.h>
#include <View.h>
#include <wiringPi.h>

class TempHumidView
{
private:
    LCD *lcd;
    View *view;
    int warningTemp = 30;

public:
    TempHumidView(LCD *Lcd, View *view);
    ~TempHumidView();
    void setTempHumidData(float temp, float humid);
    void tempWarning(float temp);

};

#endif