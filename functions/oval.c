#include <stdio.h>
int main()
{
    int row, col, num, numb;
    printf("Enter number of rows:");
    scanf("%d", &num);

    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            if ((row == 1 && col >= 2 && col <= num - 1) ||
                (row == num && col >= 2 && col < num) ||
                (col == 1 && row >= 2 && row <= num - 1) || col == num && row >= 2 && row <= num-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}