#include <stdio.h>
int main()
{
    int row, col, num;
    printf("Enter number of rows:");
    scanf("%d", &num);

    for (row = 1; row <= (num / 2); row++)
    {
        for (col = 1; col <= (num / 2) - 2; col++)
            printf("  ");
        for (col = 1; col <= 3; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (row = num / 2; row >= 1; row--)
    {
        for (col = 1; col <= num / 2 - row; col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}