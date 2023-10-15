#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter n term");
    scanf("%d", &n);

    FILE *file;
    file = fopen("rehab", "w");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
    }
    for (int i = 0; i <= n; i ++)
    {
        if (i % 2 != 0)
        {
            fprintf(file, "%d ", i);
        }
    }

    fclose(file);
    return 0;
}
