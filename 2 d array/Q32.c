#include<stdio.h>
int main ()
{
    int i,j,sum=0,sumRow=0,sumCol=0;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Elements are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //Add 1st row and last column
    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
        {
            sumRow=sumRow+arr[i][j];
        }
        printf("\n");
    }
    for(j=2;j<3;j++)
    {
        for(i=1;i<3;i++)
        {
            sumCol=sumCol+arr[i][j];
        }
        printf("\n");
    }
    sum=sumRow+sumCol;
    printf("%d",sum);
    return 0;
}