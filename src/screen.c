#include "rogue.h"

int screenSetUp(){
    initscr();
    noecho();
    refresh();

    // random seed for map gen
    srand(time(NULL));

    return 0;
}