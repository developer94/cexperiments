#ifndef __MENU_H__
#define __MENU_H__

#include <ncurses.h>

#define length(A) (sizeof(A) / sizeof(A[0]))

extern char items[3][9];

int selected;
int mrow, mcol;

void init_menu(void);
void draw_menu(void);
void update_menu(char input);

#endif
