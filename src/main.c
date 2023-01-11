#include "rogue.h"

int main() {
    screenSetUp();

    int ch;

    while((ch = getch()) != 'q') {
        drawLeftBar();
    }

    endwin();

    return 0;
}