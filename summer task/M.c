#include <stdio.h>

void printW(int height)
{
    int width = (height * 2) - 1;
    int mid = width / 2;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0 || j == width - 1 || ( (j == i || j == width - i - 1)))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    int height;

    printf("Enter the height of W: ");
    scanf("%d", &height);

    printW(height);

    return 0;
}
