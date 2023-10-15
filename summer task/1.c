#include <stdio.h>
int one(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (j == (num / 2) + 1 || i == num)
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
    one(num);
    return 0;
}