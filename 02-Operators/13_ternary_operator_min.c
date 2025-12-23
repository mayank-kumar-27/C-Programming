// Ternary operator min
#include <stdio.h>

int main() {
    int a, b, min;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    min = (a < b) ? a : b;
    printf("Minimum: %d\n", min);
    return 0;
}