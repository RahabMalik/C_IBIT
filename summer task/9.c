#include <stdio.h>
int nine(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= (num / 2) + 1; j++)
        {

            if ((num / 2) % 2 == 0)
            {
                if (j == (num / 2) + 1 || i == num || i == 1 || i == num / 2 || j == 1 && i < (num / 2) + 1)
                    printf("* ");
                else
                    printf("  ");
            }
            else
            {
                if (j == (num / 2) + 1 || i == num || i == 1 || i == (num / 2) || j == 1 && i < (num / 2) + 1)
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int num;
    printf("Enter number of rows:");
    scanf("%d", &num);
    nine(num);
    return 0;
}