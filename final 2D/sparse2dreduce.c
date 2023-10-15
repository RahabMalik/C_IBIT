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
int check_non_zer0(int **sparse_mat)
{
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (sparse_mat[i][j] != 0)
            {
                count++;
            }
        }
    }
    return count;
}
int **make_small(int **sparse_mat)
{
    int non_zero = check_non_zer0(sparse_mat);
    int **arr = allocate_2d_arr(3, non_zero + 1);
    arr[0][0] = 6;        // Size of Rows
    arr[1][0] = 6;        // size of cols
    arr[2][0] = non_zero; // totall number of non zero elements
    int k = 1;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (sparse_mat[i][j] != 0)
            {
                arr[0][k] = i;
                arr[1][k] = j;
                arr[2][k] = sparse_mat[i][j];
                k++;
            }
        }
    }
    return arr;
}
int main()
{
    int **sparse_mat = allocate_2d_arr(6, 6);
    printf("Enter Your actual matrix");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &sparse_mat[i][j]);
        }
    }
    int non_zero = check_non_zer0(sparse_mat);
    int **reduce = make_small(sparse_mat);

    // Print the original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", sparse_mat[i][j]);
        }
        printf("\n");
    }

    // Print the reduced matrix
    printf("Reduced Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < non_zero + 1; j++)
        {
            printf("%d ", reduce[i][j]);
        }
        printf("\n");
    }

    return 0;
}
