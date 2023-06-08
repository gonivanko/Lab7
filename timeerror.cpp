#include "timeerror.h"

TimeError::TimeError()
{
    type = 0;
}

TimeError::TimeError(int type1)
{
    type = type1;
}

QString TimeError::errorText()
{
    switch (type) {
    case 1:
        return "Помилка. Неправильно введені години";
        break;
    case 2:
        return "Помилка. Неправильно введені хвилини";
        break;
    case 3:
        return "Помилка. Неправильно введені секунди";
        break;
    }
}


