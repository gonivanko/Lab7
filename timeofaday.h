#ifndef TIMEOFADAY_H
#define TIMEOFADAY_H
#include "mainwindow.h"

class TimeOfADay
{
    int hours, minutes, seconds;
public:
    TimeOfADay();
    TimeOfADay(int hours1, int minutes1, int days1);
    QString getString();
    void setHours(int new_hours);
    void setMinutes(int new_minutes);
    void setSeconds(int new_seconds);
    int dayPeriod();
    QString stringDayPeriod();
    bool isCorrect();
};



#endif // TIMEOFADAY_H
