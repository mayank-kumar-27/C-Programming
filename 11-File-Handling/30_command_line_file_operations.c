// Command line file operations
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <operation> <filename>\n", argv[0]);
        return 1;
    }
    char *op = argv[1];
    char *filename = argv[2];
    if (strcmp(op, "read") == 0) {
        FILE *fp = fopen(filename, "r");
        if (fp == NULL) {
            printf("Error opening file\n");
            return 1;
        }
        char ch;
        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }
        fclose(fp);
    } else if (strcmp(op, "write") == 0) {
        FILE *fp = fopen(filename, "w");
        if (fp == NULL) {
            printf("Error opening file\n");
            return 1;
        }
        fprintf(fp, "Hello from command line\n");
        fclose(fp);
        printf("Written to %s\n", filename);
    } else {
        printf("Unknown operation\n");
    }
    return 0;
}