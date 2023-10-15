#include <stdio.h>
#include <math.h>
int four(int num)
{
    int i, j;
    for (i = 1; i <= (num / 2) + 1; i++)
    {
        for (j = 1; j <= (num / 2) - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j == i || i == (num / 2) + 1 || j == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (i = 1; i <= (num / 2); i++)
    {
        for (j = 1; j <= num / 2; j++)
        {
            if (j == (num / 2))
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
    four(num);
    return 0;
}