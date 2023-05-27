cmake_minimum_required(VERSION 3.24)
project(Tic_Tac_Toe)

set(CMAKE_CXX_STANDARD 23)

add_executable(Tic_Tac_Toe main.cpp include/TicTacToe/Interface.h include/TicTacToe/Board.h src/TicTacToe/Board.cpp include/TicTacToe/Game.h src/TicTacToe/Game.cpp src/TicTacToe/Interface.cpp)
