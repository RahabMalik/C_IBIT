#include <stdio.h>
int main()
{
    int arr[5] = {1, 6, 3, 4, 5};
    int i, smallest, sec_small;
    smallest = arr[0];

    for (i = 0; i < 5; i++)
    {
        if (smallest > arr[i])
        {
            sec_small = smallest;
            smallest = arr[i];
        }

        else if (smallest != arr[i] && sec_small > arr[i])
        {
            sec_small = arr[i];
        }
    }
    printf("%d", sec_small);

    return 0;
}