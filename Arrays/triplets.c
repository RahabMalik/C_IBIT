#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i, j, k, total_pairs = 0, num;
    printf("Enter a number :");
    scanf("%d", &num);
    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 7; j++)
        {
            for (k = j + 1; k <= 7; k++)
            {
                if ( arr[i] + arr[j] + arr[k] == num)
                {
                total_pairs=total_pairs +1;
                printf("(%d %d %d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
        printf("Total Pairs are : %d",total_pairs);

    return 0;
}