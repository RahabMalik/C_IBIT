#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {1, 2, 3, 4, 5};
    int i, equal = 1;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] != brr[i])
        {
            equal = 0;
            break;
        }
    }

    if (equal == 1)
    {
        printf("Both arrays are equal:");
    }
    else
        printf("Both arrays are not equal");
    return 0;
}