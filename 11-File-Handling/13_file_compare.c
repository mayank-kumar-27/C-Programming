// File compare
#include <stdio.h>

int main() {
    FILE *fp1 = fopen("test.txt", "r");
    FILE *fp2 = fopen("copy.txt", "r");
    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    int same = 1;
    char ch1, ch2;
    while (1) {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        if (ch1 != ch2) {
            same = 0;
            break;
        }
        if (ch1 == EOF) break;
    }
    printf("Files are %s\n", same ? "same" : "different");
    fclose(fp1);
    fclose(fp2);
    return 0;
}