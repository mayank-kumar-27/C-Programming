// Access structure pointer
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;
    printf("Enter name and roll: ");
    scanf("%s %d", ptr->name, &ptr->roll);
    printf("Name: %s, Roll: %d\n", ptr->name, ptr->roll);
    return 0;
}