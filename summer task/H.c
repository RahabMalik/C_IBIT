#include <stdio.h>
int eight(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= (num / 2) + 1; j++)
        {

            if ((num / 2) % 2 == 0)
            {
                if (j == (num / 2) + 1 || i == (num / 2)+1|| j == 1)
                    printf("* ");
                else
                    printf("  ");
            }
            else
            {
                if (j == (num / 2) + 1 || i == (num/2)||  j == 1)
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
    eight(num);
    return 0;
}