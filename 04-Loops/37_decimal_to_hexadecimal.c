// Decimal to hexadecimal
#include <stdio.h>

int main() {
    int decimal, remainder, i = 0;
    char hex[32];
    printf("Enter decimal: ");
    scanf("%d", &decimal);
    if (decimal == 0) {
        printf("Hexadecimal: 0\n");
        return 0;
    }
    while (decimal > 0) {
        remainder = decimal % 16;
        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder - 10 + 'A';
        }
        decimal /= 16;
        i++;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
    return 0;
}