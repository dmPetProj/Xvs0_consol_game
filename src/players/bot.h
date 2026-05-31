/*
    Бот который ходит взад вперед
*/

#ifndef RANDOM_BOT_H
#define RANDOM_BOT_H

#include "abstract_bot.h"

class Bot : public Abstract_bot {

    public:

        Bot(const FieldValues ccolor);    // конструктор с параметром задающим цвет игры

        int make_move (const Board& board) const noexcept override;   // логика хода бота

};

#endif
