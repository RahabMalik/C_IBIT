#include <stdio.h>

int main()
{
    int i, j, height;

    printf("Enter the height of W: ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= height * 2; j++)
        {
            if (j == 1 || j == height * 2 || (i + j) == (height + 1) || (j - i) == height)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
