#include <stdio.h>

int printLetterT(int size)
{
    for (int row = 1; row <= size; row++)
    {
        for (int col = 1; col <= size; col++)
        {
            if (row == 1 || col == size / 2 + 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    int size;
    printf("Enter number of rows: ");
    scanf("%d", &size);
    printLetterT(size);
    return 0;
}
