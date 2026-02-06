#include <ncurses.h>
#include "cursebox.h"

void drawCurseBox(int width, int height) {
    initscr();            // Start ncurses mode
    cbreak();             // Disable line buffering
    noecho();             // Don't show typing
    curs_set(0);          // Hide cursor

    int start_y = 0;      // Vertical position
    int start_x = 0;     // Horizontal position

    // Create a window for the box
    WINDOW *win = newwin(36, 145, start_y, start_x);
    refresh();            // Refresh main screen

    // Draw the box with default characters (0, 0)
    box(win, 0, 0); 
    
    mvwprintw(win, height, width, "Hello!"); // Print text inside
    wrefresh(win);        // Refresh the window to show changes

    getch();              // Wait for user input
    endwin();             // End ncurses mode
}
