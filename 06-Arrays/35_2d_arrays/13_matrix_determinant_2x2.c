// Matrix determinant 2x2
#include <stdio.h>

int main() {
    int matrix[2][2], det;
    printf("Enter 2x2 matrix: ");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    printf("Determinant: %d\n", det);
    return 0;
}