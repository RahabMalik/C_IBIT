#include <stdio.h>
int main()
{
    int i, j, max,min,maxrow,maxcol;
    int arr[2][3];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter elements of an array:");
            scanf("%d", &arr[i][j]);
        }
    }
    max = arr[0][0];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                maxrow=i;
                maxcol=j;
            }
        }
    }
    printf("max value is %d\n", max);
    printf("Index is %d %d\n",maxrow,maxcol);
     //min value
    min = arr[0][0];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (min > arr[i][j])
                min = arr[i][j];
        }
    }
    printf("min value is %d", min);


    return 0;
}