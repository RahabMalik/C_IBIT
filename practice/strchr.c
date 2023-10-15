#include<stdio.h>
#include<string.h>
int main ()
{
    int z;
    char x[]="Rehab";
    char y[]="Malik";
    z=strchr(x,y);
    printf("CHARACTER=%d",z);
    return 0;
}