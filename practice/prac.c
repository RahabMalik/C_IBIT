#include<stdio.h>
#include<string.h>
int main ()
{
    char x[20];
    int n;
    printf("Enter a string:");
    scanf("%s",&x);
    n=strlen(x);
    printf("String length of %s=%d",x,n);
    return 0;
}