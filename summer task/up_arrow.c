#include <stdio.h>
int main()
{
    int row, col, num;
    printf("Enter number of rows:");
    scanf("%d", &num);

    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= 3; col++)
       printf("  ");
       printf("\n");
    }
    // Upper part of the arrow
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("* "); // Print asterisks
        }
        printf("\n");
    }

    // Lower part of the arrow
    for (row = 1; row <= num - 1; row++)
    {
        for (col = 1; col <= num - row; col++)
        {
            printf("* "); // Print asterisks
        }
        printf("\n");
    }


    return 0;
}