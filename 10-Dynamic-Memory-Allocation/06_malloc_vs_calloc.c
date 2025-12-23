// Malloc vs calloc
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *m = (int*)malloc(5 * sizeof(int));
    int *c = (int*)calloc(5, sizeof(int));
    printf("Malloc: ");
    for (int i = 0; i < 5; i++) printf("%d ", m[i]);
    printf("\nCalloc: ");
    for (int i = 0; i < 5; i++) printf("%d ", c[i]);
    printf("\n");
    free(m);
    free(c);
    return 0;
}