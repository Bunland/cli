#include <stdio.h>
#include <ncurses.h>

void writeFile()
{

    char filename[256];
    char content[256];
    clear();
    mvprintw(0, 0, "Enter the file name: ");
    refresh();
    echo(); // activa la función echo() para mostrar la entrada del usuario
    getstr(filename);
    noecho(); // desactiva la función echo() para que la entrada del usuario no se muestre en pantalla
    mvprintw(1, 0, "Enter the file content: ");
    refresh();
    echo(); // activa la función echo() nuevamente
    getstr(content);
    noecho(); // desactiva la función echo() nuevamente


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