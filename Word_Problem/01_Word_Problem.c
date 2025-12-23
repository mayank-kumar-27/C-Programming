// Program to calculate the total cost of items in a shopping cart.
// If the total exceeds $100, apply a 10% discount.
// Prompts user for number of items and their prices.
#include <stdio.h>

int main() {
    float price, totalPrice = 0.0;
    int numItems;

    // Get the number of items
    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    // Validate input
    if (numItems <= 0) {
        printf("Number of items must be positive.\n");
        return 1;
    }

    // Loop to input prices
    for (int i = 1; i <= numItems; i++) {
        printf("Enter the price of item %d: $ ", i);
        scanf("%f", &price);
        if (price < 0) {
            printf("Price cannot be negative. Skipping item %d.\n", i);
            continue;
        }
        totalPrice += price;
    }

    // Apply discount if applicable
    if (totalPrice > 100.0) {
        totalPrice -= totalPrice * 0.10;
        printf("Discount applied! ");
    }

    printf("The total amount to be paid is $%.2f\n", totalPrice);
    return 0;
}