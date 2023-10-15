#include <stdio.h>
//2x2
int main()
{
    int matrix[2][2];

    printf("Enter the elements of the 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    printf("Determinant: %d\n", determinant);

    return 0;
}
