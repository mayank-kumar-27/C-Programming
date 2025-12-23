// Trim string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int start = 0, end, len;
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
    len = strlen(str);
    end = len - 1;
    while (str[start] == ' ') start++;
    while (end >= start && str[end] == ' ') end--;
    for (int i = start; i <= end; i++) {
        result[i - start] = str[i];
    }
    result[end - start + 1] = '\0';
    printf("Trimmed: %s\n", result);
    return 0;
}