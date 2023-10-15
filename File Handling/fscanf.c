#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("rehab", "r");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
    }

    char ch1, ch2, ch3, ch4, ch5;

    fscanf(file, "%c %c %c %c %c", &ch1, &ch2, &ch3, &ch4, &ch5);

    printf("characters = %c %c %c %c %c\n", ch1, ch2, ch3, ch4, ch5);

    fclose(file);
    return 0;
}
