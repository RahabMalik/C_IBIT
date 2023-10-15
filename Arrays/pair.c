#include <stdio.h>
int main()
{
    int i, j, num, total = 0;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("Enter sum you want: ");
    scanf("%d", &num);
    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 7; j++)
        {
            if (arr[i] + arr[j] == num)
            {

              //  printf("(%d,%d)\n", arr[i], arr[j]);
                total = total + 1;
            }
        }
    }
    printf("Total pairs are/is %d", total);
    return 0;
}