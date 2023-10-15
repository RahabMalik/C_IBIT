#include <stdio.h>
int printUpArrowHollow(int num)
{
    int row, col;
    for (row = 1; row <= (num / 2); row++)
    {
        for (col = 1; col <= num / 2 - row; col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == 1 || col == (2 * row) - 1 || row == num / 2 && col > num / 2 || row == num / 2 && col < num / 2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (row = 1; row <= (num / 2); row++)
    {
        for (col = 1; col <= (num / 2) - 2; col++)
            printf("  ");
        for (col = 1; col <= 3; col++)
        {
            if (col == 1 || col == 3 || row == num / 2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
int main()
{
    int num;
    printf("Enter number of rows:");
    scanf("%d", &num);
    printUpArrowHollow(num);
    return 0;
}