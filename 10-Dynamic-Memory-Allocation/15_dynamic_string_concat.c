// Dynamic string concat
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str1 = (char*)malloc(50 * sizeof(char));
    char *str2 = (char*)malloc(50 * sizeof(char));
    printf("Enter str1: ");
    scanf("%s", str1);
    printf("Enter str2: ");
    scanf("%s", str2);
    str1 = (char*)realloc(str1, strlen(str1) + strlen(str2) + 1);
    strcat(str1, str2);
    printf("Concat: %s\n", str1);
    free(str1);
    free(str2);
    return 0;
}