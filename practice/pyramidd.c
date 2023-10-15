#include <stdio.h>
int main()
{
    int row, col, num;
    printf("Enter number of rows:");
    scanf("%d", &num);
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= num - row; col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            if (col == 1 || col == (2 * row) - 1 || row == num)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}