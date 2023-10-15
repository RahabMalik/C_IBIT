#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {6, 7, 8, 9, 10};
    int i, sum = 0;
    for (i = 0; i < 5; i++)
    {

        sum = arr[i] + brr[i];

        printf("%d ", sum);
    }
    return 0;
}