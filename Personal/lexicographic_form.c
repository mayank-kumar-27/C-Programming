#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];

    printf("Enter the Sentence: ");
    fgets(word, sizeof word, stdin);
    word[strcspn(word, "\n")] = '\0';

    int n = strlen(word);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (word[j + 1] < word[j])
            {
                char temp = word[j + 1];
                word[j + 1] = word[j];
                word[j] = temp;
            }
        }
    }

    printf("The sentence in lexicographic order is : %s", word);

    return 0;
}