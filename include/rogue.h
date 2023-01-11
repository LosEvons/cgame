#ifndef ROGUE_H
#define ROGUE_H

#include <stdlib.h>
#include <ncurses.h>
#include <time.h>

/* Screen Parameters */
#define SCREEN_WIDTH 72
#define SCREEN_HEIGHT 128

/* UI Parameters */
#define SIDEBAR_WIDTH SCREEN_WIDTH / 4
#define LOG_HEIGHT SCREEN_HEIGHT / 5

/* Level Parameters */
#define MAP_WIDTH SCREEN_WIDTH - SIDEBAR_WIDTH
#define MAP_HEIGHT SCREEN_HEIGHT - LOG_HEIGHT

/* Screen Functions */
int screenSetUp();

#endif