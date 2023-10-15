#include <stdio.h>
#include <math.h>

// Function to calculate the mean of a 2D array
double calculateMean(int arr[][3], int rows, int cols) {
    double sum = 0.0;
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
            count++;
        }
    }

    return sum / count;
}

// Function to calculate the standard deviation of a 2D array
double calculateStdDev(int arr[][3], int rows, int cols) {
    double mean = calculateMean(arr, rows, cols);
    double sumOfSquaredDiffs = 0.0;
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            double diff = arr[i][j] - mean;
            sumOfSquaredDiffs += diff * diff;
            count++;
        }
    }

    double variance = sumOfSquaredDiffs / count;
    double stdDev = sqrt(variance);
    return stdDev;
}

int main() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    double stdDev = calculateStdDev(matrix, 3, 3);

    printf("Standard Deviation: %.2lf\n", stdDev);

    return 0;
}
