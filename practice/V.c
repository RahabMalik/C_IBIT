#include <stdio.h>
int main()
{
    int row, col, size = 5;
    for (row = size; row >=1; row--)
    { // left side V
        for (col = 1; col <= row; col++)
        {
            if (col == row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

        // MID space
        for (col = 1; col <= 2 * (size - row) - 1; col++)
        {
            printf("  ");
        }
        // printf("\n");
        //  left v
        for (col = 1; col <= row; col++)
        {
            if (col == row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}