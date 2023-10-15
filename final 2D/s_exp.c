#include <stdio.h>
#include <stdlib.h>
int **matrix_multiply(int **arr, int **arr2)
{
    int **mul_arr;
    mul_arr = (int **)malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++)
    {
        mul_arr[i] = (int *)malloc(3 * sizeof(int));
    }
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum = sum + (arr[i][k] * arr2[k][j]);
            }
            mul_arr[i][j] = sum;
        }
    }
    return mul_arr;
}
int **make_identity()
{
    int **arr;
    arr = (int **)malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++)
    {
        arr[i] = (int *)malloc(3 * sizeof(int));
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
    return arr;
}
int factorial(int n)
{
    int fac = 1;
    for (int i = n; i >= 1; i--)
    {
        fac = fac * i;
    }
    return fac;
}
void mat_by_fact(int **arr, int n)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = (arr[i][j] / n);
        }
    }
}
int **sum_all_data(int **arr1, int **arr2, int **arr3, int **arr4)
{
    int **arr;
    arr = (int **)malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++)
    {
        arr[i] = (int *)malloc(3 * sizeof(int));
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = arr1[i][j] + arr2[i][j] + arr3[i][j] + arr4[i][j];

        }
    }
    return arr;
}
int main()
{
    int **arr;
    int rows = 3, cols = 3;
    arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int **AbyA = matrix_multiply(arr, arr);
    int **AbyAbyA = matrix_multiply(AbyA, arr);
    int fac_2 = factorial(2);
    int fac_3 = factorial(3);
    mat_by_fact(AbyA, fac_2);
    mat_by_fact(AbyAbyA, fac_3);

    int **identity_mat = make_identity();

    int **answer = sum_all_data(identity_mat, arr, AbyA, AbyAbyA);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", AbyA[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", AbyAbyA[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", answer[i][j]);
        }
        printf("\n");
    }
    return 0;
}