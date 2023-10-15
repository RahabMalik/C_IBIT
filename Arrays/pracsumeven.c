#include <stdio.h>
int main()
{
    int arr[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("Enter elements of an arrray: ");
        scanf("%d", &arr[i]);

        if (arr[i] % 2 != 0)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 10;
        }
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}