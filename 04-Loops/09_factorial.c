// Factorial
#include <stdio.h>

int main() {
    int n, factorial = 1, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial: %d\n", factorial);
    return 0;
}