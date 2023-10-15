#include <stdio.h>
int main()
{
    int i;
    int arr[5];

    for (i = 0; i < 5; i++)
    {
        printf("Enter elements of array: ");
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Original numbers are: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Reverse order is : ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}