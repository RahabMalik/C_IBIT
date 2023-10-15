#include <stdio.h>
#include <stdlib.h>

int **allocate_2d_array(int rows, int cols)
{
    int **arr;
    arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    return arr;
}
int **make_small(int **arr, int i_2, int j_2)
{
    int **extracted = allocate_2d_array(2, 2);
    int reset = j_2;
    for (int i = 0; i < 2; i++, i_2++)
    {
        if (i == 1)
        {
            j_2 = reset;
        }
        for (int j = 0; j < 2; j++, j_2++)
        {
            extracted[i][j] = arr[i_2][j_2];
        }
    }
    return extracted;
}
int **matrix_multiply(int **extract, int **filter)
{
    int **mul_arr = allocate_2d_array(3, 3);
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = 0;
            for (int k = 0; k < 2; k++)
            {
                sum = sum + (extract[i][k] * filter[k][j]);
            }
            mul_arr[i][j] = sum;
        }
    }
    return mul_arr;
}
int average_(int **arr)
{
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    int avg = sum / 4;
    return avg;
}
int **apply_filter(int **arr, int n, int i_2, int j_2)
{
    int reset = j_2;
    for (int i = 0; i < 2; i++, i_2++)
    {
        if (i == 1)
        {
            j_2 = reset;
        }
        for (int j = 0; j < 2; j++, j_2++)
        {
            arr[i_2][j_2] = arr[i_2][j_2] - n;
        }
    }
}
int main()
{
    int rows = 6, cols = 6;
    int **arr = allocate_2d_array(rows, cols);
    int **filter = allocate_2d_array(2, 2);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter Your filter matrix");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &filter[i][j]);
        }
    }
    int n = 0, i_2 = 0, j_2 = 0;
    while (n != rows / 2 * cols / 2)
    {
        int **extract = make_small(arr, i_2, j_2);
        int **multiply = matrix_multiply(extract, filter);
        int average = average_(multiply);
        apply_filter(arr, average, i_2, j_2);
        if (j_2 != cols - 1)
        {
            j_2 = j_2 + 2;
        }
        if (j_2 == cols)
        {
            i_2 = i_2 + 2;
            j_2 = 0;
        }
        n++;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}