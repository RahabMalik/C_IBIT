#include <stdio.h>
#include <stdlib.h>

void printMatrix(float **matrix, int r1, int c1)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

float **calculateInverse(float **matrix, int r1, int c1)
{
    float det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
                matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    if (det == 0)
    {
        printf("The matrix is singular. Inverse does not exist.\n");
        return NULL;
    }

    // Allocate memory for the inverse matrix
    float **inverse = (float **)malloc(r1 * sizeof(float *));
    for (int i = 0; i < r1; i++)
    {
        inverse[i] = (float *)malloc(c1 * sizeof(float));
    }

    // Calculate inverse matrix
    inverse[0][0] = (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) / det;
    inverse[0][1] = (matrix[0][2] * matrix[2][1] - matrix[0][1] * matrix[2][2]) / det;
    inverse[0][2] = (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]) / det;
    inverse[1][0] = (matrix[1][2] * matrix[2][0] - matrix[1][0] * matrix[2][2]) / det;
    inverse[1][1] = (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]) / det;
    inverse[1][2] = (matrix[0][2] * matrix[1][0] - matrix[0][0] * matrix[1][2]) / det;
    inverse[2][0] = (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) / det;
    inverse[2][1] = (matrix[0][1] * matrix[2][0] - matrix[0][0] * matrix[2][1]) / det;
    inverse[2][2] = (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) / det;

    return inverse;
}

int main()
{
    int r1 = 3, c1 = 3;
    float **matrix = (float **)malloc(r1 * sizeof(float *));
    for (int i = 0; i < r1; i++)
    {
        matrix[i] = (float *)malloc(c1 * sizeof(float));
    }

    printf("Enter values for the 3x3 matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    float **inverse = calculateInverse(matrix, r1, c1);

    if (inverse != NULL)
    {
        printf("Inverse Matrix:\n");
        printMatrix(inverse, r1, c1);
    }

    return 0;
}
