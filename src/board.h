/*
    Класс Board - игровая доска
*/

#ifndef BOARD_H
#define BOARD_H

#include "field.h"

class Board {

    private:

        Field board[WEIGHT][HIGHT]{};     // игровая доска

    public:

        Board() = default; // конструктор по умолчанию
        ~Board() = default; // деструктор по умолчанию

        bool is_move_valid(const int index) const noexcept;    // проверка свободно ли поле

        bool win_check(const int index) const noexcept;    // проверяет был ли сделанный ход победным

        bool write_move(const int index, const FieldValues player_color) noexcept;    // записывает ход в ячеку

        void consol_print() const noexcept;    // вывод в консоль

};

#endif
