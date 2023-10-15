#include <stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int i, j, pos=3;
   printf("From nth position the array");
    for (i = pos-1; i < 5; i++)
    {
       printf("%d",arr[i]);
    }
    printf("\n");
    printf("Before nth position the array");
    for (i = 0; i < pos-1; i++)
    {
       printf("%d",arr[i]);
    }
   // printf("%d", mode);
    return 0;
}