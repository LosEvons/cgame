#ifndef ROGUE_H
#define ROGUE_H

#include <stdlib.h>
#include <ncurses.h>
#include <time.h>

/* Screen Parameters */
#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 60

/* UI Parameters */
#define LEFT_BAR_WIDTH SCREEN_WIDTH / 5
#define RIGHT_BAR_WIDTH SCREEN_WIDTH / 5
#define LOG_HEIGHT SCREEN_HEIGHT / 5

/* Level Parameters */
#define MAP_WIDTH SCREEN_WIDTH - (LEFT_BAR_WIDTH + RIGHT_BAR_WIDTH)
#define MAP_HEIGHT SCREEN_HEIGHT - LOG_HEIGHT

/* Screen Functions */
int screenSetUp();
int drawLeftBar();

#endif