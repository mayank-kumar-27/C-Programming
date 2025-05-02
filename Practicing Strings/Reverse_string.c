// Write a function that reverses a string in place without using any built-in string functions.
#include <stdio.h>
int main()
{
    char sentence[100];
    int count = 0;
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
    printf("sentence after reversing your sentence is : ");
    for (int i = 0; i < count; i++)
    {
        printf("%c", sentence[count - 1 - i]);
    }
    return 0;
}