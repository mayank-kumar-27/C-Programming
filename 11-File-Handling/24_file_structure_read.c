// File structure read
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    FILE *fp = fopen("students.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    struct Student s;
    fread(&s, sizeof(struct Student), 1, fp);
    printf("Name: %s, Roll: %d\n", s.name, s.roll);
    fclose(fp);
    return 0;
}