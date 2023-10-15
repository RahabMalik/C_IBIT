#include <stdio.h>

int main()
{
    int i, j;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Original Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int temp[3][3]; 
    for (i = 0; i < 3; i++)
    {
        temp[i][0] = arr[2 - i][2];
    }
    for (i = 0; i < 3; i++)
    {
        temp[i][1] = arr[1 - i][1];
    }

    for (i = 0; i < 3; i++)
    {
        temp[i][2] = arr[i][0];
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr[i][j] = temp[i][j];
        }
    }

    printf("\nModified Matrix:\n");
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
