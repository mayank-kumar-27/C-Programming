// Implement a function that finds the first non-repeating character in a string.
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the Sentence : ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }
    printf("The Characters Which are not Repeating are :\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] == 1)
        {
            printf("'%c'\n", i);
        }
    }
    printf("And The First Character Which is not Repeating is :\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[(int)str[i]] == 1)
        {
            printf("'%c'", str[i]);
            break;
        }
    }
    return 0;
}