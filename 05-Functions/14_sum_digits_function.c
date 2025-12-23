// Sum digits function
#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum: %d\n", sumDigits(n));
    return 0;
}