#include <stdio.h>

// Function to find the mode in a 2D array
int findMode(int arr[][3], int rows, int cols)
{
    int maxCount = 0;          // To keep track of the maximum frequency
    int mode = arr[0][0];      // Initialize the mode with the first element
    int frequency[1000] = {0}; // Assuming a maximum value of 1000 for elements

    // Calculate frequencies of each element
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int current = arr[i][j];
            frequency[current]++;
            if (frequency[current] > maxCount)
            {
                maxCount = frequency[current];
                mode = current;
            }
        }
    }

    return mode;
}

int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {2, 3, 3},
                        {4, 5, 6}};

    int mode = findMode(matrix, 3, 3);

    printf("Mode: %d\n", mode);

    return 0;
}
