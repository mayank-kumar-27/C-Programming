// Array search element
#include <stdio.h>

int main() {
    int n, key, arr[100], found = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at index: %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Not found\n");
    }
    return 0;
}