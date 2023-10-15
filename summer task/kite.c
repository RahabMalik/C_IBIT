#include <stdio.h>

void printTopPyramid(int num, int row) {
    for (int col = 1; col <= (num - row); col++)
        printf("  ");
    for (int col = 1; col <= (2 * row) - 1; col++) {
        if (col == (2 * row) - 1 || col == 1 || col == row || row == num)
            printf("* ");
        else
            printf("  ");
    }
    printf("\n");
}

void printBottomPyramid(int num, int row) {
    for (int col = 1; col <= (num - row); col++)
        printf("  ");
    for (int col = 1; col <= (2 * row) - 1; col++) {
        if (col == (2 * row) - 1 || col == 1 || col == row)
            printf("* ");
        else
            printf("  ");
    }
    printf("\n");
}

void printMiddleRow(int num, int row) {
    for (int col = 1; col <= (num - row); col++)
        printf("  ");
    for (int col = 1; col <= (2 * row) - 1; col++) {
        if (col == (2 * row) - 1 || col == 1 || row == num / 2)
            printf("* ");
        else
            printf("  ");
    }
    printf("\n");
}

void printKite(int num) {
    for (int row = 1; row <= num; row++)
        printTopPyramid(num, row);

    for (int row = num - 1; row >= 1; row--)
        printBottomPyramid(num, row);

    for (int row = 1; row <= num / 2; row++)
        printMiddleRow(num, row);
}

int main() {
    int num;
    printf("Enter number of rows: ");
    scanf("%d", &num);
    printKite(num);
    return 0;
}
