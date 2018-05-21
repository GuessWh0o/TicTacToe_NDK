//
// Created by max on 21.05.2018.
// Email: developerint97@gmail.com
////

#include "TicTacToeGame.h"

using namespace std;

TicTacToeGame::TicTacToeGame() {
    clearBoard();
}

string TicTacToeGame::playGame() {
    char player1 = 'X';
    char player2 = 'Y';

    char currentPlayer = 'X';

    bool isDone = false;
    int x, y;


    while(!isDone) {
        printBoard();

        placeMarker(x, y, currentPlayer);
    }

    return printBoard();
}

void TicTacToeGame::clearBoard() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

string TicTacToeGame::printBoard() {
  string toPrint = "\n|1 2 3|";
    for(int i = 0; i < 3; i++) {
        toPrint += "\n---------\n|";
        toPrint += board[i][0];
        toPrint += "|";
        toPrint += board[i][1];
        toPrint += "|";
        toPrint += board[i][2];
        toPrint += "|";
    }
    return toPrint;
}

bool TicTacToeGame::placeMarker(int x, int y, char curPlayer) {

    if(board[x][y] != ' ') {
        return false;
    }
    board[x][y] = curPlayer;

    return false;
}

int TicTacToeGame::setYCoord(int coord) {

    return 0;
}

int TicTacToeGame::setXCoord(int coord) {
    return 0;
}
