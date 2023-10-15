#include <stdio.h>

int main()
{
    int size = 10;
    int arr[] = {2, 4, 5, 2, 6, 4, 7, 8, 5, 9};
    int frequency[size];

    // Initialize frequency array with all elements set to 0
    for (int i = 0; i < size; i++)
    {
        frequency[i] = 0;
    }

    // Count the frequency of each element
    for (int i = 0; i < size; i++)
    {
        frequency[arr[i]]++;
    }

    // Print the frequency of each element
    printf("Frequency of each element:\n");
    for (int i = 0; i < size; i++)
    {
        if (frequency[i] > 0)
        {
            printf("%d: %d\n", i, frequency[i]);
        }
    }

    return 0;
}
