#include <stdio.h>

void printHollowRectangle(int numRows, int numColumns) {
    for (int row = 1; row <= numRows; row++) {
        for (int col = 1; col <= numColumns; col++) {
            if (row == 1 || row == numRows || col == 1 || col == numColumns) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int numRows, numColumns;

    printf("Enter number of rows:");
    scanf("%d", &numRows);
    printf("Enter number of columns:");
    scanf("%d", &numColumns);

    printHollowRectangle(numRows, numColumns);

    return 0;
}

