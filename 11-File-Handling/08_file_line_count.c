// File line count
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int lines = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') lines++;
    }
    printf("Lines: %d\n", lines);
    fclose(fp);
    return 0;
}