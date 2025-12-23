// File random access
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r+");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fseek(fp, 10, SEEK_SET);
    fprintf(fp, "X");
    printf("Modified at position 10\n");
    fclose(fp);
    return 0;
}