// File structure write
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    FILE *fp = fopen("students.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    struct Student s = {"John", 101};
    fwrite(&s, sizeof(struct Student), 1, fp);
    printf("Structure written\n");
    fclose(fp);
    return 0;
}