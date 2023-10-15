#include <stdio.h>

void printTopPart(int num) {
    for (int i = 1; i <= (num / 2) + 1; i++) {
        for (int j = 1; j <= (num / 2) - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            if (j == i || i == (num / 2) + 1 || j == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void printMiddleLine(int num) {
    for (int i = 1; i <= (num / 2); i++) {
        for (int j = 1; j <= num / 2; j++) {
            if (j == (num / 2))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void printFourPattern(int num) {
    printTopPart(num);
    printMiddleLine(num);
}

int main() {
    int num;
    printf("Enter number of rows:");
    scanf("%d", &num);
    printFourPattern(num);
    return 0;
}
