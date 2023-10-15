#include <stdio.h>
#include <unistd.h> // for usleep

void clearScreen() {
    printf("\033[H\033[J"); // Clear terminal screen
}

int main() {
    int i, j;
    int size = 5; // Change this value to adjust the size of the square
    int delay = 1000000; // Microseconds (1000000 microseconds = 1 second)

    while (1) {
        clearScreen();

        for (i = 0; i < size; i++) {
            for (j = 0; j < size; j++) {
                if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }

        usleep(delay);

        // Rotate the square by shifting rows and columns
        int temp = size - 1;
        for (i = 0; i < size; i++) {
            for (j = 0; j < size; j++) {
                if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                    printf("* ");
                } else if (i == 1 && j < temp) {
                    printf("* ");
                } else if (j == size - 2 && i >= 1) {
                    printf("* ");
                } else if (i == size - 2 && j >= 1) {
                    printf("* ");
                } else if (j == 1 && i < temp) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }

        usleep(delay);
    }

    return 0;
}
