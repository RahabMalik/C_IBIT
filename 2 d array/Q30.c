#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int result = 0;

    // Variation 1: If row & column even - Add; If odd - Subtract
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
            {
                result += matrix[i][j]; // Add even row and column
            }
            else if (i % 2 == 1 && j % 2 == 1)
            {
                result -= matrix[i][j]; // Subtract odd row and column
            }
        }
    }
    printf("Variation 1 Result: %d\n", result);

    // Variation 2: 1st row with 1st column
    result = 0;
    for (int i = 0; i < 3; i++)
    {
        result += matrix[0][i]; // Add elements in the 1st row
        result += matrix[i][0]; // Add elements in the 1st column
    }
    result -= matrix[0][0]; // Remove the duplicated element at the intersection
    printf("Variation 2 Result: %d\n", result);

    // Variation 3: 1st row with last column
    result = 0;
    for (int i = 0; i < 3; i++)
    {
        result += matrix[0][i]; // Add elements in the 1st row
        result += matrix[i][2]; // Add elements in the last column
    }
    result -= matrix[0][2] * 2; // Subtract the duplicated elements at the intersection
    printf("Variation 3 Result: %d\n", result);

    // Variation 4: Last column with first row
    result = 0;
    for (int i = 0; i < 3; i++)
    {
        result += matrix[2][i]; // Add elements in the last row
        result += matrix[i][0]; // Add elements in the 1st column
    }
    result -= matrix[2][0] * 2; // Subtract the duplicated elements at the intersection
    printf("Variation 4 Result: %d\n", result);

    // Variation 5: Last row with last column
    result = 0;
    for (int i = 0; i < 3; i++)
    {
        result += matrix[2][i]; // Add elements in the last row
        result += matrix[i][2]; // Add elements in the last column
    }
    result -= matrix[2][2]; // Remove the duplicated element at the intersection
    printf("Variation 5 Result: %d\n", result);

    // Variation 6: Last row with first column
    result = 0;
    for (int i = 0; i < 3; i++)
    {
        result += matrix[2][i]; // Add elements in the last row
        result += matrix[i][0]; // Add elements in the 1st column
    }
    result -= matrix[2][0]; // Remove the duplicated element at the intersection
    printf("Variation 6 Result: %d\n", result);

    // Variation 7: Last row with last column
    result = 0;
    for (int i = 0; i < 3; i++)
    {
        result += matrix[2][i]; // Add elements in the last row
        result += matrix[i][2]; // Add elements in the last column
    }
    result -= matrix[2][2]; // Remove the duplicated element at the intersection
    printf("Variation 7 Result: %d\n", result);

    return 0;
}
