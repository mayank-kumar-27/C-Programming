// Factorial using while
#include <stdio.h>

int main() {
    int n, factorial = 1, i = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    while (i <= n) {
        factorial *= i;
        i++;
    }
    printf("Factorial: %d\n", factorial);
    return 0;
}