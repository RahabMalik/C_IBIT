#include <stdio.h>
#include <stdlib.h>

int r = 3, c = 3;

// Function to count the number of non-zero elements in a 2D array
int countNonZero(int arr[][3], int rows, int cols)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] != 0)
            {
                count++;
            }
        }
    }
    return count;
}

// Function to convert a 2D array into a 1D array containing non-zero elements
int *convertTo1D(int arr[][3], int rows, int cols, int count)
{
    int index = 0;
    int *one_d = (int *)malloc((count) * sizeof(int)); // Dynamically allocate memory for the 1D array
    if (one_d == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] != 0)
            {
                one_d[index++] = arr[i][j];
            }
        }
    }

    return one_d; // Return a pointer to the 1D array
}

int main()
{
    int two_d[3][3] = {{1, 0, 0}, {0, 0, 0}, {0, 0, 9}};

    int count = countNonZero(two_d, r, c);
    int *one_d = convertTo1D(two_d, r, c, count);

    // Print the 1D array
    for (int i = 0; i < count; i++)
    {
        printf("%d ", one_d[i]);
    }

    // Don't forget to free the dynamically allocated memory
    free(one_d);

    return 0;
}
