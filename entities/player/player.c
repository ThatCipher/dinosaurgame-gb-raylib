//
// Created by deniz on 31/08/2022.
//

#include "player.h"

void update_player(Player *player, int time) {
    read_player_input(player);
    draw_player(player, time);
}

void draw_player(Player *player, int time) {

    int currentFrame = (time / 5) % 4;

    Rectangle sprite_rect = {16 * (float)currentFrame, 0, 16, 16};

    DrawTextureRec(
            *player->atlas,
            sprite_rect,
            player->position,
            RAYWHITE
            );
}

void read_player_input(Player *player) {
    if(IsKeyDown(KEY_SPACE) && !player->isJumping){
        jump_player(player);
    }
    apply_phyiscs(player);
}

void jump_player(Player *player) {
    player->jump_velocity += 0.1f;
    player->position.y -= player->jump_velocity;
    player->isJumping = true;
}

void apply_phyiscs(Player *player) {
    if(player->isJumping){

    }
}

