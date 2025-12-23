// Array sum using pointer
#include <stdio.h>

int main() {
    int n, sum = 0, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *p = arr;
    for (int i = 0; i < n; i++) {
        sum += *(p + i);
    }
    printf("Sum: %d\n", sum);
    return 0;
}