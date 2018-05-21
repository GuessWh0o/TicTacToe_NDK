//
// Created by max on 21.05.2018.
// Email: developerint97@gmail.com
////

#include "TicTacToeGame.h"

std::string TicTacToeGame::helloTicTac() {
    return "Hello from TicTac";
}

void TicTacToeGame::clearBoard() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

std::string TicTacToeGame::printBoard() {
    std::string toPrint = "\n |1 2 3|\n ------------";
    for(int i = 0; i < 3; i++) {
        toPrint += "|" + board[i][0];
        toPrint += "|" + board[i][1];
        toPrint += "|" + board[i][2];
    }
    return toPrint;
}
