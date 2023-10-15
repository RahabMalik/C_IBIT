#include <stdio.h>
void printMatrix(float matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float matrix[3][3];

    printf("Enter the elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    // Calculate the determinant
    float det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
                matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    if (det == 0)
    {
        printf("The matrix is singular. Inverse does not exist.\n");
        return 1;
    }
    float inverse[3][3];
    inverse[0][0] = (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) / det;
    inverse[0][1] = (matrix[0][2] * matrix[2][1] - matrix[0][1] * matrix[2][2]) / det;
    inverse[0][2] = (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]) / det;
    inverse[1][0] = (matrix[1][2] * matrix[2][0] - matrix[1][0] * matrix[2][2]) / det;
    inverse[1][1] = (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]) / det;
    inverse[1][2] = (matrix[0][2] * matrix[1][0] - matrix[0][0] * matrix[1][2]) / det;
    inverse[2][0] = (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) / det;
    inverse[2][1] = (matrix[0][1] * matrix[2][0] - matrix[0][0] * matrix[2][1]) / det;
    inverse[2][2] = (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) / det;

    printf("Inverse Matrix:\n");
    printMatrix(inverse);

    return 0;
}
