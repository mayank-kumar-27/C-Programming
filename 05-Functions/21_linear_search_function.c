// Linear search function
#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int main() {
    int n, key, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    int index = linearSearch(arr, n, key);
    if (index != -1) {
        printf("Found at index: %d\n", index);
    } else {
        printf("Not found\n");
    }
    return 0;
}