#include <stdio.h>
int rectangle(int numRows, int numColumns)
{
    int row, col;
    for (row = 1; row <= numRows; row++)
    {
        for (col = 1; col <= numColumns; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int numRows, numColumns;

    printf("Enter number of rows:");
    scanf("%d", &numRows);
    printf("Enter number of columns:");
    scanf("%d", &numColumns);
    rectangle(numRows, numColumns);
    return 0;
}
