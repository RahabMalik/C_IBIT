#include <stdio.h>
#include <conio.h>
int main()
{
    int size = 3;
int arr[3][3]={{2,5,8},{3,6,9},{1,4,7}};
// 2 5 8
// 3 6 9
// 1 4 7
int i,j,k;
for(i=0;i<size;i++)
{
    for(k=0;k<size;k++)
   { for(j=k+1;j<size;j++)
    {
        if(arr[i][k]<arr[i][j])
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
        }
    }
   }
}
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
}


}