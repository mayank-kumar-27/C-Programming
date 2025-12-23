// Salary increment
#include <stdio.h>

int main() {
    float salary, increment;
    int experience;
    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter years of experience: ");
    scanf("%d", &experience);
    if (experience >= 10) {
        increment = salary * 0.10;
    } else if (experience >= 5) {
        increment = salary * 0.05;
    } else {
        increment = 0;
    }
    printf("Increment: %.2f\nNew salary: %.2f\n", increment, salary + increment);
    return 0;
}