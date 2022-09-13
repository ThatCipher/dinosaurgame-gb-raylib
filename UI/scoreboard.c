//
// Created by deniz on 31/08/2022.
//

#include "scoreboard.h"

void draw_board() {
    DrawRectangle(0, 0, 160, 3*8, GB_COLOR_04);
}

void print_score(int score) {
    DrawText(TextFormat("SCORE : %i", score), 8, 8, 8, GB_COLOR_01);
}

void update_scoreboard(int *score, bool isPlayerAlive){
    if(isPlayerAlive){
        (*score)++;
    }
    draw_board();
    print_score(*score);
}