/*
    Класс родитель для всех кастомных ботов
*/

#ifndef ABSTRACT_BOT_H
#define ABSTRACT_BOT_H

#include "../utils.h"
#include "abstract_player.h"

class Abstract_bot : public Abstract_player {

    protected:

        Abstract_bot(const FieldValues bot_color);  // конструктор со значением

};

#endif
