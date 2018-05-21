//
// Created by max on 21.05.2018.
// Email: developerint97@gmail.com
////

#include <string>

#ifndef TICTACTOE_NDK_TICTACTOEGAME_H
#define TICTACTOE_NDK_TICTACTOEGAME_H


class TicTacToeGame {
public:
    TicTacToeGame();
    std::string playGame();

private:
    char board[3][3];
    void clearBoard();
    std::string printBoard();

    bool placeMarker(int x, int y, char curPlayer);

    int setXCoord(int coord);
    int setYCoord(int coord);
};


#endif //TICTACTOE_NDK_TICTACTOEGAME_H
