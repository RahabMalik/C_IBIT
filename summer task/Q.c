#include <stdio.h>

void printO(int num)
{
    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            if ((row == 1 && col >= 2 && col <= num - 2) ||
                (row == num - 1 && col >= 2 && col < num - 1) ||
                (col == 1 && row >= 2 && row <= num - 2) || col == num - 1 && row >= 2 && row <= num - 1 || row == col && col > num / 2)
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
    printO(num);
    return 0;
}
