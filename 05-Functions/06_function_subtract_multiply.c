// Function subtract multiply
#include <stdio.h>

void subtractMultiply(int a, int b) {
    printf("Subtract: %d\n", a - b);
    printf("Multiply: %d\n", a * b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    subtractMultiply(a, b);
    return 0;
}