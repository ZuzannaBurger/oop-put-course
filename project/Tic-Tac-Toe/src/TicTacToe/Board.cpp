//
// Created by zuzan on 27.05.2023.
//
#include <ostream>
#include "../../include/TicTacToe/Interface.h"
#include "../../include/TicTacToe/Board.h"
#include "../../include/TicTacToe/Game.h"


    char board[3][3];



    Board::Board()   //fill the array withe empty fields
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = ' ';
            }
        }
    }

    void Board::PrintBoard()
    {
        std::cout << "-------------\n";
        for(int i = 0; i < 3; i++)
        {
            std::cout << "| ";

            for(int j = 0; j<3; j++)
            {
                std::cout << board[i][j] << " | ";
            }
            std::cout << "\n-------------\n";
        }
    }

    bool Board::Move(int row, int column, char player)  // updating the board and checking the correctenss of the movement
    {
        if (row < 0 || row >= 3 || column < 0 || column >= 3 || board[row][column] != ' ')
        {
            std::cout << "Wrong move, try again.\n";
            return false;
        }

        board[row][column] = player;
        return true;
    }

    bool Board::CheckVictory(char player)
    {
        for(int i = 0; i < 3; i++) //checking rows and columns
        {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            {
                return true;
            }
            if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            {
                return true;
            }
        }

        //checking diagonals
        if((board[0][0] == player && board[1][1] == player && board[2][2] == player) || (board[0][2] == player && board[1][2] == player && board[2][0] == player))
        {
            return true;
        }

        return false;
    }

    //checking draw - is the board full
    bool Board::CheckDraw()
    {
        for(int i = 0; i<3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if (board[i][j] == ' ')
                {
                    return false;
                }
            }
        }
        return true;
    }

    //reset board to play again
    void Board::ResetBoard()
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                board[i][j] = ' ';
            }
        }
    }
