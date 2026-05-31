/*
    Класс родитель для всех кастомных ботов
*/

#include "abstract_bot.h"

Abstract_bot::Abstract_bot(const FieldValues bot_color) :
/* конструктор со значением */
    Abstract_player(bot_color)
    {}
