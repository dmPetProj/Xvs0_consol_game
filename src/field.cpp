/*
    Класс Field - одно поле доски
*/

#include "field.h"

Field::Field(const FieldValues value) :
/* конструктор по умолчанию */
    value(value)
    {}

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
