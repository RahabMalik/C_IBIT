#include <stdio.h>
// Function to print spaces
void printSpaces(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf("  ");
    }
}
// Function to print asterisks
void printAsterisks(int asterisks)
{
    for (int i = 0; i < asterisks; i++)
    {
        printf("* ");
    }
}
// Function to print the diamond pattern
void printDiamondPattern(int num)
{
    int col, row;
   // Upper half of the diamond
    for (row = 1; row <= num; row++)
    {
        printSpaces(num - row);
        printAsterisks(2 * row - 1);
        printf("\n");
    }

    // Lower half of the diamond (excluding the middle row)
    for (row = num - 1; row >= 1; row--)
    {
        printSpaces(num - row);
        printAsterisks(2 * row - 1);
        printf("\n");
    }
}

int main()
{
    int num;
    printf("Enter number of rows: ");
    scanf("%d", &num);
    printDiamondPattern(num);
    return 0;
}
