// String length function
#include <stdio.h>

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    printf("Length: %d\n", stringLength(str));
    return 0;
}