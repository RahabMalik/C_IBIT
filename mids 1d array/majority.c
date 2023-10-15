#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, maj = 0;
    int arr[5] = {2, 3, 2, 2, 5};
    for (i = 0; i < 5; i++)
    {
        maj = 0;
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {

                maj++;
            }
        }
    }
        if (maj ==(int) 5 / 2)
        {
            printf("maj is %d", arr[i]);
        
        }
        else 
        printf("there is not");
    
    return 0;
}