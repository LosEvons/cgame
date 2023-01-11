#include "rogue.h"

int screenSetUp(){
    initscr();
    noecho();
    refresh();

    // random seed for map gen
    srand(time(NULL));

    return 0;
}

int drawLeftBar(){
    int x = 0;
    int y = 0;
    int w = LEFT_BAR_WIDTH;
    int h = SCREEN_HEIGHT;

    // Corners
    mvprintw(y, x, "+");
    mvprintw(y, x + w, "+");
    mvprintw(y + h, x, "+");
    mvprintw(y + h, x + w, "+");

    // Top
    for (x + 1; x < w; x++){
        mvprintw(y, x, "-");
    }
    x = 0;
    // Bottom
    for (x + 1; x < w; x++){
        mvprintw(y + h, x, "-");
    }
    x = 0;
    // Right
    for (y + 1; y < h; y++){
        mvprintw(y, x, "|");
    }
    y = 0;
    // Left
    for (y + 1; y < h; y++){
        mvprintw(y, x + w, "|");
    }
    y = 0;

    return 0;
}