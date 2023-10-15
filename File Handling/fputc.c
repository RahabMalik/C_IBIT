#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("rehab", "w");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
    }
    fputc('M', file);
    fputc('A', file);
    fputc('N', file);
    fputc('G', file);
    fputc('O', file);
    fclose(file);
    return 0;
}