#include <stdio.h>

int main() {
    int size = 6;
    int i, j, k;

    for (i = 1; i <= size; i++) {
        // Print leading spaces
        for (j = 1; j <= size - i; j++) {
            printf(" ");
        }

        // Print asterisks for the left side
        for (k = 1; k <= size; k++) {
            if (k <= size - i) {
                printf(" ");
            } else {
                printf("*");
            }
        }

        // Print asterisks for the right side
        for (k = size - 1; k >= 1; k--) {
            if (k <= size - i) {
                printf(" ");
            } else {
                printf("*");
            }
        }

        printf("\n");
    }

    for (i = size - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= size - i; j++) {
            printf(" ");
        }

        // Print asterisks for the left side
        for (k = 1; k <= size; k++) {
            if (k <= size - i) {
                printf(" ");
            } else {
                printf("*");
            }
        }

        // Print asterisks for the right side
        for (k = size - 1; k >= 1; k--) {
            if (k <= size - i) {
                printf(" ");
            } else {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}
