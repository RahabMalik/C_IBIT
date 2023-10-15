#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("rehab", "r");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
    }
    int ch1, ch2, ch3, ch4, ch5;

    fscanf(file, "%d %d %d %d %d", &ch1, &ch2, &ch3, &ch4, &ch5);

    printf("Integer = %d %d %d %d %d\n", ch1, ch2, ch3, ch4, ch5);

    fclose(file);
    return 0;
}
