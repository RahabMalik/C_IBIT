#include <stdio.h>
#include <stdlib.h>
int **allocate_2d_arr(int rows, int cols)
{
    int **arr;
    arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }
    return arr;
}
int check_non_zero_num(int **arr)
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i][j] != 0)
            {
                sum++;
            }
        }
    }
    return sum;
}
int **make_small(int **arr, int n)
{
    int non_zero = check_non_zero_num(arr);
    int **small = allocate_2d_arr(3, non_zero + 1);
    small[0][0] = 10;       // Size of Rows
    small[1][0] = 10;       // size of cols
    small[2][0] = non_zero; // totall number of non zero elements
    int k=1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <10; j++)
        {
            if (arr[i][j] != 0)
            {
                small[0][k] = i;
                small[1][k] = j;
                small[2][k] = arr[i][j];
                k++;
              
            }
        }
    }
    return small;
}
int main()
{
    int **sparse_mat = allocate_2d_arr(10, 10);
        printf("Enter Your actual matrix");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &sparse_mat[i][j]);
        }
    }
    int non_zero = check_non_zero_num(sparse_mat);
    int **extracted = make_small(sparse_mat, non_zero);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", sparse_mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < non_zero + 1; j++)
        {
            printf("%d ", extracted[i][j]);
        }
        printf("\n");
    }

    return 0;
}