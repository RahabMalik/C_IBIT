#include <stdio.h>
#include <stdlib.h>

// Function to multiply two matrices
int **multiplyMatrices(int **mat1, int **mat2, int rows1, int cols1, int cols2)
{
    int **result = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++)
    {
        result[i] = (int *)malloc(cols2 * sizeof(int));
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    return result;
}

// Function to display a matrix
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
    int rows1 = 2;
    int cols1 = 3;
    int rows2 = 3;
    int cols2 = 2;

    // Initialize the first matrix (2x3)
    int **matrix1 = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++)
    {
        matrix1[i] = (int *)malloc(cols1 * sizeof(int));
    }

    // Initialize the second matrix (3x2)
    int **matrix2 = (int **)malloc(rows2 * sizeof(int *));
    for (int i = 0; i < rows2; i++)
    {
        matrix2[i] = (int *)malloc(cols2 * sizeof(int));
    }

    // Initialize and populate the matrices (you can modify these values as needed)
    int value1 = 1;
    int value2 = 2;

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            matrix1[i][j] = value1++;
        }
    }

    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            matrix2[i][j] = value2++;
        }
    }

    // Multiply the matrices
    int **resultMatrix = multiplyMatrices(matrix1, matrix2, rows1, cols1, cols2);

    // Display the result
    printf("Resultant Matrix:\n");
    displayMatrix(resultMatrix, rows1, cols2);

    // Free allocated memory
    for (int i = 0; i < rows1; i++)
    {
        free(matrix1[i]);
    }
    free(matrix1);

    for (int i = 0; i < rows2; i++)
    {
        free(matrix2[i]);
    }
    free(matrix2);

    for (int i = 0; i < rows1; i++)
    {
        free(resultMatrix[i]);
    }
    free(resultMatrix);

    return 0;
}
