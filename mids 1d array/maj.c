#include <stdio.h>
#include <conio.h>
int main()
{
    int i=0, j, x = 10;
    int arr[10] = {2, 5, 8, 4, 3, 9, 2, 2, 2, 2};
    int check = 0;
    for (i = 0; i < x; i++)
    {
        for (j = i+1; j < x; j++)
        {
            if (arr[i] == arr[j])
            {
                check++;
            }
        }
        if(check>x/2)
        { 
            check=arr[i];
           // printf("%d is major element",arr[i]);
           // break;
        }
    }
    if(check>x/2)
    {
         printf("%d is major element",check);
    }
    else
    printf(" no major element");
}