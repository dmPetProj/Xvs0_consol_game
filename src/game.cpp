/*
    Класс Geme - управояет игровым процессом
*/

#include <iostream>
// #include <cstdlib>
#include <ctime>

#include "game.h"
#include "utils.h"

Game::Game(std::function<std::unique_ptr<Abstract_player>(FieldValues)> creator1,
         std::function<std::unique_ptr<Abstract_player>(FieldValues)> creator2) :
/* инициализация игры */
         board()
{

        players[0] = creator1(FieldValues::O);
        players[1] = creator2(FieldValues::X);

        std::srand(std::time(0));
        if(std::rand() & 1)
            std::swap( players[0], players[1] );

}

void Game::run() noexcept{
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

        empty_fields_count--;
        curent_player = !curent_player;

    } while (empty_fields_count > 0);   // ничья если пустые клетки закончатся

    if(empty_fields_count == 0)
        std::cout << "Droy" << std::endl;
    else
        std::cout << "Win player - " << get_char_from_enum(this->players[curent_player]->get_color()) << std::endl;

    board.consol_print();
}
