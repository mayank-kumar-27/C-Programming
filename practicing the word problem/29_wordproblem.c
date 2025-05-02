// Write a program that reads a sentence and counts the number of words in it.
#include <stdio.h>
int main()
{
    char sentence[100];
    int word = 1;
    printf("Enter The Sentence : \n");
    gets(sentence);
    // fgets(sentence, sizeof(sentence), stdin);
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ')
        {
            word++;
        }
    }
    printf("The Number Of Words In your Sentence is %d", word);
    return 0;
}