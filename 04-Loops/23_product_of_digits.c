// Product of digits
#include <stdio.h>

int main() {
    int n, product = 1, remainder;
    printf("Enter n: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        product *= remainder;
        n /= 10;
    }
    printf("Product: %d\n", product);
    return 0;
}