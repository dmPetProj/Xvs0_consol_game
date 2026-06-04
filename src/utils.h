/*
    Общие константы
*/

#ifndef UTILS_H
#define UTILS_H

inline constexpr int WEIGHT = 3;    // ширина игроого поля
inline constexpr int HIGHT = 3;     // высота игрового поля

enum FieldValues { Empty, X, O };   // enum определяет все возможные состояния ячеек игровой доски

inline char get_char_from_enum(const FieldValues status, const int ch4ar = 0) noexcept
/* переводит числа из enum FieldValues в игровые значения */
{
    switch (status) {
        case FieldValues::O:
            return 'O';
        case FieldValues::X:
            return 'X';
        case FieldValues::Empty:
            return ch4ar + '0';
        default:
            return ' ';
    }
}

#endif
