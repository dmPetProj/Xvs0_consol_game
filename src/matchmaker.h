/*
    Класс Matchmaker собирает игроков и опредяет порядок в котором они будут ходить
*/

#ifndef MATCH_MAKER_H
#define MATCH_MAKER_H

#include "players/abstract_player.h"
#include "types_game.h"


class Matchmaker{

    private:

        template<typename T1, typename T2>
        static PlayerArray make();  // общая логика

    public:

        static PlayerArray make_2players(); // два живых игрока

        static PlayerArray make_BvsP(); // игрок против бота

        static PlayerArray make_2bots();    // бот против бота

};

#endif
