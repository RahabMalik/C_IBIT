#include <stdio.h>
int main()
{
    int arr[5];
    int i, max_count = 0, max, num;
    printf("Enter number of elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value :");
    scanf("%d", &num);
    max = arr[0];

    for (i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (arr[i] > num)
        {
            max_count++;
        }
    }
    printf("%d", max_count);

    return 0;
}