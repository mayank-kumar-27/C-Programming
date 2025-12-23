// Structure student
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    return 0;
}