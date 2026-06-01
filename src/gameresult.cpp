/*
    Класс PlayerPesult фиксирует результат игры
*/

#include "gameresult.h"

#include <iostream>

GameResult::GameResult(const Board &board, const bool is_drow, const char winner) :
/* конструктор с параметрами для составления отчета об игре */
    board(board),
    is_drow(is_drow),
    winner(winner)
    {}

void GameResult::make_report() const noexcept {
    if(is_drow)
        std::cout << "No winners in this match\n";
    else
        std::cout << "Congratilations for " << winner << " he is winning the match!\n";

    board.consol_print();
}
