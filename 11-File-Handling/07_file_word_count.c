// File word count
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int words = 0;
    char ch;
    int inWord = 0;
    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }
    printf("Words: %d\n", words);
    fclose(fp);
    return 0;
}