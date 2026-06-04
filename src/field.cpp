/*
    Класс Field - одно поле игровой доски
*/

#include "field.h"

FieldValues Field::get_value() const noexcept {
/* возвращает значение ячейки */
    return this->value;
}

void Field::set_value(const FieldValues value) noexcept {
/* меняет значение ячейкт */
    this->value = value;
}

bool Field::is_empty() const noexcept{
/* проверяет ячейку на пустоту */
    return this->value == FieldValues::Empty;
}
