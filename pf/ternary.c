#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter three operands:");
    scanf("%d %d %d",&a,&b,&c);
    (a>b&&a>c)?(printf("%d",a)):(b>a&&b>c)?(printf("%d",b)):(printf("%d",c));
    return 0;

}