// Modulus operation
#include <stdio.h>

int main() {
    int dividend, divisor, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    if (divisor != 0) {
        remainder = dividend % divisor;
        printf("Remainder: %d\n", remainder);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}