//
// Created by zuzan on 27.05.2023.
//

#ifndef TIC_TAC_TOE_INTERFACE_H
#define TIC_TAC_TOE_INTERFACE_H

#endif //TIC_TAC_TOE_INTERFACE_H

#include <iostream>
#pragma once

class Tic_Tac_Toe_Interface
{
    virtual void PrintBoard() = 0;
    virtual bool Move(int row, int column, char player) = 0;
    virtual bool CheckVictory(char player) = 0;
    virtual bool CheckDraw() = 0;
    virtual void ResetBoard() = 0;

};