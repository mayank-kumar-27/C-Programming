// Logical operators
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("%d && %d: %d\n", a, b, a && b);
    printf("%d || %d: %d\n", a, b, a || b);
    printf("!%d: %d\n", a, !a);
    return 0;
}