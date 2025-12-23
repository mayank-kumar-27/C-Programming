// Smallest element
#include <stdio.h>

int main() {
    int n, min, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }
    printf("Smallest: %d\n", min);
    return 0;
}