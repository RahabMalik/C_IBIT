#include <stdio.h>

void printPattern(int num)
{
    int row, col;
    for (row = num / 2; row <= num; row++)
    {
        for (col = 1; col <= (num - row); col++)
            printf("  ");
        for (col = 1; col <= (2 * row) - 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int num;
    printf("Enter number of rows:");
    scanf("%d", &num);

    printPattern(num);

    return 0;
}
