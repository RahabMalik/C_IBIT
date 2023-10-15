// whether it is sparse or not
#include <stdio.h>

// Function to check if a matrix is sparse
int sparse(int matrix[10][10], int rows, int cols)
{
    int zeroCount = 0;
    int totalCount = rows * cols;

    // Count the number of zero elements
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                zeroCount++;
            }
        }
    }

    // Check if the ratio of zero elements is greater than a threshold (e.g., 90%)
    double zeroRatio = (double)zeroCount / totalCount;
    if (zeroRatio > 0.9)
    {
        return 1; // Matrix is considered sparse
    }
    else
    {
        return 0; // Matrix is not sparse
    }
}

int main()
{
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if  (sparse(matrix, rows, cols))
    {
        printf("The matrix is sparse.\n");
    }
    else
    {
        printf("The matrix is not sparse.\n");
    }

    return 0;
}
