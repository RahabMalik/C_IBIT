#include <stdio.h>
void printPattern(int size)
{
    int row, col, space;
    for (row = 1; row <= size; row++)
    {
        // Print spaces before each row
        for (space = 1; space <= (size - row); space++)
        {
            printf("  ");
        }
        // Print asterisks in each row
        for (col = 1; col <= 2 * size; col++)
        {
            if (row == 1 || col == 1 || col == (2 * size) || row == size)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int size;
    printf("Enter number of rows:");
    scanf("%d", &size);

    printPattern(size);

    return 0;
}
