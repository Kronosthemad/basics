// main.cpp
#include <iostream>
#include "shapes.h" // We only need to include the header, not the cpp file!
#include "cursebox.h"

int main() {
  int choice;
  int w, h;

  std::cout << "=== Box Drawer ===\n";
  std::cout << "1. Basic Box (*)\n";
  std::cout << "2. Solid Box (Lines)\n";
  std::cout << "3. Ncurse Box  (Proper drawling)\n";
  std::cout << "Select a style (1-3): ";
    
  // Get the user's menu choice
  std::cin >> choice;

  std::cout << "Enter width: ";
  std::cin >> w;
  std::cout << "Enter height: ";
  std::cin >> h;

  std::cout << "\nResult:\n";

  // Logic to decide which function to run
  switch (choice) {
  case 1:
    drawBasicBox(w, h);
    break;
  case 2:
    drawSolidBox(w, h);
    break;
  case 3:
    drawCurseBox(w, h);
    break;
  default:
    std::cout << "Invalid choice selected.\n";
    break;
  }

  return 0;
}
