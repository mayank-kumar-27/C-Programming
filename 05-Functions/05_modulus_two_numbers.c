// Modulus two numbers
#include <stdio.h>

int modulus(int a, int b) {
    return a % b;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Modulus: %d\n", modulus(a, b));
    return 0;
}