// shapes.cpp
#include <iostream>
#include "shapes.h" // Include your own header

void drawBasicBox(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << "\n";
    }
}

void drawSolidBox(int width, int height) {
    // Top
    std::cout << "\u250C";
    for (int i = 0; i < width - 2; i++) std::cout << "\u2500";
    std::cout << "\u2510\n";
    
    // Middle
    for (int i = 0; i < height - 2; i++) {
        std::cout << "\u2502";
        for (int j = 0; j < width - 2; j++) std::cout << " ";
        std::cout << "\u2502\n";
    }

    // Bottom
    std::cout << "\u2514";
    for (int i = 0; i < width - 2; i++) std::cout << "\u2500";
    std::cout << "\u2518\n";
}
