// Product n numbers
#include <stdio.h>

int main() {
    int n, product = 1, i, num;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        product *= num;
    }
    printf("Product: %d\n", product);
    return 0;
}