#include <stdio.h>
int main()
{
    int arr[6];
    int i, j, num, count = 0;
    for (i = 0; i < 6; i++)
    {
        printf("Enter elements of an arrray: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter sum of an arrray: ");
    scanf("%d", &num);
    for (i = 0; i < 6; i++)
    {
        count=0;
        for (j = i + 1; j < i; j++)
        {
            if (arr[i] + arr[j] == num)
            {
                count = count + 1;
                printf("(%d,%d)\t", arr[i], arr[j]);
            }
        }
    }
    printf("%d\t", count);

    return 0;
}