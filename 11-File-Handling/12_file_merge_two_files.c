// File merge two files
#include <stdio.h>

int main() {
    FILE *fp1 = fopen("test.txt", "r");
    FILE *fp2 = fopen("copy.txt", "r");
    FILE *out = fopen("merged.txt", "w");
    if (fp1 == NULL || fp2 == NULL || out == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp1)) != EOF) fputc(ch, out);
    while ((ch = fgetc(fp2)) != EOF) fputc(ch, out);
    printf("Files merged\n");
    fclose(fp1);
    fclose(fp2);
    fclose(out);
    return 0;
}