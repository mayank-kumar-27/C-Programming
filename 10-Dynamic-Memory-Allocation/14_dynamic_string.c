// Dynamic string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char*)malloc(100 * sizeof(char));
    printf("Enter string: ");
    scanf("%s", str);
    printf("String: %s\n", str);
    free(str);
    return 0;
}