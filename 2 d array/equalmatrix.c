#include<stdio.h>
int main()
{
    int i, j, r, c;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of columns:");
    scanf("%d", &c);
    int arr[r][c], brr[r][c], check = 0;
    printf("1st Matrix is\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter elements:");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("2nd Matrix is\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter elements:");
            scanf("%d", &brr[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (arr[i][j] == brr[i][j])
                check = 0;
            else
                check = 1;
        }
    }
    if (check == 0)
    {
        printf("matrix are equal");
    }
    else
    {
        printf("matrix are not equal");
    }
    printf("\n");
    return 0;
}