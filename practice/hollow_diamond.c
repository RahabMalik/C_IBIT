#include <stdio.h>
int Diamondupper(int num)
{
    int row, col;
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == (2 * row) - 1 || col == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
int DiamondLower(int num)
{
    int row, col;
    for (row = num - 1; row >= 1; row--)
    {
        for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == (2 * row) - 1 || col == 1)
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
    Diamondupper(num);
    DiamondLower(num);
    return 0;
}