#include <stdio.h>

int main()
{
    int rows, cols;

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

    // Initialize arrays for CSR format
    int values[rows * cols];     // Store non-zero values
    int colIndices[rows * cols]; // Store corresponding column indices
    int rowPtr[rows + 1];        // Store starting index of each row

    // Initialize counters
    int nonzeroCount = 0;
    int currentPos = 0;

    // Convert the matrix to CSR format
    rowPtr[0] = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                values[nonzeroCount] = matrix[i][j];
                colIndices[nonzeroCount] = j;
                nonzeroCount++;
            }
        }
        rowPtr[i + 1] = rowPtr[i] + nonzeroCount - currentPos;
        currentPos = nonzeroCount;
    }

    // Print the CSR arrays
    printf("Values: ");
    for (int i = 0; i < nonzeroCount; i++)
    {
        printf("%d ", values[i]);
    }
    printf("\n");

    printf("ColIndices: ");
    for (int i = 0; i < nonzeroCount; i++)
    {
        printf("%d ", colIndices[i]);
    }
    printf("\n");

    printf("RowPtr: ");
    for (int i = 0; i <= rows; i++)
    {
        printf("%d ", rowPtr[i]);
    }
    printf("\n");

    return 0;
}
