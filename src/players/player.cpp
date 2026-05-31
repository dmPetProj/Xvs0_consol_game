/*
    Класс PLayer - описывает поведение игрока
*/

#include <iostream>
#include "player.h"

Player::Player(const FieldValues ccolor) :
/* конструктор задает цвет игрока */
    Abstract_player(ccolor)
    {}

int Player::make_move(const Board& board) const noexcept /* override */ {
/* логика хода игрока */
    board.consol_print();
    std::cout << "Vash hod: ";
    int index;
    std::cin >> index;
    return index;
}
