#include <stdio.h>
void printG(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if ((i == 1 && j >= 2 && j <= num - 1) ||
                (i == num && j >= 3) ||
                (j == 1 && i >= 2 && i <= num - 1) ||
                (j == num && i > num / 2) ||
                (i == num / 2 + 1 && j >= num / 2 + 1))
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
}
int main()
{
    int num;
    printf("Enter the size of G: ");
    scanf("%d", &num);
    printG(num);
    return 0;
}