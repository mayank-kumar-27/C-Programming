// File reverse content
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    char *content = NULL;
    size_t len = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        content = realloc(content, len + 1);
        content[len++] = ch;
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", content[i]);
    }
    free(content);
    fclose(fp);
    return 0;
}