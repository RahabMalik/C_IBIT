#include <stdio.h>

int main() {
    int rows, cols;

    // Input the number of rows and columns of the matrix
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Initialize the 2D matrix
    int matrix[rows][cols];

    // Initialize the sparse array (assuming it contains triplets)
    int sparseArray[] = {0, 0, 1, 1, 2, 2, 1, 2, 3}; // Example 1D sparse representation

    // Calculate the number of nonzero elements based on the size of the sparse array
    int nonzeroCount = sizeof(sparseArray) / sizeof(sparseArray[0]) / 3;

    // Initialize an index for the sparse array
    int index = 0;

    // Populate the 2D matrix from the sparse array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Initialize the matrix element to 0
            matrix[i][j] = 0;

            // Check if the current index in the sparse array corresponds to (i, j)
            if (sparseArray[index] == i && sparseArray[index + 1] == j) {
                // If yes, set the matrix element to the value from the sparse array
                matrix[i][j] = sparseArray[index + 2];
                // Move to the next triplet in the sparse array
                index += 3;
            }
        }
    }

    // Print the 2D matrix
    printf("2D Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
