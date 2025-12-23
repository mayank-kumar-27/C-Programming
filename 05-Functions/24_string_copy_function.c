// String copy function
#include <stdio.h>

void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char src[100], dest[100];
    printf("Enter string: ");
    scanf("%s", src);
    stringCopy(dest, src);
    printf("Copied: %s\n", dest);
    return 0;
}