#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 2, 3, 5};
    int i, j, num, freq = 0;
    printf("Enter number to find its frequency");
    scanf("%d", &num);
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == num)
            freq++;
    }
    printf("Freq of %d is %d", num, freq);
    return 0;
}