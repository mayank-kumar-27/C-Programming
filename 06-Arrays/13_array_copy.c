// Array copy
#include <stdio.h>

int main() {
    int n, arr[100], copy[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        copy[i] = arr[i];
    }
    printf("Copied: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");
    return 0;
}