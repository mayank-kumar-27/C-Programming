// Swap first last digit
#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;
    printf("Enter n: ");
    scanf("%d", &n);
    last = n % 10;
    first = n;
    digits = 0;
    while (first >= 10) {
        first /= 10;
        digits++;
    }
    swapped = last * pow(10, digits) + (n % (int)pow(10, digits)) / 10 * 10 + first;
    printf("Swapped: %d\n", swapped);
    return 0;
}