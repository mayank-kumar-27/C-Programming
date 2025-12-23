// Program to calculate the total cost of purchasing loaves of bread.
// Price per loaf: $3.
#include <stdio.h>

int main() {
    int numLoaves;
    float pricePerLoaf = 3.0, totalCost;

    // Input number of loaves
    printf("Enter the number of loaves: ");
    scanf("%d", &numLoaves);

    // Validate
    if (numLoaves < 0) {
        printf("Number of loaves cannot be negative.\n");
        return 1;
    }

    // Calculate total
    totalCost = numLoaves * pricePerLoaf;

    // Display
    printf("Total cost for %d loaf(es): $%.2f\n", numLoaves, totalCost);

    return 0;
}