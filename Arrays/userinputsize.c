#include <stdio.h>
int main()
{
    int n,pro=1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements of array: ");
        scanf("%d", &arr[i]);
      pro=pro*arr[i];
    }
    for (int i = 0; i <  n ; i++)
    {
        printf("%d ", arr[i]);

    }
    printf("\n%d ",pro);
    return 0;
}