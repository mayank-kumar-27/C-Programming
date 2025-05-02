// Write a program that checks if two strings are anagrams.
#include <stdio.h>
#include <string.h>
void sort(char str[])
{
    int length = strlen(str);
    char temp;
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j + 1];
                str[j + 1] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main()
{
    char word[100], word2[100];
    printf("Enter The Word 1 :");
    fgets(word, sizeof(word), stdin);
    printf("Enter The Word 2 :");
    fgets(word2, sizeof(word2), stdin);
    sort(word);
    sort(word2);
    if (strcmp(word, word2) == 0)
    {
        printf("Yes! Words are Anagrams\n");
    }
    else
    {
        printf("No! Words are Not Anagrams\n");
    }
    return 0;
}