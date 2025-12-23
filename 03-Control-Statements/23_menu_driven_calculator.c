// Menu driven calculator
#include <stdio.h>

int main() {
    int choice;
    float a, b, result;
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    switch (choice) {
        case 1:
            result = a + b;
            printf("Sum: %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Difference: %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Product: %.2f\n", result);
            break;
        case 4:
            if (b != 0) {
                result = a / b;
                printf("Quotient: %.2f\n", result);
            } else {
                printf("Division by zero\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}