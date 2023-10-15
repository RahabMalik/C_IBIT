#include <stdio.h>
#include <stdlib.h>

// Function to calculate the resultant matrix
int (*addMatrices(int arr1[2][3], int arr2[2][3]))[3]
{
    int(*result)[3] = malloc(2 * sizeof(*result));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    return result;
}

int main()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    int brr[2][3] = {7, 8, 9, 10, 11, 12};
    int(*result)[3];

    // Call the function to calculate the resultant matrix
    result = addMatrices(arr, brr);

    // Print the resultant matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free the dynamically allocated memory for the result matrix
    free(result);

    return 0;
}
