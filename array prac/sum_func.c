#include <stdio.h>

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {2, 2, 3, 4, 5};
    int result = sumArray(arr, 5);
    printf("%d", result);
    return 0;
}
