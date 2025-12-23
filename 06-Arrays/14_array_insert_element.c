// Array insert element
#include <stdio.h>

int main() {
    int n, pos, val, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position and value: ");
    scanf("%d %d", &pos, &val);
    for (int i = n; i > pos - 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}