// String copy
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], copy[100];
    printf("Enter string: ");
    scanf("%s", str);
    strcpy(copy, str);
    printf("Copied: %s\n", copy);
    return 0;
}