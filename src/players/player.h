/*
    Класс PLayer - описывает поведение игрока
*/

#ifndef PLAYER_H
#define PLAYER_H

#include "abstract_player.h"

// #include <iostream>

class Player : public Abstract_player {
/* Класс с инфорй о игроке */
    public:

        Player(const FieldValues ccolor);            // конструктор задает цвет игрока

        int make_move(const Board& board) const override;   // логика хода

};

#endif
