// Count words
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int words = 0, inWord = 0;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    // Alternative using fgets:
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // Alternative using getchar:
    // int i = 0;
    // char ch;
    // while ((ch = getchar()) != '\n' && i < 99) {
    //     str[i++] = ch;
    // }
    // str[i] = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }
    printf("Words: %d\n", words);
    return 0;
}