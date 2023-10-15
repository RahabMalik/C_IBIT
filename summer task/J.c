#include <stdio.h>

void printLetterJ(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (j == height / 2 || (i == height - 1 && j <= height / 2) || i == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    int height; // You can adjust the height as needed
    printf("Enter size of letter J");
    scanf("%d", &height);
    printLetterJ(height);
    return 0;
}
