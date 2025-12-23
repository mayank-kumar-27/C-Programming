// Program to calculate an employee's annual salary.
// If with company > 5 years, add 10% bonus to annual salary.
#include <stdio.h>

int main() {
    int years;
    float monthlySalary, annualSalary;

    // Input monthly salary
    printf("Enter the monthly salary: $");
    scanf("%f", &monthlySalary);

    // Validate
    if (monthlySalary < 0) {
        printf("Salary cannot be negative.\n");
        return 1;
    }

    // Input years
    printf("Enter the years the employee has been with the company: ");
    scanf("%d", &years);

    // Calculate annual salary
    annualSalary = 12 * monthlySalary;

    // Apply bonus if applicable
    if (years > 5) {
        annualSalary += annualSalary * 0.10;
        printf("Bonus applied! ");
    }

    printf("The annual salary is $%.2f\n", annualSalary);

    return 0;
}