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
  // Transpose                       //1 2 3    //7 2 3
    for (i = 0; i < 3; i++)          //4 5 6    //8 5 6
    {                                //7 8 9    //9 4 1 
        temp = arr[i][0];            // arr[1][0]=4           
        arr[i][0] = arr[2][i];       // arr[1][0]=arr[2][1]=7
        arr[2][i] = temp;            //arr[2][1]=4
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
