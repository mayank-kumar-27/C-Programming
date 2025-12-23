// Calloc array
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int *arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // all 0
    }
    printf("\n");
    free(arr);
    return 0;
}