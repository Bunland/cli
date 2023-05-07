#include <ncurses.h>
#include "./src/main_loop.h"
#include "./src/int_window.h"
#include "./src/end_window.h"


int main()
{
  initWindow();
  main_loop();
  endWindow();
  return 0;
}
