#include <stdio.h>
int N(int size)
{
    int row, col;
    for (row = 1; row <= size; row++)
    {
        for (col = 1; col <= size; col++)
        {
            if (col == 1 || col == row || col == size)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int size;
    printf("Enter number of rows:");
    scanf("%d", &size);
    N(size);
    return 0;
}