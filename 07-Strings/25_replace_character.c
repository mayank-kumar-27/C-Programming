// Replace character
#include <stdio.h>

int main() {
    char str[100], oldChar, newChar;
    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter old char: ");
    scanf(" %c", &oldChar);
    printf("Enter new char: ");
    scanf(" %c", &newChar);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
    printf("Replaced: %s\n", str);
    return 0;
}