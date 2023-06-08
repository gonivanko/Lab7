#ifndef TIMEERROR_H
#define TIMEERROR_H
#include "QString"

class TimeError
{
    int type;
public:
    TimeError();
    TimeError(int type1);
    QString hoursError();
    QString minutesError();
    QString secondsError();
    QString errorText();
};

#endif // TIMEERROR_H
