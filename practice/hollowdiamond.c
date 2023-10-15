#include <stdio.h>
int main()
{
    int num, col, row;
    printf("Enter number of rows:");
    scanf("%d", &num);
    for (row = 1; row <= num; row++)
    {
       for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == (2 * row) - 1 || col == 1 || col == row || row == num)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (row = num - 1; row >= 1; row--)
    {
        for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == (2 * row) - 1 || col == 1 || col == row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (row = 1; row <= num / 2; row++)
    {
        for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == (2 * row) - 1 || col == 1 || row == num / 2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}