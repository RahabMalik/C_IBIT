#include <stdio.h>
int main()
{
    int n;
    int c = n / 2 + 1;

    int i, k;
    printf("Enter");
    scanf("%d", n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= (n / 2) + 1; k++)
        {
            if (k == 1 || k == c)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        if (i < n / 2)
        {
            c--;
        }
        else
        {
            c++;
        }
        printf("\n");
    }
}