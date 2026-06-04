/*
    Класс Launcher запускает игру, объединяет интерфейс и игровую часть
*/

#include "launcher.h"

#include <iostream>

#include "menu.h"
#include "matchmaker.h"

Launcher::Launcher()
/* конструктор по умолчанию */
    : session(nullptr)
    {}

void Launcher::launch() {

    while (true) {

        int game_config_index = Menu::open_dialog(); // запрашиваем игровой режим

        if (!game_config_index) // game_config_index == 0 завершаем сессию
            break;

        delete session;

        // Создаём новую игру по выбору
        switch (game_config_index) {
            case GameModes::PvsP:
                session = new Game(Matchmaker::make_2players());
                break;
            case GameModes::PvsB:
                session = new Game(Matchmaker::make_BvsP());
                break;
            case GameModes::BvsB:
                session = new Game(Matchmaker::make_2bots());
                break;
            default:
                continue;  // неверный выбор возвращаемся к меню
        }

        auto reporter = session->run(); // Запускаем игру в ответ получаем класс с результатом игры

        reporter.make_report();

        std::cout << "\nPress Enter to continue...\n"; // Ждём нажатия перед показом меню
        std::cin.ignore();
        std::cin.get();
    }
}

Launcher::~Launcher() {
/* деструктор по умолчанию */
    delete this->session;
}
