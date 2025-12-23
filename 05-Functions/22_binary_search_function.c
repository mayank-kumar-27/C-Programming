// Binary search function
#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int n, key, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    int index = binarySearch(arr, n, key);
    if (index != -1) {
        printf("Found at index: %d\n", index);
    } else {
        printf("Not found\n");
    }
    return 0;
}