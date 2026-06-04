/*
    Класс Matchmaker собирает игроков и опредяет порядок в котором они будут ходить
*/

#include "matchmaker.h"

#include <ctime>

#include "utils.h"
#include "players/player.h"
#include "players/bot.h"

template<typename T1, typename T2>
PlayerArray Matchmaker::make() {
/* общая логика */
    PlayerArray players;
    players[0] = std::make_unique<T1>(FieldValues::O);
    players[1] = std::make_unique<T2>(FieldValues::X);

    std::srand(std::time(0));
    if(std::rand() & 1)
        std::swap( players[0], players[1] );

    return players;
}

PlayerArray Matchmaker::make_2players() {
/* два живых игрока */
        return make<Player, Player>();
}

PlayerArray Matchmaker::make_BvsP() {
/* игрок против бота */
        return make<Player, Bot>();
}

PlayerArray Matchmaker::make_2bots() {
/* бот против бота */
        return make<Bot, Bot>();
}
