#include <stdio.h>
void square_hollow(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int num;
    printf("Enter size of square :");
    scanf("%d", &num);
}
