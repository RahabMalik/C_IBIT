#include <stdio.h>
int main()
{
    int row, col, size = 5;
    for (row = 1; row <= size; row++)
    {
        for (col = 1; col <= size - row; col++)
            printf("  ");

        // printf("\n");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == (2 * row) - 1 || col == 1 || col == row || row == size)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (row = size - 1; row >= 1; row--)
    {

        for (col = 1; col <= (size - row); col++)
        {
            printf("  ");
        }
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == 1 || col == (2 * row) - 1 || row == col)

                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (row = 1; row <= size /2; row++)
    {
        for (col = 1; col <= (size - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == (2 * row) - 1 || col == 1 || col == size || row == size / 2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}