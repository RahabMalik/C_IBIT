#include <stdio.h>

void printMatrix(float matrix[10][10], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void swapRows(float matrix[10][10], int row1, int row2, int size)
{
    for (int i = 0; i < size; i++)
    {
        float temp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = temp;
    }
}

int main()
{
    int size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    if (size < 2 || size > 10)
    {
        printf("Invalid matrix size. Supported sizes are 2 to 10.\n");
        return 1;
    }

    float matrix[10][10];

    printf("Enter the elements of a %dx%d matrix:\n", size, size);

    // Input matrix elements
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    // Perform Gaussian elimination
    for (int i = 0; i < size; i++)
    {
        // Find the pivot
        float pivot = matrix[i][i];
        if (pivot == 0)
        {
            printf("Matrix is singular. Inverse does not exist.\n");
            return 1;
        }

        // Scale the current row to make the pivot 1
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] /= pivot;
        }

        // Eliminate other rows
        for (int k = 0; k < size; k++)
        {
            if (k != i)
            {
                float factor = matrix[k][i];
                for (int j = 0; j < size; j++)
                {
                    matrix[k][j] -= factor * matrix[i][j];
                }
            }
        }
    }

    printf("Inverse Matrix:\n");
    printMatrix(matrix, size);

    return 0;
}
