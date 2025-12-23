// Reverse words
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], words[10][100], result[100];
    int count = 0, i = 0, j = 0, k = 0;
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
            words[count][j] = '\0';
            count++;
            j = 0;
        } else {
            words[count][j++] = str[i];
        }
        i++;
    }
    words[count][j] = '\0';
    count++;
    for (i = count - 1; i >= 0; i--) {
        strcpy(result + k, words[i]);
        k += strlen(words[i]);
        if (i > 0) {
            result[k++] = ' ';
        }
    }
    result[k] = '\0';
    printf("Reversed words: %s\n", result);
    return 0;
}