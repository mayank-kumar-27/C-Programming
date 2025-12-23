// Pointer to string
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    char *p = str;
    printf("String: %s\n", p);
    printf("First char: %c\n", *p);
    return 0;
}