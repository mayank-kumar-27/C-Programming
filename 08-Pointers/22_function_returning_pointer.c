// Function returning pointer
#include <stdio.h>

int* getMax(int *a, int *b) {
    return (*a > *b) ? a : b;
}

int main() {
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    int *max = getMax(&x, &y);
    printf("Max: %d\n", *max);
    return 0;
}