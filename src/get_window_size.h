#include <ncurses.h>

// Get window size 
void get_window_size(int *rows, int *cols)
{
  initscr();
  getmaxyx(stdscr, *rows, *cols);
  endwin();
}
