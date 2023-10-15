#include <stdio.h>

// Function to print spaces
void printSpaces(int spaces) {
    for (int i = 0; i < spaces; i++) {
        printf("  ");
    }
}

// Function to print the asterisks with spaces in between
void printAsterisksWithSpaces(int asterisks) {
    for (int i = 0; i < asterisks; i++) {
        if (i == 0 || i == asterisks - 1) {
            printf("* ");
        } else {
            printf("  ");
        }
    }
}

// Function to print the diamond pattern
void printDiamondPattern(int num) {
    for (int row = 1; row <= num; row++) {
        printSpaces(num - row);
        printAsterisksWithSpaces(2 * row - 1);
        printf("\n");
    }

    for (int row = num - 1; row >= 1; row--) {
        printSpaces(num - row);
        printAsterisksWithSpaces(2 * row - 1);
        printf("\n");
    }
}

int main() {
    int num;
    printf("Enter number of rows: ");
    scanf("%d", &num);
    printDiamondPattern(num);
    return 0;
}
