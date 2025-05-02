// Write a function to compare two strings without using strcmp.
#include <stdio.h>
#include <string.h>
int main()
{
    char word1[100], word2[100];
    int yes = 1;
    printf("Enter 1st Word : ");
    fgets(word1, sizeof(word1), stdin);
    printf("Enter 2nd Word : ");
    fgets(word2, sizeof(word2), stdin);
    int length1 = strlen(word1), length2 = strlen(word2);
    if (length1 != length2)
    {
        printf("Both Words Are not Same.");
    }
    for (int i = 0; i < length1; i++)
    {
        if (word1[i] != word2[i])
        {
            yes = 0;
            break;
        }
    }
    if (yes)
    {
        printf("Both Words Are SAME.");
    }
    else
    {
        printf("Both Words Are not Same.");
    }
    return 0;
}