#include <stdio.h>
#include <math.h>

void printCircle(int n)
{
    for (int i = 0; i <= 2 * n; i++)
    {
        for (int j = 0; j <= 2 * n; j++)
        {
            double distance = sqrt((i - n) * (i - n) + (j - n) * (j - n));
            if ((distance - n) <=0.5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter the radius of the circle: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive radius.\n");
        return 1;
    }

    printCircle(n);

    return 0;
}
