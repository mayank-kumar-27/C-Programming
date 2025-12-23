// Storage class register
#include <stdio.h>

int main() {
    register int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}