// Realloc expand array
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter initial n: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    printf("Enter new n: ");
    scanf("%d", &n);
    arr = (int*)realloc(arr, n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}