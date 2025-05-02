#include <stdio.h>
int main()
{
    char sentence[100];
    gets(sentence);
    printf("%c", sentence[0]);
    for (int i = 1; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ')
        {
            putchar(sentence[i + 1]);
        }
    }
    return 0;
}