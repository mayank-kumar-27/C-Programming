// Perfect number
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        printf("Perfect\n");
    } else {
        printf("Not perfect\n");
    }
    return 0;
}