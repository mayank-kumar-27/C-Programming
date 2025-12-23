// Calculator switch
#include <stdio.h>

int main() {
    float a, b, result;
    char op;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &b);
    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result: %.2f\n", result);
            } else {
                printf("Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}