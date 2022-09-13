//
// Created by deniz on 31/08/2022.
//

#include "raylib.h"
#include "../util/global_definitions.h"

#ifndef DINOGAME_SCOREBOARD_H
#define DINOGAME_SCOREBOARD_H


void draw_board();
void print_score(int score);
void update_scoreboard(int *score, bool isPlayerAlive);


#endif //DINOGAME_SCOREBOARD_H
