#include <stdio.h>

int main()
{
    int rows, cols;

    // Input the number of rows and columns of the matrix
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input the elements of the matrix
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count the number of non-zero elements in the matrix
    int nonzeroCount = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                nonzeroCount++;
            }
        }
    }

    // Initialize a 1D array to store (row, col, value) triplets
    int sparseArray[nonzeroCount * 3]; // Flat 1D array

    // Populate the 1D array with (row, col, value) triplets
    int index = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparseArray[index++] = i;            // Store the row
                sparseArray[index++] = j;            // Store the column
                sparseArray[index++] = matrix[i][j]; // Store the value
            }
        }
    }

    // Print the sparse array in the format (row, column, value)
    printf("Sparse Matrix (row, col, value):\n");
    for (int i = 0; i < nonzeroCount; i++)
    {
        int row = sparseArray[i * 3];
        int col = sparseArray[i * 3 + 1];
        int value = sparseArray[i * 3 + 2];
        printf("(%d, %d, %d)\n", row, col, value);
    }

    return 0;
}
