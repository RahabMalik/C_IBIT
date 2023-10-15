 # include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5];
    int i, square = 0;
    for (i = 0; i < 5; i++)
    {

        brr[i] = arr[i] * arr[i];
        
        printf("%d ",brr[i]);
    }
    
    return 0;
}