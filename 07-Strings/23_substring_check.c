// Substring check
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter substring: ");
    scanf("%s", sub);
    if (strstr(str, sub) != NULL) {
        printf("Substring found\n");
    } else {
        printf("Substring not found\n");
    }
    return 0;
}