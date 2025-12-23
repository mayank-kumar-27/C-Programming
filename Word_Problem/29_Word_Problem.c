// Program to count the number of words in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    int wordCount = 0;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline if present
    sentence[strcspn(sentence, "\n")] = '\0';

    // Count words
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        wordCount++;
        token = strtok(NULL, " ");
    }

    // Display result
    printf("Number of words: %d\n", wordCount);

    return 0;
}