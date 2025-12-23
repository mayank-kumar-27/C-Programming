// Inverted pyramid
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}