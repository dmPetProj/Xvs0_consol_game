/*
    Класс Geme - управояет игровым процессом
*/

#ifndef GAME_H
#define GAME_H

#include "types_game.h"
#include "board.h"
#include "gameresult.h"


class Game {

    private:

        Board board; // игровое поле

        PlayerArray players; // два игрока

    public:

        Game(PlayerArray players);  // инициализация игры

        GameResult run() noexcept;  // запуск игры

};

#endif
