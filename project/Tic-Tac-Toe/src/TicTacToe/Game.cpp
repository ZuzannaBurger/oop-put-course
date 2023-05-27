//
// Created by zuzan on 27.05.2023.
//

#include <iostream>
#include "../../include/TicTacToe/Board.h"
#include "../../include/TicTacToe/Interface.h"
#include "../../include/TicTacToe/Game.h"



void Game::Play()
{
    bool play_again = true;
    int a;
    int b;
    std::string::size_type lenght;

    while (play_again)
    {
        std::cout << "Round" << round_count << "\n";
        board.PrintBoard();

        while(true)
        {
            std::string row;
            std::string column;
            std::cout << "Player " << current_player << ", enter a row number (0-2) or enter 5 to give up: ";
            std::cin >> row;

            if(row == "1" || row == "2" || row == "0" || row == "5")
            {


                a = std::stoi(row,& lenght);

                if(a == 5)
                {
                    play_again = false;
                    std::cout << "Player " << current_player << " gived up.\n";
                    break;
                }

                std::cout << "Player " << current_player << ", enter a column number (0-2): ";
                std::cin >> column;

                if(column == "1" || column == "2" || column == "0" )
                {
                    b = std::stoi(column,& lenght);

                    if(board.Move(a, b, current_player))
                    {
                        if(board.CheckVictory(current_player))
                        {
                            board.PrintBoard();
                            std::cout << "Player" << current_player << " win round " << round_count << " congratulations !!!\n";
                            break;
                        }
                        else if(board.CheckDraw())
                        {
                            board.PrintBoard();
                            std::cout << "Draw in the round " << round_count << "\n";
                            break;
                        }
                        else
                        {
                            current_player = (current_player == 'X') ? 'O' : 'X';
                            board.PrintBoard();
                        }
                    }
                }
                else
                {
                    std::cout << "Wrong sign.\n";
                }


            }
            else
            {
                std::cout << "Wrong sign.\n";
            }



        }

        round_count++;

        if(play_again)
        {
            char choice;
            std::cout << "Do you want to play another round? (Yes = Y; No = N): ";
            std::cin >> choice;

            while(true)
            {
                if (choice == 'N' || choice == 'n')
                {
                    play_again = false;
                    break;
                }
                else if(choice == 'Y' || choice == 'y')
                {
                    board.ResetBoard();
                    current_player = 'X';
                    break;
                }
                else
                {
                    std::cout << "Wrong choice, try again: ";
                    std::cin >> choice;
                }
            }

        }
    }
}
