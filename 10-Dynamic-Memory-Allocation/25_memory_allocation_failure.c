// Memory allocation failure
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(1000000000 * sizeof(int)); // large size
    if (p == NULL) {
        printf("Allocation failed\n");
    } else {
        printf("Allocated\n");
        free(p);
    }
    return 0;
}