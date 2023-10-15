#include <stdio.h>
int main()
{
    int i, j, size;
    printf("Enter number of rows:");
    scanf("%d", &size);
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= (2 * size) - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * i) - 1; j++)
        {
            if (j == 1 || j == (2 * i) - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 1; j <= (2 * size) - 1; j++)
        {
            printf("  "); //$
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = size - 1; i >= 1; i--)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        } // left
        for (int j = 1; j <= (2 * size) - 1; j++)
        {
            printf("  "); //$
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = size; i >= 1; i--)
    {
        for (j = 1; j <= size; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= size - i; j++)
            printf("  ");
        for (j = 1; j <= (2 * i) - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
