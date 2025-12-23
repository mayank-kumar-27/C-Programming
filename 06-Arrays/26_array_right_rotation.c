// Array right rotation
#include <stdio.h>

int main() {
    int n, d, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter d: ");
    scanf("%d", &d);
    for (int i = 0; i < d; i++) {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
    printf("Rotated: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}