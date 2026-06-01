/*
    Класс Menu создает "удобный" пользовательский интерфейс для запуска игры
*/

#ifndef MENU_H
#define MENU_H

#include <string>

class Menu {
    private:

        const std::string menu_lins[4] = {
        // хранит опции которые может выбрать игрок при входе
            "1. Start game to play with another player",
            "2. Start game to play with bot",
            "3. Start game Bot vs Bot",
            "0. Exit"
        };

    public:

        Menu() = default;       // конструктор по умолчанию
        ~Menu() = default;      // деструктор по умолчанию

        void consol_print() const noexcept; // выводит опции доступные игроку в консоль

        int open_dialog() const;  // организовывает логику общения с игроком
                                           // возвращает значение опции которую выбрал игрок

};




#endif
