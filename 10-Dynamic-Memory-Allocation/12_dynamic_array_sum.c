// Dynamic array sum
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Enter array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    free(arr);
    return 0;
}