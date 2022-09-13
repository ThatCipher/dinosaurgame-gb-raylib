#include "raylib.h"

#include "util/global_definitions.h"
#include "UI/scoreboard.h"
#include "entities/player/player.h"

int main() {
    ChangeDirectory(GetApplicationDirectory());

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
    SetTargetFPS(TARGET_FPS);

    Camera2D viewport = {
            .zoom = ZOOM_FACTOR
    };

    int time = 0;
    int score = 0;

    Texture2D sprite_atlas = LoadTexture("./assets/sprite_atlas.png");

    Player player = {
            .position = {16, SCREEN_HEIGHT - 64},
            .isAlive = true,
            .atlas = &sprite_atlas,
            .currentFrame = 0,
            .isJumping = false,
            .jump_velocity = 0
    };


    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(GB_COLOR_01);
        time++;

        BeginMode2D(viewport);

        update_scoreboard(&score, player.isAlive);
        update_player(&player, time);

        EndMode2D();
        EndDrawing();
    }

    CloseWindow();


    return 0;
}
