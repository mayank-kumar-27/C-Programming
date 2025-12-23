// Program to calculate final amount after discount.
// 5% discount if purchase > $200.
#include <stdio.h>

int main() {
    float amount, discount = 0.0, finalAmount;

    // Input amount
    printf("Enter the bill amount: $");
    scanf("%f", &amount);

    // Validate
    if (amount < 0) {
        printf("Amount cannot be negative.\n");
        return 1;
    }

    // Apply discount
    if (amount > 200.0) {
        discount = amount * 0.05;
    }

    finalAmount = amount - discount;

    // Display
    if (discount > 0) {
        printf("Discount: $%.2f\n", discount);
    }
    printf("Final amount to pay: $%.2f\n", finalAmount);

    return 0;
} 