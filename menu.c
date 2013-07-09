#include <ncurses.h>

int main(int argc, char *argv[])
{
    initscr();              // Begin the ncurses session

    printw("Hello world!"); // Print the text into the buffer?
    refresh();              // Refresh the actual screen
    getch();                // Await some keypress

    endwin();               // End the ncurses session

    return 0;
}
