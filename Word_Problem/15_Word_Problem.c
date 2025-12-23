// Program to check if a character is a vowel or consonant.
// Assumes input is a letter.
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input character
    printf("Enter a letter: ");
    scanf("%c", &ch);

    // Convert to lowercase
    ch = tolower(ch);

    // Check if vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("'%c' is a vowel.\n", ch);
    } else if (isalpha(ch)) {
        printf("'%c' is a consonant.\n", ch);
    } else {
        printf("Not a letter.\n");
    }

    return 0;
}