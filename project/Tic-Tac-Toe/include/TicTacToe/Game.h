//
// Created by zuzan on 27.05.2023.
//

#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H

#endif //TIC_TAC_TOE_GAME_H

#include <iostream>
#pragma once

class Game
{
private:
    Board board;
    char current_player;
    int round_count;
public:
    Game() : current_player('X'), round_count(1) {}

    void Play();

};

