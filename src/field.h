/*
    Класс Field - одно поле игровой доски
*/

#ifndef FIELD_H
#define FIELD_H

#include "utils.h"

class Field{

    private:

        FieldValues value = FieldValues::Empty; // состояние поля доски

    public:

        Field() = default;  // конструктор по умолчанию
        ~Field() = default; // деструктор по умоланию

        FieldValues get_value() const noexcept; // возвращает значение ячейки

        void set_value(const FieldValues value) noexcept; // меняет значение ячейкт

        bool is_empty() const noexcept; // проверяет ячейку на пустоту
};

#endif
