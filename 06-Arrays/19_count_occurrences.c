// Count occurrences
#include <stdio.h>

int main() {
    int n, key, count = 0, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) count++;
    }
    printf("Occurrences: %d\n", count);
    return 0;
}