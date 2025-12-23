// String reverse function
#include <stdio.h>

void stringReverse(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    stringReverse(str);
    printf("Reversed: %s\n", str);
    return 0;
}