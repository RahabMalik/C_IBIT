#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5]; 
    int crr[5];
    int i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            brr[i] = arr[i];
        }
        else
            crr[i] = arr[i];
    }
    for (i = 0; i < 5; i=i+2)
    {
        printf("%d ", brr[i]);
        
    }
    printf("\n");
    for (i = 1; i < 5; i=i+2)
    {
        
        printf("%d ", crr[i]);
    }
    return 0;
}