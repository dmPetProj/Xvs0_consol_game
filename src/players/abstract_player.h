/*
    Класс Abstract_player - родитель всех игроков и ботов
*/

#ifndef ABSCTRACT_PLAYER_H
#define ABSCTRACT_PLAYER_H

#include "player_interface.h"
#include "../utils.h"

class Abstract_player : public Player_interface {

    protected:

        FieldValues color;    // цвет игрока

        Abstract_player(const FieldValues player_color);    // конструктор задают сторону игроку

    public:

        FieldValues get_color() const noexcept;     // геттер цвета за который играет

        Abstract_player& operator=(const Abstract_player& other);     // оператор копирование

        friend void swap(Abstract_player& a, Abstract_player& b) noexcept;    // адаптирует swap функцию

};

#endif
