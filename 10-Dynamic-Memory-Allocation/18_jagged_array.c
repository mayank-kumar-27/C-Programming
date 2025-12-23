// Jagged array
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3;
    int cols[] = {2, 3, 4};
    int **jagged = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        jagged[i] = (int*)malloc(cols[i] * sizeof(int));
        for (int j = 0; j < cols[i]; j++) {
            jagged[i][j] = i * 10 + j;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols[i]; j++) {
            printf("%d ", jagged[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) {
        free(jagged[i]);
    }
    free(jagged);
    return 0;
}