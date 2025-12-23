// File write text
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fprintf(fp, "Hello World\n");
    printf("Text written\n");
    fclose(fp);
    return 0;
}