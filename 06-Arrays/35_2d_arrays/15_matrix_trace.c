// Matrix trace
#include <stdio.h>

int main() {
    int n, matrix[10][10], trace = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter matrix: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) trace += matrix[i][j];
        }
    }
    printf("Trace: %d\n", trace);
    return 0;
}