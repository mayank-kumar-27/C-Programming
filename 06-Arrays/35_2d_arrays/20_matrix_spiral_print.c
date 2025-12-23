// Matrix spiral print
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
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    printf("Spiral: ");
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
    printf("\n");
    return 0;
}