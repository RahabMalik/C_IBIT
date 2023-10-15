#include <stdio.h>

// Function to print a matrix
void printMatrix(float matrix[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float matrix[4][4];

    printf("Enter the elements of a 4x4 matrix:\n");

    // Input matrix elements
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    // Calculate the determinant
    float det = 0;
    for (int i = 0; i < 4; i++)
    {
        det += matrix[0][i] * (matrix[1][(i + 1) % 4] * matrix[2][(i + 2) % 4] * matrix[3][(i + 3) % 4] -
                               matrix[1][(i + 3) % 4] * matrix[2][(i + 2) % 4] * matrix[3][(i + 1) % 4]);
    }

    if (det == 0)
    {
        printf("The matrix is singular. Inverse does not exist.\n");
        return 1;
    }

    // Calculate the inverse
    float inverse[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            inverse[i][j] = 0;
            for (int k = 0; k < 4; k++)
            {
                inverse[i][j] += (matrix[(j + 1) % 4][(k + 1) % 4] * matrix[(i + 1) % 4][(k + 2) % 4] * matrix[(i + 2) % 4][(k + 3) % 4] -
                                  matrix[(j + 1) % 4][(k + 3) % 4] * matrix[(i + 1) % 4][(k + 2) % 4] * matrix[(i + 2) % 4][(k + 1) % 4]) /
                                 det;
            }
        }
    }

    printf("Inverse Matrix:\n");
    printMatrix(inverse);

    return 0;
}
