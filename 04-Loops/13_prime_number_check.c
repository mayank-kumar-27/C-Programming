// Prime number check
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    return 0;
}