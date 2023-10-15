#include <stdio.h>
int main()
{
    int addodd=0, res, sumeven=0, loop;
    int arr[6] = {1, 3, 5, 7, 9, 11};
    for (loop = 0; loop <= 5; loop++)
    {
        if (loop % 2 != 0)
            addodd += arr[loop];
        else
        {
            sumeven += arr[loop];
        }
    }
    res = addodd - sumeven;
    printf("%d ", res);
    return 0;
}