#include<stdio.h>
int main ()
{
    int age,gender;
    printf("Enter the age\n Enter 0 for male and 1 for female");
    scanf("%d %d",&age,&gender);
    if (age<0)
    printf("Not born");
    else if(age<=1)
    printf("Infant");



return 0;
}