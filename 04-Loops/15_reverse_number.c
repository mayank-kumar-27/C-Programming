// Reverse number
#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;
    printf("Enter n: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("Reversed: %d\n", reversed);
    return 0;
}