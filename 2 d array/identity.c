#include <stdio.h>
int main()
{
    int i, j, r, c;
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
            if (i == j)
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }

        printf("\n");
    }
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