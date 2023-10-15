#include <stdio.h>
int main()
{
    int arr[7] = {6, 2, 3, 4, 5, 6, 7};
    int i;
    for (i = 0; i <= 6; i++)
    {
        if (i % 2 != 0)
            arr[i] = arr[i] * 2;
        else
            arr[i] += 10;
    }
    for (i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}