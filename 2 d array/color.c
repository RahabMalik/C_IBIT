#include <stdio.h>

int main() {
    // ANSI escape sequence to change cursor color to red
    printf("\033[31m");

    // Print a message with the red cursor
    printf("This is a message with a red cursor.\n");

    // Reset cursor color to default (usually white)
    printf("\033[0m");

    return 0;
}
