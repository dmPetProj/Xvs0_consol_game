/*
    Класс Matchmaker собирает игроков и опредяет порядок в котором они будут ходить
*/

#ifndef MATCH_MAKER_H
#define MATCH_MAKER_H

#include <array>
#include <memory>
#include <functional>

#include "players/abstract_player.h"

class Matchmaker{
/* собирает массив игроков */

    private:

        template<typename T1, typename T2>
        static std::array<std::unique_ptr<Abstract_player>, 2> make();  // общая логика

    public:

        static std::array<std::unique_ptr<Abstract_player>, 2> make_2players(); // два живых игрока

        static std::array<std::unique_ptr<Abstract_player>, 2> make_BvsP(); // игрок против бота

        static std::array<std::unique_ptr<Abstract_player>, 2> make_2bots();    // бот против бота

};

#endif
