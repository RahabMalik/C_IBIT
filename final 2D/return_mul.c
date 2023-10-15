#include <stdio.h>
#include <stdlib.h>
int **mul(int r1, int c1, int **mat1, int r2, int c2, int **mat2)
{
    int **result = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++)
    {
        result[i] = (int *)malloc(c2 * sizeof(int));
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return result;
}
void displayMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int r1 = 2, r2 = 3, c1 = 3, c2 = 2;
    int **mat1 = (int **)malloc(r1 * sizeof(int *));
    {
        for (int i = 0; i < r1; i++)
            mat1[i] = (int *)malloc(c1 * sizeof(int));
    }
    int **mat2 = (int **)malloc(r2 * sizeof(int *));
    {
        for (int i = 0; i < r2; i++)
            mat2[i] = (int *)malloc(c2 * sizeof(int));
    }
    printf("Enter value of matrix 1:");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter value of matrix 2:");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Matrix 1:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    int **res;

    if (c1 == r2)
    {
        res = mul(r1, c1, mat1, r2, c2, mat2);
        printf("Result Matrix:\n");
        displayMatrix(res, r1, c2);

        // Free the result matrix
        for (int i = 0; i < r1; i++)
        {
            free(res[i]);
        }
        free(res);
    }
    else
    {
        printf("Matrix multiplication is not possible with the given dimensions.\n");
    }

    return 0;
}