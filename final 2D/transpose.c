#include <stdio.h>
#include <stdlib.h>
int **transpose(int **arr, int r, int c)
{
    int **trans = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
    {
        trans[i] = (int *)malloc(c * sizeof(int));
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            trans[i][j] = arr[j][i];
        }
        printf("\n");
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return trans;
}

int main()
{
    int r = 3, c = 3;
    int **arr = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
    {
        arr[i] = (int *)malloc(c * sizeof(int));
    }
    printf("Enter matrix element");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int **result = transpose(arr, r, c);
}