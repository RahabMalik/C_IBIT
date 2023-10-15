# include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5];
    int i, cube;
    for (i = 0; i < 5; i++)
    {

        cube = arr[i] * arr[i] * arr[i];
        brr[i]=cube;
       // printf("%d ", square);
        printf("%d ",brr[i]);
    }
    
    return 0;
}