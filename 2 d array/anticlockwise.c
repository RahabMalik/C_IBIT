#include <stdio.h>
int main()
{
    int i, j, r, c;
    printf("Enter number of rows:");
    scanf("%d", &r);
    printf("Enter number of columns:");
    scanf("%d", &c);
    int arr[r][c];
    int brr[r][c];
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
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose is:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
          printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    printf("Rotation in anticlockwise is:\n");
    for (i = c-1; i >=0; i--)
    {
        for (j = 0; j < r; j++)
        {
            brr[i][j]=arr[j][i];
            printf("%d\t", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}