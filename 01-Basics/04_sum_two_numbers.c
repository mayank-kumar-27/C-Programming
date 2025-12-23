// Sum two numbers
#include <stdio.h>

int main() {
    int firstNumber, secondNumber, sum;
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    sum = firstNumber + secondNumber;
    printf("Sum: %d\n", sum);
    return 0;
}