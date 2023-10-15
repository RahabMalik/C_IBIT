#include <stdio.h>
#include <stdlib.h>

int **allocate_2d_array(int r, int c)
{
    int **arr = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
    {
        arr[i] = (int *)malloc(c * sizeof(int));
    }
    return arr;
}

int **matrix_mul(int **arr, int **brr, int r, int c)
{
    int **mul = allocate_2d_array(r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int sum = 0;
            for (int k = 0; k < c; k++)
            {
                sum += arr[i][k] * brr[k][j];
            }
            mul[i][j] = sum;
        }
    }
    return mul;
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
void mul_by_fac(int **arr, int n, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = arr[i][j] / n;
        }
    }
}
int **make_identity(int r, int c)
{
    int **arr = allocate_2d_array(r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
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
int **sum_all_data(int **AbyA, int **AbyAbyA, int **arr1, int **identity, int r, int c)
{
    int **arr = allocate_2d_array(r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = AbyA[i][j] + AbyAbyA[i][j] + arr1[i][j] + identity[i][j];
        }
    }
    return arr;
}
int main()
{
    int r = 3, c = 3;
    int **arr = allocate_2d_array(r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int **AbyA = matrix_mul(arr, arr, r, c);
    int **AbyAbyA = matrix_mul(AbyA, arr, r, c);
    int fat2 = factorial(2);
    int fat3 = factorial(3);
    mul_by_fac(AbyA, fat2, r, c);
    mul_by_fac(AbyAbyA, fat3, r, c);
    int **identity = make_identity(r, c);
    int **result = sum_all_data(AbyA, AbyAbyA, arr, identity, r, c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", AbyA[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", AbyAbyA[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        free(arr[i]);
        free(AbyA[i]);
        free(AbyAbyA[i]);
        free(identity[i]);
        free(result[i]);
    }
    free(arr);
    free(AbyA);
    free(AbyAbyA);
    free(identity);
    free(result);
    return 0;
}