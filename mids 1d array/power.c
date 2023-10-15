#include <stdio.h>
#include <math.h>

int main() {
    int arr[5] = {2, 4, 8, 16, 64};
    
    for (int i = 0; i < 5; i++) {
        int isPowerOfTwo = 0;
        
        for (int x = 1; x <= 6; x++) {
            if (arr[i] == pow(2, x)) {
                isPowerOfTwo = 1;
                break;
            }
        }
        
        if (isPowerOfTwo) {
            printf("%d is a power of 2.\n", arr[i]);
        } else {
            printf("%d is not a power of 2.\n", arr[i]);
        }
    }

    return 0;
}
