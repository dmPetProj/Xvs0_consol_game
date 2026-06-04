/*
    Класс PLayer - реализует игрока играющего через консоль
*/

#include <iostream>

#include "player.h"
#include "../utils.h"

Player::Player(const FieldValues ccolor) :
/* конструктор задает цвет игрока */
    Abstract_player(ccolor)
    {}

int Player::make_move(const Board& board) const /* override */ {
/* логика хода игрока */
    board.consol_print();
    std::cout << get_char_from_enum(color) << ", vash hod: ";
    int index;
    std::cin >> index;
    return index;
}
