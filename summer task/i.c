#include <stdio.h>
int I(int size)
{
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (i == 1 || i == size || j == size / 2 + 1)
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
    I(size);
    return 0;
}