/*
    Класс Board - игровая доска
*/

#include <iostream>

#include "board.h"
#include "utils.h"

bool Board::is_move_valid(const int index) const noexcept {
/* проверка свободно ли поле */
    if (index > 9 || index < 0)                                 // если индекс не лежит в поле ход инвалид
        return false;
    return this->board[ (index)/3 ][ (index)%3 ].is_empty();    // проверяем занято/незанято
}

bool Board::win_check(const int index ) const noexcept {
/* проверяет был ли сделанный ход победным */

    const int x = index / 3,   // горизонталь проверки
              y = index % 3;   // вертикаль проверки

    // дямбда для проверки ряда из 3 элементов
    auto check_row = [=](int x1, int y1, int x2, int y2, int x3, int y3) -> bool {
        return board[x2][y2].get_value() == board[x1][y1].get_value() &&
               board[x3][y3].get_value() == board[x1][y1].get_value();
    };

    // проверка горизонтали
    if (check_row(0, y, 1, y, 2, y))
        return true;

    // проверка вертикали
    if (check_row(x, 0, x, 1, x, 2))
        return true;

    // проверка главной диагонали
    if (x == y && check_row(0, 0, 1, 1, 2, 2))
        return true;

    // проверка побочной диагонали
    if (x + y == 2 && check_row(0, 2, 1, 1, 2, 0))
        return true;

    return false;   // если ни одна проверка не прошла выйгрыш еще не наступил
}

bool Board::write_move(const int index, const FieldValues player_color) noexcept {
/* записывает ход в ячеку */
    if( !is_move_valid( index ) ) return false;             // проверяет что поле не пустое
    board[index/3][index%3].set_value(player_color);        // записывает ход
    return true;                                            // возвращает true если все хорошо, иначе false
}

void Board::consol_print() const noexcept {
/* выводит поле в консоль */
    for(int i=0; i < WEIGHT; i++)  {
        for(int j=0; j < HIGHT; j++)
            std::cout << " | " <<
                    get_char_from_enum(board[i][j].get_value(), i*3+j);
        std::cout << " | " << std::endl;
        for(int k=0;k<15;k++)
            std::cout << "-";
        std::cout << std::endl;
    }
}
