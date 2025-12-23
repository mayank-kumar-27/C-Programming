// File seek tell
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fseek(fp, 5, SEEK_SET);
    printf("Position after seek: %ld\n", ftell(fp));
    char ch = fgetc(fp);
    printf("Character: %c\n", ch);
    fclose(fp);
    return 0;
}