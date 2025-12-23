// Swap two numbers
#include <stdio.h>

int main() {
    int firstNumber, secondNumber, temp;
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
    printf("After swapping: First = %d, Second = %d\n", firstNumber, secondNumber);
    return 0;
}