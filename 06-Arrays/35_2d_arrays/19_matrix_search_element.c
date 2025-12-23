// Matrix search element
#include <stdio.h>

int main() {
    int m, n, matrix[10][10], key, found = 0;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter key: ");
    scanf("%d", &key);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == key) {
                printf("Found at (%d, %d)\n", i, j);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("Not found\n");
    }
    return 0;
}