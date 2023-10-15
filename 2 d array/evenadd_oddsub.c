#include <stdio.h>
int main()
{
    int i, j, r, c, sum = 0;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of columns:");
    scanf("%d", &c);
    int arr[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter elements:");
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if ((i + j) % 2 == 0)
            {
                sum = sum + arr[i][j];
            }
        }

        printf("\n");
    }
    printf("sum is %d\n", sum);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }

        printf("\n");
    }
    return 0;
}