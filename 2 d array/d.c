#include <stdio.h>
#include <string.h>

// Function to draw a hollow shape
void drawHollowShape(int size, char symbol) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("%c ", symbol);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

// Function to draw a filled shape
void drawFilledShape(int size, char symbol) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
}

int main() {
    int option;
    printf("Select an option:\n");
    printf("1. Create a shape\n");
    printf("2. Exit\n");
    scanf("%d", &option);

    while (option == 1) {
        char name[50], type[20], symbol;
        int size;
        char outlineColor[20], fillColor[20];
        int x, y;

        printf("Enter the shape name: ");
        scanf("%s", name);

        printf("Enter the shape type (hollow or filled): ");
        scanf("%s", type);

        printf("Enter the size of the shape: ");
        scanf("%d", &size);

        printf("Enter the outline color: ");
        scanf("%s", outlineColor);

        if (strcmp(type, "hollow") == 0) {
            printf("Enter the symbol for the hollow shape: ");
            getchar(); // Clear newline character from the input buffer
            scanf("%c", &symbol);
        } else {
            printf("Enter the symbol for the filled shape: ");
            getchar(); // Clear newline character from the input buffer
            scanf("%c", &symbol);
        }

        printf("Enter the position (x, y) on the terminal: ");
        scanf("%d %d", &x, &y);

        printf("\nDrawing the shape:\n");
        printf("Name: %s\n", name);
        printf("Type: %s\n", type);
        printf("Size: %d\n", size);
        printf("Outline Color: %s\n", outlineColor);
        printf("Symbol: %c\n", symbol);
        printf("Position (x, y): (%d, %d)\n", x, y);

        // Adjust position
        for (int i = 0; i < y; i++) {
            printf(" \n");
        }
        for (int i = 0; i < x; i++) {
            printf("  ");
        }

        // Draw the shape
        if (strcmp(type, "hollow") == 0) {
            drawHollowShape(size, symbol);
        } else {
            drawFilledShape(size, symbol);
        }

        printf("\n\n");

        printf("Select an option:\n");
        printf("1. Create a shape\n");
        printf("2. Exit\n");
        scanf("%d", &option);
    }

    printf("Exiting the program.\n");
    return 0;
}
