// Bitwise shift operators
#include <stdio.h>

int main() {
    int a, shift;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter shift amount: ");
    scanf("%d", &shift);
    printf("%d << %d: %d\n", a, shift, a << shift);
    printf("%d >> %d: %d\n", a, shift, a >> shift);
    return 0;
}