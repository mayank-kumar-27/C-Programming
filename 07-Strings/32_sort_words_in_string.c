// Sort words in string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], words[10][100], temp[100];
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
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
    printf("Sorted words: ");
    for (i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
    return 0;
}