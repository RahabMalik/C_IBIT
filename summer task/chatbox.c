#include <stdio.h>
int rectangle(int num)
{
    int row, col;
    for (row = 1; row <= num - 1; row++)
    {
        for (col = 1; col <= 2 * num; col++)
            if (row == 1 || row == num - 1 && col >= num-1 / 2|| col == 1 || col == 2 * num )
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    for (row = num / 2-1; row >= 1; row--)
    {
        for (col = 1; col <= num / 2 - row; col++)
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
int main()
{
    int num;
    printf("Enter size of rectangle:");
    scanf("%d", &num);
    rectangle(num);
    return 0;
}