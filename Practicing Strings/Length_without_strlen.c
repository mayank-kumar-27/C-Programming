// Write a program to find the length of a string without using strlen.
#include <stdio.h>
int main()
{
    char word[100];
    int count = 0;

    printf("Enter the Word Whose Length you want : ");
    fgets(word, sizeof(word), stdin);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == '\n')
        {
            word[i] = '\0';
            break;
        }
        count++;
    }
    printf("The Length of Your word is %d", count);
    return 0;
}