
#include <ncurses.h>

// Function that initializes the ncurses interface
void initWindow()
{
    initscr();
    keypad(stdscr, TRUE);
    noecho();
    cbreak();
}
