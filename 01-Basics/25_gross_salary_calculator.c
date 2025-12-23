// Gross salary calculator
#include <stdio.h>

int main() {
    float basicSalary, hra, da, grossSalary;
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    printf("Enter HRA percentage: ");
    scanf("%f", &hra);
    printf("Enter DA percentage: ");
    scanf("%f", &da);
    hra = (hra / 100) * basicSalary;
    da = (da / 100) * basicSalary;
    grossSalary = basicSalary + hra + da;
    printf("Gross Salary: %.2f\n", grossSalary);
    return 0;
}