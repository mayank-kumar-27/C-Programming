// Malloc integer
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter value: ");
    scanf("%d", p);
    printf("Value: %d\n", *p);
    free(p);
    return 0;
}