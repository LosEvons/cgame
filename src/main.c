#include "rogue.h"

int main() {
    screenSetUp();

    int ch;
    int cnt = 0;

    while((ch = getch()) != 'q') {
        mvprintw(cnt, cnt, "@");
        cnt++;
    }

    endwin();

    return 0;
}