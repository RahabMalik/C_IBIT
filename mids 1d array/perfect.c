#include<stdio.h>
int main ()
{
    int arr[5]={123,125,456,432,153};
    int num,num2,i,j,r,arm;
    for(i=0;i<5;i++)
    {
       num = arr[i];
       num2= num;
       int arm=0;
    
        while(num>0)
        {
         r=num%2;
         arm=(r*r*r)+arm;
         num=num/10;

        }
    }
    if(num2==arm)
    {
    printf("%d",num2);
    }
    else
    printf("not");
    
    return 0;
}