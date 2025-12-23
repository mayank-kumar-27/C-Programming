// First last digit
#include <stdio.h>

int main() {
    int n, first, last;
    printf("Enter n: ");
    scanf("%d", &n);
    last = n % 10;
    first = n;
    while (first >= 10) {
        first /= 10;
    }
    printf("First: %d, Last: %d\n", first, last);
    return 0;
}