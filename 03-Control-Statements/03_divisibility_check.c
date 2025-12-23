// Divisibility check
#include <stdio.h>

int main() {
    int num, divisor;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    if (divisor != 0 && num % divisor == 0) {
        printf("%d is divisible by %d\n", num, divisor);
    } else {
        printf("%d is not divisible by %d\n", num, divisor);
    }
    return 0;
}