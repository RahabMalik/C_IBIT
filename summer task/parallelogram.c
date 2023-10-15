#include <stdio.h>

void printPattern(int size)
{
    int row, col, space;
    for (row = 1; row <= size; row++)
    {
        for (space = 1; space <= (size - row); space++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * size; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int size;
    printf("Enter number of rows:");
    scanf("%d", &size);

    printPattern(size);

    return 0;
}
