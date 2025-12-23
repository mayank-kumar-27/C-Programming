// File delete content
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    // Opening in "w" mode truncates the file
    printf("Content deleted\n");
    fclose(fp);
    return 0;
}