#include <ncurses.h>

int main(int argc, char *argv[])
{
    int mrow, mcol;         // Empty. Prepare to hold max X, and max Y
    int top, left;

    initscr();              // Begin the ncurses session
    raw();
    noecho();
    keypad(stdscr, TRUE);
    getmaxyx(stdscr, mrow, mcol);

    top = 3;
    left = 5;

    mvprintw(top, left, "Max rows: %d", mrow); // Print the text into the buffer?
    mvprintw(top + 2, left, "Max columns: %d", mcol); // Print the text into the buffer?
    mvprintw(top + 4, left, "Option 3"); // Print the text into the buffer?
    refresh();              // Refresh the actual screen
    getch();                // Await some keypress

    endwin();               // End the ncurses session

    return 0;
}
