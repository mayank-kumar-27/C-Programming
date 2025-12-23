// Swap without temp
#include <stdio.h>

int main() {
    int firstNumber, secondNumber;
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;
    printf("After swapping: First = %d, Second = %d\n", firstNumber, secondNumber);
    return 0;
}