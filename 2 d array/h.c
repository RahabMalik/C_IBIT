#include <stdio.h>

int main()
{
    int i, j, r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    int brr[c][r];

    // Fill the matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the original matrix
    printf("\nOriginal matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Find the transpose of the matrix
    printf("\nThe transpose is:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            brr[i][j] = arr[j][i];
            printf("%d\t", brr[i][j]);
        }
        printf("\n");
    }

    // Rotate the matrix
    printf("\nRotation is:\n");
    for (i = 0; i < c; i++)
    {
        for (j = r - 1; j >= 0; j--)
        {
            printf("%d\t", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
