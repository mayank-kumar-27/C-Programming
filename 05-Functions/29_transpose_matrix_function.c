// Transpose matrix function
#include <stdio.h>

void transpose(int a[10][10], int t[10][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            t[j][i] = a[i][j];
        }
    }
}

int main() {
    int m, n, a[10][10], t[10][10];
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    transpose(a, t, m, n);
    printf("Transpose:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}