//
// Created by deniz on 31/08/2022.
//

#include "raylib.h"

#ifndef DINOGAME_OBSTACLE_H
#define DINOGAME_OBSTACLE_H

typedef struct{
    Vector2 position;
    Texture2D sprite;
} Obstacle;

void move_obstacle(Obstacle *obstacle);


#endif //DINOGAME_OBSTACLE_H
