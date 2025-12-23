// Matrix symmetric check
#include <stdio.h>

int main() {
    int n, matrix[10][10], isSymmetric = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter matrix: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }
    if (isSymmetric) {
        printf("Symmetric\n");
    } else {
        printf("Not symmetric\n");
    }
    return 0;
}