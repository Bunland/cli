#include <ncurses.h>

// Function that cleans up the ncurses interface and returns control to the terminal
void endWindow()
{
    endwin();
}