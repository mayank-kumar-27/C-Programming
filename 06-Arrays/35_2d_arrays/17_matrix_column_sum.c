// Matrix column sum
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
    printf("Column sums: ");
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += matrix[i][j];
        }
        printf("%d ", sum);
    }
    printf("\n");
    return 0;
}