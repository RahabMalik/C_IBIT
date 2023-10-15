#include <stdio.h>

int main() {
    int n = 3;  // Size of the square matrix
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};  // 1D array representing the matrix

    printf("Original Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i * n + j]);
        }
        printf("\n");
    }

    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Swap elements (i, j) and (j, i)
            int temp = arr[i * n + j];
            arr[i * n + j] = arr[j * n + i];
            arr[j * n + i] = temp;
        }
    }

    printf("Transposed Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i * n + j]);
        }
        printf("\n");
    }

    return 0;
}
