#include <stdio.h>

void printZ(int num)
{
    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            if (row == 1 || row == num || row + col == num + 1)
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

    printf("Enter the num of Z: ");
    scanf("%d", &num);

    printZ(num);

    return 0;
}
