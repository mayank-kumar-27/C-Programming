// Count digits
#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            count++;
            n /= 10;
        }
    }
    printf("Digits: %d\n", count);
    return 0;
}