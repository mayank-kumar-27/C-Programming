// Reverse each word
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[100], result[100];
    int i = 0, j = 0, k = 0, len;
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
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            word[j] = '\0';
            len = strlen(word);
            for (int m = len - 1; m >= 0; m--) {
                result[k++] = word[m];
            }
            result[k++] = ' ';
            j = 0;
        } else {
            word[j++] = str[i];
        }
        i++;
    }
    word[j] = '\0';
    len = strlen(word);
    for (int m = len - 1; m >= 0; m--) {
        result[k++] = word[m];
    }
    result[k] = '\0';
    printf("Reversed each word: %s\n", result);
    return 0;
}