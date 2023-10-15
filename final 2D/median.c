#include <stdio.h>

// Function to find the median of a 2D array
double findMedian(int arr[][3], int rows, int cols)
{
    int size = rows * cols;
    int flattened[size]; // Create a 1D array to store flattened elements

    // Flatten the 2D array into the 1D array
    int index = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            flattened[index++] = arr[i][j];
        }
    }

    // Sort the 1D array (you can use any sorting algorithm here)
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (flattened[j] > flattened[j + 1])
            {
                // Swap elements
                int temp = flattened[j];
                flattened[j] = flattened[j + 1];
                flattened[j + 1] = temp;
            }
        }
    }

    // Find the median
    double median;
    if (size % 2 == 0)
    {
        // If the size is even, average the two middle elements
        int middle1 = flattened[size / 2 - 1];
        int middle2 = flattened[size / 2];
        median = (double)(middle1 + middle2) / 2.0;
    }
    else
    {
        // If the size is odd, the median is the middle element
        median = flattened[size / 2];
    }

    return median;
}

int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    double median = findMedian(matrix, 3, 3);

    printf("Median: %.2lf\n", median);

    return 0;
}
