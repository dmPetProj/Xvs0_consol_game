/*
    Класс Menu создает "удобный" пользовательский интерфейс для запуска игры
*/

#include "menu.h"

#include <iostream>

void Menu::consol_print() noexcept {
/* выводит опции доступные игроку в консоль */
    for(auto i : menu_lins)
        std::cout << i << std::endl;
}

int Menu::open_dialog() {
/* организовывает логику общения с игроком */
    consol_print();
    int input;
    do {
        std::cout << "Enter choise(0-3): ";
        std::cin >> input;
    } while (input < 0 || input > 4);

    return input;
}
