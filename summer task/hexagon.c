#include <stdio.h>

// Function to print a row of spaces
void printSpaces(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("  ");
    }
}

// Function to print a row of asterisks
void printAsterisks(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("* ");
    }
}

// Function to print the hexagon pattern
void printHexagon(int num)
{
    for (int row = num / 2 + 1; row <= num; row++)
    {
        printSpaces(num - row);
        printAsterisks(2 * row - 1);
        printf("\n");
    }
    for (int row = num - 1; row >= num / 2 + 1; row--)
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

    printHexagon(num);

    return 0;
}
