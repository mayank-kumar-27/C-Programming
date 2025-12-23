// Program to implement a basic calculator for add, subtract, multiply, divide.
#include <stdio.h>

int main() {
    float num1, num2;
    char choice;

    // Input numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Menu loop
    do {
        printf("\nChoose operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case '2':
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case '3':
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case '4':
                if (num2 != 0) {
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Error: Division by zero.\n");
                }
                break;
            case '5':
                printf("Exiting program. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '5');

    return 0;
}