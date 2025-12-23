// Spiral pattern
#include <stdio.h>

int main() {
    int n, i, j, num = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n][n];
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (num <= n * n) {
        for (i = left; i <= right; i++) {
            arr[top][i] = num++;
        }
        top++;
        for (i = top; i <= bottom; i++) {
            arr[i][right] = num++;
        }
        right--;
        for (i = right; i >= left; i--) {
            arr[bottom][i] = num++;
        }
        bottom--;
        for (i = bottom; i >= top; i--) {
            arr[i][left] = num++;
        }
        left++;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}