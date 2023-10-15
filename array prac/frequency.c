#include <stdio.h>
int main()
{
    int i, j, frequency = 0, index = 0;
    int arr[5] = {2, 2, 2, 4, 5};
    for (i = 0; i < 5; i++)
    {
        // frequency=1;
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                frequency++;
                index = i;
            }
        }
    }
    printf("frequency of %d is %d\n", index + 1, frequency);

    return 0;
}