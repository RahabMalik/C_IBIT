#include <stdio.h> 
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {6, 7, 8, 9, 10};
    int i, product = 1, prr[5];
    for (i = 0; i < 5; i++)
    {

        product = arr[i] * brr[i];

        printf("%d ", product);
        prr[i] = product;
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", prr[i]);
    }

    return 0;
}