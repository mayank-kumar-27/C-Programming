// File fgetc fputc
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    FILE *out = fopen("output.txt", "w");
    if (fp == NULL || out == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, out);
    }
    printf("Copied using fgetc/fputc\n");
    fclose(fp);
    fclose(out);
    return 0;
}