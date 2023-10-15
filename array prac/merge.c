#include <stdio.h>
int main()
{
    int i, j;
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {1,2,3,4,5};
    int merge[2 * 5];
    for (i = 0; i < 5; i++)
    {
        merge[i] = arr[i];
        merge[i + 5] = brr[i];
    }
    printf("The element of merge array is:\n");
    for (i = (2 * 5) - 1; i >= 0; i--)
    {
        printf("%d ", merge[i]);
    }
    for (i = 0; i < 2 * 5; i++)
    {
        for (j = i + 1; j < 2 * 5; j++)
        {
            
            if (merge[i] < merge[j])
            {
                int temp;
                temp = merge[i];
                merge[i] = merge[j];
                merge[j] = temp;
            }
        }
    }
    printf("Descending order is:\n");
    for (i = 0; i < 2 * 5; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}