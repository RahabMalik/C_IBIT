// TRANSPOSE last row to  1st col
//  1 2 3        // 7 2 3
//  4 5 6        // 8 5 6
//  7 8 9        // 9 1 4
#include <stdio.h>
int main()
{
    int i, j, r, c;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int temp;
    temp = arr[0][0];
    arr[0][0] = arr[2][0];
    arr[2][0] = temp;

    temp = arr[2][0];
    arr[2][0] = arr[1][0];
    arr[1][0] = temp;

    temp = arr[1][1];
    arr[1][1] = arr[2][2];
    arr[2][2] = temp;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
