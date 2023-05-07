#include <stdio.h>
#include <ncurses.h>

// Write a file 
void writeFile()
{

    char filename[256];
    char content[256];
    clear();
    mvprintw(0, 0, "Enter the file name: ");
    refresh();
    echo(); 
    getstr(filename);
    noecho(); 
    mvprintw(1, 0, "Enter the file content: ");
    refresh();
    echo(); 
    getstr(content);
    noecho(); 

    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Could not create file");
    }

    if (content != NULL && content[0] != '\0')
    {
        fprintf(file, "%s", content);
    }

    fclose(file);
}