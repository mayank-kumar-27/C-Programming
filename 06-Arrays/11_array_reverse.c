// Array reverse
#include <stdio.h>

int main() {
    int n, arr[100], rev[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        rev[i] = arr[n - i - 1];
    }
    printf("Reversed: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }
    printf("\n");
    return 0;
}