#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    printf("%p \n", &arr[0]);
    printf("%p \n", &arr[1]);
    printf("%p \n", &arr[2]);
    printf("%p \n", &arr[3]);
    printf("%p \n", &arr[4]);
    printf("%p \n", &arr[5]);
    return 0;
}