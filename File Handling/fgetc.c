#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("rehab", "r");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
    }
    printf("%c", fgetc(file));
    printf("%c", fgetc(file));
    printf("%c", fgetc(file));
    printf("%c", fgetc(file));
    printf("%c", fgetc(file));

    fclose(file);
    return 0;
}
