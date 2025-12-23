// Array traversal pointer
#include <stdio.h>

int main() {
    int n, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *p = arr;
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    return 0;
}