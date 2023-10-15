#include <stdio.h>
int main()
{
    int i, sum = 0;
    int arr[5] = {1, 1, 1, 1, 1};
    for (i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nSum = %d", sum);
    return 0;
}