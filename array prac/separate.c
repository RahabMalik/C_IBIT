#include <stdio.h>

int main() {
    int size = 10;
    int arr[] = {2, 4, 5, 2, 6, 4, 7, 8, 5, 9};
    int even[size], odd[size];
    int e = 0, o = 0;

    // Separate odd and even integers
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[e] = arr[i];
            e++;
        } else {
            odd[o] = arr[i];
            o++;
        }
    }

    // Print even integers
    printf("Even integers: ");
    for (int i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Print odd integers
    printf("Odd integers: ");
    for (int i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
