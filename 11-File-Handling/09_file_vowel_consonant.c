// File vowel consonant
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int vowels = 0, consonants = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
        else if (isalpha(ch)) consonants++;
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    fclose(fp);
    return 0;
}