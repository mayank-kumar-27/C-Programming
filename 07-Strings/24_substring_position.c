// Substring position
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    char *pos;
    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter substring: ");
    scanf("%s", sub);
    pos = strstr(str, sub);
    if (pos != NULL) {
        printf("Position: %ld\n", pos - str);
    } else {
        printf("Not found\n");
    }
    return 0;
}