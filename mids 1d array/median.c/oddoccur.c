#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 2, 2, 4, 5, 5, 3, 1};
    int i, j, count = 0;
    int found = 0;
    for (i = 0; i < 10; i++)
    {
        count = 0;
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        
            if(count%2!=0)
            {
                printf("%d",arr[i]);
            }
        
    }
    printf("%d appears %d times",arr[i],count);
    return 0;
}