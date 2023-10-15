#include <stdio.h>
int main()
{
    int num;

    printf("Enter the size of 0: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if ((i == 1 && j >= 2 && j <= num - 1) ||
                (i == num && j >= 2) ||
                (j == 1 && i >= 2 && i <= num - 1) ||j == num && i >=2 && i <= num )
                {
                    printf("*");
                }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}