// Fibonacci series
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}