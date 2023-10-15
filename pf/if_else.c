#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks");
    scanf("%d", &marks);
    if (marks >= 250)
        printf("pass");
    else
        printf("fail");
    return 0;
}