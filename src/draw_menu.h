#include <ncurses.h>

// Function that draws the options on the screen
void draw_menu(const char *options[], int choice, int max_rows, int max_cols, int rows_per_col)
{
  clear();
  printw("Select an option:\n");
  for (int i = 0; i < 6; i++)
  {
    if (choice == i)
    {
      printw(" [X] %s\n", options[i]);
    }
    else
    {
      printw(" [ ] %s\n", options[i]);
    }
    if ((i + 1) % rows_per_col == 0)
    {
      // move to next column
      int col = (i + 1) / rows_per_col - 1;
      int row = 1 + (i + 1) % rows_per_col;
      mvprintw(row, (max_cols / 3) * (col + 1), "|");
    }
  }
  refresh();
}