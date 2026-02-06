#include <iostream>

void drawSolidBox(int width, int height) {
    // Top border
    std::cout << "\u250C"; // ┌
    for (int i = 0; i < width - 2; i++) std::cout << "\u2500"; // ─
    std::cout << "\u2510\n"; // ┐

    // Middle section
    for (int i = 0; i < height - 2; i++) {
        std::cout << "\u2502"; // │
        for (int j = 0; j < width - 2; j++) std::cout << " ";
        std::cout << "\u2502\n"; // │
    }

    // Bottom border
    std::cout << "\u2514"; // └
    for (int i = 0; i < width - 2; i++) std::cout << "\u2500"; // ─
    std::cout << "\u2518\n"; // ┘
}

int main() {
    drawSolidBox(20, 10);
    return 0;
}
