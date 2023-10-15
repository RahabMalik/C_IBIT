#include <stdio.h>
#include <stdlib.h>

// Function to perform matrix multiplication and return the result
int **matrixDotProduct(int **matrix1, int **matrix2, int rows1, int cols1, int cols2) {
    int **result = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++) {
        result[i] = (int *)malloc(cols2 * sizeof(int));
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}

// Function to add a scalar value to a matrix
void addScalar(int **matrix, int rows, int cols, int scalar) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] += scalar;
        }
    }
}

// Function to print a matrix
void printMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1 = 2, cols1 = 3;
    int rows2 = 3, cols2 = 2;
    int scalar = 10;

    // Create and initialize two matrices
    int **matrix1 = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++) {
        matrix1[i] = (int *)malloc(cols1 * sizeof(int));
        for (int j = 0; j < cols1; j++) {
            matrix1[i][j] = i + j;
        }
    }

    int **matrix2 = (int **)malloc(rows2 * sizeof(int *));
    for (int i = 0; i < rows2; i++) {
        matrix2[i] = (int *)malloc(cols2 * sizeof(int));
        for (int j = 0; j < cols2; j++) {
            matrix2[i][j] = i - j;
        }
    }

    // Perform matrix multiplication and get the result
    int **resultMatrix = matrixDotProduct(matrix1, matrix2, rows1, cols1, cols2);

    // Print the result matrix
    printf("Result Matrix:\n");
    printMatrix(resultMatrix, rows1, cols2);

    // Add the scalar value to the result matrix
    addScalar(resultMatrix, rows1, cols2, scalar);

    // Print the result matrix after adding the scalar
    printf("\nResult Matrix after adding %d:\n", scalar);
    printMatrix(resultMatrix, rows1, cols2);

    return 0;
}
