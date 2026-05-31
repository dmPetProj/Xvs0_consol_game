/*
    Класс Abstract_player - родитель всех игроков
*/
#include <utility>
#include "abstract_player.h"

Abstract_player::Abstract_player(const FieldValues player_color) :
/* конструктор задают сторону игроку */
    color(player_color)
    {}

FieldValues Abstract_player::get_color() const noexcept {
/* геттер цвета за который играет */
    return this->color;
}

Abstract_player& Abstract_player::operator=(const Abstract_player& swap_player) {
/* оператор копирование */
    if (this != &swap_player) {
        this->color = swap_player.color;
    }
    return *this;
}

void swap(Abstract_player& a, Abstract_player& b) noexcept {
/* адаптирует swap функцию */
    using std::swap;
    swap(a.color, b.color);
}
