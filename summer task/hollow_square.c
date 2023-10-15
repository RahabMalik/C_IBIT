#include <stdio.h>
void square_stars(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (i == 1 || i == num || j == 1 || j == num)
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
    printf("Enter number of rows :");
    scanf("%d", &num);
    square_stars(num);
    return 0;
}