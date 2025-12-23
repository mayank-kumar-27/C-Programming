// File uppercase lowercase
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    FILE *out = fopen("upper.txt", "w");
    if (fp == NULL || out == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        fputc(toupper(ch), out);
    }
    printf("Converted to uppercase\n");
    fclose(fp);
    fclose(out);
    return 0;
}