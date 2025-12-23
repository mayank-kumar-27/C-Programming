// File create
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error creating file\n");
        return 1;
    }
    printf("File created\n");
    fclose(fp);
    return 0;
}