//
// Created by deniz on 31/08/2022.
//

#ifndef DINOGAME_GLOBAL_DEFINITIONS_H
#define DINOGAME_GLOBAL_DEFINITIONS_H

#define GB_COLOR_01    CLITERAL(Color){ 155, 188, 15, 255 }
#define GB_COLOR_02    CLITERAL(Color){ 139, 172, 15, 255 }
#define GB_COLOR_03    CLITERAL(Color){ 48, 98, 48, 255 }
#define GB_COLOR_04    CLITERAL(Color){ 15, 56, 15, 255 }

#define SCREEN_WIDTH    160
#define SCREEN_HEIGHT   144

#define TARGET_FPS      60
#define ZOOM_FACTOR     4

#define WINDOW_WIDTH    SCREEN_WIDTH * ZOOM_FACTOR
#define WINDOW_HEIGHT   SCREEN_HEIGHT * ZOOM_FACTOR
#define WINDOW_TITLE    "Dinogame GB"

#endif //DINOGAME_GLOBAL_DEFINITIONS_H
