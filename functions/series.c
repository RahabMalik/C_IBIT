#include <stdio.h>
int Even(int num)
{
    return num % 2 == 0;
}
void Numbers()
{
    int num, i;
    int choice;

    printf("how many numbers do you want to enter");
    scanf(" %d", &choice);
    printf("Enter a number: ");
    for (i = 1; i <= choice; i++)
    {
        scanf("%d", &num);
        if (Even(num))
        {
            printf("%d is even.\n", num);
        }
        else
        {
            printf("%d is odd.\n", num);
        }
    }
}

int main()
{
    printf("This program categorizes even and odd numbers.\n");
    Numbers();
    return 0;
}
