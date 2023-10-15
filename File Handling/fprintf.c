#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("rehab", "w");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
    }

    char ch1 = 'A', ch2 = 'A', ch3 = 'P', ch4 = 'L', ch5 = 'E';
    fprintf(file, "%c %c %c %c %c", ch1, ch2, ch3, ch4, ch5);

    fclose(file);
    return 0;
}
