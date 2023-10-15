#include <stdio.h>
int main()
{
    int size, i;
    printf("Enter size of an array :");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter elements of an array:");
        scanf("%d", &arr[i]);
    }
    printf("Elements are:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nReverse order is:");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
