#include <stdio.h>
#include <math.h>
int main()
{
    int arr[5] = {16, 125, 456, 25, 12};
    int i, j, num, x;
    for (i = 0; i < 5; i++)
    {
        //x = arr[i];
        num = sqrt(arr[i]);
        if(num*num==arr[i])
        {
            printf("%d is\n",arr[i]);
        }
        else
        printf("%d is not\n",arr[i]);
    }

    return 0;
}