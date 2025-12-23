// File fprintf fscanf
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int num = 42;
    fprintf(fp, "%d\n", num);
    fclose(fp);
    fp = fopen("data.txt", "r");
    fscanf(fp, "%d", &num);
    printf("Read: %d\n", num);
    fclose(fp);
    return 0;
}