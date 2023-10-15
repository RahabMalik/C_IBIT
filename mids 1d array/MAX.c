#include <stdio.h>
int main()
{
    int i, j, max = 0;
    int arr[5] = {1, 8, 3, 4, 5};
    max = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("max=%d", max);
}