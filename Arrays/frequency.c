/*#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 1, 1, 1, 2};
    int i, j, freq = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                freq = freq + 1;
            }

        }

        if (freq > 0)
        {
            printf("%d is repeated %d times\n", arr[i], freq+1);
        }
        freq=0;
    }
    return 0;
} */
/*#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 1, 1, 2, 5};
    int i, j, freq = 0;

    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 6; j++) {
            if (arr[i] == arr[j]) {
                freq = freq + 1;
            }
        }
        if (freq > 0) {
            printf("%d is repeated %d times\n", arr[i], freq + 1);
        }
        freq = 0; // Reset frequency for the next element
    }

    return 0;
}*/
#include <stdio.h>

int main()
{
    int arr[6] = {1, 1, 1, 1, 1, 5};
    int i, j, freq = 0;

    for (i = 0; i < 6; i++)
    {
        if (arr[i] != -1)
        {             // Check if the element has already been considered
            freq = 1; // Set initial frequency to 1 for the current element

            for (j = i + 1; j < 6; j++)
            {
                if (arr[i] == arr[j])
                {
                    freq = freq + 1;
                    arr[j] = -1; // Mark the repeated element as -1 to avoid rechecking
                }
            }

            printf("%d is repeated %d times\n", arr[i], freq);
        }
    }

    return 0;
}
