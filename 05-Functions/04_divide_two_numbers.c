// Divide two numbers
#include <stdio.h>

float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Quotient: %.2f\n", divide(a, b));
    return 0;
}