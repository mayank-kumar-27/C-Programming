// Matrix boundary elements
#include <stdio.h>

int main() {
    int m, n, matrix[10][10];
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Boundary elements: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}