// Matrix diagonal sum
#include <stdio.h>

int main() {
    int n, matrix[10][10], sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter matrix: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) sum += matrix[i][j];
        }
    }
    printf("Diagonal sum: %d\n", sum);
    return 0;
}