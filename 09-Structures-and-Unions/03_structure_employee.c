// Structure employee
#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e;
    printf("Enter name: ");
    scanf("%s", e.name);
    printf("Enter id: ");
    scanf("%d", &e.id);
    printf("Enter salary: ");
    scanf("%f", &e.salary);
    printf("Name: %s, ID: %d, Salary: %.2f\n", e.name, e.id, e.salary);
    return 0;
}