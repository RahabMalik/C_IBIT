#include <stdio.h>
void printS(int height)
{
    for (int row = 1; row <= height; row++)
    {
        for (int col = 1; col <= height; col++)
        {
            if ((row == 1 || row == height / 2 || row == height) &&
                (col > 1 && col < height))
                printf("*");
            else if ((row > 1 && row < height / 2) && (col == 1))
                printf("*");
            else if ((row > height / 2 && row < height) && (col == height))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    int height;
    printf("Enter number of rows:");
    scanf("%d", &height);
    printS(height);

    return 0;
}
