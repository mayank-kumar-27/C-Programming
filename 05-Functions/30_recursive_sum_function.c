// Recursive sum function
#include <stdio.h>

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum: %d\n", sum(n));
    return 0;
}