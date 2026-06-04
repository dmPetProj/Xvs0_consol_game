/*
    Интерфейс Player_interface описывает поведение игрока
*/

#ifndef PLAYER_INTERFACE_H
#define PLAYER_INTERFACE_H

#include "../board.h"

class Player_interface {

    public:

        virtual int make_move(const Board& board) const = 0; // каждый игрок делает ход

        virtual ~Player_interface() = default;      // деструктор по умолчанию
};

#endif
