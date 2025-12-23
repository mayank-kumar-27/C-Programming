// Remove duplicates
#include <stdio.h>

int main() {
    int n, arr[100], temp[100], j = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int k = i + 1; k < n; k++) {
            if (arr[i] == arr[k]) {
                for (int l = k; l < n - 1; l++) {
                    arr[l] = arr[l + 1];
                }
                n--;
                k--;
            }
        }
    }
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}