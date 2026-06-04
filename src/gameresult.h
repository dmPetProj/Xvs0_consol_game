/*
    Класс PlayerPesult фиксирует результат игры
*/

#ifndef PLAY_RESULT_H
#define PLAY_RESULT_H

#include "board.h"

class GameResult {

private:

    const bool is_drow;

    const char winner;

    const Board &board;

public:
    GameResult(const Board &board, const bool is_drow, const char winner); // конструктор с параметрами для составления отчета об игре
    ~GameResult() = default;  // деструктор по умолчнию

    void make_report() const noexcept;      // выводит в консоль результат игры

};



#endif
