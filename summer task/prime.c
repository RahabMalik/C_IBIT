#include <stdio.h>

int Prime(int num)
{
    if (num <= 1)
    {
        return 0; 
    }
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }
        return 1; 
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (Prime(num))
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }

    return 0;
}
