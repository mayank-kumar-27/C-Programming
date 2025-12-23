// Sum of digits
#include <stdio.h>

int main() {
    int n, sum = 0, remainder;
    printf("Enter n: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    printf("Sum: %d\n", sum);
    return 0;
}