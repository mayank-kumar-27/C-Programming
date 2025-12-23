// Digit frequency
#include <stdio.h>

int main() {
    int n, digit, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter digit to count: ");
    scanf("%d", &digit);
    while (n != 0) {
        if (n % 10 == digit) {
            count++;
        }
        n /= 10;
    }
    printf("Frequency: %d\n", count);
    return 0;
}