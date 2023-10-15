#include <stdio.h>
int main()
{
    int arr[2][2] = {1, 2, 3, 4};
    int brr[2][1] = {7, 8};
    int result[2][1];
    int i, j, k;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < 2; k++)
            {
                result[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}