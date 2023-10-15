#include <stdio.h>
void printB(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= num / 2; j++)
        {
            if ((j == 0) ||
                ((j == num / 2) && (i != 0 && i != num - 1 && i != num / 2)) ||
                ((i == 0 || i == num - 1 || i == num / 2-1) && (j != num / 2)))
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
    printf("Enter number of rows: ");
    scanf("%d", &num);
    printB(num);
    return 0;
}
