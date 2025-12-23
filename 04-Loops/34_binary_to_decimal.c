// Binary to decimal
#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, i = 0, remainder;
    printf("Enter binary: ");
    scanf("%d", &binary);
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}