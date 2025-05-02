#include <stdio.h>
#include <string.h>
int main()
{
    int length,count;
    char word[100];
    gets(word);
    length = strlen(word);
    for (int i = 0; i < length; i++)
    {
        // printf("%c", word[i]);
        // printf("%c", word[length - 1 - i]);
        if (word[i] == word[length - 1 - i])
        {
            count=1;
        }
    }
    if (count==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("No");
    }
    return 0;
}