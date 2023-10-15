#include <stdio.h>

// Function to calculate the dot product of two sparse matrices
int dotProduct(int rowsA, int colsA, int A[rowsA][colsA], int rowsB, int colsB, int B[rowsB][colsB])
{
    int result = 0;

    // Iterate through each element of matrix A
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            // Check if the element in A is non-zero
            if (A[i][j] != 0)
            {
                // Find the corresponding element in matrix B
                if (i < rowsB && j < colsB && B[i][j] != 0)
                {
                    // Multiply and add to the result
                    result += A[i][j] * B[i][j];
                }
            }
        }
    }

    return result;
}

int main()
{
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter the elements of matrix A:\n");
    int A[rowsA][colsA];
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    printf("Enter the elements of matrix B:\n");
    int B[rowsB][colsB];
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Check if matrix dimensions are compatible for dot product
    if (colsA != rowsB)
    {
        printf("Matrix dimensions are not compatible for dot product.\n");
        return 1;
    }

    // Calculate the dot product
    int result = dotProduct(rowsA, colsA, A, rowsB, colsB, B);

    // Print the result
    printf("Dot Product: %d\n", result);

    return 0;
}
