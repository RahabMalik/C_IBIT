#include<stdio.h>
int main ()
{
    int arr[7]={1,2,3,4,3,2,1};
    int i,j,dup=1;
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(arr[i]!=arr[j])
            {
            dup=1;
           
            }
             
            if(arr[i]==arr[j])
            {
                dup=0;
                break;
            }

        }
    }
    printf("%d",arr[i]);
    return 0;
}