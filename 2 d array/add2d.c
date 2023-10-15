#include <stdio.h>
int main()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    int brr[2][3] = {7, 8, 9, 10, 11, 12};
    int result[2][3];
    int i, j;
    {
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                result[i][j] = arr[i][j] + brr[i][j];

                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}