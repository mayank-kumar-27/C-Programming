// String copy without strcpy
#include <stdio.h>

int main() {
    char str[100], copy[100];
    int i = 0;
    printf("Enter string: ");
    scanf("%s", str);
    while (str[i] != '\0') {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
    printf("Copied: %s\n", copy);
    return 0;
}