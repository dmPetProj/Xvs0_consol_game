/*
    Класс Launcher запускает игру, объединяет интерфейс и игровую часть
*/

#ifndef LAUNCHER_H
#define LAUNCHER_H

#include "game.h"


class Launcher
{
private:

    Game *session;

public:
    Launcher();             // конструктор по умолчанию
    ~Launcher();            // деструктор по умолчанию

    void launch();          // запуск цикла игры

};


#endif
