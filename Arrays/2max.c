#include <stdio.h>
#include<limits.h>
int main()
{
    int arr[5];
    int i, j, swap;
    int max = INT_MIN;
    int sec_max = INT_MIN;
    printf("Enter elements:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            sec_max = max;
            max=arr[i];
        }
        else if (sec_max<arr[i] && max!=arr[i])
        {
            sec_max=arr[i];
        }
    }
    printf("%d",sec_max);
    return 0;
}