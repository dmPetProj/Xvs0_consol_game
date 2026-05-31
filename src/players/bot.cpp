/*
    Бот который ходит взад вперед
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "bot.h"

Bot::Bot(const FieldValues ccolor) :
/* конструктор с параметром задающим цвет игры */
    Abstract_bot(ccolor)
    {}

int Bot::make_move(const Board& board) const noexcept /* override */ {
/* логика хода бота */
    std::srand(std::time(0));
    return std::rand() % 9;
}
