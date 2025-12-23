// Sparse matrix
#include <stdio.h>

int main() {
    int m, n, matrix[10][10], count = 0;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) count++;
        }
    }
    if (count < (m * n) / 2) {
        printf("Sparse matrix\n");
    } else {
        printf("Not sparse\n");
    }
    return 0;
}