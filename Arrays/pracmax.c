#include <stdio.h>
int main()
{
    int arr[6];
    int i, max;
    for (i = 0; i < 6; i++)
    {
        printf("Enter elements of an arrray: ");
        scanf("%d", &arr[i]);
    }
    
    max=arr[0];
    for (i = 0; i < 6; i++)
    {
        if(max<arr[i])
        {
        max=arr[i];
        }
    }
    printf("%d",max );
    return 0;
}