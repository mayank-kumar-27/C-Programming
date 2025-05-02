#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    int Length, yes;
    printf("Enter The Word You Want To Check A Palindrome Or Not :\n");
    gets(word);
    Length = strlen(word);
    for (int i = 0; i < Length; i++)
    {
        // // printf("%c",word[i]);
        // printf("%c",word[Length-1-i]);
        if (word[i] == word[Length - 1 - i])
        {
            yes = 1;
        }
    }
    if (yes == 1)
    {
        printf("YES! The Word Enterd By You Is A Palindrome Word.");
    }
    else
    {
        printf("NO! The Word Entered By You Is Not A Palindrome Word.");
    }
    return 0;
}