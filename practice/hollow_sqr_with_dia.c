#include <stdio.h>
int main()
{
    int row, col, num;
    printf("Enter number of rows:");
    scanf("%d", &num);
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= num; col++)
        {
            if (row == 1 || col == num || col == 1 || row == num || row == col || col == (num - row) + 1)
                printf("* ");

            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}