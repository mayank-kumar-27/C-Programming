// Structure student records
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    for (int i = 0; i < n; i++) {
        printf("Student %d: %s, %d, %.2f\n", i + 1, s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}