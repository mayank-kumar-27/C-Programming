// Program to calculate simple interest on a savings account.
// Formula: SI = (P * R * T) / 100
#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest, totalAmount;

    // Input values
    printf("Enter the principal amount: $");
    scanf("%f", &principal);
    printf("Enter the interest rate (%%): ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%f", &time);

    // Validate
    if (principal < 0 || rate < 0 || time < 0) {
        printf("Values cannot be negative.\n");
        return 1;
    }

    // Calculate
    simpleInterest = (principal * rate * time) / 100.0;
    totalAmount = principal + simpleInterest;

    // Display
    printf("Simple Interest: $%.2f\n", simpleInterest);
    printf("Total Amount: $%.2f\n", totalAmount);

    return 0;
}