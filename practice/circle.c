#include <stdio.h>

int main() {
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    int x = 0;
    int y = radius;
    int d = 1 - radius;
    int deltaE = 3;
    int deltaSE = -2 * radius + 5;

    while (y >= x) {
        // Plot points in all octants
        printf("(%d, %d) ", x, y);
        printf("(%d, %d) ", -x, y);
        printf("(%d, %d) ", x, -y);
        printf("(%d, %d) ", -x, -y);
        printf("(%d, %d) ", y, x);
        printf("(%d, %d) ", -y, x);
        printf("(%d, %d) ", y, -x);
        printf("(%d, %d) ", -y, -x);

        if (d < 0) {
            d += deltaE;
            deltaE += 2;
            deltaSE += 2;
        } else {
            d += deltaSE;
            deltaE += 2;
            deltaSE += 4;
            y--;
        }
        x++;
    }

    return 0;
}
