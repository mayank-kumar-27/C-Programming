// Binary to octal
#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, octal[32], i = 0, j;
    printf("Enter binary: ");
    scanf("%d", &binary);
    // Binary to decimal
    int temp = binary, k = 0;
    while (temp != 0) {
        decimal += (temp % 10) * pow(2, k);
        temp /= 10;
        k++;
    }
    // Decimal to octal
    if (decimal == 0) {
        printf("Octal: 0\n");
        return 0;
    }
    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }
    printf("Octal: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
    return 0;
}