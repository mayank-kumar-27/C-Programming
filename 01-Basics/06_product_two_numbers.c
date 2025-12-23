// Product two numbers
#include <stdio.h>

int main() {
    int firstNumber, secondNumber, product;
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    product = firstNumber * secondNumber;
    printf("Product: %d\n", product);
    return 0;
}