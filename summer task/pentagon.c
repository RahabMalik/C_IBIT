#include <stdio.h>
#include <math.h>
void pentagon(int num)
{
    int row,col;
    if (num % 2 != 0)
    {
        printf("Enter even number:");
        scanf("%d", &num);
    }
    for (row = 1; row <= (num / 2); row++)
    {
        for (col = 1; col <= num / 2 - row; col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (row = 1; row <= (num / 2 - 1); row++)
    {
        for (col = 1; col <= (2 * num / 2) - 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int row, col, num;
    printf("Enter number of rows:");
    scanf("%d", &num);
    pentagon(num);
    return 0;
}