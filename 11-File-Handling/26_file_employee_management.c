// File employee management
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

void addEmployee() {
    FILE *fp = fopen("employees.dat", "ab");
    struct Employee e;
    printf("Enter name, id, salary: ");
    scanf("%s %d %f", e.name, &e.id, &e.salary);
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);
}

void displayEmployees() {
    FILE *fp = fopen("employees.dat", "rb");
    struct Employee e;
    while (fread(&e, sizeof(struct Employee), 1, fp)) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", e.name, e.id, e.salary);
    }
    fclose(fp);
}

int main() {
    int choice;
    while (1) {
        printf("1. Add Employee\n2. Display Employees\n3. Exit\n");
        scanf("%d", &choice);
        if (choice == 1) addEmployee();
        else if (choice == 2) displayEmployees();
        else break;
    }
    return 0;
}