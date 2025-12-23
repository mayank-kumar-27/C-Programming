// Structure book
#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    int pages;
};

int main() {
    struct Book b;
    printf("Enter title: ");
    scanf("%[^\n]", b.title);
    printf("Enter author: ");
    scanf("%s", b.author);
    printf("Enter pages: ");
    scanf("%d", &b.pages);
    printf("Title: %s, Author: %s, Pages: %d\n", b.title, b.author, b.pages);
    return 0;
}