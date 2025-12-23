// Difference two numbers
#include <stdio.h>

int main() {
    int firstNumber, secondNumber, difference;
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    difference = firstNumber - secondNumber;
    printf("Difference: %d\n", difference);
    return 0;
}