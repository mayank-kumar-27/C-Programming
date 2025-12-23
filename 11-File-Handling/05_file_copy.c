// File copy
#include <stdio.h>

int main() {
    FILE *src = fopen("test.txt", "r");
    FILE *dest = fopen("copy.txt", "w");
    if (src == NULL || dest == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied\n");
    fclose(src);
    fclose(dest);
    return 0;
}