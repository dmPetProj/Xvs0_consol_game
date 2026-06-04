/*
    Класс Geme - управояет игровым процессом
*/

#include <iostream>

#include "game.h"
#include "utils.h"

Game::Game(PlayerArray players) :
/* инициализация игры */
        players(std::move(players)),
        board()
    {}

GameResult Game::run() noexcept{
/* запуск игры */

    bool curent_player = false;    // переводит ход
    unsigned short empty_fields_count = 9;  // счетчик свободных полей он же сингал о нечьей

    do{

        const int move_index = players[curent_player]->make_move(board); // читает ход, который хочет сделать игрок

        if ( !(board.write_move( move_index,            // проверяет ход на валидность +
            players[curent_player]->get_color() )) )    // если все хорошо записывает ход
                continue;                               // если ход инвалидный запросит ход еще раз

        if( (board.win_check( move_index ))  )   // проверяет по координатам
            break;

        empty_fields_count--;               // ход сделан -1 свободное поле
        curent_player = !curent_player;     // передача хода другому игроку

    } while (empty_fields_count > 0);   // ничья если пустые клетки закончатся

    return GameResult( board,           // возврат объекта класса с результатом
        empty_fields_count == 0,
        get_char_from_enum(this->players[curent_player]->get_color()) );
}
