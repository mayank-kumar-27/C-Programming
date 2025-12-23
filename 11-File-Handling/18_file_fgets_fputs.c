// File fgets fputs
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    FILE *out = fopen("output.txt", "w");
    if (fp == NULL || out == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    char buffer[1000];
    while (fgets(buffer, sizeof(buffer), fp)) {
        fputs(buffer, out);
    }
    printf("Copied using fgets/fputs\n");
    fclose(fp);
    fclose(out);
    return 0;
}