#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5];
    int i, sumEven = 0, sumOdd = 0, difference = 0;
    for (i = 0; i < 5; i++)
    {
        if (i % 2 != 0)
        {
            sumOdd = arr[i] + sumOdd;
        }
        if (i % 2 == 0)
        {
            sumEven = arr[i] + sumEven;
        }
    }
    difference = sumEven - sumOdd;
    printf("%d ", difference);
    return 0;
}