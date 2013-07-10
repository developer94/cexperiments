#include <assert.h>
#include "menu.h"

#define length(A) (sizeof(A) / sizeof(A[0]))

char items[3][9] = {"Item 1", "Opcija 2", "Opcija 3"};

int main(int argc, char *argv[])
{
    char input;


    initscr();              // Begin the ncurses session
    raw();
    noecho();
    keypad(stdscr, TRUE);
    init_menu();


    draw_menu();

    while((input = getch()) != 'q')
    {
        update_menu(input);
        draw_menu();
        refresh();              // Refresh the actual screen
    }

    endwin();               // End the ncurses session

    return 0;
}
