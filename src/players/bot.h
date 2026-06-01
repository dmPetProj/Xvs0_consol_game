/*
    Бот который ходит взад вперед
*/

#ifndef RANDOM_BOT_H
#define RANDOM_BOT_H

#include "abstract_bot.h"

class Bot : public Abstract_bot {

    public:

        Bot(const FieldValues color);    // конструктор с параметром задающим цвет игроку

        int make_move (const Board& board) const override;   // логика хода бота

};

#endif
