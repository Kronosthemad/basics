#include <ncurses.h>

int main() {
    initscr();            // Start ncurses mode
    cbreak();             // Disable line buffering
    noecho();             // Don't show typing
    curs_set(0);          // Hide cursor

    int height = 10;
    int width = 20;
    int start_y = 5;      // Vertical position
    int start_x = 10;     // Horizontal position

    // Create a window for the box
    WINDOW *win = newwin(height, width, start_y, start_x);
    refresh();            // Refresh main screen

    // Draw the box with default characters (0, 0)
    box(win, 0, 0); 
    
    mvwprintw(win, 1, 1, "Hello!"); // Print text inside
    wrefresh(win);        // Refresh the window to show changes

    getch();              // Wait for user input
    endwin();             // End ncurses mode
    return 0;
}
