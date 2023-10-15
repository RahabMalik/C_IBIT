#include <stdio.h>

int main()
{
    int row, col, num;
    printf("Enter number of rows:");
    scanf("%d", &num);

    // Upper part of the arrow
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("->"); // Print "->" symbols
        }
        printf("\n");
    }

    // Middle section
    for (row = 1; row <= num - 1; row++)
    {
        for (col = 1; col <= num - row; col++)
        {
            printf("  "); // Print spaces
        }
        for (col = 1; col <= row; col++)
        {
            printf("->"); // Print "->" symbols
        }
        printf("\n");
    }

    return 0;
}
