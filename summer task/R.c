#include <stdio.h>

// Function to print a given number of asterisks
void printAsterisks(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("*");
    }
}

// Function to print the 'R' shape
void printRShape(int height)
{
    for (int row = 1; row <= height; row++)
    {
        printf("*");

        for (int col = 1; col <= height; col++)
        {
            if ((row == 1 || row == height / 2 + 1) && col < height)
                printf("*");
            else if (col == height && row != 1 && row <= height / 2)
                printf("*");
            else if (col == row && row > height / 2 + 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}

int main()
{
    int height; // Height of the letter 'R'
    printf("Enter number of rows:");
    scanf("%d", &height);
    printRShape(height);

    return 0;
}
