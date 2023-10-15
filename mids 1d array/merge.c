#include<stdio.h>
int main ()
{
    int i,j,max;
    int arr[5]={1,2,3,4,5};
    int brr[5]={1,2,3,4,5};
    int crr[2*5];
    for(i=0;i<5;i++)
    {
     crr[i]=arr[i];
    }
    for(i=0;i<5;i++)
    {
        crr[i+5]=brr[i];
    }
    for(i=0;i<2*5;i++)
    {
       printf ("%d ",crr[i]);
    }
    max=crr[0];
     for(i=0;i<2*5;i++)
    {
        if(max>crr[i])
    {
        max=arr[i];
    }
    }
    return 0;
}
