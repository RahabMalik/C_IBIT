#include <stdio.h>
int U(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= (num / 2) + 1; j++)
        {

            if ((num / 2) % 2 == 0)
            {
                if (i == num || j == 1 || j == num/2+1)
                    printf("* ");
                else
                    printf("  ");
            }
            else
            {
                if (i == num || j == 1 || j == num/2+1)
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
    U(num);
    return 0;
}