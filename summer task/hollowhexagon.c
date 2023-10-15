#include <stdio.h>

// Function to print a row of spaces
void printSpaces(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("  ");
    }
}

// Function to print a row of asterisks with hollow spaces
void printHollowAsterisks(int numAsterisks)
{
    if (numAsterisks == 1)
    {
        printf("* ");
    }
    else
    {
        printf("* ");
        printSpaces(numAsterisks - 2);
        printf("* ");
    }
}

// Function to print the hollow hexagon pattern
void printHollowHexagon(int num)
{
    for (int row = num / 2 + 1; row <= num; row++)
    {
        printSpaces(num - row);
        printHollowAsterisks(2 * row - 1);
        printf("\n");
    }
    for (int row = num - 1; row >= num / 2 + 1; row--)
    {
        printSpaces(num - row);
        printHollowAsterisks(2 * row - 1);
        printf("\n");
    }
}

int main()
{
    int num;

    printf("Enter number of rows: ");
    scanf("%d", &num);

    printHollowHexagon(num);

    return 0;
}
