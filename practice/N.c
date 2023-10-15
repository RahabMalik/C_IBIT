
#include <stdio.h>
int main()
{
    int row, col, size = 5;
    for (row = 1; row <= size; row++)
    {
        for (col = 1; col <= size; col++)
        {
            if (col == 1 || col == row || col == 5 )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}