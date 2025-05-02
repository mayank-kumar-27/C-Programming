// Create a program that finds the lexicographically smallest and largest words in a string.
#include <stdio.h>
int main()
{
    char word1[100], word2[100];
    int i = 0;
    printf("Enter 1st Word: ");
    fgets(word1, sizeof(word1), stdin);
    printf("Enter 2nd Word: ");
    fgets(word2, sizeof(word2), stdin);
    for (int j = 0; j < 100; j++)
    {
        if (word1[j] == '\n')
        {
            word1[j] = '\0';
            break;
        }
    }
    for (int j = 0; j < 100; j++)
    {
        if (word2[j] == '\n')
        {
            word2[j] = '\0';
            break;
        }
    }
    while (word1[i] != '\0' || word2[i] != '\0')
    {
        if (word1[i] < word2[i])
        {
            printf("Word2 is Lexicographically Larger: %s\n", word2);
            return 0;
        }
        else if (word1[i] > word2[i])
        {
            printf("Word1 is Lexicographically Larger: %s\n", word1);
            return 0;
        }
        i++;
    }
    printf("Both words are lexicographically equal.\n");
    return 0;
}
