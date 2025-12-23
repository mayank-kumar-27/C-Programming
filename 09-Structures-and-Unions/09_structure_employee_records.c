// Structure employee records
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee e[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, id, salary for employee %d: ", i + 1);
        scanf("%s %d %f", e[i].name, &e[i].id, &e[i].salary);
    }
    for (int i = 0; i < n; i++) {
        printf("Employee %d: %s, %d, %.2f\n", i + 1, e[i].name, e[i].id, e[i].salary);
    }
    return 0;
}