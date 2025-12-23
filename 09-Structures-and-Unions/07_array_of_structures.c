// Array of structures
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student s[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter name and roll for student %d: ", i + 1);
        scanf("%s %d", s[i].name, &s[i].roll);
    }
    for (int i = 0; i < 3; i++) {
        printf("Student %d: %s, %d\n", i + 1, s[i].name, s[i].roll);
    }
    return 0;
}