// File character count
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int count = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        count++;
    }
    printf("Characters: %d\n", count);
    fclose(fp);
    return 0;
}