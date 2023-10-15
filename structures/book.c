#include <stdio.h>
#include <string.h>
int main()
{
    struct Book
    {
        char name[50];
        int price;
        int page;
    } book;
    strcpy(book.name, "alif");
    book.price = 200;
    book.page = 21;
    printf("%s\n", book.name);
    printf("%d\n", book.price);
    printf("%d\n", book.page);

    return 0;
}