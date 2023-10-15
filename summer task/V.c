#include <stdio.h>

// Function to print a row of spaces
void printSpaces(int count) {
    for (int i = 0; i < count; i++) {
        printf("  ");
    }
}

// Function to print a row of asterisks with optional decoration
void printAsterisks(int count, int hasDecoration) {
    for (int i = 0; i < count; i++) {
        if (hasDecoration && (i == 0 || i == count - 1)) {
            printf("* ");
        } else {
            printf("  ");
        }
    }
}

int main() {
    int size;

    printf("Enter the size: ");
    scanf("%d", &size);

    // Upper half of the pattern
    for (int row = size; row >= 1; row--) {
        printSpaces(size - row);
        printAsterisks(2 * row - 1, 1);
        printf("\n");
    }

    // Lower half of the pattern
    for (int row = 2; row <= size; row++) {
        printSpaces(size - row);
        printAsterisks(2 * row - 1, 0);
        printf("\n");
    }

    return 0;
}
