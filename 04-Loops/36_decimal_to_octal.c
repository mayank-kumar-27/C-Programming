// Decimal to octal
#include <stdio.h>

int main() {
    int decimal, octal[32], i = 0;
    printf("Enter decimal: ");
    scanf("%d", &decimal);
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
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
    return 0;
}