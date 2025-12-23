// Program to calculate the total price of items bought based on quantities and prices.
#include <stdio.h>

int main() {
    int n;
    float total = 0;

    // Input number of items
    printf("Enter the number of distinct items: ");
    scanf("%d", &n);

    // Validate
    if (n < 1) {
        printf("Please purchase at least one item.\n");
        return 1;
    }

    float prices[n];
    int quantities[n];

    // Input prices and quantities
    for (int i = 0; i < n; i++) {
        printf("Enter price of item %d: ", i + 1);
        scanf("%f", &prices[i]);
        printf("Enter quantity of item %d: ", i + 1);
        scanf("%d", &quantities[i]);

        // Basic validation
        if (prices[i] < 0 || quantities[i] < 0) {
            printf("Price and quantity must be non-negative.\n");
            return 1;
        }
    }

    // Calculate total
    for (int i = 0; i < n; i++) {
        total += prices[i] * quantities[i];
    }

    // Display total
    printf("Total amount to pay: %.2f\n", total);

    return 0;
}