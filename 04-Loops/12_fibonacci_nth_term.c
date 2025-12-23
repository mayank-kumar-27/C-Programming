// Fibonacci nth term
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    printf("Nth term: %d\n", a);
    return 0;
}