// Binary search
#include <stdio.h>

int main() {
    int n, key, arr[100], low, high, mid;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Found at index: %d\n", mid);
            return 0;
        }
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    printf("Not found\n");
    return 0;
}