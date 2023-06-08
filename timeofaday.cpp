#include "timeofaday.h"

TimeOfADay::TimeOfADay()
{
    hours = -1; minutes = -1; seconds = -1;
}
TimeOfADay::TimeOfADay(int hours1, int minutes1, int seconds1)
{

    hours = hours1;
    minutes = minutes1;
    seconds = seconds1;
}

QString TimeOfADay::getString()
{
    QString result;
    result += QString::number(hours) + ":" + QString::number(minutes) + ":" + QString::number(seconds);
    return result;
}

void TimeOfADay::setHours(int new_hours)
{
    hours = new_hours;
}

void TimeOfADay::setMinutes(int new_minutes)
{
    minutes = new_minutes;
}

void TimeOfADay::setSeconds(int new_seconds)
{
    seconds = new_seconds;
}

int TimeOfADay::dayPeriod()
{
    if (hours < 12) return 1;
    else return 2;
}

QString TimeOfADay::stringDayPeriod()
{
    if (hours < 12) return "Перша половина дня";
    else return "Друга половина дня";
}

bool TimeOfADay::isCorrect()
{
    bool hours_correct, minutes_correct, seconds_correct;
    hours_correct = (hours >= 0) && (hours < 24);
    minutes_correct = (minutes >= 0) && (minutes < 60);
    seconds_correct = (seconds >= 0) && (seconds < 60);
    return hours_correct && minutes_correct && seconds_correct;
}

