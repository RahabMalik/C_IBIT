#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i, largest = arr[0], range,smallest = arr[0];

    for (i = 0; i < 5; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    range = largest - smallest;
    printf("%d", range);

    return 0;
}