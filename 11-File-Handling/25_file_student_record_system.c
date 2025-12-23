// File student record system
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void addStudent() {
    FILE *fp = fopen("students.dat", "ab");
    struct Student s;
    printf("Enter name, roll, marks: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    fwrite(&s, sizeof(struct Student), 1, fp);
    fclose(fp);
}

void displayStudents() {
    FILE *fp = fopen("students.dat", "rb");
    struct Student s;
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("1. Add Student\n2. Display Students\n3. Exit\n");
        scanf("%d", &choice);
        if (choice == 1) addStudent();
        else if (choice == 2) displayStudents();
        else break;
    }
    return 0;
}