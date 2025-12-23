// Print n to 1
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}