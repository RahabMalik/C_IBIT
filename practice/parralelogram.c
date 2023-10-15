#include <stdio.h>

int main()
{
    int row, col, space;

    for (row = 1; row <= 4; row++)
    {
        // Print spaces before each row
        for (space = 1; space <= (4 - row); space++)
        {
            printf("  ");
        }

        // Print asterisks in each row
        for (col = 1; col <= 8; col++)
        {
            //if (row == 1 || col == 1 || col == 8 || row == 4)
            {

                printf("* ");
            }
           /* else
                printf("  ");
                */
        }

        printf("\n");
    }

    return 0;
}
