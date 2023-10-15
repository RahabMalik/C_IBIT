#include <stdio.h>
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int i, j, sum = 0;
    float mean = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        mean = sum / n;
    }
    printf("mean %f", mean);

    return 0;
}