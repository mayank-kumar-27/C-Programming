// Remove character
#include <stdio.h>

int main() {
    char str[100], result[100], ch;
    int j = 0;
    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter char to remove: ");
    scanf(" %c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("Removed: %s\n", result);
    return 0;
}