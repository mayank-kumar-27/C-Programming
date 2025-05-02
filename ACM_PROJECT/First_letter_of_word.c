#include <stdio.h>
int main()
{
    char sentence[1000];
    printf("Enter The Sentence Of Your Choice :\n");
    gets(sentence);
    printf("The First Alphabet of Each Word Of Your Sentence is :\n");
    printf("%c", sentence[0]);
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ')
        {
            i++;
            putchar(sentence[i]);
        }
    }
    return 0;
}