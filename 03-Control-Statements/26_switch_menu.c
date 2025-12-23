// Program to demonstrate a menu-driven switch case for basic operations.
#include <stdio.h>

int main() {
    int choice, a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum: %d\n", a + b);
            break;
        case 2:
            printf("Difference: %d\n", a - b);
            break;
        case 3:
            printf("Product: %d\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Quotient: %d\n", a / b);
            } else {
                printf("Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}