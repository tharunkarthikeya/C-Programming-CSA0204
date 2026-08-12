#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int pages;
    float price;
};

int main(void)
{
    struct Book book;

    printf("Enter book title: ");
    if (fgets(book.title, sizeof(book.title), stdin) == NULL)
        return 0;
    size_t len = strlen(book.title);
    if (len > 0 && book.title[len - 1] == '\n')
        book.title[len - 1] = '\0';

    printf("Enter author name: ");
    if (fgets(book.author, sizeof(book.author), stdin) == NULL)
        return 0;
    len = strlen(book.author);
    if (len > 0 && book.author[len - 1] == '\n')
        book.author[len - 1] = '\0';

    printf("Enter number of pages: ");
    if (scanf("%d", &book.pages) != 1)
        return 0;

    printf("Enter the price: ");
    if (scanf("%f", &book.price) != 1)
        return 0;

    printf("\nBook Information:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Pages: %d\n", book.pages);
    printf("Price: %.2f\n", book.price);

    return 0;
}
