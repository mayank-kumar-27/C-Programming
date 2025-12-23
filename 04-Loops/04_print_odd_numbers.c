// Print odd numbers
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}