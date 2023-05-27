//
// Created by zuzan on 27.05.2023.
//

#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

#endif //TIC_TAC_TOE_BOARD_H

#include <iostream>
#include "Interface.h"
#pragma once

class Board:public Tic_Tac_Toe_Interface // all table related operations
{
private:
    char board[3][3];
public:


    Board() ;  //fill the array withe empty fields


    void PrintBoard()override;


    bool Move(int row, int column, char player)override; // updating the board and checking the correctenss of the movement


    bool CheckVictory(char player)override;


    //checking draw - is the board full
    bool CheckDraw()override;


    //reset board to play again
    void ResetBoard()override;

};
