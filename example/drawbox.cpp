#include <iostream>

void drawBox(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            // Check if we are at a border location
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

int main() {
    // 20 width and 10 height creates a visual "square"
    drawBox(20, 10);
    return 0;
}
