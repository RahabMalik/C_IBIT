#include <stdio.h>
int seven(int num)
{
    int i, j;
    for (i = 1; i < num/2; i++)
    {
        for (j = 1; j <= num/2; j++)
        {
            if (i == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        for (j = 1; j <= num/2 - i; j++)
        {
            if (j == num/2 - i)
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
    seven(num);
    return 0;
}