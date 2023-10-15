#include <stdio.h>
int main()
{
    int row, col, num;
    printf("Enter number of rows:");
    scanf("%d", &num);

    for (row = 1; row <= num / 2; row++)
    {
        for (col = 1; col <= num / 2 - 1; col++)
            printf("  ");

        for (col = 1; col <= num / 2; col++)
        {
            printf("* ");
        }

        for (col = 1; col <= row; col++)
        {

            printf("* ");
        }
        for (col = 1; col <= (num / 2 - row) + 1; col++)
            printf("* ");
        for (col = 1; col <= (row - 1); col++)
            printf("  ");
        printf("\n");
    }

    return 0;
}