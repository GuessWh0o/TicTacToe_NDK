//
// Created by max on 21.05.2018.
// Email: developerint97@gmail.com
////

#include <string>

#ifndef TICTACTOE_NDK_TICTACTOEGAME_H
#define TICTACTOE_NDK_TICTACTOEGAME_H


class TicTacToeGame {
public:
    std::string helloTicTac();
    void clearBoard();
    std::string printBoard();

private:
    char board[3][3];
};


#endif //TICTACTOE_NDK_TICTACTOEGAME_H
