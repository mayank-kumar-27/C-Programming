// Implement a program that checks if a given string is a palindrome.
#include <stdio.h>
int main()
{
    char sentence[100];
    int count = 0, yes = 1;
    printf("Enter the Sentence You Want to Reverse : ");
    fgets(sentence, sizeof(sentence), stdin);
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == '\n')
        {
            sentence[i] = '\0';
            break;
        }
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (sentence[i] != sentence[count - 1 - i])
        {
            yes = 0;
            break;
        }
    }
    if (yes)
    {
        printf("String is Pallindrome.");
    }
    else
    {
        printf("String is not Pallindrome.");
    }
    return 0;
}