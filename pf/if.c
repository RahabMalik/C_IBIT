#include<stdio.h>
int main()
{
    int x,y,z,sum,minus,multiply,div;
    printf("Enter 1st number");
    scanf("%d",&x);
    printf("Enter 2nd number");
    scanf("%d",&y);
    printf("Enter 1 for sum, 2 for minus, 3 for multiply, 4 for division");
    scanf("%d",&z);
    if(z==1)
    {
        sum=x+y;
        printf("sum=%d",sum);
    }
    else if(z==2)
    {
        minus=x-y;
        printf("minus=%d",minus);
    }
    else if(z==3)
    {
        multiply=x*y;
        printf("multiplication=%d",multiply);
    }
    else if(z==4)
    {
        if(y==0)
        {
        printf("Take 2nd number other than 0");
        scanf("%d",&y);
        div=x/y;
        printf("division=%d",div);
        }
        else
        {
        div=x/y;
        printf("division=%d",div);
        }
    }
    else
    printf("This is not valid number");
    return 0;
} 