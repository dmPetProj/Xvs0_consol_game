/*
    Класс Menu создает "удобный" пользовательский интерфейс для запуска игры
*/

#ifndef MENU_H
#define MENU_H

#include <string>

enum GameModes{
// хранит опции которые может выбрать игрок на старте
    PvsP = 1,   // Player vs Player
    PvsB = 2,   // PLayer vs Bot
    BvsB = 3    // Bot vs Bot
};

class Menu {
    private:

        inline static const std::string menu_lins[4] = {
        // хранит опции которые может выбрать игрок при входе
            "1. Start game to play with another player",
            "2. Start game to play with bot",
            "3. Start game Bot vs Bot",
            "0. Exit"
        };

    public:

        static void consol_print() noexcept; // выводит опции доступные игроку в консоль

        static int open_dialog();  // организовывает логику общения с игроком
                                   // возвращает значение опции которую выбрал игрок

};

#endif
