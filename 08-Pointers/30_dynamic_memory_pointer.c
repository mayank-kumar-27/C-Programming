// Dynamic memory pointer
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int *p = (int*)malloc(n * sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}