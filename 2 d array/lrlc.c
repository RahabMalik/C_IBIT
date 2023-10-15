#include <stdio.h>

int main()
{
    int i, j, temp;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Original matrix
    printf("Original Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
  // Transpose                       //1 2 3    //1 2 7
    for (i = 0; i < 3; i++)          //4 5 6    //4 5 8
    {                                //7 8 9    //3 6 9
        temp = arr[2][i];                   
        arr[2][i] = arr[i][2];      
        arr[i][2] = temp;            
    }
    printf("\nMatrix after transposition:\n");
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
