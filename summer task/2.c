#include <stdio.h>
#include <math.h>
int two(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (i == 1 || i == (num / 2) + 1 || i == num || j == num && i <= ceil(num / 2) || j == 1 && i > num / 2)
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
    printf("Enter number of rows:");
    scanf("%d", &num);
    two(num);
    return 0;
}