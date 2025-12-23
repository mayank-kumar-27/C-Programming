// String reverse
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, j;
    printf("Enter string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';
    printf("Reversed: %s\n", rev);
    return 0;
}