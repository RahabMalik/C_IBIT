#include <stdio.h>

void printNumberZero(int num)
{
    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            if ((row == 1 && col >= 2 && col <= num - 1) ||
                (row == num && col >= 2 && col < num) ||
                col == 1 || col == num && row >= 2 && row <= num-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int num;
    printf("Enter the size of 0: ");
    scanf("%d", &num);
    printNumberZero(num);
    return 0;
}
