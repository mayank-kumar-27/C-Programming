// Write a program to reverse a string using pointers.
#include <stdio.h>
#include <string.h>

void reverse(char word[], int n)
{
    char reversed_word[n+1];

    for (int i = 0; i < n; i++)
    {
        reversed_word[i] = word[n - 1 - i];
    }

    reversed_word[n]='\0';

    printf("%s", reversed_word);
}

int main()
{
    char word[100];

    printf("Enter the Word of your choice: ");
    fgets(word, sizeof word, stdin);
    word[strcspn(word, "\n")] = '\0';

    int n = strlen(word);

    reverse(word, n);
    return 0;
}