#include <conio.h>
#include <stdio.h>

// Function to move the cursor without printing anything
void moveCursor(char direction) {
    if (direction == 'U') {
        printf("\033[1A"); // Move cursor up
    } else if (direction == 'D') {
        printf("\033[1B"); // Move cursor down
    } else if (direction == 'L') {
        printf("\033[1D"); // Move cursor left
    } else if (direction == 'R') {
        printf("\033[1C"); // Move cursor right
    }
}

int main() {
    char ch;

    printf("At start cursor position");

    while (1) {
        ch = getch(); // Capture the arrow key press without waiting for Enter

        // Check for arrow key press
        if (ch == 0 || ch == 224) {
            ch = getch(); // Capture the extended key code

            // Array to store possible arrow keys
            char arrow_keys[] = {72, 80, 75, 77};
            char direction;

            // Check which arrow key was pressed
            for (int i = 0; i < sizeof(arrow_keys); i++) {
                if (ch == arrow_keys[i]) {
                    direction = "UDLR"[i]; // Map the index to corresponding direction
                    moveCursor(direction);
                    break;
                }
            }
        }
    }

    return 0;
}
