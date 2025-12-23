// Prime numbers range
#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers: ");
    for (i = start; i <= end; i++) {
        isPrime = 1;
        if (i <= 1) continue;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}