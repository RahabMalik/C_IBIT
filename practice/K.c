#include <stdio.h>
int main()
{
    int row, col, size = 3;
    for (row = 1; row <= size; row++)
    {
        // Left side
        for (col = 1; col <= row; col++)
        {
            if (col == 1 || col == row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        // mid space
        for (col = 1; col <= 2 * (size - row); col++)
        {
            printf("  ");
        }
        // Right side 
        for (col = 1; col <= row; col++)
        {
            if (col == 1 || col == row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}