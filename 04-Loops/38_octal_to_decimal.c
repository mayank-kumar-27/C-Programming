// Octal to decimal
#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, i = 0, remainder;
    printf("Enter octal: ");
    scanf("%d", &octal);
    while (octal != 0) {
        remainder = octal % 10;
        decimal += remainder * pow(8, i);
        octal /= 10;
        i++;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}