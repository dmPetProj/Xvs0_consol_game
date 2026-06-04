/*
    Общие типы в одном месте
*/

#ifndef TYPES_GAME_H
#define TYPES_GAME_H

#include <array>
#include <memory>
#include <functional>

#include "players/abstract_player.h"

using PlayerPtr = std::unique_ptr<Abstract_player>;
using PlayerArray = std::array<PlayerPtr, 2>;   // массив в котором содержатся игроки в сессии

#endif
