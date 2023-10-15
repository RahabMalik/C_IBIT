#include <stdio.h>

int main()
{
    int row, col, size;
    printf("Enter number of rows:");
    scanf("%d", &size);
    for (row = size / 2; row >= 1; row--)
    {
        // Print leading spaces
        for (col = 1; col <= size / 2 - row; col++)
        {
            printf("  ");
        }

        // Print asterisks
        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (row = 2; row <= size / 2; row++)
    {
        // Print leading spaces
        for (col = 1; col <= size / 2 - row; col++)
        {
            printf("  ");
        }

        // Print asterisks
        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
