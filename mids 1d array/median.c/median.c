#include <stdio.h>
int main()
{
    int i, j, n = 6;
    float median = 0, sumEven = 0;
    float arr[6] = {1, 2, 4, 4, 5, 6};
    for (i = 0; i < n; i++)
    {
        if (n % 2 == 0)
        {
            median = (arr[(n / 2)] + arr[(n / 2 - 1)]) / 2;
        }
        else
        {
            median = (n + 1) / 2;
        }
    }

    printf("median =%.2f", median);
    return 0;
}