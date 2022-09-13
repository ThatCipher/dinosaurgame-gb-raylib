//
// Created by deniz on 31/08/2022.
//

#include "raylib.h"
#include "../obstacle/obstacle.h"
#include "../../util/global_definitions.h"

#ifndef DINOGAME_PLAYER_H
#define DINOGAME_PLAYER_H

typedef struct{
    Vector2 position;
    bool isAlive;
    Texture2D *atlas;
    int currentFrame;
    bool isJumping;
    float jump_velocity;
} Player;

void update_player(Player *player, int time);
void draw_player(Player *player, int time);
void read_player_input(Player *player);
void jump_player(Player *player);
void check_collision(Player *player, Obstacle *obstacle);
void apply_phyiscs(Player *player);

#endif //DINOGAME_PLAYER_H
