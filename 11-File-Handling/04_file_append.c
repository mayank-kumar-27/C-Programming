// File append
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fprintf(fp, "Appended text\n");
    printf("Text appended\n");
    fclose(fp);
    return 0;
}