// Sum even numbers
#include <stdio.h>

int main() {
    int n, sum = 0, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2) {
        sum += i;
    }
    printf("Sum: %d\n", sum);
    return 0;
}