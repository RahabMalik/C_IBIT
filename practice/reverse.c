#include <stdio.h>
int main()
{
    int arr[5];
    int i;

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter number of elements:%d\n ", i + 1);
        scanf("%d", &arr[i]);
        
    }
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}