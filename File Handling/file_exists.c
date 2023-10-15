#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("rehab", "w");
    if (file == NULL)
        printf("File doesn't exists");
    else
        fclose(file);

    return 0;
}