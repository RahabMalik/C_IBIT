#include <stdio.h>
int main()
{
    int i, j, r, c, sumRow = 0, sumCol = 0, Totalsum = 0;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of columns:");
    scanf("%d", &c);
    int arr[r][c];
    //take input
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter elements:");
            scanf("%d", &arr[i][j]);
        }
    }
    //print elements
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }

        printf("\n");
    }
    
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            if (j == 0)
            {
                sumCol = sumCol + arr[i][j] + arr[0][0];
            }
        }

        printf("\n");
    }
    Totalsum = sumRow + sumCol;
    printf("sum is %d\n", sumRow);
    printf("sum is %d\n", sumCol);
    printf("total sum is %d", Totalsum);

    return 0;
}