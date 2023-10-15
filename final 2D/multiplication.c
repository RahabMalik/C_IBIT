#include <stdio.h>

int main()
{
    int m, n, a, b;

    printf("Enter number of rows of the 1st matrix:");
    scanf("%d", &m);
    printf("Enter number of columns of the 1st matrix:");
    scanf("%d", &n);

    int matrixA[m][n];

    printf("Enter the elements of the 1st matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter number of rows of the 2nd matrix:");
    scanf("%d", &a);
    printf("Enter number of columns of the 2nd matrix:");
    scanf("%d", &b);

    if (n != a)
    {
        printf("Matrices are not compatible for multiplication.\n");
    }
    else
    {
        int matrixB[a][b];
        printf("Enter the elements of the 2nd matrix:\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                scanf("%d", &matrixB[i][j]);
            }
        }

        int result[m][b];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < b; j++)
            {
                int sum = 0;
                for (int k = 0; k < n; k++)
                {
                    sum += matrixA[i][k] * matrixB[k][j];
                }
                result[i][j] = sum;
            }
        }

        printf("Resultant Matrix:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
