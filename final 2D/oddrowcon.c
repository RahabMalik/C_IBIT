#include <stdio.h>

int main()
{
    int input[10][10] = {
        {10, 20, 30, 40, 50, 60, 70, 80, 90, 100},
        {11, 21, 31, 41, 51, 61, 71, 81, 91, 101},
        {12, 22, 32, 42, 52, 62, 72, 82, 92, 102},
        {13, 23, 33, 43, 53, 63, 73, 83, 93, 103},
        {14, 24, 34, 44, 54, 64, 74, 84, 94, 104},
        {15, 25, 35, 45, 55, 65, 75, 85, 95, 105},
        {16, 26, 36, 46, 56, 66, 76, 86, 96, 106},
        {17, 27, 37, 47, 57, 67, 77, 87, 97, 107},
        {18, 28, 38, 48, 58, 68, 78, 88, 98, 108},
        {19, 29, 39, 49, 59, 69, 79, 89, 99, 109}};

    int filter[2][2] = {
        {1, 1},
        {1, 1}};

    float result[10][10]; // The result matrix will be 10x10

    // Loop through alternating rows (1st, 3rd, 5th, 7th, etc.)
    for (int i = 0; i < 10; i += 2)
    {
        for (int j = 0; j < 10; j++)
        {
            int sum = 0;

            // Perform 2D convolution using a 2x2 filter
            for (int m = 0; m < 2; m++)
            {
                for (int n = 0; n < 2; n++)
                {
                    if (i + m < 10 && j + n < 10)
                    {
                        sum += input[i + m][j + n] * filter[m][n];
                    }
                }
            }

            // Calculate the average and store it in the result matrix
            result[i][j] = (float)sum / 4.0;
        }
    }

    // Fill the remaining rows with zeros in the result matrix
    for (int i = 1; i < 10; i += 2)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int j = 0; j < 10; j++)
            {
                result[i][j] = 0.0;
            }
        }
    }

    // Print the resulting matrix
    printf("Resulting Matrix:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%.2f ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
