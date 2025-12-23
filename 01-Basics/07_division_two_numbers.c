// Division two numbers
#include <stdio.h>

int main() {
    float firstNumber, secondNumber, quotient;
    printf("Enter dividend: ");
    scanf("%f", &firstNumber);
    printf("Enter divisor: ");
    scanf("%f", &secondNumber);
    if (secondNumber != 0) {
        quotient = firstNumber / secondNumber;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}