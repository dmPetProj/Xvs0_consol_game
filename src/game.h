/*
    Класс Geme - управояет игровым процессом
*/

#ifndef GAME_H
#define GAME_H

#include <array>
#include <memory>

#include "players/abstract_player.h"
#include "board.h"
#include "players/player.h"

class Game {
    private:

        Board board; // игровое поле

        std::array<std::unique_ptr<Abstract_player>, 2> players; // два игрока

    public:

        Game(std::array<std::unique_ptr<Abstract_player>, 2> players);        // инициализация игры

        void run() noexcept;  // запуск игры

};

#endif
