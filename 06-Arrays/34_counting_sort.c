// Counting sort
#include <stdio.h>

int main() {
    int n, arr[100], output[100], count[100] = {0};
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array (0-99): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }
    for (int i = 1; i < 100; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    printf("Sorted: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");
    return 0;
}