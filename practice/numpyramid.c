#include<stdio.h>
int main()
{
    int row,num,col;
    num=7;
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num-row;col++)
        {
            printf("  ");
        }
        for(col=1;col<=(2*row)-1;col++)
        {
            printf("%d ",col);
            
        }
        printf("\n");
    }
  return 0;
}