#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("rehab", "r");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
    }
    char ch;
    ch = fgetc(file);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(file);
    }

    fclose(file);
    return 0;
}
