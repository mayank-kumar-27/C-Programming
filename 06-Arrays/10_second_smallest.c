// Second smallest
#include <stdio.h>

int main() {
    int n, min, second, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = second = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            second = min;
            min = arr[i];
        } else if (arr[i] < second && arr[i] != min) {
            second = arr[i];
        }
    }
    printf("Second smallest: %d\n", second);
    return 0;
}