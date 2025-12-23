// Power of number
#include <stdio.h>

int main() {
    int base, exp, result = 1, i;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    for (i = 1; i <= exp; i++) {
        result *= base;
    }
    printf("Result: %d\n", result);
    return 0;
}