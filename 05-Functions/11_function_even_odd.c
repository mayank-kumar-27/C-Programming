// Function even odd
#include <stdio.h>

void checkEvenOdd(int n) {
    if (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    checkEvenOdd(n);
    return 0;
}