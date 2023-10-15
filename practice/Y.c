#include <stdio.h>

int main()
{
    int row, col, size = 5;

    for (row = size; row >= 1; row--)
    {
        // Print leading spaces
        for (col = 1; col <= size - row; col++)
        {
            printf("  ");
        }

        // Print asterisks
        for (col = 1; col <= 2 * row - 1; col++)
        {
            if(col==1||col==2*row-1)
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    }
    for (row = 2; row <=size; row++)
    {
        // Print leading spaces
        for (col = 1; col <= size - row; col++)
        {
            printf("  ");
        }

        // Print asterisks
        for (col = 1; col <= 2 * row - 1; col++)
        {
            if(col==1)
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}
