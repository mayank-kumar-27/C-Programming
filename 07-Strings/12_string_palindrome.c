// String palindrome
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, j, isPal = 1;
    printf("Enter string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            isPal = 0;
            break;
        }
    }
    if (isPal) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}