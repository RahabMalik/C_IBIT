#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of an array:");
    scanf("%d", &n);
    int arr[n];

    int i, j, pos;
    printf("Enter elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Input position where to delete:");
    scanf("%d", &pos);
    if (pos >= 1 && pos <= n)
    {
        for (i = pos - 1; i < n - 1; i++) // 1 2 3 4 5 6
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    printf("the new list is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}