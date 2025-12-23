// Dynamic 2d array
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
    int **arr = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        arr[i] = (int*)malloc(n * sizeof(int));
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = i + j;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}