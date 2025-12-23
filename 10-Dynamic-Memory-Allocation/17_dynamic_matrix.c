// Dynamic matrix
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
    int **matrix = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
    }
    printf("Enter matrix: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}