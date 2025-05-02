// Basic Structure Definition: Define a structure named Book that includes the following fields:
// title (string), author (string), year of publication (integer), and price (float).
// Write a C program to input and display the details of a book.
#include <stdio.h>
struct book
{
    char title[50];
    char author[50];
    int year;
    float price;
};
int main()
{
    struct book b;
    printf("Enter The name of Book : \n");
    fgets(b.title, sizeof(b.title), stdin);
    printf("Enter The name of Author : \n");
    fgets(b.author, sizeof(b.author), stdin);
    printf("Ente the year of publication : \n");
    scanf("%d", &b.year);
    printf("Ente the price of the Book : \n");
    scanf("%f", &b.price);
    printf("%s", b.title);
    printf("%s", b.author);
    printf("%d\n", b.year);
    printf("%.2f", b.price);
    return 0;
}