// Second largest
#include <stdio.h>

int main() {
    int n, max, second, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = second = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }
    printf("Second largest: %d\n", second);
    return 0;
}