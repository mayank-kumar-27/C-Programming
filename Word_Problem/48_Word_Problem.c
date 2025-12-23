// Program to calculate monthly installment based on principal, rate, months (simple interest).
#include <stdio.h>

int main() {
    float principal, rate, totalAmount, monthlyInstallment;
    int months;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (%%): ");
    scanf("%f", &rate);
    printf("Enter number of months: ");
    scanf("%d", &months);

    // Validate
    if (principal <= 0 || rate < 0 || months <= 0) {
        printf("Invalid input values.\n");
        return 1;
    }

    // Calculate total amount with simple interest
    float interest = (principal * rate * months / 12) / 100;
    totalAmount = principal + interest;

    // Monthly installment
    monthlyInstallment = totalAmount / months;

    // Display
    printf("Monthly installment: %.2f\n", monthlyInstallment);

    return 0;
}