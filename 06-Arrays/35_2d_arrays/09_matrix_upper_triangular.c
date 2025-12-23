// Matrix upper triangular
#include <stdio.h>

int main() {
    int n, matrix[10][10];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter matrix: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Upper triangular:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}