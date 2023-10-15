#include <stdio.h>
int main()
{
    int i,arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {6, 7, 8, 9, 10};
    int swap[5];
    for (i = 0; i < 5; i++)
    {
        swap[i] = arr[i];
        arr[i] = brr[i];
        brr[i] = swap[i];
    }
     for (i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
       
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ",brr[i]);
       
    }
    return 0;
}