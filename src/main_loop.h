#include <ncurses.h>
#include "draw_menu.h"
#include "read_input.h"
#include "get_window_size.h"
#include "write_file.h"

// Main lopp
void main_loop()
{
  const char *options[] = {"Write to file", "Option 2", "Option 3", "Option 4", "Option 5", "Option 6"};
  int choice = 0;
  int max_rows, max_cols;
  get_window_size(&max_rows, &max_cols);
  int rows_per_col = (max_rows - 1) / 3;

  while (1)
  {
    draw_menu(options, choice, max_rows, max_cols, rows_per_col);

    int c = read_input();
    if (c == 'q')
    {
      break;
    }
    else if (c == KEY_UP)
    {
      choice = (choice - 1 + 6) % 6;
    }
    else if (c == KEY_DOWN)
    {
      choice = (choice + 1) % 6;
    }
    else if (c == KEY_ENTER || c == '\n')
    {
      switch (choice)
      {
      case 0:
        writeFile();
        break;
      case 1:
        // Código para la opción 2
        break;
      // Repite para cada opción
      default:
        break;
      }
    }
    else if (c == 'e')
    {
      continue;
    }
  }
}